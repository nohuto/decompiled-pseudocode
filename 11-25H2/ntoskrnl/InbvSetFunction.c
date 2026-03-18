/*
 * XREFs of InbvSetFunction @ 0x14058BD70
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14058C5E0 (BgkNotifyDisplayOwnershipChange.c)
 *     InbvDriverInitialize @ 0x140C09150 (InbvDriverInitialize.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall InbvSetFunction(int a1)
{
  __int64 result; // rax
  __int64 (__fastcall **v3)(); // rcx

  result = (unsigned int)dword_140E65AE0;
  if ( (unsigned int)(dword_140E65AE0 - 3) <= 1 )
  {
    if ( qword_140E65AE8 && *(_QWORD *)(qword_140E65AE8 + 136) )
      guard_dispatch_icall_no_overrides(0LL);
    v3 = off_140E00CF0;
    result = 4 - (unsigned int)(a1 != 4);
    dword_140E65AE0 = 4 - (a1 != 4);
    if ( a1 != 4 )
      v3 = off_140E00DB0;
    qword_140E65AE8 = (__int64)v3;
  }
  return result;
}
