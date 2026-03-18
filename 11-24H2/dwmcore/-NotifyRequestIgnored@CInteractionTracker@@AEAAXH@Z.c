/*
 * XREFs of ?NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z @ 0x18024C144
 * Callers:
 *     ?ProcessSetRequestedScale@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETREQUESTEDSCALE@@@Z @ 0x1800DE978 (-ProcessSetRequestedScale@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIO.c)
 *     ?ProcessSetRequestedPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETREQUESTEDPOSITION@@@Z @ 0x1800E5140 (-ProcessSetRequestedPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERAC.c)
 *     ?ProcessSetRequestedScaleAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETREQUESTEDSCALEANIMATION@@@Z @ 0x1801E11CC (-ProcessSetRequestedScaleAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_I.c)
 *     ?ProcessSetRequestedPositionAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETREQUESTEDPOSITIONANIMATION@@@Z @ 0x1801E12EC (-ProcessSetRequestedPositionAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCM.c)
 *     ?ProcessApplyPositionImpulse@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_APPLYPOSITIONIMPULSE@@@Z @ 0x18029D6EC (-ProcessApplyPositionImpulse@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERAC.c)
 *     ?ProcessApplyScaleImpulse@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_APPLYSCALEIMPULSE@@@Z @ 0x18029D804 (-ProcessApplyScaleImpulse@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIO.c)
 *     ?ProcessSetRequestedDeltaPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETREQUESTEDDELTAPOSITION@@@Z @ 0x18029DACC (-ProcessSetRequestedDeltaPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_IN.c)
 * Callees:
 *     ?GetChannelCallbackId@CNotificationResource@@IEBAIXZ @ 0x180154D20 (-GetChannelCallbackId@CNotificationResource@@IEBAIXZ.c)
 *     ?ShouldNotify@CInteractionTracker@@AEAA_NI@Z @ 0x1801550B0 (-ShouldNotify@CInteractionTracker@@AEAA_NI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CInteractionTracker::NotifyRequestIgnored(CInteractionTracker *this, int a2)
{
  int v4; // edx
  __int64 v5; // rcx
  unsigned int v6; // esi
  unsigned int ChannelCallbackId; // eax
  __int64 v8; // r10
  __int64 v9; // [rsp+38h] [rbp-20h]
  _QWORD v10[3]; // [rsp+40h] [rbp-18h] BYREF

  if ( CInteractionTracker::ShouldNotify(this, 0xCu) )
  {
    v6 = v4 - 4;
    if ( (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v5 + 24) + 6392LL) + 72LL))(
           *(_QWORD *)(*(_QWORD *)(v5 + 24) + 6392LL),
           (unsigned int)(v4 - 4)) )
    {
      ChannelCallbackId = CNotificationResource::GetChannelCallbackId(this);
      v10[0] = ChannelCallbackId;
      v10[1] = *((unsigned int *)this + 18);
      CoreUICallSend(v8, v10, v6 - 6, v6, v6 - 6, &unk_18032BF3E, a2, v9, ChannelCallbackId);
    }
  }
}
