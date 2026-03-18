/*
 * XREFs of ?CanReleaseToFrame@CFlipToken@@IEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_N@Z @ 0x14005EA40
 * Callers:
 *     ?InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z @ 0x14005EB20 (-InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z.c)
 * Callees:
 *     ?SyncIntervalSatisfied@CFlipToken@@IEAA_NAEBUCOMPOSITION_MONITOR_TIMING@@@Z @ 0x14000BF68 (-SyncIntervalSatisfied@CFlipToken@@IEAA_NAEBUCOMPOSITION_MONITOR_TIMING@@@Z.c)
 *     ?StartCompositionEarly@CompositionSurfaceObject@@QEAA_N_K@Z @ 0x140034BE0 (-StartCompositionEarly@CompositionSurfaceObject@@QEAA_N_K@Z.c)
 *     ?GetIndependentFlipState@CompositionSurfaceObject@@QEBA?AW4IndependentFlipState@@_K@Z @ 0x140037CB4 (-GetIndependentFlipState@CompositionSurfaceObject@@QEBA-AW4IndependentFlipState@@_K@Z.c)
 *     ?CalcTokenTargetTime@CFlipToken@@IEAA_N_KAEBUCOMPOSITION_MONITOR_TIMING@@_N@Z @ 0x1400999A0 (-CalcTokenTargetTime@CFlipToken@@IEAA_N_KAEBUCOMPOSITION_MONITOR_TIMING@@_N@Z.c)
 *     Feature_EarlyWakeupTokenDeadline__private_IsEnabledDeviceUsageNoInline @ 0x140099DD8 (Feature_EarlyWakeupTokenDeadline__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CFlipToken::CanReleaseToFrame(CFlipToken *this, const struct COMPOSITION_FRAME_INFO *a2, bool *a3)
{
  char started; // bp
  char v7; // al

  *a3 = 0;
  if ( *((_DWORD *)this + 6) == 2 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(CFlipToken *))(*(_QWORD *)this + 144LL))(this) )
    {
      v7 = *((_BYTE *)this + 583);
      goto LABEL_12;
    }
    if ( (unsigned int)CompositionSurfaceObject::GetIndependentFlipState(*((_QWORD *)this + 6), *((_QWORD *)this + 7)) != 2 )
    {
      if ( !*((_QWORD *)this + 13) && *((_BYTE *)this + 578) )
      {
        *a3 = 1;
        return 0LL;
      }
      started = 0;
      if ( (unsigned int)Feature_EarlyWakeupTokenDeadline__private_IsEnabledDeviceUsageNoInline() )
        started = CompositionSurfaceObject::StartCompositionEarly(
                    *((CompositionSurfaceObject **)this + 6),
                    *((_QWORD *)this + 7));
      if ( CFlipToken::CalcTokenTargetTime(
             this,
             *((_QWORD *)a2 + 3),
             (const struct COMPOSITION_FRAME_INFO *)((char *)a2 + 64),
             started) )
      {
        v7 = CFlipToken::SyncIntervalSatisfied(this, (const struct COMPOSITION_FRAME_INFO *)((char *)a2 + 64));
LABEL_12:
        *a3 = v7;
      }
    }
  }
  return 0LL;
}
