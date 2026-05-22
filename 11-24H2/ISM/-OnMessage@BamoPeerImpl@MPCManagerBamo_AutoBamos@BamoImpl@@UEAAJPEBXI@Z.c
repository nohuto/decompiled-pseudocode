/*
 * XREFs of ?OnMessage@BamoPeerImpl@MPCManagerBamo_AutoBamos@BamoImpl@@UEAAJPEBXI@Z @ 0x1800B7A80
 * Callers:
 *     <none>
 * Callees:
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18003CCE4 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall BamoImpl::MPCManagerBamo_AutoBamos::BamoPeerImpl::OnMessage(
        BamoImpl::MPCManagerBamo_AutoBamos::BamoPeerImpl *this,
        const void *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v6; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v6 = (int)this;
  v3 = CoreUICallReceive(
         *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 32LL) + 80LL),
         &IBamoPeer_MPCManagerBamo_AutoBamos_Receive<BamoImpl::MPCManagerBamo_AutoBamos::BamoPeerImpl>::Type,
         &Microsoft::CoreUI::MessageCall::MPCManagerBamo_g_parameters_gc15dAH_HRGm2aFEmVnIJumkvZI_BamoGroup$3abff530,
         18LL);
  v4 = v3;
  if ( v3 == -2018375668 )
  {
    Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
      *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*((_QWORD *)this + 3) + 32LL),
      0x87B2080C,
      0);
  }
  else if ( v3 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xDBD,
      (int)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCManagerB"
           "amo.Common.bamo.h",
      (const char *)(unsigned int)v3,
      v6);
  }
  return v4;
}
