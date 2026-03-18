/*
 * XREFs of ?GetNumberOfReaders@BamoDataProviderProxy@@UEAAIXZ @ 0x18027D540
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1801CF9C4 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x1801D0CA4 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 */

__int64 __fastcall BamoDataProviderProxy::GetNumberOfReaders(BamoDataProviderProxy *this)
{
  BamoDataProviderProxy *v1; // rbx
  char v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    (Microsoft::BamoImpl::InternalLock *)&v3,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v1) = *((_DWORD *)v1 + 12);
  Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)&v3);
  return (unsigned int)v1;
}
