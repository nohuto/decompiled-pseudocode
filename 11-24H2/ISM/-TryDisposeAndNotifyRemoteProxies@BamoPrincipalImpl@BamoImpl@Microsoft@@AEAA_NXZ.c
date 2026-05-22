/*
 * XREFs of ?TryDisposeAndNotifyRemoteProxies@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAA_NXZ @ 0x180043DDC
 * Callers:
 *     ?ProxyDisposed@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBaseBamoPeerImpl@23@I@Z @ 0x180043AA8 (-ProxyDisposed@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBaseBamoPeerImpl@23@I@Z.c)
 *     ?Release@BamoPrincipalImpl@BamoImpl@Microsoft@@UEAAKXZ @ 0x180043C40 (-Release@BamoPrincipalImpl@BamoImpl@Microsoft@@UEAAKXZ.c)
 * Callees:
 *     ?Dispose@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAXXZ @ 0x1800431B8 (-Dispose@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAXXZ.c)
 *     ?GetItemId@BamoPrincipalImpl@BamoImpl@Microsoft@@QEBAIXZ @ 0x180044CA8 (-GetItemId@BamoPrincipalImpl@BamoImpl@Microsoft@@QEBAIXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall Microsoft::BamoImpl::BamoPrincipalImpl::TryDisposeAndNotifyRemoteProxies(
        Microsoft::BamoImpl::BamoPrincipalImpl *this)
{
  __int64 v1; // rdi
  int v2; // esi
  _BYTE *v5; // r14
  void (__fastcall *v6)(_BYTE *, _QWORD, __int64); // rbx
  unsigned int ItemId; // eax
  __int64 v8; // r8

  v1 = *((_QWORD *)this + 4);
  v2 = 0;
  if ( !v1 )
    goto LABEL_10;
  do
  {
    if ( !*(_BYTE *)(v1 + 56) )
    {
      if ( !*(_BYTE *)(v1 + 58) )
        goto LABEL_5;
      goto LABEL_4;
    }
    v5 = *(_BYTE **)(v1 + 32);
    if ( !v5[48] )
    {
      v6 = *(void (__fastcall **)(_BYTE *, _QWORD, __int64))(*(_QWORD *)v5 + 80LL);
      ItemId = Microsoft::BamoImpl::BamoPrincipalImpl::GetItemId(*(Microsoft::BamoImpl::BamoPrincipalImpl **)(v1 + 24));
      LOBYTE(v8) = 1;
      v6(v5, ItemId, v8);
      *(_BYTE *)(v1 + 58) = 1;
      *(_BYTE *)(v1 + 56) = 0;
LABEL_4:
      ++v2;
    }
LABEL_5:
    v1 = *(_QWORD *)(v1 + 40);
  }
  while ( v1 );
  if ( !v2 )
LABEL_10:
    Microsoft::BamoImpl::BamoPrincipalImpl::Dispose(this);
  return v2 == 0;
}
