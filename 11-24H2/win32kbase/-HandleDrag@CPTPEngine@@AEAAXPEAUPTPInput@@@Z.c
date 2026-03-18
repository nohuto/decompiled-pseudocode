/*
 * XREFs of ?HandleDrag@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CD408
 * Callers:
 *     ?DoTPButtonAndDragProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CC728 (-DoTPButtonAndDragProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?SendMouseUpIfPending@CPTPEngine@@AEAAXPEAI@Z @ 0x1400CD2B0 (-SendMouseUpIfPending@CPTPEngine@@AEAAXPEAI@Z.c)
 *     ?SendLastActionTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@@Z @ 0x1400CD3C0 (-SendLastActionTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@@Z.c)
 *     ?FilterMoveForStableContact@CPTPEngine@@AEAAHPEAUPTPInput@@UtagPOINT@@PEAUCContactState@@@Z @ 0x1400CD864 (-FilterMoveForStableContact@CPTPEngine@@AEAAHPEAUPTPInput@@UtagPOINT@@PEAUCContactState@@@Z.c)
 *     ?ApplyElasticDragModeDeltas@CPTPEngine@@AEAAHPEAUCContactState@@PEAUtagPOINTER_INFO@@PEAUtagPOINT@@@Z @ 0x1400CDB90 (-ApplyElasticDragModeDeltas@CPTPEngine@@AEAAHPEAUCContactState@@PEAUtagPOINTER_INFO@@PEAUtagPOIN.c)
 *     ?SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@@Z @ 0x1400CDD08 (-SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@@Z.c)
 */

void __fastcall CPTPEngine::HandleDrag(CPTPEngine *this, struct PTPInput *a2)
{
  struct tagPOINTER_INFO *v2; // r13
  char *v3; // rsi
  int v4; // r12d
  int v5; // edi
  struct CContactState *v6; // rbp
  unsigned int v7; // r15d
  int v10; // eax
  _DWORD *v11; // r11
  int v12; // edx
  int v13; // eax
  int v14; // r9d
  LONG v15; // eax
  LONG v16; // ecx
  bool v17; // sf
  LONG v18; // r10d
  int v19; // eax
  int v20; // r10d
  int v21; // r10d
  int v22; // r9d
  int v23; // esi
  int v24; // ecx
  _DWORD *v25; // rdx
  int v26; // eax
  int v27; // ecx
  LONG v28; // r8d
  int v29; // esi
  int v30; // edi
  tagPOINT v31; // rax
  int v32; // ecx
  tagPOINT v33; // [rsp+68h] [rbp+10h] BYREF
  struct tagPOINT v34; // [rsp+70h] [rbp+18h]

  v2 = 0LL;
  v3 = (char *)a2 + 56;
  v34.x = 0;
  v4 = 0;
  v34.y = 0;
  v5 = 0;
  v33.x = 0;
  v6 = 0LL;
  v33.y = 0;
  v7 = 0;
  if ( *((_DWORD *)a2 + 12) )
  {
    do
    {
      v10 = *((_DWORD *)v3 + 3);
      v11 = (_DWORD *)((char *)this + 328 * (unsigned int)(*((_DWORD *)v3 + 1) % *((_DWORD *)this + 4)));
      if ( (v10 & 0x40000) == 0 && v10 )
      {
        v12 = v11[204];
        v13 = v12 << 29;
        if ( __CFSHR__(v12, 17) )
        {
          v5 = 1;
        }
        else
        {
          v14 = v11[204] << 29;
          if ( (v11[204] & 4) != 0 )
          {
            v15 = HIDWORD(*((_QWORD *)v3 + 5)) - v11[215];
            v16 = *((_QWORD *)v3 + 5) - v11[214];
            v17 = (int)(v11[215] - HIDWORD(*((_QWORD *)v3 + 5))) < 0;
            v18 = v11[215] - HIDWORD(*((_QWORD *)v3 + 5));
            v34.y = v15;
            v34.x = v16;
            if ( v17 )
              v18 = v15;
            v19 = -v16;
            if ( v16 > 0 )
              v19 = v16;
            v20 = v19 + v18;
            if ( v20 >= v4 )
            {
              v6 = (struct CContactState *)(v11 + 204);
              v33 = v34;
              v4 = v20;
              v2 = (struct tagPOINTER_INFO *)v3;
            }
            if ( (v12 & 0x8000) == 0 )
              v5 = 1;
            v13 = v14;
          }
          else if ( (v12 & 0x4000) != 0 )
          {
            v5 = 1;
          }
        }
        if ( *((_DWORD *)this + 697)
          && *((_DWORD *)this + 706) == 5
          && *((_DWORD *)this + 698) == 1
          && (v12 & 0x100) != 0
          && v13 >= 0
          && (v12 & 0x4000) == 0
          && (v12 & 0x8000) == 0
          && !__CFSHR__(v12, 17) )
        {
          CPTPEngine::SendMouseUpIfPending((struct tagPOINT *)this, (unsigned int *)this + 697);
        }
      }
      v3 += 96;
      ++v7;
    }
    while ( v7 < *((_DWORD *)a2 + 12) );
    if ( v6 )
    {
      v21 = *((_DWORD *)this + 697);
      if ( v21 )
      {
        if ( *((_DWORD *)this + 706) == 1 )
        {
          v32 = *((_DWORD *)this + 768);
          if ( (v32 & 0x40000) == 0 && (v32 & 0x20000) != 0 )
          {
            *((_QWORD *)this + 369) = *(_QWORD *)a2;
            *((_DWORD *)this + 768) = v32 | 0x40000;
          }
        }
      }
      v22 = *((_DWORD *)this + 768);
      if ( (v22 & 0x20000) == 0
        || *(_QWORD *)a2 - *((_QWORD *)this + 369) >= *((_QWORD *)this + 12)
                                                    * (unsigned __int64)*((unsigned int *)this + 785)
                                                    / 0x3E8 )
      {
        v23 = 0;
        v24 = *((_DWORD *)this + 768);
        v25 = (_DWORD *)((char *)this + 2824);
        if ( *((_DWORD *)this + 706) != 5 && (*((_DWORD *)this + 698) == 2 || (v22 & 2) != 0 || (v22 & 4) != 0) )
        {
          *((_DWORD *)this + 706) = 5;
          if ( v21 && !v5 )
            *((_DWORD *)v6 + 35) = 0;
          v23 = 1;
          CBasePTPEngine::SendLastActionTelemetry((__int64)this, 8);
          v24 = *((_DWORD *)this + 768);
          v25 = (_DWORD *)((char *)this + 2824);
        }
        v26 = v24;
        if ( *v25 == 4 || *((_DWORD *)this + 698) != 1 || (v24 & 2) != 0 || (v24 & 4) != 0 )
        {
          if ( !v23 )
            goto LABEL_26;
        }
        else
        {
          *v25 = 4;
          *((_DWORD *)v6 + 35) = 0;
          CBasePTPEngine::SendLastActionTelemetry((__int64)this, 7);
          v26 = *((_DWORD *)this + 768);
        }
        *((_DWORD *)this + 716) = 0;
        *((_DWORD *)this + 715) = 0;
        *((_DWORD *)this + 718) = 0;
        *((_DWORD *)this + 717) = 0;
        v26 &= ~0x1000000u;
        *((_DWORD *)this + 768) = v26;
LABEL_26:
        if ( (v26 & 0x20000000) != 0
          && (*((_DWORD *)this + 698) == 1 && (v26 & 2) == 0 && (v26 & 4) == 0 || *((_DWORD *)this + 697) && !v5) )
        {
          CPTPEngine::ApplyElasticDragModeDeltas(this, v6, v2, &v33);
        }
        v27 = *((_DWORD *)this + 776);
        v28 = *((_DWORD *)this + 716) + v33.y;
        v33.x += *((_DWORD *)this + 715);
        v33.y = v28;
        v34.x = 100 * v33.x / v27;
        v29 = v34.x - *((_DWORD *)this + 717);
        v34.y = 100 * v28 / v27;
        v30 = v34.y - *((_DWORD *)this + 718);
        v31 = v33;
        *(struct tagPOINT *)((char *)this + 2868) = v34;
        v34 = (struct tagPOINT)__PAIR64__(v30, v29);
        *(tagPOINT *)((char *)this + 2860) = v31;
        if ( !(unsigned int)CPTPEngine::FilterMoveForStableContact(this, a2, (struct tagPOINT)__PAIR64__(v30, v29), v6)
          && (v29 || v30) )
        {
          *((_DWORD *)this + 768) |= 0x1000000u;
          ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))CBasePTPEngine::SendMouseOutput)(this, 0LL, v34);
        }
      }
    }
  }
}
