/*
 * XREFs of ?TryDisposeAndNotifyRemoteProxies@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAA_NXZ @ 0x180270188
 * Callers:
 *     ?ProxyDisposed@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBaseBamoPeerImpl@23@I@Z @ 0x18026F5C0 (-ProxyDisposed@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBaseBamoPeerImpl@23@I@Z.c)
 *     ?Release@BamoPrincipalImpl@BamoImpl@Microsoft@@UEAAKXZ @ 0x180270E40 (-Release@BamoPrincipalImpl@BamoImpl@Microsoft@@UEAAKXZ.c)
 * Callees:
 *     ?Dispose@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAXXZ @ 0x18026E520 (-Dispose@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAXXZ.c)
 *     ?SendDisposeProxy@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAXPEAVBamoStubImpl@23@_N@Z @ 0x18026F8D8 (-SendDisposeProxy@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAXPEAVBamoStubImpl@23@_N@Z.c)
 */

bool __fastcall Microsoft::BamoImpl::BamoPrincipalImpl::TryDisposeAndNotifyRemoteProxies(
        Microsoft::BamoImpl::BamoPrincipalImpl *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // rbx
  int v5; // edi

  v4 = *((_QWORD *)this + 4);
  v5 = 0;
  if ( !v4 )
  {
LABEL_9:
    Microsoft::BamoImpl::BamoPrincipalImpl::Dispose(this, a2, a3, a4);
    return v5 == 0;
  }
  do
  {
    if ( *(_BYTE *)(v4 + 56) )
    {
      if ( *(_BYTE *)(*(_QWORD *)(v4 + 32) + 48LL) )
        goto LABEL_7;
      Microsoft::BamoImpl::BamoPrincipalImpl::SendDisposeProxy(this, (struct Microsoft::BamoImpl::BamoStubImpl *)v4, 1);
    }
    else if ( !*(_BYTE *)(v4 + 58) )
    {
      goto LABEL_7;
    }
    ++v5;
LABEL_7:
    v4 = *(_QWORD *)(v4 + 40);
  }
  while ( v4 );
  if ( !v5 )
    goto LABEL_9;
  return v5 == 0;
}
