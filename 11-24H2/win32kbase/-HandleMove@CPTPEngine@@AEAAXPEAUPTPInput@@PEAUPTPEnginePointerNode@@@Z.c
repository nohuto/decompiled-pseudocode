/*
 * XREFs of ?HandleMove@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@@Z @ 0x140190450
 * Callers:
 *     ?DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CC0FC (-DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?SendMouseDownAtPoint@CPTPEngine@@AEAAXIUtagPOINT@@_N@Z @ 0x1400CD04C (-SendMouseDownAtPoint@CPTPEngine@@AEAAXIUtagPOINT@@_N@Z.c)
 *     ?CancelMouseUpTimer@CPTPEngine@@AEAAXH@Z @ 0x1400CD1FC (-CancelMouseUpTimer@CPTPEngine@@AEAAXH@Z.c)
 *     ?SendMouseUpIfPending@CPTPEngine@@AEAAXPEAI@Z @ 0x1400CD2B0 (-SendMouseUpIfPending@CPTPEngine@@AEAAXPEAI@Z.c)
 *     ?SendTotalTimeTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_TELEM_TOTALTIME@@_K@Z @ 0x1400CD37C (-SendTotalTimeTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_TELEM_TOTALTIME@@_K@Z.c)
 *     ?SendLastActionTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@@Z @ 0x1400CD3C0 (-SendLastActionTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@@Z.c)
 *     ?FilterMoveForStableContact@CPTPEngine@@AEAAHPEAUPTPInput@@UtagPOINT@@PEAUCContactState@@@Z @ 0x1400CD864 (-FilterMoveForStableContact@CPTPEngine@@AEAAHPEAUPTPInput@@UtagPOINT@@PEAUCContactState@@@Z.c)
 *     ?SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@@Z @ 0x1400CDD08 (-SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@@Z.c)
 *     ?SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z @ 0x140126A24 (-SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z.c)
 *     ?GetButtonForSimulatedPresses@CPTPEngine@@AEAAIPEAUPTPEnginePointerNode@@@Z @ 0x140151BF4 (-GetButtonForSimulatedPresses@CPTPEngine@@AEAAIPEAUPTPEnginePointerNode@@@Z.c)
 */

void __fastcall CPTPEngine::HandleMove(CPTPEngine *this, struct PTPInput *a2, struct PTPEnginePointerNode *a3)
{
  __int64 v3; // rbx
  int v5; // eax
  char *v6; // r14
  int v7; // r13d
  __int64 v8; // rbp
  int v9; // r12d
  char *v10; // r15
  unsigned int v12; // eax
  _QWORD *i; // rax
  __int64 v14; // rax
  int v15; // ebp
  unsigned int v16; // r10d
  char *v17; // r8
  struct PTPEnginePointerNode *v18; // r11
  unsigned int v19; // r9d
  int ButtonForSimulatedPresses; // eax
  unsigned int v21; // r8d
  _DWORD *v22; // r9
  char *v23; // rcx
  int v24; // eax
  int v25; // ecx
  int v26; // r14d
  int y; // ebp
  __int64 v28; // rbx
  struct tagPOINT v29; // [rsp+60h] [rbp+8h]

  v3 = *((_QWORD *)a3 + 5);
  v5 = *((_DWORD *)this + 768);
  v6 = 0LL;
  v7 = 0;
  v8 = (unsigned int)(*((_DWORD *)a3 + 1) % *((_DWORD *)this + 4));
  v9 = 0;
  v10 = (char *)this + 328 * v8 + 816;
  if ( (v5 & 0x400000) != 0 )
    *((_DWORD *)this + 768) = v5 & 0xFFAFFFFF;
  if ( *((_DWORD *)this + 706) != 2 )
  {
    CPTPEngine::SendMouseUpIfPending((struct tagPOINT *)this, (unsigned int *)this + 697);
    CPTPEngine::CancelMouseUpTimer(this, 1);
    if ( *((_DWORD *)a2 + 10) || *((_DWORD *)a2 + 13) )
    {
      CBasePTPEngine::SendInertiaOutput((__int64)this, 3);
      *((_DWORD *)a2 + 10) = 0;
    }
    v12 = *((_DWORD *)this + 768) & 0xFFFBFFFF;
    *((_DWORD *)this + 706) = 2;
    *((_DWORD *)this + 696) = v8;
    v9 = 1;
    *((_DWORD *)this + 768) = v12 & 0xFFFDFFFF;
    for ( i = (_QWORD *)((char *)this + 816); i != (_QWORD *)((char *)this + 2784); i += 41 )
    {
      i[12] = 0LL;
      *(_DWORD *)i &= ~0x20000u;
    }
    v14 = *(_QWORD *)a2;
    *(_DWORD *)v10 |= 0x20000u;
    *((_QWORD *)v10 + 12) = v14;
    if ( *((_DWORD *)this + 698) == 2 )
    {
      v15 = *((_DWORD *)this + 768);
      if ( (v15 & 0x8000000) != 0 || (v15 & 0x10000000) != 0 )
      {
        v16 = *((_DWORD *)a2 + 12);
        v17 = (char *)a2 + 56;
        v18 = 0LL;
        v19 = 0;
        if ( v16 )
        {
          while ( 1 )
          {
            v6 = (char *)this + 328 * (unsigned int)(*((_DWORD *)v17 + 1) % *((_DWORD *)this + 4)) + 816;
            if ( (*(_DWORD *)v6 & 1) != 0 && v6 != v10 )
              break;
            ++v19;
            v17 += 96;
            if ( v19 >= v16 )
            {
              v7 = 0;
              goto LABEL_18;
            }
          }
          v7 = 0;
          v18 = (struct PTPEnginePointerNode *)v17;
        }
LABEL_18:
        if ( (*((_DWORD *)v6 + 1) & 8) != 0 )
        {
          ButtonForSimulatedPresses = CPTPEngine::GetButtonForSimulatedPresses(this, v18);
          if ( ButtonForSimulatedPresses )
          {
            if ( (ButtonForSimulatedPresses != 2 || (v15 & 8) == 0)
              && (ButtonForSimulatedPresses != 8 || (v15 & 0x10) == 0) )
            {
              *(_DWORD *)v6 |= 0x10000u;
              CPTPEngine::SendMouseDownAtPoint(
                this,
                ButtonForSimulatedPresses,
                *(struct tagPOINT *)((char *)a2 + 28),
                1);
              return;
            }
          }
        }
        LODWORD(v6) = 0;
      }
    }
    v21 = 0;
    if ( *((_DWORD *)a2 + 12) )
    {
      v22 = (_DWORD *)((char *)a2 + 60);
      do
      {
        v23 = (char *)this + 328 * (unsigned int)(*v22 % *((_DWORD *)this + 4)) + 816;
        if ( (*(_DWORD *)v23 & 1) != 0 && v23 != v10 )
          *((_DWORD *)v23 + 1) &= ~2u;
        ++v21;
        v22 += 24;
      }
      while ( v21 < *((_DWORD *)a2 + 12) );
    }
  }
  v24 = *((_DWORD *)this + 768);
  if ( (v24 & 0x80000) != 0 )
  {
    v9 = 1;
    *((_DWORD *)this + 768) = v24 & 0xFFF7FFFF;
  }
  else
  {
    if ( !v9 )
    {
      LODWORD(v6) = v3 - *((_DWORD *)this + 711);
      v7 = HIDWORD(v3) - *((_DWORD *)this + 712);
      goto LABEL_39;
    }
    *((_DWORD *)this + 768) = v24 & 0xFEFFFFFF;
    CBasePTPEngine::SendTotalTimeTelemetry((__int64)this, 1, *(_QWORD *)a2 - *((_QWORD *)v10 + 8));
  }
  *(_QWORD *)((char *)this + 2844) = *((_QWORD *)v10 + 1);
  *(_DWORD *)v10 &= ~0x4000000u;
LABEL_39:
  v25 = *((_DWORD *)this + 776);
  v26 = 100 * (int)v6 / v25;
  v29.x = v26;
  v29.y = 100 * v7 / v25;
  y = v29.y;
  v28 = (__int64)v29;
  if ( !v9 )
  {
    v26 -= *((_DWORD *)this + 713);
    y = v29.y - *((_DWORD *)this + 714);
    v28 = __PAIR64__(y, v26);
  }
  *(struct tagPOINT *)((char *)this + 2852) = v29;
  if ( !(unsigned int)CPTPEngine::FilterMoveForStableContact(
                        this,
                        a2,
                        (struct tagPOINT)v28,
                        (struct CContactState *)v10)
    && (v26 || y) )
  {
    if ( (*((_DWORD *)this + 768) & 0x1000000) == 0 )
    {
      CBasePTPEngine::SendLastActionTelemetry((__int64)this, 10);
      *((_QWORD *)v10 + 15) = *(_QWORD *)a2;
    }
    *((_DWORD *)this + 768) |= 0x1000000u;
    CBasePTPEngine::SendMouseOutput((__int64)this, 0, v28);
  }
}
