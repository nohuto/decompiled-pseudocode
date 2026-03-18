/*
 * XREFs of ?BroadcastOnRegisterError@BamoDataProviderRegistrarPrincipal@@UEAAJI@Z @ 0x18027AC00
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1801CF9C4 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x1801D0CA4 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?BroadcastOnRegisterError@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@QEAAJI@Z @ 0x18027AC48 (-BroadcastOnRegisterError@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@QEAAJI@Z.c)
 */

__int64 __fastcall BamoDataProviderRegistrarPrincipal::BroadcastOnRegisterError(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        unsigned int a2)
{
  struct Microsoft::BamoImpl::ConnectionIndirector **v3; // rbx
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v3 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock((Microsoft::BamoImpl::InternalLock *)&v5, this[3]);
  LODWORD(v3) = BamoImpl::BamoDataProviderRegistrarPrincipalImpl::BroadcastOnRegisterError(
                  (BamoImpl::BamoDataProviderRegistrarPrincipalImpl *)(v3 + 1),
                  a2);
  Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)&v5);
  return (unsigned int)v3;
}
