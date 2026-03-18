/*
 * XREFs of ?OnEdgyDetected@CManipulation@@QEAAXPEBUEdgyDetectedParams@@@Z @ 0x18029595C
 * Callers:
 *     ?s_OnReceiveInputThreadMessage@CInputManager@@KAJPEAXPEBXH@Z @ 0x180262580 (-s_OnReceiveInputThreadMessage@CInputManager@@KAJPEAXPEBXH@Z.c)
 * Callees:
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x18003D670 (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 *     ?GetChannelCallbackId@CNotificationResource@@IEBAIXZ @ 0x18003DBB0 (-GetChannelCallbackId@CNotificationResource@@IEBAIXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CManipulation::OnEdgyDetected(CManipulation *this, const struct EdgyDetectedParams *a2)
{
  CNotificationResource *v4; // rcx
  __int64 v5; // r10
  unsigned int ChannelCallbackId; // eax
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int16 v10; // dx
  __int64 v11; // r10
  __int64 v12; // [rsp+38h] [rbp-60h]
  _QWORD v13[2]; // [rsp+40h] [rbp-58h] BYREF
  _OWORD v14[3]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v15; // [rsp+80h] [rbp-18h]

  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 3) + 6416LL) + 72LL))(
    *(_QWORD *)(*((_QWORD *)this + 3) + 6416LL),
    10LL);
  if ( CNotificationResource::ShouldNotify(this) )
  {
    if ( v5 )
    {
      ChannelCallbackId = CNotificationResource::GetChannelCallbackId(v4);
      v7 = *(_OWORD *)a2;
      v8 = *((_OWORD *)a2 + 1);
      v13[0] = ChannelCallbackId;
      v13[1] = *((unsigned int *)this + 18);
      v14[0] = v7;
      v9 = *((_OWORD *)a2 + 2);
      v14[1] = v8;
      *(_QWORD *)&v8 = *((_QWORD *)a2 + 6);
      v14[2] = v9;
      v15 = v8;
      CoreUICallSend(v11, v13, 2LL, 10LL, v10, &unk_180336EA5, (unsigned int)v14, v12, ChannelCallbackId);
    }
  }
}
