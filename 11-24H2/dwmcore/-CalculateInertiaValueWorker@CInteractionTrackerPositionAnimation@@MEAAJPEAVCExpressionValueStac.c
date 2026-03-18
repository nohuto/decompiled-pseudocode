/*
 * XREFs of ?CalculateInertiaValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x1800E4E60
 * Callers:
 *     <none>
 * Callees:
 *     ?GetForceEngineCurrentValue@CScrollAnimation@@QEBAMXZ @ 0x1800DE724 (-GetForceEngineCurrentValue@CScrollAnimation@@QEBAMXZ.c)
 *     ?ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z @ 0x1800E19D8 (-ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x1800E3B2C (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 *     ?GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ @ 0x1800E42A8 (-GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ.c)
 *     ?AdvanceInertiaToTime@CPositionMotion@@QEAAMPEAVCExpressionValueStack@@_KMMMMMM@Z @ 0x1800E50D0 (-AdvanceInertiaToTime@CPositionMotion@@QEAAMPEAVCExpressionValueStack@@_KMMMMMM@Z.c)
 *     ?GetVelocity@CScrollAnimation@@QEBAMXZ @ 0x1800E5410 (-GetVelocity@CScrollAnimation@@QEBAMXZ.c)
 *     ?HasActiveInertiaForce@CScrollAnimation@@QEBA_NXZ @ 0x1800E54A8 (-HasActiveInertiaForce@CScrollAnimation@@QEBA_NXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@55@Z @ 0x1800E5C50 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U3@U3@@-$_tlgWriteTe.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     ?GetScaleVelocity@CScrollScaleKeyframeAnimation@@QEBAMXZ @ 0x1802AB8C4 (-GetScaleVelocity@CScrollScaleKeyframeAnimation@@QEBAMXZ.c)
 */

__int64 __fastcall CInteractionTrackerPositionAnimation::CalculateInertiaValueWorker(
        CInteractionTrackerPositionAnimation *this,
        struct CExpressionValueStack *a2,
        unsigned __int64 a3,
        float a4,
        float *a5)
{
  struct CInteractionTracker *InteractionTracker; // rbx
  int v9; // eax
  float v10; // xmm7_4
  float v11; // xmm6_4
  float v12; // xmm8_4
  float Velocity; // xmm0_4
  float ForceEngineCurrentValue; // xmm1_4
  int v15; // ecx
  float v16; // xmm0_4
  float v17; // xmm0_4
  int v19; // ecx
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  int v23; // ecx
  CScrollScaleKeyframeAnimation *v24; // rcx
  float v25; // [rsp+50h] [rbp-78h] BYREF
  float v26; // [rsp+54h] [rbp-74h] BYREF
  const wchar_t *v27; // [rsp+58h] [rbp-70h] BYREF
  CInteractionTrackerPositionAnimation *v28; // [rsp+60h] [rbp-68h] BYREF
  void *retaddr; // [rsp+C8h] [rbp+0h]
  float v30; // [rsp+D0h] [rbp+8h] BYREF

  InteractionTracker = CScrollAnimation::GetInteractionTracker(this);
  v9 = *((_DWORD *)this + 81);
  if ( v9 )
  {
    if ( v9 != 1 )
      ModuleFailFastForHRESULT(-2147024809, retaddr);
    v10 = *((float *)InteractionTracker + 44);
  }
  else
  {
    v10 = *((float *)InteractionTracker + 43);
  }
  v11 = 0.0;
  v12 = 0.0;
  if ( CInteractionTracker::AreInteractionAnimationsAlive(InteractionTracker) )
  {
    Velocity = CScrollAnimation::GetVelocity(*((CScrollAnimation **)InteractionTracker + 41));
  }
  else
  {
    v24 = (CScrollScaleKeyframeAnimation *)*((_QWORD *)InteractionTracker + 59);
    if ( !v24 )
      goto LABEL_7;
    Velocity = CScrollScaleKeyframeAnimation::GetScaleVelocity(v24);
  }
  v12 = Velocity;
LABEL_7:
  if ( CInteractionTracker::AreInteractionAnimationsAlive(InteractionTracker)
    && CScrollAnimation::HasActiveInertiaForce(*((CScrollAnimation **)InteractionTracker + 41)) )
  {
    ForceEngineCurrentValue = CScrollAnimation::GetForceEngineCurrentValue(*((CScrollAnimation **)InteractionTracker + 41));
  }
  else
  {
    ForceEngineCurrentValue = *((float *)InteractionTracker + 36);
  }
  v15 = *((_DWORD *)this + 81);
  if ( v15 )
  {
    if ( v15 == 1 )
    {
      v16 = *((float *)InteractionTracker + 29);
LABEL_12:
      v11 = *((float *)InteractionTracker + 26);
      goto LABEL_15;
    }
    if ( v15 == 2 )
    {
      v16 = *((float *)InteractionTracker + 38);
    }
    else
    {
      v16 = 0.0;
      v23 = v15 - 1;
      if ( !v23 )
        goto LABEL_12;
      if ( v23 != 1 )
        goto LABEL_15;
    }
    v11 = *((float *)InteractionTracker + 37);
    goto LABEL_15;
  }
  v16 = *((float *)InteractionTracker + 28);
  v11 = *((float *)InteractionTracker + 25);
LABEL_15:
  v17 = CPositionMotion::AdvanceInertiaToTime(
          (CInteractionTrackerPositionAnimation *)((char *)this + 440),
          a2,
          a3,
          a4,
          v11,
          v16,
          ForceEngineCurrentValue,
          v12,
          v10);
  *a5 = v17;
  if ( (unsigned int)dword_1803F8D18 > 4 && (byte_1803F8D28 & 2) != 0 && (qword_1803F8D30 & 2) == qword_1803F8D30 )
  {
    v19 = *((_DWORD *)this + 81);
    v30 = a4;
    v25 = v10;
    v26 = v17;
    v27 = ScrollAxisToString(v19);
    v28 = this;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v20,
      (unsigned int)&unk_1803CF36C,
      v21,
      v22,
      (__int64)&v28,
      (__int64)&v27,
      (__int64)&v26,
      (__int64)&v25,
      (__int64)&v30);
  }
  return 0LL;
}
