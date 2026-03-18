/*
 * XREFs of ?DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CC0FC
 * Callers:
 *     ?ProcessInput@CPTPEngine@@MEAAJPEAUPTPInput@@@Z @ 0x1400CAF50 (-ProcessInput@CPTPEngine@@MEAAJPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@@Z @ 0x1400CDD08 (-SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@@Z.c)
 *     ?ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400E8790 (-ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?TPAAPShouldAllowMoveNow@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@PEAH@Z @ 0x1400EF180 (-TPAAPShouldAllowMoveNow@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@PEAH@Z.c)
 *     ?HandleMove@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@@Z @ 0x140190450 (-HandleMove@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@@Z.c)
 *     ?HandleTap@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@@Z @ 0x14019078C (-HandleTap@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@@Z.c)
 *     ?SendWarpbackTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@UtagPOINT@@1K@Z @ 0x140221A98 (-SendWarpbackTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@UtagPOINT@@1K@Z.c)
 */

void __fastcall CPTPEngine::DoTPMouseProcessing(CPTPEngine *this, struct PTPInput *a2)
{
  int v2; // eax
  __int64 v3; // r15
  struct PTPEnginePointerNode *v5; // r13
  int v6; // r12d
  struct PTPEnginePointerNode *v8; // r14
  int v9; // r8d
  int v10; // r11d
  char *v11; // rsi
  bool v12; // cl
  int v13; // eax
  int v14; // r10d
  __int64 v15; // r9
  __int64 v16; // rcx
  char v17; // bp
  int v18; // eax
  char v19; // r8
  int v20; // edx
  struct PTPEnginePointerNode *v21; // r9
  _DWORD *v22; // r10
  int v23; // ecx
  unsigned int v24; // r11d
  _DWORD *v25; // r10
  __int64 v26; // rbp
  int v27; // r9d
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // r8
  __int64 v31; // r11
  unsigned __int64 v32; // rbp
  __int64 v33; // rdx
  unsigned int v34; // r9d
  _DWORD *v35; // r8
  __int64 v36; // rcx
  int v37; // eax
  _DWORD *v38; // [rsp+30h] [rbp-58h]
  __int64 v39; // [rsp+38h] [rbp-50h]
  int v40; // [rsp+90h] [rbp+8h]
  int v41; // [rsp+98h] [rbp+10h] BYREF
  unsigned int v42; // [rsp+A0h] [rbp+18h]
  struct PTPEnginePointerNode *v43; // [rsp+A8h] [rbp+20h]

  v2 = *((_DWORD *)this + 706);
  v3 = *(_QWORD *)a2;
  v43 = 0LL;
  v38 = 0LL;
  v39 = v3;
  v5 = 0LL;
  v40 = 0;
  v6 = 0;
  if ( *((_DWORD *)a2 + 9) )
    return;
  if ( (*((_DWORD *)this + 768) & 1) != 0 )
    return;
  if ( (unsigned int)(v2 - 1) > 1 )
    return;
  if ( *((_DWORD *)this + 6) )
    return;
  v42 = 0;
  v8 = (struct PTPInput *)((char *)a2 + 56);
  if ( !*((_DWORD *)a2 + 12) )
    return;
  do
  {
    v9 = *((_DWORD *)v8 + 3);
    if ( !v9 )
      goto LABEL_85;
    v10 = *((_DWORD *)this + 706);
    v11 = (char *)this + 328 * (unsigned int)(*((_DWORD *)v8 + 1) % *((_DWORD *)this + 4)) + 816;
    v12 = v10 == 2 && *((_DWORD *)this + 696) == *((_DWORD *)v8 + 1) % *((_DWORD *)this + 4);
    if ( (v9 & 0x40000) != 0
      || (*(_DWORD *)v11 & 4) == 0
      || (*((_DWORD *)v11 + 1) & 2) == 0
      || *((_DWORD *)this + 697)
      || *((_DWORD *)this + 705)
      || !v12 && v10 == 2
      || (*(_DWORD *)v11 & 0x100) != 0 && *((_DWORD *)this + 698) != 1 && !v12 )
    {
      v23 = *(_DWORD *)v11;
      if ( *(int *)v11 >= 0
        || v10 == 2
        || (v9 & 0x48000) != 0x40000
        || (v23 & 0x20) == 0
        || (v23 & 0x10) != 0
        || (v23 & 0x1000000) != 0
        || (v23 & 0x2000000) != 0
        || (v23 & 4) != 0 && ((v23 & 0x20000) == 0 || (*((_DWORD *)this + 768) & 0x1000000) != 0)
        || *((_QWORD *)this + 361) >= *((_QWORD *)v11 + 8) )
      {
        if ( (*((_DWORD *)this + 821) & 0x100) != 0 && (v9 & 0x48000) == 0x40000 )
        {
          v31 = *((_QWORD *)v11 + 13);
          if ( v31 != *((_QWORD *)v11 + 8) )
          {
            v32 = *((_QWORD *)this + 12);
            if ( v3 - v31 < v32 * *((unsigned int *)this + 798) / 0x3E8 )
            {
              v33 = *((_QWORD *)v11 + 1);
              if ( *((unsigned int *)this + 779)
                 * (__int64)(int)((HIDWORD(*((_QWORD *)v11 + 6)) - HIDWORD(v33))
                                * (HIDWORD(*((_QWORD *)v11 + 6)) - HIDWORD(v33)))
                 + (unsigned __int64)*((unsigned int *)this + 780)
                 * (int)((*((_QWORD *)v11 + 6) - v33) * (*((_QWORD *)v11 + 6) - v33)) < *((unsigned int *)this + 779)
                                                                                      * (unsigned __int64)*((unsigned int *)this + 780)
                && (*(_DWORD *)v11 & 0x20000) != 0
                && (*((_DWORD *)a2 + 7) != *((_DWORD *)v11 + 14) || *((_DWORD *)a2 + 8) != *((_DWORD *)v11 + 15)) )
              {
                CBasePTPEngine::SendWarpbackTelemetry(
                  this,
                  14LL,
                  *(_QWORD *)((char *)a2 + 28),
                  *((_QWORD *)v11 + 7),
                  1000 * (v3 - v31) / v32);
                CBasePTPEngine::SendMouseOutput(this, 5LL, *((_QWORD *)v11 + 7));
              }
            }
          }
        }
      }
      else
      {
        v6 = 1;
        v5 = v8;
        if ( !*((_DWORD *)this + 699) )
        {
          *((_DWORD *)this + 700) = 0;
          v24 = 0;
          *(_QWORD *)((char *)this + 2876) = *((_QWORD *)v11 + 1);
          if ( *((_DWORD *)a2 + 12) )
          {
            v25 = (_DWORD *)((char *)a2 + 60);
            do
            {
              v26 = 328LL * (unsigned int)(*v25 % *((_DWORD *)this + 4));
              v27 = *(_DWORD *)((char *)this + v26 + 816);
              if ( (v27 & 1) != 0 )
              {
                v28 = *((_QWORD *)v11 + 9);
                v29 = *(_QWORD *)((char *)this + v26 + 888);
                v30 = v28 - v29;
                if ( v28 <= v29 )
                  v30 = *(_QWORD *)((char *)this + v26 + 888) - v28;
                if ( v30 < *((_QWORD *)this + 12) * (unsigned __int64)*((unsigned int *)this + 808) / 0x3E8 )
                {
                  *(_DWORD *)((char *)this + v26 + 816) = v27 | 0x80000;
                  ++*((_DWORD *)this + 699);
                }
              }
              ++v24;
              v25 += 24;
            }
            while ( v24 < *((_DWORD *)a2 + 12) );
            v3 = v39;
          }
        }
        ++*((_DWORD *)this + 700);
      }
      goto LABEL_77;
    }
    if ( v10 != 2 )
    {
      v13 = *((_DWORD *)this + 768);
      if ( (v13 & 0x40000) == 0 && (v13 & 0x20000) != 0 )
      {
        *((_QWORD *)this + 369) = v3;
        *((_DWORD *)this + 768) = v13 | 0x40000;
      }
    }
    v14 = *((_DWORD *)this + 768);
    v15 = *((_QWORD *)this + 12);
    if ( (v14 & 0x20000) == 0 )
    {
      v16 = *((_QWORD *)this + 12);
LABEL_29:
      v17 = 1;
      goto LABEL_30;
    }
    v16 = *((_QWORD *)this + 12);
    if ( v3 - *((_QWORD *)this + 369) >= v15 * (unsigned __int64)*((unsigned int *)this + 785) / 0x3E8 )
      goto LABEL_29;
    v17 = 0;
LABEL_30:
    v18 = *((_DWORD *)this + 768);
    if ( v10 != 2 && (v14 & 0x400000) == 0 && (v14 & 0x100000) != 0 )
    {
      v18 = v14 | 0x400000;
      *((_QWORD *)this + 371) = v3;
      *((_DWORD *)this + 768) = v14 | 0x400000;
    }
    if ( (v18 & 0x100000) != 0 )
    {
      if ( v3 - *((_QWORD *)this + 371) < v15 * (unsigned __int64)*((unsigned int *)this + 812) / 0x3E8 )
      {
        v19 = 0;
        goto LABEL_38;
      }
      v16 = v15;
    }
    v19 = 1;
    v15 = v16;
LABEL_38:
    if ( !v17 || !v19 || v3 - *((_QWORD *)v11 + 9) < v15 * (unsigned __int64)*((unsigned int *)this + 845) / 0x3E8 )
      goto LABEL_77;
    v41 = 0;
    if ( !(unsigned int)CPTPEngine::TPAAPShouldAllowMoveNow(this, a2, (struct CContactState *)v11, &v41) )
    {
      if ( v41 )
      {
        CPTPEngine::ResetDragThresholds(this, a2);
        *((_DWORD *)this + 706) = 1;
      }
LABEL_77:
      v22 = v38;
      v21 = v43;
      v20 = v40;
      goto LABEL_78;
    }
    v20 = 1;
    v43 = v8;
    v40 = 1;
    v21 = v8;
    v22 = v11;
    v38 = v11;
LABEL_78:
    if ( (*((_DWORD *)v8 + 3) & 0x40000) != 0 && v5 != v8 )
    {
      *((_DWORD *)this + 699) = 0;
      CPTPEngine::ResetDragThresholds(this, a2);
      v34 = 0;
      if ( *((_DWORD *)a2 + 12) )
      {
        v35 = (_DWORD *)((char *)a2 + 60);
        do
        {
          v36 = (unsigned int)(*v35 % *((_DWORD *)this + 4));
          v37 = *((_DWORD *)this + 82 * v36 + 204);
          if ( (v37 & 1) != 0 )
            *((_DWORD *)this + 82 * v36 + 204) = v37 & 0x7FFFFFFF;
          ++v34;
          v35 += 24;
        }
        while ( v34 < *((_DWORD *)a2 + 12) );
      }
LABEL_85:
      v20 = v40;
      v21 = v43;
      v22 = v38;
    }
    v8 = (struct PTPEnginePointerNode *)((char *)v8 + 96);
    ++v42;
  }
  while ( v42 < *((_DWORD *)a2 + 12) );
  if ( v20 )
  {
    if ( v6 && ((*v22 & 0x100) != 0 || (*v22 & 0x10) == 0) )
LABEL_93:
      CPTPEngine::HandleTap(this, a2, v5);
    else
      CPTPEngine::HandleMove(this, a2, v21);
  }
  else if ( v6 )
  {
    goto LABEL_93;
  }
}
