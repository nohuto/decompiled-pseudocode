/*
 * XREFs of ?SetState@CHolographicComposition@@UEAAJJ@Z @ 0x1802D0FF0
 * Callers:
 *     ?ProcessCreate@CHolographicComposition@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICCOMPOSITION_CREATE@@@Z @ 0x1802D0F28 (-ProcessCreate@CHolographicComposition@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICCOMPOS.c)
 * Callees:
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x180154670 (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 *     ?GetChannelCallbackId@CNotificationResource@@IEBAIXZ @ 0x180154D20 (-GetChannelCallbackId@CNotificationResource@@IEBAIXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802412D4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CHolographicComposition::SetState(CHolographicComposition *this, int a2)
{
  unsigned int ChannelCallbackId; // eax
  __int64 v5; // r10
  int v6; // eax
  int v8; // [rsp+20h] [rbp-38h]
  __int64 v9; // [rsp+38h] [rbp-20h]
  _QWORD v10[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( CNotificationResource::ShouldNotify((CHolographicComposition *)((char *)this - 80)) )
  {
    if ( (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 1) + 6392LL) + 72LL))(
           *(_QWORD *)(*((_QWORD *)this + 1) + 6392LL),
           6LL) )
    {
      ChannelCallbackId = CNotificationResource::GetChannelCallbackId((CHolographicComposition *)((char *)this - 80));
      v10[0] = ChannelCallbackId;
      v10[1] = *((unsigned int *)this - 2);
      v6 = CoreUICallSend(v5, v10, 2LL, 6LL, 0, &unk_18032BF21, a2, v9, ChannelCallbackId);
      if ( v6 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x9D,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\holographic\\holographiccomposition.cpp",
          (const char *)(unsigned int)v6,
          v8);
    }
  }
  return 0LL;
}
