/*
 * XREFs of ??0EdgyControllerServer@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x180155570
 * Callers:
 *     ??0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18000D7E8 (--0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 * Callees:
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x18000E01C (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 *     ?Get@EdgyConnection@@SAPEAV1@XZ @ 0x1800827F0 (-Get@EdgyConnection@@SAPEAV1@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

EdgyControllerServer *__fastcall EdgyControllerServer::EdgyControllerServer(
        EdgyControllerServer *this,
        struct ISMBamos_AutoBamos::BamoConnection *a2)
{
  struct EdgyConnection *v3; // rax
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)this = &BamoEdgyControllerServerPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &EdgyControllerServer::`vftable'{for `IEdgyControllerServerPrincipal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((EdgyControllerServer *)((char *)this + 16), a2);
  *((_QWORD *)this + 2) = &BamoImpl::BamoEdgyControllerServerPrincipalImpl::`vftable';
  *(_QWORD *)this = &EdgyControllerServer::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &EdgyControllerServer::`vftable'{for `IEdgyControllerServerPrincipal'};
  v3 = EdgyConnection::Get();
  *((_QWORD *)this + 7) = v3;
  if ( !v3 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x15,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\server\\edgycontrollerserver.cpp",
      v4);
  return this;
}
