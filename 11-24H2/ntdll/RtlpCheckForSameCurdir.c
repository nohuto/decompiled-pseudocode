/*
 * XREFs of RtlpCheckForSameCurdir @ 0x180078040
 * Callers:
 *     RtlSetCurrentDirectory_U @ 0x1800FAB90 (RtlSetCurrentDirectory_U.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlpReferenceCurrentDirectory @ 0x180078310 (RtlpReferenceCurrentDirectory.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     memcmp @ 0x1801676D0 (memcmp.c)
 */

bool __fastcall RtlpCheckForSameCurdir(const void **a1, __int64 a2)
{
  bool v3; // di
  __int64 v4; // rax
  unsigned __int64 v5; // rbx
  _UNICODE_STRING DosPath; // xmm0
  unsigned __int16 v7; // cx
  int v8; // edx

  v3 = 0;
  v4 = RtlpReferenceCurrentDirectory(0LL, a2);
  v5 = v4;
  if ( v4 )
    DosPath = *(_UNICODE_STRING *)(v4 + 24);
  else
    DosPath = NtCurrentPeb()->ProcessParameters->CurrentDirectory.DosPath;
  v7 = _mm_cvtsi128_si32((__m128i)DosPath);
  if ( v7 > 6u )
  {
    v8 = *(unsigned __int16 *)a1;
    if ( v7 - 2 != v8 )
      goto LABEL_8;
    v7 -= 2;
  }
  else
  {
    if ( v7 != *(_WORD *)a1 )
      goto LABEL_8;
    v8 = *(unsigned __int16 *)a1;
  }
  if ( v7 == v8 )
    v3 = memcmp(DosPath.Buffer, a1[1], v7) == 0;
LABEL_8:
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v5, 0xFFFFFFFF) == 1 )
    {
      NtClose(*(HANDLE *)(v5 + 8));
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v5);
    }
  }
  else
  {
    RtlLeaveCriticalSection((__int64)&FastPebLock);
  }
  return v3;
}
