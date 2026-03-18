/*
 * XREFs of ?SendDisposeProxy@BamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@UEAAXI_N@Z @ 0x180279F60
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180248848 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall BamoImpl::dataprovider_AutoBamos::BamoPeerImpl::SendDisposeProxy(
        BamoImpl::dataprovider_AutoBamos::BamoPeerImpl *this,
        int a2,
        unsigned __int8 a3)
{
  __int64 v3; // r9
  __int64 v4; // r10
  int v5; // eax
  int v6; // [rsp+20h] [rbp-38h]
  __int64 v7; // [rsp+38h] [rbp-20h]
  _QWORD v8[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v3 = *(_QWORD *)(*((_QWORD *)this + 3) + 32LL);
  v8[0] = *((unsigned int *)this + 9);
  v4 = *(_QWORD *)(v3 + 72);
  v8[1] = *((unsigned int *)this + 10);
  LODWORD(v7) = a3;
  v5 = CoreUICallSend(v4, v8, 2LL, 7LL, 8, &unk_18038ED11, a2, v7, v8[0]);
  if ( v5 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x3C91,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v5,
      v6);
}
