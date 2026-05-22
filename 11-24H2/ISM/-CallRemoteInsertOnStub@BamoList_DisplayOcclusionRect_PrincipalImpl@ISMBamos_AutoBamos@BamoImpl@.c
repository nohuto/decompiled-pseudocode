/*
 * XREFs of ?CallRemoteInsertOnStub@BamoList_DisplayOcclusionRect_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@CAJPEAVBamoStubImpl@36@IAEBUDisplayOcclusionRect@@@Z @ 0x18013CEF8
 * Callers:
 *     ?BroadcastRemoteInsert@BamoList_DisplayOcclusionRect_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@QEAAJIAEBUDisplayOcclusionRect@@@Z @ 0x18013C83C (-BroadcastRemoteInsert@BamoList_DisplayOcclusionRect_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@L.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoteInsert@BamoList_DisplayOcclusionRect_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@QEAAJIAEBUDisplayOcclusionRect@@@Z @ 0x18013F330 (-RemoteInsert@BamoList_DisplayOcclusionRect_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Micros.c)
 */

__int64 __fastcall Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_PrincipalImpl::CallRemoteInsertOnStub(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        unsigned int a2,
        const struct DisplayOcclusionRect *a3)
{
  unsigned int v3; // eax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*(_DWORD *)(*((_QWORD *)a1 + 4) + 44LL) )
  {
    v3 = Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_StubImpl::RemoteInsert(
           a1,
           a2,
           a3);
    if ( (int)(v3 + 0x80000000) >= 0 && v3 != -2018375675 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xB869,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)v3,
        v5);
  }
  return 0LL;
}
