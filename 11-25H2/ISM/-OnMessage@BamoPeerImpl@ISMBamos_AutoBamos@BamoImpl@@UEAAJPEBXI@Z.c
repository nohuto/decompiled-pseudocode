/*
 * XREFs of ?OnMessage@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@UEAAJPEBXI@Z @ 0x18003FD10
 * Callers:
 *     <none>
 * Callees:
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x180040254 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl::OnMessage(
        BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl *this,
        const void *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v6; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v6 = (int)this;
  v3 = CoreUICallReceive(
         *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 32LL) + 80LL),
         &IBamoPeer_ISMBamos_AutoBamos_Receive<BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl>::Type,
         &Microsoft::CoreUI::MessageCall::ISMBamos_g_parameters_sfSWchWQ2wB0kDqja$1PW4lxWHE_BamoGroup$2bd08a48,
         12LL);
  v4 = v3;
  if ( v3 == -2018375668 )
  {
    Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*((_QWORD *)this + 3) + 32LL),
      -2018375668,
      0);
  }
  else if ( v3 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1838,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.Common.bamo.h",
      (const char *)(unsigned int)v3,
      v6);
  }
  return v4;
}
