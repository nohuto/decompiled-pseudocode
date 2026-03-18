/*
 * XREFs of ?ProcessSetRequestedPositionAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETREQUESTEDPOSITIONANIMATION@@@Z @ 0x1801E12EC
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x180036D70 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180134248 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ @ 0x180154388 (-NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ.c)
 *     ?SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x1801E13E8 (-SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z.c)
 *     ?NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z @ 0x18024C144 (-NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z.c)
 */

__int64 __fastcall CInteractionTracker::ProcessSetRequestedPositionAnimation(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INTERACTIONTRACKER_SETREQUESTEDPOSITIONANIMATION *a3)
{
  CBaseExpression *v4; // rdi
  unsigned int v5; // edx
  int v8; // eax
  __int64 Resource; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = 0LL;
  v5 = *((_DWORD *)a3 + 2);
  if ( !v5 )
    goto LABEL_2;
  Resource = CResourceTable::GetResource((__int64)a2, v5, 0xBu);
  v4 = (CBaseExpression *)Resource;
  if ( Resource )
  {
    if ( (*(_BYTE *)(Resource + 224) & 4) != 0 )
      return 0LL;
LABEL_2:
    *((_BYTE *)this + 540) = *((_BYTE *)this + 540) & 0xBF | (*((_BYTE *)a3 + 12) == 0 ? 0x40 : 0);
    if ( (unsigned __int8)CInteractionTracker::SetCustomAnimation(this, v4, 0LL) )
    {
      v8 = *((_DWORD *)this + 49);
      if ( v8 <= *((_DWORD *)a3 + 5) )
        v8 = *((_DWORD *)a3 + 5);
      *((_DWORD *)this + 49) = v8;
    }
    else if ( v4 )
    {
      CBaseExpression::NotifyAnimationCompleted(v4);
      CResource::UnRegisterNotifierInternal(this, v4);
      if ( *((_BYTE *)a3 + 12) )
        CInteractionTracker::NotifyRequestIgnored(this, *((_DWORD *)a3 + 5));
    }
    *((_BYTE *)this + 540) &= ~0x40u;
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x226,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontracker.cpp",
    (const char *)0x88980403LL);
  return 2291663875LL;
}
