/*
 * XREFs of RtlpHpFixedVsAllocate @ 0x14026C140
 * Callers:
 *     <none>
 * Callees:
 *     RtlFindClearRunsEx @ 0x14026B664 (RtlFindClearRunsEx.c)
 *     RtlFindClearBitsAndSetEx @ 0x14026DCA0 (RtlFindClearBitsAndSetEx.c)
 *     RtlpHpAcquireLockExclusive @ 0x140336AF0 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpReleaseLockExclusive @ 0x140360D90 (RtlpHpReleaseLockExclusive.c)
 */

__int64 __fastcall RtlpHpFixedVsAllocate(__int64 a1, unsigned int a2, _DWORD *a3, _DWORD *a4)
{
  unsigned __int64 v6; // rdi
  __int64 v8; // rax
  __int64 ClearBitsAndSet; // rax
  __int64 v10; // rdi
  int v12; // eax
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF
  char v14; // [rsp+50h] [rbp+8h] BYREF
  int v15; // [rsp+54h] [rbp+Ch]

  v6 = a2;
  if ( (*(_DWORD *)(a1 + 20) & 0x8000000) == 0 )
    RtlpHpAcquireLockExclusive(a1 + 24, *(unsigned __int8 *)(a1 + 32));
  v8 = a1 ^ *(_QWORD *)(a1 + 56);
  v13[0] = *(_QWORD *)(a1 + 48);
  v13[1] = v8;
  ClearBitsAndSet = RtlFindClearBitsAndSetEx(v13, v6 >> 12, 0LL);
  if ( ClearBitsAndSet == -1 )
  {
    if ( (unsigned int)RtlFindClearRunsEx(v13, (__int64)&v14) == 1 )
      v12 = v15;
    else
      v12 = 0;
    *a4 = v12 << 12;
    v10 = 0LL;
  }
  else
  {
    *a4 = 0;
    v10 = a1 + (ClearBitsAndSet << 12);
    *a3 = 0;
  }
  if ( (*(_DWORD *)(a1 + 20) & 0x8000000) == 0 )
    RtlpHpReleaseLockExclusive(a1 + 24);
  return v10;
}
