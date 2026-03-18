/*
 * XREFs of ?IterateHwReservedRangesCallback@@YAJ_K0PEAX@Z @ 0x140095960
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE@@_KEPEA_KPEAPEAUVIDMM_MAPPED_VA_RANGE@@E@Z @ 0x1400B550C (-ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESE.c)
 */

__int64 __fastcall IterateHwReservedRangesCallback(
        unsigned __int64 a1,
        unsigned __int64 a2,
        CVirtualAddressAllocator **a3)
{
  int v6; // eax
  __int64 v7; // rcx
  unsigned __int64 v9; // [rsp+80h] [rbp+18h] BYREF

  v9 = 0LL;
  if ( *((int *)a3 + 2) >= 0 )
  {
    v6 = CVirtualAddressAllocator::ReserveVirtualAddressRange(
           *a3,
           a2,
           a1,
           0LL,
           0LL,
           0x1000u,
           D3DDDIGPUVIRTUALADDRESS_RESERVE_NO_COMMIT,
           0LL,
           1,
           &v9,
           0LL,
           0);
    *((_DWORD *)a3 + 2) = v6;
    if ( v6 < 0 )
    {
      WdLogSingleEntry2(1LL, a1, a2);
      WdLogGlobalForLineNumber = 1303;
      DxgkLogInternalTriageEvent(v7, 0x40000LL);
    }
  }
  return *((unsigned int *)a3 + 2);
}
