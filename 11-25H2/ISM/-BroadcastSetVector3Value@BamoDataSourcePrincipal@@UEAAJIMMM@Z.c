/*
 * XREFs of ?BroadcastSetVector3Value@BamoDataSourcePrincipal@@UEAAJIMMM@Z @ 0x180100040
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180045270 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800465A0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?BroadcastSetVector3Value@BamoDataSourcePrincipalImpl@BamoImpl@@QEAAJIMMM@Z @ 0x1801000B8 (-BroadcastSetVector3Value@BamoDataSourcePrincipalImpl@BamoImpl@@QEAAJIMMM@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoDataSourcePrincipal::BroadcastSetVector3Value(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        unsigned int a2,
        float a3,
        float a4,
        float a5)
{
  struct Microsoft::BamoImpl::ConnectionIndirector **v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  Microsoft::BamoImpl::BamoImplObject *v10; // [rsp+60h] [rbp+8h] BYREF

  v6 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(&v10, this[3]);
  LODWORD(v6) = BamoImpl::BamoDataSourcePrincipalImpl::BroadcastSetVector3Value(
                  (BamoImpl::BamoDataSourcePrincipalImpl *)(v6 + 1),
                  a2,
                  a3,
                  a4,
                  a5);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v10, v7, v8);
  return (unsigned int)v6;
}
