/*
 * XREFs of InbvSetFunction @ 0x14058F550
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14058FDC0 (BgkNotifyDisplayOwnershipChange.c)
 *     InbvDriverInitialize @ 0x140C1A1F0 (InbvDriverInitialize.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall InbvSetFunction(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 (__fastcall **v7)(); // rcx

  result = (unsigned int)dword_140E65D38;
  v6 = (unsigned int)(dword_140E65D38 - 3);
  if ( (unsigned int)v6 <= 1 )
  {
    if ( qword_140E65D40 && *(_QWORD *)(qword_140E65D40 + 136) )
      guard_dispatch_icall_no_overrides(0LL, v6, a3, a4);
    v7 = off_140E00CF0;
    result = 4 - (unsigned int)(a1 != 4);
    dword_140E65D38 = 4 - (a1 != 4);
    if ( a1 != 4 )
      v7 = off_140E00DB0;
    qword_140E65D40 = (__int64)v7;
  }
  return result;
}
