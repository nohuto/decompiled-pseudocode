/*
 * XREFs of ?UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNode@@@Z @ 0x140190C3C
 * Callers:
 *     ?ProcessInputFrame@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CB6F0 (-ProcessInputFrame@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z @ 0x1400CDD58 (-TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z.c)
 *     PtInRect @ 0x1400DCAE4 (PtInRect.c)
 *     ?UpdateContactRestingState@CPTPEngine@@AEAAXUtagPOINT@@_KPEAUCContactState@@@Z @ 0x1400E83B8 (-UpdateContactRestingState@CPTPEngine@@AEAAXUtagPOINT@@_KPEAUCContactState@@@Z.c)
 *     ?GetSensitivityLevel@CPTPEngine@@AEAA?AW4TOUCHPAD_SENSITIVITY_LEVEL@@XZ @ 0x1400EF480 (-GetSensitivityLevel@CPTPEngine@@AEAA-AW4TOUCHPAD_SENSITIVITY_LEVEL@@XZ.c)
 *     ?PointInsideCurtainRegion@CPTPEngine@@AEAAHUtagPOINT@@@Z @ 0x1400F8F04 (-PointInsideCurtainRegion@CPTPEngine@@AEAAHUtagPOINT@@@Z.c)
 *     ?SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z @ 0x140126A24 (-SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z.c)
 *     ?PassedCurtainMoveThresholds@CPTPEngine@@AEAAH_K0PEAUCContactState@@@Z @ 0x14014CD6C (-PassedCurtainMoveThresholds@CPTPEngine@@AEAAH_K0PEAUCContactState@@@Z.c)
 *     ?CrossedTPDragThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@H@Z @ 0x1401902B8 (-CrossedTPDragThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@H@Z.c)
 */

void __fastcall CPTPEngine::UpdateTPStateIndicator(
        CPTPEngine *this,
        struct PTPInput *a2,
        struct CContactState *a3,
        struct PTPEnginePointerNode *a4)
{
  unsigned __int64 v4; // rbx
  unsigned int v5; // r14d
  __int64 v7; // rsi
  CPTPEngine *v11; // rcx
  _DWORD *v12; // r8
  struct tagPOINT *v13; // r9
  int v14; // r9d
  int v15; // r10d
  unsigned int v16; // r10d
  _DWORD *v17; // rcx
  unsigned int v18; // r10d
  int v19; // eax
  unsigned int v20; // r10d
  unsigned int v21; // r10d
  unsigned int v22; // r10d
  unsigned __int64 v23; // rdx
  __int64 v24; // r9
  __int64 v25; // r8
  unsigned int v26; // ecx
  unsigned int v27; // eax
  unsigned int v28; // edx
  unsigned int v29; // ecx
  int v30; // r15d
  int v31; // esi
  __int64 v32; // r10
  __int64 v33; // r10
  __int64 v34; // rdx
  __int64 v35; // r8

  v4 = *((_QWORD *)a4 + 5);
  v5 = 0;
  v7 = *((_QWORD *)a4 + 10);
  if ( *((_DWORD *)a4 + 3) )
  {
    *((_QWORD *)a3 + 1) = v4;
    if ( !(unsigned int)CPTPEngine::GetSensitivityLevel((__int64)this)
      || !CPTPEngine::PointInsideCurtainRegion(v11, v13[5]) )
    {
      *v12 |= 0x1000u;
      CPTPEngine::TPAAPSetCurtainState(v11, 0);
    }
    v14 = *((_DWORD *)this + 768);
    if ( (v14 & 0x100000) != 0
      && *(_QWORD *)a2 - *((_QWORD *)this + 361) >= *((_QWORD *)this + 12)
                                                  * (unsigned __int64)*((unsigned int *)this + 811)
                                                  / 0x3E8 )
    {
      v14 &= ~0x100000u;
      *((_DWORD *)this + 768) = v14;
    }
    if ( (v14 & 0x200000) != 0
      && *(_QWORD *)a2 - *((_QWORD *)this + 361) >= *((_QWORD *)this + 12)
                                                  * (unsigned __int64)*((unsigned int *)this + 811)
                                                  / 0x3E8 )
    {
      *((_DWORD *)this + 768) = v14 & 0xFFDFFFFF;
    }
    v15 = *(_DWORD *)a3;
    if ( (*(_DWORD *)a3 & 0x40) == 0 && !PtInRect((_DWORD *)this + 752, v4) )
    {
      v15 |= 0x40u;
      *(_DWORD *)a3 = v15;
    }
    if ( (v15 & 0x80u) == 0 && SHIDWORD(v4) < *((_DWORD *)this + 753) )
      v15 |= 0x80u;
    if ( (v15 & 1) != 0 )
    {
      v22 = v15 & 0xFFFFFFFD;
      v23 = v7 - *((_QWORD *)a3 + 8);
      *(_DWORD *)a3 = v22;
      v24 = *((_QWORD *)this + 362);
      v25 = *((_QWORD *)this + 361);
      v26 = v22 & 0xFFFFFFDF | (*((_QWORD *)this + 364) < v23 ? 0x20 : 0);
      *(_DWORD *)a3 = v26;
      v27 = v26 & 0xFFDFFFFF | (*((_QWORD *)this + 365) < v23 ? 0x200000 : 0);
      *(_DWORD *)a3 = v27;
      v28 = v27 & 0xFFBFFFFF | (*((_QWORD *)this + 366) < v23 ? 0x400000 : 0);
      *(_DWORD *)a3 = v28;
      if ( v7 - v24 >= (unsigned __int64)(v7 - v25) )
        v24 = v25;
      v29 = v28 & 0xFF7FFFFF | (*((_QWORD *)this + 365) < (unsigned __int64)(v7 - v24) ? 0x800000 : 0);
      *(_DWORD *)a3 = v29;
      if ( (v29 & 0x10) == 0 && (unsigned __int64)(v7 - *((_QWORD *)a3 + 9)) > *((_QWORD *)this + 363) )
      {
        *(_DWORD *)a3 = v29 | 0x10;
        if ( *((_DWORD *)this + 706) == 1 && (*((_DWORD *)a2 + 10) || *((_DWORD *)a2 + 13)) )
        {
          CBasePTPEngine::SendInertiaOutput((__int64)this, 3);
          *((_DWORD *)a2 + 10) = 0;
        }
      }
      if ( (*(_DWORD *)a3 & 0x100) == 0
        && (*((_DWORD *)this + 768) & 0x8000) != 0
        && CPTPEngine::PassedCurtainMoveThresholds(this, *((_QWORD *)a3 + 12), v7, a3) )
      {
        CPTPEngine::TPAAPSetCurtainState(this, 0);
      }
      if ( (*((_DWORD *)a4 + 3) & 0x40000) == 0 )
      {
        CPTPEngine::UpdateContactRestingState(this, (struct tagPOINT)v4, v7, a3);
        v30 = *(_DWORD *)a3;
        if ( (*(_DWORD *)a3 & 4) == 0
          && (unsigned int)CPTPEngine::CrossedTPDragThreshold(this, a3, (struct tagPOINT)v4, 0) )
        {
          v30 |= 4u;
          *(_DWORD *)a3 = v30;
        }
        v31 = v30;
        if ( (v30 & 8) == 0 && (unsigned int)CPTPEngine::CrossedTPDragThreshold(this, a3, (struct tagPOINT)v4, 1) )
        {
          v31 = v30 | 8;
          *(_DWORD *)a3 = v30 | 8;
        }
        if ( (v31 & 0x100000) == 0 )
        {
          v32 = *((_QWORD *)a3 + 2);
          if ( *((unsigned int *)this + 810) * (__int64)(((int)v32 - (int)v4) * ((int)v32 - (int)v4))
             + (unsigned __int64)*((unsigned int *)this + 809)
             * (HIDWORD(v32) - HIDWORD(v4))
             * (HIDWORD(v32) - HIDWORD(v4)) >= *((unsigned int *)this + 810)
                                             * (unsigned __int64)*((unsigned int *)this + 809) )
          {
            v31 |= 0x100000u;
            *(_DWORD *)a3 = v31;
          }
        }
        if ( (v31 & 0x1000000) == 0
          && *((unsigned int *)this + 779)
           * (__int64)(int)((HIDWORD(*((_QWORD *)a3 + 3)) - HIDWORD(v4)) * (HIDWORD(*((_QWORD *)a3 + 3)) - HIDWORD(v4)))
           + (unsigned __int64)*((unsigned int *)this + 780)
           * (int)((*((_QWORD *)a3 + 3) - v4) * (*((_QWORD *)a3 + 3) - v4)) >= *((unsigned int *)this + 779)
                                                                             * (unsigned __int64)*((unsigned int *)this
                                                                                                 + 780) )
        {
          v31 |= 0x1000000u;
          *(_DWORD *)a3 = v31;
        }
        if ( (v31 & 0x2000000) == 0 )
        {
          v33 = *((_QWORD *)a3 + 4);
          if ( *((unsigned int *)this + 780) * (__int64)(((int)v33 - (int)v4) * ((int)v33 - (int)v4))
             + (unsigned __int64)*((unsigned int *)this + 779)
             * (HIDWORD(v33) - HIDWORD(v4))
             * (HIDWORD(v33) - HIDWORD(v4)) >= *((unsigned int *)this + 780)
                                             * (unsigned __int64)*((unsigned int *)this + 779) )
          {
            v31 |= 0x2000000u;
            *(_DWORD *)a3 = v31;
          }
        }
        if ( (v31 & 0x10000000) == 0 )
        {
          v34 = (unsigned int)(*((_DWORD *)this + 805) * *((_DWORD *)this + 805));
          v35 = (unsigned int)(*((_DWORD *)this + 804) * *((_DWORD *)this + 804));
          if ( v35 * (int)((HIDWORD(*((_QWORD *)a3 + 3)) - HIDWORD(v4)) * (HIDWORD(*((_QWORD *)a3 + 3)) - HIDWORD(v4)))
             + v34 * (int)((*((_QWORD *)a3 + 3) - v4) * (*((_QWORD *)a3 + 3) - v4)) >= (unsigned __int64)(v35 * v34) )
            *(_DWORD *)a3 = v31 | 0x10000000;
        }
      }
    }
    else
    {
      v16 = v15 & 0xFF8FFFE3;
      *((_QWORD *)a3 + 8) = v7;
      *(_DWORD *)a3 = v16;
      v17 = (_DWORD *)((char *)this + 2824);
      *((_QWORD *)a3 + 11) = v7;
      *((_QWORD *)a3 + 13) = v7;
      v18 = v16 & 0xE3FFCFFC | 3;
      *((_QWORD *)a3 + 16) = v7;
      *((_DWORD *)a3 + 34) = *((_DWORD *)a4 + 16);
      *((_QWORD *)a3 + 2) = v4;
      *((_QWORD *)a3 + 3) = v4;
      *((_QWORD *)a3 + 6) = v4;
      *((_QWORD *)a3 + 7) = *(_QWORD *)((char *)a2 + 28);
      *(_DWORD *)a3 = v18;
      *((_DWORD *)a3 + 35) = 0;
      if ( !*((_DWORD *)this + 697) || (v19 = 0x4000, *v17 == 1) )
        v19 = 0;
      *((_DWORD *)a3 + 1) |= 0xBu;
      *((_DWORD *)a3 + 36) = 0;
      v20 = v19 & 0xBCF0743F | v18 & 0xBCF0343F;
      *((_QWORD *)a3 + 10) = v7;
      *(_DWORD *)a3 = v20;
      *((_QWORD *)a3 + 5) = v4;
      v21 = (*((_DWORD *)this + 6) << 10) ^ ((*((_DWORD *)this + 6) << 10) ^ v20) & 0xFFFFFBFF;
      *(_DWORD *)a3 = v21;
      if ( (*((_DWORD *)this + 768) & 1) == 0 && (unsigned int)(*v17 - 1) <= 1 )
        v5 = 0x80000000;
      *(_DWORD *)a3 = v5 | v21 & 0x7FFFFFFF;
      CPTPEngine::UpdateContactRestingState(this, (struct tagPOINT)v4, v7, a3);
    }
  }
}
