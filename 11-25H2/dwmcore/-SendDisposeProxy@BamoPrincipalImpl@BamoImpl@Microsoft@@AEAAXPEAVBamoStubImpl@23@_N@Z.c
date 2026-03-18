/*
 * XREFs of ?SendDisposeProxy@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAXPEAVBamoStubImpl@23@_N@Z @ 0x180279FE8
 * Callers:
 *     ?AckProxyReference@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBaseBamoPeerImpl@23@I_N@Z @ 0x1802301B0 (-AckProxyReference@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBaseBamoPeerImpl@23@I_N@Z.c)
 *     ?RequestDisposeProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBaseBamoPeerImpl@23@I@Z @ 0x180279EA0 (-RequestDisposeProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBaseBamoPeerImpl@23@I@Z.c)
 *     ?TryDisposeAndNotifyRemoteProxies@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAA_NXZ @ 0x18027A898 (-TryDisposeAndNotifyRemoteProxies@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAA_NXZ.c)
 * Callees:
 *     ?GetItemId@BamoPrincipalImpl@BamoImpl@Microsoft@@QEBAIXZ @ 0x180279034 (-GetItemId@BamoPrincipalImpl@BamoImpl@Microsoft@@QEBAIXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall Microsoft::BamoImpl::BamoPrincipalImpl::SendDisposeProxy(
        Microsoft::BamoImpl::BamoPrincipalImpl *this,
        struct Microsoft::BamoImpl::BamoStubImpl *a2,
        char a3)
{
  __int64 v3; // rdi
  void (__fastcall *v6)(__int64, _QWORD, __int64); // rbx
  unsigned int ItemId; // eax
  __int64 v8; // r8

  v3 = *((_QWORD *)a2 + 4);
  v6 = *(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v3 + 80LL);
  ItemId = Microsoft::BamoImpl::BamoPrincipalImpl::GetItemId(*((Microsoft::BamoImpl::BamoPrincipalImpl **)a2 + 3));
  LOBYTE(v8) = a3;
  v6(v3, ItemId, v8);
  if ( a3 )
    *((_BYTE *)a2 + 58) = 1;
  *((_BYTE *)a2 + 56) = 0;
  if ( !a3 )
    (*(void (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)a2 + 56LL))(a2);
}
