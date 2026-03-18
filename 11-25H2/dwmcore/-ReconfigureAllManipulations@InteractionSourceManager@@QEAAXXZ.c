/*
 * XREFs of ?ReconfigureAllManipulations@InteractionSourceManager@@QEAAXXZ @ 0x18003D694
 * Callers:
 *     ?SetMaxPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x18003E6B0 (-SetMaxPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 *     ?SetMinPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x18003E7C0 (-SetMinPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 *     ?SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampingOption@@W43InteractionTrackerPositionUpdateOption@@@Z @ 0x1800F5EBC (-SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampi.c)
 *     ?OnManipulationChanged@InteractionSourceManager@@QEAAXW4Flags@NotificationEventArgs@@PEAVCManipulation@@@Z @ 0x1800F650C (-OnManipulationChanged@InteractionSourceManager@@QEAAXW4Flags@NotificationEventArgs@@PEAVCManipu.c)
 *     ?OnInteractionTrackerTransitionToIdle@InteractionSourceManager@@QEAAXW4ScrollState@@@Z @ 0x1800F9864 (-OnInteractionTrackerTransitionToIdle@InteractionSourceManager@@QEAAXW4ScrollState@@@Z.c)
 *     ?ProcessSetManipulations@InteractionSourceManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETMANIPULATIONS@@PEBUMarshaledManipulationInfo@@@Z @ 0x1801B8D40 (-ProcessSetManipulations@InteractionSourceManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERA.c)
 * Callees:
 *     ?UpdateConfigurationIfDirty@CChainingHelper@@QEAAXXZ @ 0x18003BA34 (-UpdateConfigurationIfDirty@CChainingHelper@@QEAAXXZ.c)
 *     _lambda_f87cc9cbc192fb07b4c8cbee31a42eb9_::operator() @ 0x18003D720 (_lambda_f87cc9cbc192fb07b4c8cbee31a42eb9_--operator().c)
 */

void __fastcall InteractionSourceManager::ReconfigureAllManipulations(InteractionSourceManager *this)
{
  _QWORD *v1; // rsi
  _QWORD *i; // rbx
  int v4; // edi
  CChainingHelper *v5; // rbp
  _QWORD v6[7]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v7; // [rsp+60h] [rbp+8h] BYREF
  __int64 v8; // [rsp+68h] [rbp+10h] BYREF

  v1 = (_QWORD *)*((_QWORD *)this + 2);
  for ( i = (_QWORD *)*v1; i != v1; i = (_QWORD *)*i )
  {
    v4 = 0;
    v5 = (CChainingHelper *)i[3];
    v8 = i[2];
    v7 = *(_QWORD *)this;
    v6[0] = &v7;
    v6[2] = &v8;
    v6[1] = v5;
    do
      lambda_f87cc9cbc192fb07b4c8cbee31a42eb9_::operator()(v6, (unsigned int)v4++);
    while ( v4 < 3 );
    CChainingHelper::UpdateConfigurationIfDirty(v5);
  }
}
