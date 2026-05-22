/*
 * XREFs of ?CallRemoteRemoveOnStub@BamoList_DisplayOcclusionRect_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@CAJPEAVBamoStubImpl@36@I@Z @ 0x18013ADC8
 * Callers:
 *     ?BroadcastRemoteRemove@BamoList_DisplayOcclusionRect_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@QEAAJI@Z @ 0x18013A89C (-BroadcastRemoteRemove@BamoList_DisplayOcclusionRect_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@L.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoteRemove@BamoList_DisplayOcclusionRect_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@QEAAJI@Z @ 0x18013D510 (-RemoteRemove@BamoList_DisplayOcclusionRect_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Micros.c)
 */

__int64 __fastcall Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_PrincipalImpl::CallRemoteRemoveOnStub(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        unsigned int a2)
{
  unsigned int v2; // eax
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*(_DWORD *)(*((_QWORD *)a1 + 4) + 44LL) )
  {
    v2 = Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_StubImpl::RemoteRemove(
           a1,
           a2);
    if ( (int)(v2 + 0x80000000) >= 0 && v2 != -2018375675 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xABB0,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)v2,
        v4);
  }
  return 0LL;
}
