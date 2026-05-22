/*
 * XREFs of ?SendCheckProtocol@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@UEAAXAEBU_GUID@@@Z @ 0x180070910
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl::SendCheckProtocol(
        BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl *this,
        const struct _GUID *a2)
{
  __int128 v2; // xmm0
  __int64 v3; // r8
  __int64 v4; // r10
  int v5; // eax
  int v6; // [rsp+20h] [rbp-48h]
  _QWORD v7[2]; // [rsp+40h] [rbp-28h] BYREF
  __int128 v8; // [rsp+50h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v2 = (__int128)*a2;
  v3 = *(_QWORD *)(*((_QWORD *)this + 3) + 32LL);
  v7[0] = *((unsigned int *)this + 9);
  v4 = *(_QWORD *)(v3 + 72);
  v7[1] = *((unsigned int *)this + 10);
  LOWORD(v6) = 0;
  v8 = v2;
  v5 = CoreUICallSend(v4, v7, 2LL);
  if ( v5 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x18C5,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.Common.bamo.h",
      (const char *)(unsigned int)v5,
      v6);
}
