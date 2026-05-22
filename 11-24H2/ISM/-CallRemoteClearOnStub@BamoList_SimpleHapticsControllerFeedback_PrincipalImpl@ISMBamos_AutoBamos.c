/*
 * XREFs of ?CallRemoteClearOnStub@BamoList_SimpleHapticsControllerFeedback_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@CAJPEAVBamoStubImpl@36@@Z @ 0x1801853D8
 * Callers:
 *     ?BroadcastRemoteClear@BamoList_SimpleHapticsControllerFeedback_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@QEAAJXZ @ 0x180184FFC (-BroadcastRemoteClear@BamoList_SimpleHapticsControllerFeedback_PrincipalImpl@ISMBamos_AutoBamos@.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoteClear@BamoList_SimpleHapticsControllerFeedback_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@QEAAJXZ @ 0x1801864E0 (-RemoteClear@BamoList_SimpleHapticsControllerFeedback_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib@B.c)
 */

__int64 __fastcall Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerFeedback_PrincipalImpl::CallRemoteClearOnStub(
        struct Microsoft::BamoImpl::BamoStubImpl *a1)
{
  unsigned int v1; // eax
  int v3; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*(_DWORD *)(*((_QWORD *)a1 + 4) + 44LL) )
  {
    v1 = Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerFeedback_StubImpl::RemoteClear(a1);
    if ( (int)(v1 + 0x80000000) >= 0 && v1 != -2018375675 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xC1B2,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)v1,
        v3);
  }
  return 0LL;
}
