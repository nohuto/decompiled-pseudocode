/*
 * XREFs of ?CalcTokenTargetTime@CFlipToken@@IEAA_N_KAEBUCOMPOSITION_MONITOR_TIMING@@_N@Z @ 0x1400999A0
 * Callers:
 *     ?CanReleaseToFrame@CFlipToken@@IEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_N@Z @ 0x14005EA40 (-CanReleaseToFrame@CFlipToken@@IEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_N@Z.c)
 * Callees:
 *     Feature_EarlyWakeupTokenDeadline__private_IsEnabledDeviceUsageNoInline @ 0x140099DD8 (Feature_EarlyWakeupTokenDeadline__private_IsEnabledDeviceUsageNoInline.c)
 */

bool __fastcall CFlipToken::CalcTokenTargetTime(
        CFlipToken *this,
        unsigned __int64 a2,
        const struct COMPOSITION_MONITOR_TIMING *a3,
        char a4)
{
  unsigned __int64 v4; // r10
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rax
  char v11; // cl
  const struct COMPOSITION_MONITOR_TIMING *v12; // rax
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // rdx
  char v18; // cl
  unsigned __int64 v19; // rax
  const struct COMPOSITION_MONITOR_TIMING *v21; // rax
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // rcx

  v4 = *((_QWORD *)this + 14);
  if ( v4 )
    return a2 >= v4;
  v9 = *((_QWORD *)this + 4);
  if ( !(unsigned int)Feature_EarlyWakeupTokenDeadline__private_IsEnabledDeviceUsageNoInline() )
  {
    v18 = *((_BYTE *)this + 576);
    if ( v18 )
      v19 = *((_QWORD *)a3 + 5);
    else
      v19 = *((_QWORD *)a3 + 4);
    if ( v9 <= v19 )
    {
      v21 = (const struct COMPOSITION_MONITOR_TIMING *)((char *)a3 + 8);
      if ( !v18 )
        v21 = a3;
      v22 = *(_QWORD *)v21;
      if ( v18 )
        v23 = *((_QWORD *)a3 + 3);
      else
        v23 = *((_QWORD *)a3 + 2);
      if ( v9 > v22 )
        v4 = v22 + 2 * v23 - (v9 - v22) % v23;
      else
        v4 = v9 + v23 + (v22 - v9) % v23;
      *((_QWORD *)this + 14) = v4;
      return a2 >= v4;
    }
    return 0;
  }
  if ( !a4 )
  {
    v10 = *((_BYTE *)this + 576) ? *((_QWORD *)a3 + 5) : *((_QWORD *)a3 + 4);
    if ( v9 > v10 )
      return 0;
  }
  v11 = *((_BYTE *)this + 576);
  v12 = (const struct COMPOSITION_MONITOR_TIMING *)((char *)a3 + 8);
  if ( !v11 )
    v12 = a3;
  v13 = *(_QWORD *)v12;
  if ( v11 )
    v14 = *((_QWORD *)a3 + 3);
  else
    v14 = *((_QWORD *)a3 + 2);
  if ( v9 > v13 )
  {
    v17 = (v9 - v13) % v14;
    if ( !a4 )
      v14 *= 2LL;
    v16 = v14 - v17;
    goto LABEL_20;
  }
  v15 = (v13 - v9) % v14;
  if ( !a4 )
  {
    v16 = v15 + v14;
LABEL_20:
    v4 = v9 + v16;
    goto LABEL_21;
  }
  v4 = v15 + v9;
LABEL_21:
  *((_QWORD *)this + 14) = v4;
  return a2 >= v4;
}
