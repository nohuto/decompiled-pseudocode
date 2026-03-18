/*
 * XREFs of ?SetState@CHolographicDisplay@@UEAAJJ@Z @ 0x1802DA810
 * Callers:
 *     <none>
 * Callees:
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x18003D670 (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 *     ?GetChannelCallbackId@CNotificationResource@@IEBAIXZ @ 0x18003DBB0 (-GetChannelCallbackId@CNotificationResource@@IEBAIXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180248848 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CHolographicDisplay::SetState(CHolographicDisplay *this, int a2)
{
  unsigned int ChannelCallbackId; // eax
  __int64 v5; // r10
  unsigned int v6; // eax
  int v8; // [rsp+20h] [rbp-38h]
  __int64 v9; // [rsp+38h] [rbp-20h]
  _QWORD v10[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( CNotificationResource::ShouldNotify((CHolographicDisplay *)((char *)this - 80)) )
  {
    if ( (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this - 7) + 6416LL) + 72LL))(
           *(_QWORD *)(*((_QWORD *)this - 7) + 6416LL),
           7LL) )
    {
      ChannelCallbackId = CNotificationResource::GetChannelCallbackId((CHolographicDisplay *)((char *)this - 80));
      v10[0] = ChannelCallbackId;
      v10[1] = *((unsigned int *)this - 2);
      v6 = CoreUICallSend(v5, v10, 2LL, 7LL, 0, &unk_180336E61, a2, v9, ChannelCallbackId);
      if ( (int)(v6 + 0x80000000) >= 0 && v6 != -2018375675 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xF4,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\holographic\\holographicdisplay.cpp",
          (const char *)v6,
          v8);
    }
  }
  return 0LL;
}
