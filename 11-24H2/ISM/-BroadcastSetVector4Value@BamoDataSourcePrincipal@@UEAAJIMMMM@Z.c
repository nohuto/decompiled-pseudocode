/*
 * XREFs of ?BroadcastSetVector4Value@BamoDataSourcePrincipal@@UEAAJIMMMM@Z @ 0x180101E30
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180041D00 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180043030 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?BroadcastSetVector4Value@BamoDataSourcePrincipalImpl@BamoImpl@@QEAAJIMMMM@Z @ 0x180101EB8 (-BroadcastSetVector4Value@BamoDataSourcePrincipalImpl@BamoImpl@@QEAAJIMMMM@Z.c)
 */

__int64 __fastcall BamoDataSourcePrincipal::BroadcastSetVector4Value(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        unsigned int a2,
        float a3,
        float a4,
        float a5,
        float a6)
{
  struct Microsoft::BamoImpl::ConnectionIndirector **v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  Microsoft::BamoImpl::BamoImplObject *v11; // [rsp+60h] [rbp+8h] BYREF

  v7 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(&v11, this[3]);
  LODWORD(v7) = BamoImpl::BamoDataSourcePrincipalImpl::BroadcastSetVector4Value(
                  (BamoImpl::BamoDataSourcePrincipalImpl *)(v7 + 1),
                  a2,
                  a3,
                  a4,
                  a5,
                  a6);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v11, v8, v9);
  return (unsigned int)v7;
}
