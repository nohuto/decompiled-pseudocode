/*
 * XREFs of ?LogicalCursorPosFromDpiAwarenessContext@CMouseProcessor@@QEAA?AUtagPOINT@@K@Z @ 0x140043FE0
 * Callers:
 *     CaptureLogicalCursorPosToQMouseMove @ 0x140045C90 (CaptureLogicalCursorPosToQMouseMove.c)
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x14005E1E8 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 * Callees:
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1400451F0 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     W32GetCurrentThreadNonPaged @ 0x1401A2438 (W32GetCurrentThreadNonPaged.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

struct tagPOINT __fastcall CMouseProcessor::LogicalCursorPosFromDpiAwarenessContext(
        CMouseProcessor *this,
        __int64 a2,
        unsigned int a3)
{
  unsigned int v4; // esi
  __int64 v6; // rcx
  __int64 v7; // r14
  _QWORD *CurrentThreadNonPaged; // rax
  __int64 v9; // rbx
  __int64 CurrentProcessWin32Process; // rax
  int (*v11)(void); // rax
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rax
  int v15; // r10d
  int v16; // edx
  unsigned __int64 v17; // r15
  __int128 v18; // xmm0
  unsigned __int16 v19; // si
  unsigned __int64 v20; // r11
  int v21; // eax
  signed int v22; // r9d
  unsigned __int64 v23; // rbp
  unsigned __int64 v24; // rax
  int v25; // edx
  int v26; // r9d
  signed int v27; // r9d
  int v28; // edx
  unsigned __int64 v29; // rax
  int v30; // ebx
  unsigned int v31; // r11d
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rax
  int v34; // r9d
  int v35; // ecx
  signed int v36; // r9d
  unsigned __int64 v37; // rax
  int v38; // eax
  int v39; // edx
  signed int v40; // r9d
  unsigned __int64 v41; // rax
  bool v42; // cc
  __int64 v43; // [rsp+30h] [rbp-58h]

  *(_QWORD *)a2 = 0LL;
  v4 = a3;
  if ( (((unsigned __int16)(a3 >> 8) ^ (unsigned __int16)(*((_DWORD *)this + 13) >> 8)) & 0x1FF) != 0 )
  {
    v7 = *(_QWORD *)(W32GetUserSessionState(this) + 19928);
    if ( !v4 )
    {
      v4 = 18;
      CurrentThreadNonPaged = (_QWORD *)W32GetCurrentThreadNonPaged(v6);
      if ( CurrentThreadNonPaged )
      {
        v9 = *CurrentThreadNonPaged;
        if ( *CurrentThreadNonPaged )
        {
          if ( *(_QWORD *)(v9 + 408) )
            CaptureAndValidateUserModeDpiAwarenessContext(*CurrentThreadNonPaged);
          if ( *(_DWORD *)(v9 + 400) )
          {
            v4 = *(_DWORD *)(v9 + 400);
          }
          else
          {
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
            if ( CurrentProcessWin32Process && *(_QWORD *)CurrentProcessWin32Process )
              v4 = *(_DWORD *)(CurrentProcessWin32Process + 268);
          }
        }
      }
    }
    if ( (v4 & 0xF) == 2
      || (v11 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 3920LL)) == 0LL
      || v11() < 0 )
    {
      *(_QWORD *)a2 = *(_QWORD *)(v7 + 4960);
    }
    else
    {
      v12 = *(_QWORD *)(v7 + 4960);
      v13 = *(_QWORD *)(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 3928LL);
      if ( v13 )
        v13 = ((__int64 (__fastcall *)(__int64, __int64, __int64))v13)(v12, 2LL, 18LL);
      v14 = *(_QWORD *)(v13 + 40);
      v15 = 0x80000000;
      v16 = *(unsigned __int16 *)(v14 + 62);
      v17 = *(unsigned __int16 *)(v14 + 60);
      v18 = *(_OWORD *)(v14 + 28);
      v43 = v18;
      v19 = (v4 >> 8) & 0x1FF;
      if ( v19 )
      {
        v20 = *(unsigned __int16 *)(v14 + 62);
        v21 = -(int)v18;
        v22 = ((int)v18 >> 31) & 0xFFFFFFFE;
        if ( (int)v18 >= 0 )
          v21 = v18;
        if ( v16 )
        {
          v23 = (__int64)(((unsigned __int64)(unsigned int)v20 >> 1) + v19 * (__int64)v21) / (int)v20;
          if ( v23 > 0x7FFFFFFF )
          {
            v24 = DWORD1(v18);
            v42 = v22 <= -1;
            v25 = DWORD1(v18);
            v26 = DWORD1(v18);
            if ( v42 )
              LODWORD(v23) = 0x80000000;
            else
              LODWORD(v23) = 0x7FFFFFFF;
          }
          else
          {
            if ( v22 <= -1 )
              LODWORD(v23) = -(int)v23;
            v24 = DWORD1(v18);
            v25 = DWORD1(v18);
            v26 = DWORD1(v18);
          }
          v27 = (v26 >> 31) & 0xFFFFFFFE;
          v28 = -v25;
          if ( v28 < 0 )
            v28 = v24;
          v29 = (__int64)((v20 >> 1) + v28 * (unsigned __int64)v19) / (int)v20;
          v30 = v29;
          if ( v29 > 0x7FFFFFFF )
          {
            v30 = 0x80000000;
            if ( v27 > -1 )
              v30 = 0x7FFFFFFF;
          }
          else if ( v27 <= -1 )
          {
            v30 = -(int)v29;
          }
        }
        else
        {
          LODWORD(v23) = 0x7FFFFFFF;
          if ( v22 <= -1 )
            LODWORD(v23) = 0x80000000;
          v30 = 0x80000000;
          if ( (int)((SDWORD1(v18) >> 31) & 0xFFFFFFFE) > -1 )
            v30 = 0x7FFFFFFF;
        }
        v31 = v17;
        if ( !(_DWORD)v17 || (v32 = (__int64)(v17 >> 1) / (int)v17, v32 > 0x7FFFFFFF) )
          LODWORD(v32) = 0x7FFFFFFF;
        LODWORD(v43) = v32 + v23;
        if ( !(_DWORD)v17 || (v33 = (__int64)(v17 >> 1) / (int)v17, v33 > 0x7FFFFFFF) )
          LODWORD(v33) = 0x7FFFFFFF;
        HIDWORD(v43) = v30 + v33;
      }
      else
      {
        v31 = *(unsigned __int16 *)(v14 + 60);
      }
      v34 = *(_DWORD *)(v7 + 4960) - v18;
      v35 = v18 - *(_DWORD *)(v7 + 4960);
      if ( v34 >= 0 )
        v35 = *(_DWORD *)(v7 + 4960) - v18;
      v36 = (v34 >> 31) & 0xFFFFFFFE;
      if ( v31 && (v37 = (__int64)(((unsigned __int64)v31 >> 1) + v35 * (unsigned __int64)v19) / v31, v37 <= 0x7FFFFFFF) )
      {
        if ( v36 <= -1 )
          LODWORD(v37) = -(int)v37;
      }
      else
      {
        LODWORD(v37) = 0x80000000;
        if ( v36 > -1 )
          LODWORD(v37) = 0x7FFFFFFF;
      }
      *(_DWORD *)a2 = v43 + v37;
      v38 = *(_DWORD *)(v7 + 4964) - DWORD1(v18);
      v39 = DWORD1(v18) - *(_DWORD *)(v7 + 4964);
      v40 = (v38 >> 31) & 0xFFFFFFFE;
      if ( v38 >= 0 )
        v39 = *(_DWORD *)(v7 + 4964) - DWORD1(v18);
      if ( v31 && (v41 = (__int64)(((unsigned __int64)v31 >> 1) + v39 * (unsigned __int64)v19) / v31, v41 <= 0x7FFFFFFF) )
      {
        v15 = (__int64)(((unsigned __int64)v31 >> 1) + v39 * (unsigned __int64)v19) / v31;
        if ( v40 <= -1 )
          v15 = -(int)v41;
      }
      else if ( v40 > -1 )
      {
        v15 = 0x7FFFFFFF;
      }
      *(_DWORD *)(a2 + 4) = v15 + HIDWORD(v43);
    }
  }
  else
  {
    *(_DWORD *)a2 = *((_DWORD *)this + 11);
    *(_DWORD *)(a2 + 4) = *((_DWORD *)this + 12);
  }
  return (struct tagPOINT)a2;
}
