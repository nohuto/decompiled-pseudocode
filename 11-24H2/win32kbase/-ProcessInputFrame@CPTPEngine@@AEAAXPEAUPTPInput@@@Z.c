/*
 * XREFs of ?ProcessInputFrame@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CB6F0
 * Callers:
 *     ?ProcessInput@CPTPEngine@@MEAAJPEAUPTPInput@@@Z @ 0x1400CAF50 (-ProcessInput@CPTPEngine@@MEAAJPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?IsTouchpadActive@CPTPEngine@@AEAAHXZ @ 0x1400CD1A8 (-IsTouchpadActive@CPTPEngine@@AEAAHXZ.c)
 *     ?CancelMouseUpTimer@CPTPEngine@@AEAAXH@Z @ 0x1400CD1FC (-CancelMouseUpTimer@CPTPEngine@@AEAAXH@Z.c)
 *     ?SendMouseUpIfPending@CPTPEngine@@AEAAXPEAI@Z @ 0x1400CD2B0 (-SendMouseUpIfPending@CPTPEngine@@AEAAXPEAI@Z.c)
 *     ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1400CDB34 (-SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParame.c)
 *     ?TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z @ 0x1400CDD58 (-TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z.c)
 *     PtInRect @ 0x1400DCAE4 (PtInRect.c)
 *     ?ApplyHeuristics@CPTPEngine@@AEAAXPEAUPTPInput@@_N1@Z @ 0x1400E7B6C (-ApplyHeuristics@CPTPEngine@@AEAAXPEAUPTPInput@@_N1@Z.c)
 *     ?SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@_N@Z @ 0x1400E8604 (-SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@_N@Z.c)
 *     ?ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400E8790 (-ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KH@Z @ 0x1400EF2C8 (-TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KH@Z.c)
 *     ?GetSensitivityLevel@CPTPEngine@@AEAA?AW4TOUCHPAD_SENSITIVITY_LEVEL@@XZ @ 0x1400EF480 (-GetSensitivityLevel@CPTPEngine@@AEAA-AW4TOUCHPAD_SENSITIVITY_LEVEL@@XZ.c)
 *     ?PointInsideCurtainRegion@CPTPEngine@@AEAAHUtagPOINT@@@Z @ 0x1400F8F04 (-PointInsideCurtainRegion@CPTPEngine@@AEAAHUtagPOINT@@@Z.c)
 *     ?SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z @ 0x140126A24 (-SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z.c)
 *     ?FindContactToBreakSuperCurtains@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@@Z @ 0x140146C34 (-FindContactToBreakSuperCurtains@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@@Z.c)
 *     ?UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNode@@@Z @ 0x140190C3C (-UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNo.c)
 */

void __fastcall CPTPEngine::ProcessInputFrame(CPTPEngine *this, struct PTPInput *a2)
{
  int v3; // r15d
  char v5; // si
  _DWORD *v6; // rcx
  int v7; // edx
  unsigned __int64 v8; // rax
  CPTPEngine *v9; // rcx
  char *v10; // rsi
  char *v11; // r14
  unsigned int v12; // ecx
  unsigned int v13; // r15d
  int v14; // r13d
  CPTPEngine *v15; // rcx
  unsigned int v16; // eax
  unsigned int v17; // r13d
  _DWORD *v18; // r12
  __int64 v19; // rsi
  __int64 v20; // r14
  int v21; // ecx
  bool v22; // zf
  unsigned int v23; // r15d
  _DWORD *v24; // rsi
  struct CContactState *v25; // rdx
  unsigned int v26; // r14d
  int v27; // ecx
  int v28; // r8d
  int v29; // esi
  char v30; // r14
  unsigned int v31; // esi
  unsigned int v32; // r8d
  unsigned int v33; // r9d
  __int64 v34; // rcx
  int v35; // eax
  unsigned int v36; // eax
  unsigned int v37; // r10d
  __int64 v38; // rcx
  int v39; // eax
  int v40; // [rsp+20h] [rbp-50h]
  unsigned int v41; // [rsp+24h] [rbp-4Ch]
  char *v42; // [rsp+28h] [rbp-48h]
  unsigned int v43; // [rsp+28h] [rbp-48h]
  _OWORD v44[2]; // [rsp+30h] [rbp-40h] BYREF
  _OWORD v45[2]; // [rsp+50h] [rbp-20h] BYREF
  int v46; // [rsp+B8h] [rbp+48h]
  unsigned int v47; // [rsp+C0h] [rbp+50h]
  int v48; // [rsp+C8h] [rbp+58h]

  v48 = 0;
  v3 = 0;
  v47 = 0;
  v46 = 0;
  v40 = 0;
  if ( (unsigned int)CPTPEngine::IsTouchpadActive(this) )
  {
    v5 = 1;
  }
  else
  {
    *(_QWORD *)&v45[1] = 0LL;
    memset(v44, 0, 24);
    v5 = 0;
    CBasePTPEngine::SendTelemetryOutput(this, 8LL, v44);
  }
  v6 = (_DWORD *)((char *)a2 + 36);
  if ( !*((_DWORD *)a2 + 9) )
  {
    if ( !v5 || (v7 = *((_DWORD *)this + 768), (v7 & 0x2000000) != 0) && (v7 & 0x4000000) == 0 )
    {
      v6 = (_DWORD *)((char *)a2 + 36);
      if ( *((_DWORD *)a2 + 12) > (unsigned int)(*((_DWORD *)this + 698) + *((_DWORD *)this + 703)) )
      {
        CBasePTPEngine::SendInertiaOutput(this, 0LL);
        v8 = *((_QWORD *)this + 375);
        if ( v8 && *((_QWORD *)a2 + 1) > v8 && (int)CPTPEngine::GetSensitivityLevel(this) > 0 )
          CPTPEngine::TPAAPSetCurtainState(v9, 1);
        *((_QWORD *)this + 375) = *(_QWORD *)a2;
        if ( *((_QWORD *)a2 + 2) > *((_QWORD *)a2 + 1) )
        {
          *(_QWORD *)&v44[0] = *((_QWORD *)a2 + 2);
          *(_OWORD *)((char *)v44 + 8) = 0LL;
          v45[0] = v44[0];
          *(_QWORD *)&v45[1] = *(_OWORD *)&_mm_unpackhi_pd(*(__m128d *)((char *)v44 + 8), *(__m128d *)((char *)v44 + 8));
          CBasePTPEngine::SendTelemetryOutput(this, 0LL, v45);
        }
        *((_DWORD *)this + 768) |= 0x4000000u;
        v6 = (_DWORD *)((char *)a2 + 36);
      }
    }
  }
  if ( !*v6 )
  {
    *((_DWORD *)this + 698) = 0;
    v10 = (char *)a2 + 56;
    *((_DWORD *)this + 703) = 0;
    v42 = (char *)a2 + 56;
    v41 = 0;
    if ( *((_DWORD *)a2 + 12) )
    {
      do
      {
        v43 = *((_DWORD *)v10 + 1) % *((_DWORD *)this + 4);
        v11 = (char *)this + 328 * v43 + 816;
        v12 = *(_DWORD *)v11;
        if ( (*(_DWORD *)v11 & 1) != 0 && ((v12 & 0x20000000) == 0 || (*((_DWORD *)v10 + 3) & 0x60000) == 0) )
        {
          *(_QWORD *)&v44[1] = 0LL;
          memset(v45, 0, 24);
          CBasePTPEngine::SendTelemetryOutput(this, 11LL, v45);
          v12 = *(_DWORD *)v11 & 0xDFFFFFFE;
          *(_DWORD *)v11 = v12;
        }
        if ( (v12 & 0x20000000) == 0 )
        {
          v40 = 1;
          *(_DWORD *)v11 = v12 | 0x20000000;
          *((_QWORD *)v11 + 9) = *((_QWORD *)v10 + 10);
          *((_QWORD *)v11 + 4) = *((_QWORD *)v10 + 5);
        }
        v13 = 0;
        *(_OWORD *)(v11 + 232) = *(_OWORD *)v10;
        *(_OWORD *)(v11 + 248) = *((_OWORD *)v10 + 1);
        *(_OWORD *)(v11 + 264) = *((_OWORD *)v10 + 2);
        *(_OWORD *)(v11 + 280) = *((_OWORD *)v10 + 3);
        *(_OWORD *)(v11 + 296) = *((_OWORD *)v10 + 4);
        *(_OWORD *)(v11 + 312) = *((_OWORD *)v10 + 5);
        v14 = *((_DWORD *)v10 + 3);
        *((_DWORD *)v10 + 3) = v14 & 0xFFFFFF8F;
        if ( (*(_DWORD *)v11 & 1) == 0 )
        {
          v13 = ((v14 & 0xFFFFFF8F) >> 23) & 4;
          if ( (unsigned int)CPTPEngine::PointInsideCurtainRegion(this, *(struct tagPOINT *)(v10 + 40))
            && !(unsigned int)CPTPEngine::TPAAPShouldAllowNow(v15, a2, 0x40u, 0) )
          {
            v13 |= 2u;
          }
          if ( (*((_DWORD *)this + 821) & 2) != 0
            && !(unsigned int)PtInRect((char *)this + 3024, *((_QWORD *)v10 + 5))
            && (*(_QWORD *)a2 - *((_QWORD *)v11 + 9) >= *((_QWORD *)this + 12)
                                                      * (unsigned __int64)*((unsigned int *)this + 784)
                                                      / 0x3E8
             || *((_DWORD *)a2 + 12) == 1
             || !(unsigned int)CPTPEngine::FindContactToBreakSuperCurtains(this, a2, (struct CContactState *)v11)) )
          {
            v13 |= 1u;
          }
          if ( v13 || (v14 & 0x40000) != 0 )
            *((_DWORD *)v10 + 3) = 0;
        }
        *((_DWORD *)v11 + 57) = v13;
        if ( *((_DWORD *)v10 + 3) )
        {
          CPTPEngine::UpdateTPStateIndicator(this, a2, (struct CContactState *)v11, (struct PTPEnginePointerNode *)v10);
          if ( (*(_DWORD *)v11 & 2) != 0 )
          {
            ++v48;
            *(_OWORD *)((char *)v45 + 8) = 0LL;
            v47 = v43;
            *(_QWORD *)&v45[0] = *(_QWORD *)a2;
            v46 = 1;
            v44[0] = v45[0];
            *(_QWORD *)&v44[1] = *(_OWORD *)&_mm_unpackhi_pd(
                                               *(__m128d *)((char *)v45 + 8),
                                               *(__m128d *)((char *)v45 + 8));
            CBasePTPEngine::SendTelemetryOutput(this, 3LL, v44);
          }
          else if ( *((_DWORD *)this + 706) != 1 )
          {
            *((_DWORD *)v11 + 1) &= ~8u;
          }
          if ( (*((_DWORD *)v10 + 3) & 0x40000) == 0 )
            ++*((_DWORD *)this + 698);
        }
        else if ( (v14 & 0x2000006) != 0 )
        {
          ++*((_DWORD *)this + 703);
        }
        else
        {
          v16 = *(_DWORD *)v11;
          if ( (*(_DWORD *)v11 & 1) != 0 )
          {
            *(_QWORD *)&v44[1] = 0LL;
            memset(v45, 0, 24);
            CBasePTPEngine::SendTelemetryOutput(this, 11LL, v45);
            v16 = *(_DWORD *)v11 & 0xFFFFFFFE;
          }
          *(_DWORD *)v11 = v16 & 0xDFFFFFFF;
        }
        v10 += 96;
        ++v41;
      }
      while ( v41 < *((_DWORD *)a2 + 12) );
      v3 = v46;
      v42 = (char *)a2 + 56;
      v10 = (char *)a2 + 56;
    }
    *((_DWORD *)this + 701) = 0;
    v17 = 0;
    if ( *((_DWORD *)a2 + 12) )
    {
      v18 = v10 + 12;
      do
      {
        v19 = (unsigned int)(*(v18 - 2) % *((_DWORD *)this + 4));
        v20 = 328 * v19;
        v21 = *((_DWORD *)this + 82 * v19 + 204);
        if ( (v21 & 1) != 0 )
        {
          if ( (*v18 & 0x40000) != 0 )
          {
            if ( *((_DWORD *)this + 697) && (v21 & 0x10000) != 0 )
              CPTPEngine::SendMouseUpIfPending(this, (unsigned int *)this + 697);
            if ( *((_DWORD *)this + 706) == 2 && (_DWORD)v19 == *((_DWORD *)this + 696) )
            {
              v22 = *((_DWORD *)this + 698) == 0;
              *((_DWORD *)this + 706) = 1;
              if ( !v22 )
              {
                CPTPEngine::ResetDragThresholds(this, a2);
                v23 = 0;
                if ( *((_DWORD *)a2 + 12) )
                {
                  v24 = v42 + 12;
                  do
                  {
                    v25 = (CPTPEngine *)((char *)this + 328 * (unsigned int)(*(v24 - 2) % *((_DWORD *)this + 4)) + 816);
                    if ( (*(_DWORD *)v25 & 1) != 0 && (*v24 & 0x40000) == 0 )
                    {
                      CPTPEngine::SetContactRestingState(this, v25, 1);
                      *(_DWORD *)((char *)this + v20 + 820) &= ~1u;
                    }
                    ++v23;
                    v24 += 24;
                  }
                  while ( v23 < *((_DWORD *)a2 + 12) );
                }
              }
              if ( (*(_DWORD *)((_BYTE *)this + v20 + 816) & 0x1000) != 0
                && (__int64)((unsigned __int64)(1000LL
                                              * (*(_QWORD *)((char *)this + v20 + 896)
                                               - *(_QWORD *)((char *)this + v20 + 912)))
                           / *((_QWORD *)this + 12)) >= *((unsigned int *)this + 844) )
              {
                *((_QWORD *)this + 380) = *(_QWORD *)((char *)this + v20 + 896);
              }
            }
          }
          else
          {
            if ( (v21 & 0x100) != 0 )
              ++*((_DWORD *)this + 701);
            if ( *((_DWORD *)this + 706) == 1 && (v40 || v3) )
              CPTPEngine::ResetDragThresholds(this, a2);
          }
        }
        v3 = v46;
        v18 += 24;
        ++v17;
      }
      while ( v17 < *((_DWORD *)a2 + 12) );
    }
    *((_DWORD *)this + 702) = *((_DWORD *)this + 698) - *((_DWORD *)this + 701);
    if ( !v46 )
      goto LABEL_103;
    if ( *((_DWORD *)this + 706) == 1 )
      CPTPEngine::SendMouseUpIfPending(this, (unsigned int *)this + 697);
    if ( !*((_DWORD *)this + 762) )
    {
LABEL_89:
      *((_DWORD *)this + 699) = 0;
      v30 = 0;
      v31 = 0;
      if ( *((_DWORD *)a2 + 12) )
      {
        do
        {
          v32 = *((_DWORD *)a2 + 15);
          v33 = *((_DWORD *)this + 4);
          v34 = v32 % v33;
          v35 = *((_DWORD *)this + 82 * v34 + 204);
          if ( (v35 & 1) != 0 && (v35 & 2) == 0 && (v35 & 0x10) == 0 && ((v35 & 0x80000) != 0 || v35 >= 0) )
          {
            v30 = 1;
            *((_DWORD *)this + 82 * v34 + 204) = v35 & 0x7FFFFFFF;
            v32 = *((_DWORD *)a2 + 15);
            v33 = *((_DWORD *)this + 4);
          }
          v36 = *((_DWORD *)a2 + 12);
          ++v31;
        }
        while ( v31 < v36 );
        if ( v30 )
        {
          v37 = 0;
          if ( v36 )
          {
            do
            {
              v38 = v32 % v33;
              v39 = *((_DWORD *)this + 82 * v38 + 204);
              if ( (v39 & 1) != 0 && (v39 & 2) != 0 )
              {
                *((_DWORD *)this + 82 * v38 + 204) = v39 & 0x7FFFFFFF;
                v32 = *((_DWORD *)a2 + 15);
                v33 = *((_DWORD *)this + 4);
              }
              ++v37;
            }
            while ( v37 < *((_DWORD *)a2 + 12) );
          }
        }
      }
LABEL_103:
      CPTPEngine::ApplyHeuristics(this, a2, v46 != 0, v40 != 0);
      return;
    }
    if ( v48 == 1 && *((_DWORD *)this + 763) )
    {
      v26 = v47;
      v27 = *(_QWORD *)((char *)this + 2836) - *((_QWORD *)this + 41 * v47 + 104);
      v28 = HIDWORD(*(_QWORD *)((char *)this + 2836)) - HIDWORD(*((_QWORD *)this + 41 * v47 + 104));
      if ( v28 * v28 + v27 * v27 <= (unsigned __int64)(unsigned int)(*((_DWORD *)this + 787) * *((_DWORD *)this + 787)) )
      {
        v29 = 1;
        goto LABEL_87;
      }
    }
    else
    {
      v26 = v47;
    }
    v29 = 0;
LABEL_87:
    CPTPEngine::CancelMouseUpTimer(this, v29 ^ 1);
    if ( v29 )
    {
      *((_DWORD *)this + 697) = *((_DWORD *)this + 764);
      *((_DWORD *)this + 764) = 0;
      *((_DWORD *)this + 82 * v26 + 204) |= 0x8000u;
    }
    goto LABEL_89;
  }
}
