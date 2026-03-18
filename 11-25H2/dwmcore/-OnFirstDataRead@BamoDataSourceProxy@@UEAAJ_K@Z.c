/*
 * XREFs of ?OnFirstDataRead@BamoDataSourceProxy@@UEAAJ_K@Z @ 0x18027C520
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1801CF9C4 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x1801D0CA4 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?OnFirstDataRead@BamoDataSourceProxyImpl@BamoImpl@@QEAAJ_K@Z @ 0x18027C570 (-OnFirstDataRead@BamoDataSourceProxyImpl@BamoImpl@@QEAAJ_K@Z.c)
 */

__int64 __fastcall BamoDataSourceProxy::OnFirstDataRead(BamoDataSourceProxy *this, unsigned __int64 a2)
{
  BamoDataSourceProxy *v3; // rbx
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v3 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    (Microsoft::BamoImpl::InternalLock *)&v5,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v3) = BamoImpl::BamoDataSourceProxyImpl::OnFirstDataRead((BamoDataSourceProxy *)((char *)v3 + 8), a2);
  Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)&v5);
  return (unsigned int)v3;
}
