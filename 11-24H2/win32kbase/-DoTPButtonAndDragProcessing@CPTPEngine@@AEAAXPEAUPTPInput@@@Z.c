/*
 * XREFs of ?DoTPButtonAndDragProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CC728
 * Callers:
 *     ?ProcessInput@CPTPEngine@@MEAAJPEAUPTPInput@@@Z @ 0x1400CAF50 (-ProcessInput@CPTPEngine@@MEAAJPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?SendMouseDownAtPoint@CPTPEngine@@AEAAXIUtagPOINT@@_N@Z @ 0x1400CD04C (-SendMouseDownAtPoint@CPTPEngine@@AEAAXIUtagPOINT@@_N@Z.c)
 *     ?SendMouseUpAtPoint@CPTPEngine@@AEAAXIUtagPOINT@@@Z @ 0x1400CD2E0 (-SendMouseUpAtPoint@CPTPEngine@@AEAAXIUtagPOINT@@@Z.c)
 *     ?SendLastActionTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@@Z @ 0x1400CD3C0 (-SendLastActionTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@@Z.c)
 *     ?HandleDrag@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CD408 (-HandleDrag@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?SendLeftDownFromPhysical@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUtagPOINT@@W4tagPTP_ACTION@@@Z @ 0x1400CDE34 (-SendLeftDownFromPhysical@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUtagPOINT@@W4tagPTP_ACTION@@@Z.c)
 *     ?SendPositionTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_TELEM_POSITION@@UtagPOINT@@@Z @ 0x1400CDF1C (-SendPositionTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_TELEM_POSITION@@UtagPOINT@@@Z.c)
 *     ?IsRCZClick@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@PEAPEAUtagPOINT@@@Z @ 0x1400DC9D0 (-IsRCZClick@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@PEAPEAUtagPOINT@@@Z.c)
 *     ?SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@_N@Z @ 0x1400E8604 (-SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@_N@Z.c)
 *     ?ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400E8790 (-ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KH@Z @ 0x1400EF2C8 (-TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KH@Z.c)
 *     ?DoTPButtonWarpBack@CPTPEngine@@AEAA?AUtagPOINT@@PEAUPTPInput@@@Z @ 0x140155D90 (-DoTPButtonWarpBack@CPTPEngine@@AEAA-AUtagPOINT@@PEAUPTPInput@@@Z.c)
 *     ?SendTimedMouseClick@CPTPEngine@@AEAAXIUtagPOINT@@H@Z @ 0x140199758 (-SendTimedMouseClick@CPTPEngine@@AEAAXIUtagPOINT@@H@Z.c)
 *     ?SendShellOutput@CBasePTPEngine@@IEAAXW4Action@Shell@Payload@PTPEngineOutput@@@Z @ 0x140221A50 (-SendShellOutput@CBasePTPEngine@@IEAAXW4Action@Shell@Payload@PTPEngineOutput@@@Z.c)
 */

void __fastcall CPTPEngine::DoTPButtonAndDragProcessing(CPTPEngine *this, struct PTPInput *a2)
{
  int v2; // ebp
  int v3; // esi
  int v5; // r12d
  int v6; // r15d
  int v8; // ecx
  BOOL v9; // edx
  __int64 v10; // r13
  unsigned int v11; // ebp
  unsigned int v12; // ecx
  unsigned int v13; // r14d
  _DWORD *v14; // rsi
  struct CContactState *v15; // rdx
  int v16; // eax
  int v17; // r9d
  int v18; // ecx
  int v19; // esi
  bool v20; // zf
  unsigned int v21; // eax
  char *v22; // r11
  _DWORD *v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  char *v26; // r13
  char *v27; // r15
  unsigned __int64 v28; // r14
  unsigned __int8 v29; // bp
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rax
  __int64 v32; // rcx
  int v33; // r9d
  int v34; // eax
  unsigned int v35; // r9d
  __int64 v36; // rdx
  int v37; // eax
  unsigned int v38; // edx
  int v39; // ebp
  struct CContactState *v40; // r14
  int v41; // eax
  struct tagPOINT v42; // r8
  int v43; // r9d
  unsigned int v44; // r9d
  int v45; // ecx
  int v46; // r8d
  __int64 v47; // rdx
  __int64 v48; // r9
  int v49; // eax
  struct tagPOINT *v50; // [rsp+20h] [rbp-78h] BYREF
  __int64 v51; // [rsp+28h] [rbp-70h]
  struct CContactState *v53[2]; // [rsp+38h] [rbp-60h]
  char v54; // [rsp+A0h] [rbp+8h] BYREF
  int v55; // [rsp+A8h] [rbp+10h]
  int v56; // [rsp+B0h] [rbp+18h]
  int v57; // [rsp+B8h] [rbp+20h]

  v2 = *((_DWORD *)this + 705);
  v3 = 0;
  v55 = 0;
  v5 = 0;
  v6 = v2 & 0x10;
  v57 = v6;
  v8 = *((_DWORD *)this + 768);
  v9 = v6 != 0;
  v50 = 0LL;
  v10 = *(_QWORD *)a2;
  v11 = v2 & 0xFFFFFFEF;
  v51 = *(_QWORD *)a2;
  if ( (v8 & 1) != v9 )
  {
    v3 = 1;
    v12 = v9 | v8 & 0xFFFFFFFE;
    v55 = 1;
    *((_DWORD *)this + 768) = v12;
    if ( v6 )
    {
      *((_QWORD *)this + 362) = v10;
    }
    else
    {
      *((_QWORD *)this + 361) = *(_QWORD *)a2;
      if ( (*((_DWORD *)this + 821) & 8) != 0 )
        *((_DWORD *)this + 768) = v12 | 0x300000;
    }
    CPTPEngine::ResetDragThresholds(this, a2);
    v13 = 0;
    if ( *((_DWORD *)a2 + 12) )
    {
      v14 = (_DWORD *)((char *)a2 + 68);
      do
      {
        v15 = (CPTPEngine *)((char *)this + 328 * (unsigned int)(*(v14 - 2) % *((_DWORD *)this + 4)) + 816);
        if ( (*(_DWORD *)v15 & 1) != 0 && (*v14 & 0x40000) == 0 )
          CPTPEngine::SetContactRestingState(this, v15, 1);
        ++v13;
        v14 += 24;
      }
      while ( v13 < *((_DWORD *)a2 + 12) );
      v3 = v55;
    }
  }
  v16 = *((_DWORD *)a2 + 9);
  if ( v16 && v3 && v6 && !v11 )
  {
    *((_DWORD *)this + 768) |= 0x4000u;
    return;
  }
  v17 = *((_DWORD *)this + 768);
  if ( (v17 & 0x4000) == 0 )
    goto LABEL_23;
  if ( !v6 )
  {
    *((_DWORD *)this + 768) = v17 & 0xFFFFBFFF;
    if ( (unsigned int)CPTPEngine::TPAAPShouldAllowNow(this, a2, 0x40u, 0) && (*((_DWORD *)this + 768) & 8) == 0 )
    {
      CBasePTPEngine::SendLastActionTelemetry(this, 25LL);
      CPTPEngine::SendTimedMouseClick(this, 2u, *(struct tagPOINT *)((char *)a2 + 28), 0);
    }
LABEL_23:
    v18 = v55;
    goto LABEL_24;
  }
  if ( v16 )
  {
    if ( !v11
      && *(_QWORD *)a2 - *((_QWORD *)this + 362) < *((_QWORD *)this + 12)
                                                 * (unsigned __int64)*((unsigned int *)this + 774)
                                                 / 0x3E8 )
    {
      return;
    }
    v18 = 1;
    v5 = 1;
  }
  else
  {
    v18 = 1;
  }
  v55 = 1;
  *((_DWORD *)this + 768) = v17 & 0xFFFFBFFF;
LABEL_24:
  v19 = 0;
  v20 = (*((_DWORD *)this + 768) & 0x1000) == 0;
  *(_OWORD *)v53 = 0LL;
  if ( !v20 )
  {
    v20 = *((_DWORD *)this + 704) == 2;
    v54 = 1;
    if ( v20 )
    {
LABEL_36:
      v21 = *((_DWORD *)a2 + 12);
      v22 = 0LL;
      if ( !v21 )
        goto LABEL_66;
      v23 = (_DWORD *)((char *)a2 + 68);
      v24 = v21;
      do
      {
        v25 = 328LL * (unsigned int)(*(v23 - 2) % *((_DWORD *)this + 4));
        if ( (*(_DWORD *)((_BYTE *)this + v25 + 816) & 1) != 0
          && (*v23 & 0x40000) == 0
          && (!v22 || *(_QWORD *)((char *)this + v25 + 880) > *((_QWORD *)v22 + 8)) )
        {
          v22 = (char *)this + v25 + 816;
        }
        v23 += 24;
        --v24;
      }
      while ( v24 );
      v56 = 0;
      v26 = (char *)a2 + 68;
      while ( 1 )
      {
        v27 = (char *)this + 328 * (unsigned int)(*((_DWORD *)v26 - 2) % *((_DWORD *)this + 4)) + 816;
        if ( (*(_DWORD *)v27 & 1) != 0 && (*(_DWORD *)v26 & 0x40000) == 0 )
          break;
LABEL_64:
        v26 += 96;
        if ( (unsigned int)++v56 >= *((_DWORD *)a2 + 12) )
        {
          v6 = v57;
          v10 = v51;
          goto LABEL_66;
        }
      }
      v28 = *((_QWORD *)v27 + 8);
      v29 = 0;
      if ( v54 )
      {
        if ( v28 > *((_QWORD *)this + 362) )
        {
          *((_DWORD *)this + 768) &= ~0x1000u;
          goto LABEL_60;
        }
        if ( (*((_DWORD *)v27 + 1) & 4) != 0 )
        {
          if ( (int)((HIDWORD(*((_QWORD *)v27 + 2)) - HIDWORD(*(_QWORD *)(v26 + 28)))
                   * (HIDWORD(*((_QWORD *)v27 + 2)) - HIDWORD(*(_QWORD *)(v26 + 28)))
                   + (*((_QWORD *)v27 + 2) - *(_QWORD *)(v26 + 28)) * (*((_QWORD *)v27 + 2) - *(_QWORD *)(v26 + 28))) > (unsigned __int64)(unsigned int)(*((_DWORD *)this + 775) * *((_DWORD *)this + 775)) )
          {
            *((_DWORD *)this + 768) &= ~0x1000u;
            v5 = 1;
            v55 = 1;
            goto LABEL_60;
          }
          goto LABEL_58;
        }
LABEL_60:
        *((_DWORD *)v27 + 1) = *((_DWORD *)v27 + 1) & 0xFFFFFFFB | (4 * v29);
        if ( v29 )
        {
          ++v19;
          v32 = 2LL;
          if ( (unsigned __int64)v19 < 2 )
            v32 = v19;
          v53[v32 - 1] = (struct CContactState *)v27;
        }
        goto LABEL_64;
      }
      v30 = *(_QWORD *)a2 - v28;
      if ( v22 )
      {
        v31 = *((_QWORD *)v22 + 8);
        if ( *((_QWORD *)v22 + 12) > v31 )
        {
LABEL_59:
          v29 = 0;
          goto LABEL_60;
        }
        v30 = v31 - v28;
      }
      if ( v30 < *((_QWORD *)this + 12) * (unsigned __int64)*((unsigned int *)this + 774) / 0x3E8
        && *((_QWORD *)v27 + 12) <= v28 )
      {
LABEL_58:
        v29 = 1;
        goto LABEL_60;
      }
      goto LABEL_59;
    }
LABEL_35:
    v54 = 0;
    goto LABEL_36;
  }
  if ( v18 && v6 )
    goto LABEL_35;
LABEL_66:
  v33 = *((_DWORD *)this + 768);
  if ( (v33 & 0x1000) != 0 )
  {
    v34 = *((_DWORD *)this + 704);
    if ( v6 )
    {
      if ( v34 != 2
        || *(_QWORD *)a2 - *((_QWORD *)this + 362) < *((_QWORD *)this + 12)
                                                   * (unsigned __int64)*((unsigned int *)this + 774)
                                                   / 0x3E8 )
      {
        return;
      }
      v5 = 1;
      *((_DWORD *)this + 768) = v33 & 0xFFFFEFFF;
LABEL_90:
      v39 = *((_DWORD *)a2 + 9);
      v40 = v53[0];
      if ( v39 || v19 > 1 || !(unsigned int)CPTPEngine::IsRCZClick(this, a2, v53[0], &v50) )
      {
        if ( v19 < 2 )
          goto LABEL_117;
        if ( !v5 )
        {
          v43 = *((_DWORD *)this + 768);
          *((_DWORD *)this + 704) = v19;
          v44 = v43 & 0xFFFFCFFF | 0x1000;
          *((_DWORD *)this + 768) = v44;
          switch ( v19 )
          {
            case 2:
              v45 = *((_QWORD *)v40 + 2) - *((_QWORD *)v53[1] + 2);
              v46 = HIDWORD(*((_QWORD *)v40 + 2)) - HIDWORD(*((_QWORD *)v53[1] + 2));
              *((_DWORD *)this + 768) = v44 | (*((unsigned int *)this + 802) >= (unsigned __int64)(v46 * v46 + v45 * v45)
                                             ? 0x2000
                                             : 0);
              goto LABEL_124;
            case 3:
              v47 = 3LL;
              break;
            case 4:
              v47 = 4LL;
              break;
            case 5:
              v47 = 5LL;
              break;
            default:
              goto LABEL_124;
          }
          CBasePTPEngine::SendShellOutput(this, v47);
LABEL_124:
          if ( *((_DWORD *)this + 706) == 2 && !v6 )
            *((_DWORD *)this + 768) |= 0x80000u;
          return;
        }
        if ( v19 <= 2 )
        {
LABEL_117:
          v48 = 18LL;
          if ( v39 )
          {
            v48 = 25LL;
          }
          else if ( v5 )
          {
            v48 = 19LL;
            if ( v19 == 2 )
              v48 = 21LL;
          }
          CPTPEngine::SendLeftDownFromPhysical(this, a2, v50, v48);
        }
      }
      else
      {
        v41 = *((_DWORD *)this + 768) | 0x100;
        *((_DWORD *)this + 768) = v41;
        if ( (v41 & 0x10) == 0 )
        {
          CBasePTPEngine::SendLastActionTelemetry(this, v5 != 0 ? 22 : 16);
          if ( v50 )
            ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))CBasePTPEngine::SendPositionTelemetry)(this, 1LL, *v50);
          v42 = *(struct tagPOINT *)((char *)a2 + 28);
          if ( (*((_DWORD *)this + 821) & 0x200) != 0 )
            v42 = **(struct tagPOINT **)&CPTPEngine::DoTPButtonWarpBack(this, (struct PTPInput *)&v54);
          CPTPEngine::SendMouseDownAtPoint(this, 8u, v42, 0);
        }
      }
      goto LABEL_123;
    }
    v35 = v33 & 0xFFFFEFFF;
    *((_DWORD *)this + 768) = v35;
    switch ( v34 )
    {
      case 2:
        if ( (v35 & 0x2000) != 0 )
        {
          if ( (v35 & 0x10) != 0 )
            goto LABEL_81;
          *((_QWORD *)this + 380) = v10;
          CPTPEngine::SendTimedMouseClick(this, 8u, *(struct tagPOINT *)((char *)a2 + 28), 0);
          v36 = 17LL;
        }
        else
        {
          if ( (v35 & 8) != 0 )
            goto LABEL_81;
          *((_QWORD *)this + 380) = v10;
          CPTPEngine::SendTimedMouseClick(this, 2u, *(struct tagPOINT *)((char *)a2 + 28), 0);
          v36 = 20LL;
        }
        break;
      case 3:
        CBasePTPEngine::SendShellOutput(this, 6LL);
        v36 = 23LL;
        break;
      case 4:
        CBasePTPEngine::SendShellOutput(this, 7LL);
        v36 = 24LL;
        break;
      case 5:
        CBasePTPEngine::SendShellOutput(this, 8LL);
        v36 = 26LL;
        break;
      default:
        goto LABEL_81;
    }
    CBasePTPEngine::SendLastActionTelemetry(this, v36);
  }
LABEL_81:
  if ( !v55 )
    goto LABEL_127;
  if ( v6 )
    goto LABEL_90;
  v37 = *((_DWORD *)this + 768);
  if ( (v37 & 0x10) != 0 && (v37 & 0x100) != 0 && (v37 & 0x40) == 0 )
  {
    v38 = 16;
  }
  else
  {
    if ( (v37 & 8) == 0 || (v37 & 0x80u) == 0 || (v37 & 0x20) != 0 )
      goto LABEL_104;
    v38 = 4;
  }
  *((_QWORD *)this + 380) = v10;
  CPTPEngine::SendMouseUpAtPoint(this, v38, *(struct tagPOINT *)((char *)a2 + 28));
LABEL_104:
  *((_DWORD *)this + 768) &= 0xFFFFFE7F;
LABEL_123:
  if ( !v5 )
    goto LABEL_124;
LABEL_127:
  if ( *((_DWORD *)this + 698) <= 2u )
  {
    v49 = *((_DWORD *)this + 768);
    if ( ((v49 & 8) != 0 || (v49 & 0x10) != 0)
      && !*((_DWORD *)a2 + 9)
      && (*((_DWORD *)this + 705) || *((_DWORD *)this + 697)) )
    {
      CPTPEngine::HandleDrag(this, a2);
    }
  }
}
