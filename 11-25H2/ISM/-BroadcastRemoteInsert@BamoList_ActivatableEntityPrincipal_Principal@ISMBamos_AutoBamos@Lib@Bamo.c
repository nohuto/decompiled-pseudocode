/*
 * XREFs of ?BroadcastRemoteInsert@BamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAJIPEAVBamoActivatableEntityPrincipal@@@Z @ 0x180024FD0
 * Callers:
 *     ?InsertWorker@?$ListPrincipalSimpleCommon@VBamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_ActivatableEntityPrincipal_Stub@2345@V?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@PEAVBamoActivatableEntityPrincipal@@@Bamo@Microsoft@@AEAAJPEAVBaseBamoConnection@23@IPEAVBamoActivatableEntityPrincipal@@@Z @ 0x180024AA0 (-InsertWorker@-$ListPrincipalSimpleCommon@VBamoList_ActivatableEntityPrincipal_Principal@ISMBamo.c)
 * Callees:
 *     ??$EnumerateStubs@IPEAVBamoActivatableEntityPrincipal@@@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAJP6AJPEAVBamoStubImpl@12@IPEAVBamoActivatableEntityPrincipal@@@Z_NI1@Z @ 0x1800258FC (--$EnumerateStubs@IPEAVBamoActivatableEntityPrincipal@@@BamoPrincipalImpl@BamoImpl@Microsoft@@QE.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x180040254 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180045270 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800465A0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Principal::BroadcastRemoteInsert(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        unsigned int a2,
        struct BamoActivatableEntityPrincipal *a3)
{
  __int64 v6; // r8
  struct Microsoft::BamoImpl::ConnectionIndirector *v7; // rax
  unsigned int v8; // ebx
  int v10; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v12; // [rsp+40h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock((Microsoft::BamoImpl::InternalLock *)&v12, this[3]);
  v7 = this[3];
  if ( *(_QWORD *)(*((_QWORD *)v7 + 4) + 64LL) )
  {
    v8 = Microsoft::BamoImpl::BamoPrincipalImpl::EnumerateStubs<unsigned int,BamoActivatableEntityPrincipal *>(
           this + 1,
           Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_PrincipalImpl::CallRemoteInsertOnStub,
           v6,
           a2,
           a3);
  }
  else
  {
    v8 = -2018375660;
    Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
      *((Microsoft::BamoImpl::BaseBamoConnectionImpl **)v7 + 4),
      -2018375660,
      0);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA5E8,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL,
      v10);
  }
  Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)&v12);
  return v8;
}
