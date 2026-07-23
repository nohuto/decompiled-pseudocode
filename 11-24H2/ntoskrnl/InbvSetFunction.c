/*
 * XREFs of InbvSetFunction @ 0x14058C570
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14058CDE0 (BgkNotifyDisplayOwnershipChange.c)
 *     InbvDriverInitialize @ 0x140C1C230 (InbvDriverInitialize.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall InbvSetFunction(int a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 (__fastcall **v4)(); // rcx

  result = (unsigned int)dword_140E65E68;
  v3 = (unsigned int)(dword_140E65E68 - 3);
  if ( (unsigned int)v3 <= 1 )
  {
    if ( qword_140E65E70 && *(_QWORD *)(qword_140E65E70 + 136) )
      guard_dispatch_icall_no_overrides(0LL, v3);
    v4 = off_140E00CF0;
    result = 4 - (unsigned int)(a1 != 4);
    dword_140E65E68 = 4 - (a1 != 4);
    if ( a1 != 4 )
      v4 = off_140E00DB0;
    qword_140E65E70 = (__int64)v4;
  }
  return result;
}
