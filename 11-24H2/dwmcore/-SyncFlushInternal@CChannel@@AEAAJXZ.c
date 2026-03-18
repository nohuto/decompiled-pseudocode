/*
 * XREFs of ?SyncFlushInternal@CChannel@@AEAAJXZ @ 0x18012E1F0
 * Callers:
 *     ?SyncDesktopCaptureBits@CChannel@@UEAAJU_LUID@@HHIIW4DXGI_FORMAT@@_KPEAX@Z @ 0x18012DEC0 (-SyncDesktopCaptureBits@CChannel@@UEAAJU_LUID@@HHIIW4DXGI_FORMAT@@_KPEAX@Z.c)
 *     ?SyncMagnifierRenderTargetCaptureBits@CChannel@@UEAAJIII_KU?$TMILFlagsEnum@W4FlagsEnum@MilRenderPassFlags@@@@AEBUMAGN_UPDATE_TEXTURES_PARAM@@@Z @ 0x180206420 (-SyncMagnifierRenderTargetCaptureBits@CChannel@@UEAAJIII_KU-$TMILFlagsEnum@W4FlagsEnum@MilRender.c)
 *     ?SendSyncCommand@CChannel@@AEAAJPEBXIPEAUMIL_MESSAGE@@@Z @ 0x180212880 (-SendSyncCommand@CChannel@@AEAAJPEBXIPEAUMIL_MESSAGE@@@Z.c)
 *     ?SyncLegacyVisualCaptureRenderTargetCaptureBits@CChannel@@UEAAJIIMHHHH_KPEAW4DXGI_FORMAT@@PEAPEAX@Z @ 0x180215250 (-SyncLegacyVisualCaptureRenderTargetCaptureBits@CChannel@@UEAAJIIMHHHH_KPEAW4DXGI_FORMAT@@PEAPEA.c)
 *     ?SyncFlush@CChannel@@UEAAJXZ @ 0x180262CA0 (-SyncFlush@CChannel@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?WaitForSyncFlush@CInternalMilCmdConnection@@QEAAJI@Z @ 0x18012DD3C (-WaitForSyncFlush@CInternalMilCmdConnection@@QEAAJI@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18012FF80 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::SyncFlushInternal(CChannel *this)
{
  int v2; // edi
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 47;
  v2 = CChannel::SendCommand(this, &v8, 4u);
  if ( v2 < 0 )
  {
    v6 = 574LL;
    goto LABEL_6;
  }
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 8) + 72LL))(*((_QWORD *)this + 8), 0LL);
  if ( v2 < 0 )
  {
    v6 = 576LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  v3 = CInternalMilCmdConnection::WaitForSyncFlush(*((RTL_SRWLOCK **)this + 7), *((_DWORD *)this + 18));
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x241,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
