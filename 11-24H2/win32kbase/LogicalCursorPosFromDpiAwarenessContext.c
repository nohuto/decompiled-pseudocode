/*
 * XREFs of LogicalCursorPosFromDpiAwarenessContext @ 0x140044AB0
 * Callers:
 *     <none>
 * Callees:
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1400451F0 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     W32GetCurrentThreadNonPaged @ 0x1401A2438 (W32GetCurrentThreadNonPaged.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall LogicalCursorPosFromDpiAwarenessContext(__int64 a1)
{
  unsigned int v1; // edi
  __int64 v2; // rsi
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v7; // rcx
  __int64 v8; // r14
  _QWORD *CurrentThreadNonPaged; // rax
  __int64 v10; // rbx
  __int64 CurrentProcessWin32Process; // rax
  int (*v12)(void); // rax
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, __int64, __int64); // rax
  __int64 v15; // rax
  int v16; // r10d
  unsigned __int16 v17; // di
  __int128 v18; // xmm0
  unsigned __int64 v19; // rbp
  unsigned __int64 v20; // r11
  int v21; // edx
  signed int v22; // r9d
  unsigned __int64 v23; // rsi
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
  __int64 v43; // [rsp+20h] [rbp-58h]
  __int64 v44; // [rsp+90h] [rbp+18h]

  v1 = a1;
  v2 = 0LL;
  v3 = *(_QWORD *)(W32GetUserSessionState(a1) + 3144);
  if ( !v3 )
    return 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  if ( !v4 )
    return 0LL;
  v5 = v1 >> 8;
  if ( (((unsigned __int16)v5 ^ (unsigned __int16)(*(_DWORD *)(v4 + 52) >> 8)) & 0x1FF) == 0 )
    return *(_QWORD *)(v4 + 44);
  v8 = *(_QWORD *)(W32GetUserSessionState(v5) + 19928);
  if ( !v1 )
  {
    v1 = 18;
    CurrentThreadNonPaged = (_QWORD *)W32GetCurrentThreadNonPaged(v7);
    if ( CurrentThreadNonPaged )
    {
      v10 = *CurrentThreadNonPaged;
      if ( *CurrentThreadNonPaged )
      {
        if ( *(_QWORD *)(v10 + 408) )
          CaptureAndValidateUserModeDpiAwarenessContext(*CurrentThreadNonPaged);
        if ( *(_DWORD *)(v10 + 400) )
        {
          v1 = *(_DWORD *)(v10 + 400);
        }
        else
        {
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
          if ( CurrentProcessWin32Process && *(_QWORD *)CurrentProcessWin32Process )
            v1 = *(_DWORD *)(CurrentProcessWin32Process + 268);
        }
      }
    }
  }
  if ( (v1 & 0xF) == 2 )
    return *(_QWORD *)(v8 + 4960);
  v12 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 3920LL);
  if ( !v12 || v12() < 0 )
    return *(_QWORD *)(v8 + 4960);
  v13 = *(_QWORD *)(v8 + 4960);
  v14 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 3928LL);
  if ( v14 )
    v2 = v14(v13, 2LL, 18LL);
  v15 = *(_QWORD *)(v2 + 40);
  v16 = 0x80000000;
  v17 = (v1 >> 8) & 0x1FF;
  v18 = *(_OWORD *)(v15 + 28);
  v19 = *(unsigned __int16 *)(v15 + 60);
  v43 = v18;
  if ( v17 )
  {
    v20 = *(unsigned __int16 *)(v15 + 62);
    v21 = -(int)v18;
    v22 = ((int)v18 >> 31) & 0xFFFFFFFE;
    if ( (int)v18 >= 0 )
      v21 = v18;
    if ( *(_WORD *)(v15 + 62) )
    {
      v23 = (__int64)(((unsigned __int64)*(unsigned __int16 *)(v15 + 62) >> 1) + v21 * (unsigned __int64)v17)
          / *(unsigned __int16 *)(v15 + 62);
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
      v29 = (__int64)((v20 >> 1) + v28 * (unsigned __int64)v17) / (int)v20;
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
    v31 = v19;
    if ( !(_DWORD)v19 || (v32 = (__int64)(v19 >> 1) / (int)v19, v32 > 0x7FFFFFFF) )
      LODWORD(v32) = 0x7FFFFFFF;
    LODWORD(v43) = v23 + v32;
    if ( !(_DWORD)v19 || (v33 = (__int64)(v19 >> 1) / (int)v19, v33 > 0x7FFFFFFF) )
      LODWORD(v33) = 0x7FFFFFFF;
    HIDWORD(v43) = v30 + v33;
  }
  else
  {
    v31 = *(unsigned __int16 *)(v15 + 60);
  }
  v34 = *(_DWORD *)(v8 + 4960) - v18;
  v35 = v18 - *(_DWORD *)(v8 + 4960);
  if ( v34 >= 0 )
    v35 = *(_DWORD *)(v8 + 4960) - v18;
  v36 = (v34 >> 31) & 0xFFFFFFFE;
  if ( v31 && (v37 = (__int64)(((unsigned __int64)v31 >> 1) + v35 * (unsigned __int64)v17) / v31, v37 <= 0x7FFFFFFF) )
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
  LODWORD(v44) = v43 + v37;
  v38 = *(_DWORD *)(v8 + 4964) - DWORD1(v18);
  v39 = DWORD1(v18) - *(_DWORD *)(v8 + 4964);
  v40 = (v38 >> 31) & 0xFFFFFFFE;
  if ( v38 >= 0 )
    v39 = *(_DWORD *)(v8 + 4964) - DWORD1(v18);
  if ( v31 && (v41 = (__int64)(((unsigned __int64)v31 >> 1) + v39 * (unsigned __int64)v17) / v31, v41 <= 0x7FFFFFFF) )
  {
    v16 = (__int64)(((unsigned __int64)v31 >> 1) + v39 * (unsigned __int64)v17) / v31;
    if ( v40 <= -1 )
      v16 = -(int)v41;
  }
  else if ( v40 > -1 )
  {
    v16 = 0x7FFFFFFF;
  }
  HIDWORD(v44) = v16 + HIDWORD(v43);
  return v44;
}
