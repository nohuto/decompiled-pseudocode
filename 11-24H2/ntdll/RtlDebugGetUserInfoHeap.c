/*
 * XREFs of RtlDebugGetUserInfoHeap @ 0x1800426EC
 * Callers:
 *     RtlGetUserInfoHeap @ 0x1800423E0 (RtlGetUserInfoHeap.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800148F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x18003F9F0 (RtlpCheckHeapSignature.c)
 *     RtlpValidateHeapEntry @ 0x18003FAA0 (RtlpValidateHeapEntry.c)
 *     RtlpValidateHeap @ 0x180040D80 (RtlpValidateHeap.c)
 *     RtlGetUserInfoHeap @ 0x1800423E0 (RtlGetUserInfoHeap.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x18009F9E0 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlpHeapExceptionFilter @ 0x18010A4D0 (RtlpHeapExceptionFilter.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall RtlDebugGetUserInfoHeap(unsigned __int64 a1, int a2, __int64 a3, _QWORD *a4, _DWORD *a5)
{
  char UserInfoHeap; // di
  char v10; // r14
  unsigned int v11; // esi
  unsigned __int64 v12; // rdx

  UserInfoHeap = 0;
  v10 = 0;
  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    return ((__int64 (__fastcall *)(unsigned __int64))qword_1801CC5F8)(a1);
  if ( RtlpCheckHeapSignature((_DWORD *)a1, "RtlGetUserInfoHeap") )
  {
    v11 = *(_DWORD *)(a1 + 116) | 0x10000000 | a2;
    if ( (v11 & 1) == 0 )
    {
      RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
      v10 = 1;
      v11 |= 1u;
    }
    RtlpValidateHeap(a1, 0);
    v12 = a3 - 16;
    _m_prefetchw((const void *)(a3 - 16));
    if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
      v12 -= 16LL * *(unsigned __int8 *)(v12 + 14);
    if ( RtlpValidateHeapEntry(a1, v12, "RtlGetUserInfoHeap") )
      UserInfoHeap = RtlGetUserInfoHeap(a1, v11, a3, a4, a5);
  }
  else
  {
    UserInfoHeap = 0;
  }
  if ( v10 )
    RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
  return UserInfoHeap;
}
