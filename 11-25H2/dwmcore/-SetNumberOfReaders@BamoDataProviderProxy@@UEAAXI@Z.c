/*
 * XREFs of ?SetNumberOfReaders@BamoDataProviderProxy@@UEAAXI@Z @ 0x18027E0E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1801CF9C4 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x1801D0CA4 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?UpdateNumberOfReadersRemoteCache@BamoDataProviderProxyImpl@BamoImpl@@AEAAXXZ @ 0x18027E134 (-UpdateNumberOfReadersRemoteCache@BamoDataProviderProxyImpl@BamoImpl@@AEAAXXZ.c)
 */

void __fastcall BamoDataProviderProxy::SetNumberOfReaders(BamoDataProviderProxy *this, int a2)
{
  __int64 v4; // rax
  char v5; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(
    (Microsoft::BamoImpl::InternalLock *)&v5,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  v4 = *((_QWORD *)this + 3);
  *((_DWORD *)this + 12) = a2;
  if ( !*(_DWORD *)(v4 + 44) )
    BamoImpl::BamoDataProviderProxyImpl::UpdateNumberOfReadersRemoteCache((BamoDataProviderProxy *)((char *)this + 8));
  Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)&v5);
}
