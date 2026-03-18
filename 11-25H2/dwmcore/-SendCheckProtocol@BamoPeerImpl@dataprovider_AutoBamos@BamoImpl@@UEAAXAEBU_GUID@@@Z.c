/*
 * XREFs of ?SendCheckProtocol@BamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@UEAAXAEBU_GUID@@@Z @ 0x18022B190
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180248848 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall BamoImpl::dataprovider_AutoBamos::BamoPeerImpl::SendCheckProtocol(
        BamoImpl::dataprovider_AutoBamos::BamoPeerImpl *this,
        const struct _GUID *a2)
{
  __int128 v2; // xmm0
  __int64 v3; // r8
  __int64 v4; // r10
  int v5; // eax
  int v6; // [rsp+20h] [rbp-48h]
  __int64 v7; // [rsp+38h] [rbp-30h]
  _QWORD v8[2]; // [rsp+40h] [rbp-28h] BYREF
  __int128 v9; // [rsp+50h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v2 = (__int128)*a2;
  v3 = *(_QWORD *)(*((_QWORD *)this + 3) + 32LL);
  v8[0] = *((unsigned int *)this + 9);
  v4 = *(_QWORD *)(v3 + 72);
  v8[1] = *((unsigned int *)this + 10);
  v9 = v2;
  v5 = CoreUICallSend(v4, v8, 2LL, 7LL, 0, &unk_18038ED3B, (unsigned int)&v9, v7, v8[0]);
  if ( v5 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x3CA9,
      (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v5,
      v6);
}
