/*
 * XREFs of ?BroadcastRemoteInsert@BamoList_PenDevicePrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAJIPEAVBamoPenDevicePrincipal@@@Z @ 0x18018A660
 * Callers:
 *     ?InsertWorker@?$ListPrincipalSimpleCommon@VBamoList_PenDevicePrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_PenDevicePrincipal_Stub@2345@V?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@PEAVBamoPenDevicePrincipal@@@Bamo@Microsoft@@AEAAJPEAVBaseBamoConnection@23@IPEAVBamoPenDevicePrincipal@@@Z @ 0x18018B4C8 (-InsertWorker@-$ListPrincipalSimpleCommon@VBamoList_PenDevicePrincipal_Principal@ISMBamos_AutoBa.c)
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180041D00 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180043030 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?BroadcastRemoteInsert@BamoList_PenDevicePrincipal_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@QEAAJIPEAVBamoPenDevicePrincipal@@@Z @ 0x18018A6BC (-BroadcastRemoteInsert@BamoList_PenDevicePrincipal_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib.c)
 */

__int64 __fastcall Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_Principal::BroadcastRemoteInsert(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        unsigned int a2,
        struct BamoPenDevicePrincipal *a3)
{
  struct Microsoft::BamoImpl::ConnectionIndirector **v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  Microsoft::BamoImpl::BamoImplObject *v9; // [rsp+30h] [rbp+8h] BYREF

  v5 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(&v9, this[3]);
  LODWORD(v5) = Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_PrincipalImpl::BroadcastRemoteInsert(
                  (Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_PrincipalImpl *)(v5 + 1),
                  a2,
                  a3);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v9, v6, v7);
  return (unsigned int)v5;
}
