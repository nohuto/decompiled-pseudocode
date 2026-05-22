/*
 * XREFs of ?BroadcastRemoteInsert@BamoList_SimpleHapticsControllerFeedback_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAJIAEBUSimpleHapticsControllerFeedback@@@Z @ 0x1801850A0
 * Callers:
 *     ?InsertWorker@?$ListPrincipalSimpleCommon@VBamoList_SimpleHapticsControllerFeedback_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_SimpleHapticsControllerFeedback_Stub@2345@USimpleHapticsControllerFeedback@@AEBU8@@Bamo@Microsoft@@AEAAJPEAVBaseBamoConnection@23@IAEBUSimpleHapticsControllerFeedback@@@Z @ 0x1801858B8 (-InsertWorker@-$ListPrincipalSimpleCommon@VBamoList_SimpleHapticsControllerFeedback_Principal@IS.c)
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180041D00 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180043030 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?BroadcastRemoteInsert@BamoList_SimpleHapticsControllerFeedback_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@QEAAJIAEBUSimpleHapticsControllerFeedback@@@Z @ 0x1801850FC (-BroadcastRemoteInsert@BamoList_SimpleHapticsControllerFeedback_PrincipalImpl@ISMBamos_AutoBamos.c)
 */

__int64 __fastcall Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerFeedback_Principal::BroadcastRemoteInsert(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        unsigned int a2,
        const struct SimpleHapticsControllerFeedback *a3)
{
  struct Microsoft::BamoImpl::ConnectionIndirector **v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  Microsoft::BamoImpl::BamoImplObject *v9; // [rsp+30h] [rbp+8h] BYREF

  v5 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(&v9, this[3]);
  LODWORD(v5) = Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerFeedback_PrincipalImpl::BroadcastRemoteInsert(
                  (Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerFeedback_PrincipalImpl *)(v5 + 1),
                  a2,
                  a3);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v9, v6, v7);
  return (unsigned int)v5;
}
