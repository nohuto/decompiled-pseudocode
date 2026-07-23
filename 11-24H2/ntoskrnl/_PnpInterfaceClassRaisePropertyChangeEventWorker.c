/*
 * XREFs of _PnpInterfaceClassRaisePropertyChangeEventWorker @ 0x14081CA78
 * Callers:
 *     _PnpObjectRaisePropertyChangeEvent @ 0x1408B6F54 (_PnpObjectRaisePropertyChangeEvent.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     _PnpNotifyDerivedKeys @ 0x140A0D3F0 (_PnpNotifyDerivedKeys.c)
 */

__int64 __fastcall PnpInterfaceClassRaisePropertyChangeEventWorker(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  int v6; // esi
  int v7; // ebp
  _QWORD v9[4]; // [rsp+40h] [rbp-28h] BYREF

  v6 = a2;
  v9[1] = a4;
  v7 = a1;
  v9[0] = a3;
  v9[2] = a5;
  guard_dispatch_icall_no_overrides(a1, a2);
  return PnpNotifyDerivedKeys(v7, v6, 4, a5, (__int64)&off_14000C450, 1, (__int64)v9, a6);
}
