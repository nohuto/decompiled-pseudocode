/*
 * XREFs of _PnpUpdateInterfacesCallback @ 0x14081CB60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     _PnpNotifyDerivedKeys @ 0x140A0D3F0 (_PnpNotifyDerivedKeys.c)
 */

char __fastcall PnpUpdateInterfacesCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  bool v4; // zf
  int v6; // edi
  int v7; // esi
  __int64 v8; // r9
  __int64 v10; // [rsp+20h] [rbp-48h]
  int v11; // [rsp+28h] [rbp-40h]
  __int64 v12; // [rsp+38h] [rbp-30h]
  _OWORD v13[2]; // [rsp+40h] [rbp-28h] BYREF

  v4 = *(_BYTE *)(a4 + 28) == 0;
  *(_OWORD *)((char *)v13 + 8) = 0LL;
  v6 = a2;
  v7 = a1;
  if ( !v4 )
  {
    *(_QWORD *)&v13[0] = 0LL;
    guard_dispatch_icall_no_overrides(a1, a2);
  }
  v8 = *(_QWORD *)(a4 + 8);
  if ( v8 )
  {
    v12 = *(_QWORD *)a4;
    v11 = *(_DWORD *)(a4 + 24);
    v10 = *(_QWORD *)(a4 + 16);
    v13[0] = 0LL;
    PnpNotifyDerivedKeys(v7, v6, 3, v8, v10, v11, (__int64)v13, v12);
  }
  return 0;
}
