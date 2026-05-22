/*
 * XREFs of ?OnMessage@BamoDataProviderPrincipalImpl@BamoImpl@@UEAAJPEBXI@Z @ 0x18008F6C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall BamoImpl::BamoDataProviderPrincipalImpl::OnMessage(
        BamoImpl::BamoDataProviderPrincipalImpl *this,
        const void *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v5; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5 = (int)this;
  v2 = CoreUICallReceive(
         *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 80LL),
         &IDataProviderPrincipal_Receive<BamoImpl::BamoDataProviderPrincipalImpl>::Type,
         &Microsoft::CoreUI::MessageCall::dataprovider_g_parameters_N9qnfjsF_duJu06w7x6f60H_t8I_BamoGroup$c84e9d1a,
         64LL);
  v3 = v2;
  if ( v2 == -2018375668 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x285B,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)0x87B2080CLL,
      v5);
  }
  else if ( v2 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2858,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v2,
      v5);
  }
  return v3;
}
