/*
 * XREFs of ?BuildEnvironment@CPTPProcessor@@AEAAXQEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x140054054
 * Callers:
 *     ?UpdateEnvironment@CPTPProcessor@@AEAAXW4EnvironmentUpdateOptions@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x140053E64 (-UpdateEnvironment@CPTPProcessor@@AEAAXW4EnvironmentUpdateOptions@@PEAUtagHID_POINTER_DEVICE_INF.c)
 *     ?InitState@CPTPProcessor@@AEAAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x140152874 (-InitState@CPTPProcessor@@AEAAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x140047EB8 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     EngMulDiv @ 0x140053870 (EngMulDiv.c)
 *     memset @ 0x14023F500 (memset.c)
 */

void __fastcall CPTPProcessor::BuildEnvironment(CPTPProcessor *this, struct tagHID_POINTER_DEVICE_INFO *const a2)
{
  char *v2; // rdi
  _OWORD *v5; // r14
  __int64 v6; // rcx
  __int64 v7; // rcx
  _DWORD *UserSessionState; // rbp
  int v9; // r9d
  int v10; // r8d
  int v11; // edx
  int v12; // r8d
  bool v13; // sf
  int v14; // r9d
  int v15; // r8d
  int v16; // edx
  int v17; // r8d
  INT v18; // edx
  int v19; // ebp
  INT v20; // ebx
  int v21; // ebx
  INT v22; // eax
  INT v23; // r8d
  int v24; // eax
  int v25; // ecx
  int v26; // edx
  int v27; // eax
  _OWORD *v28; // rcx

  v2 = (char *)this + 560;
  memset((char *)this + 560, 0, 0xA0uLL);
  v5 = v2 + 16;
  *(_DWORD *)v2 = *((_DWORD *)a2 + 194);
  *((_OWORD *)v2 + 1) = *(_OWORD *)((char *)a2 + 140);
  *((_DWORD *)v2 + 22) = *((_DWORD *)a2 + 241);
  v7 = *(_QWORD *)(W32GetUserSessionState(v6) + 19928);
  *((_DWORD *)v2 + 3) = *(_DWORD *)(v7 + 1988) != 0;
  *((union _LARGE_INTEGER *)v2 + 10) = gliQpcFreq;
  UserSessionState = (_DWORD *)W32GetUserSessionState(v7);
  *((_DWORD *)this + 175) = -__CFSHR__(UserSessionState[4196], 3);
  *((_DWORD *)this + 176) = -__CFSHR__(UserSessionState[4196], 5);
  *((_DWORD *)this + 177) = -__CFSHR__(UserSessionState[4196], 4);
  *((_DWORD *)this + 178) = -__CFSHR__(UserSessionState[4196], 6);
  *((_DWORD *)this + 179) = UserSessionState[4197];
  *((_DWORD *)v2 + 1) = *((_DWORD *)a2 + 67);
  *((_OWORD *)v2 + 2) = *(_OWORD *)((char *)a2 + 140);
  *((_DWORD *)v2 + 8) += *((_DWORD *)a2 + 69);
  v9 = *((_DWORD *)v2 + 9) + *((_DWORD *)a2 + 70);
  v10 = *((_DWORD *)v2 + 11);
  v11 = *((_DWORD *)v2 + 8);
  *((_DWORD *)v2 + 9) = v9;
  *((_DWORD *)v2 + 10) -= *((_DWORD *)a2 + 71);
  v12 = v10 - *((_DWORD *)a2 + 72);
  v13 = *((_DWORD *)v2 + 10) - v11 < 0;
  *((_DWORD *)v2 + 11) = v12;
  if ( v13 || v12 - v9 < 0 )
    *((_OWORD *)v2 + 2) = *(_OWORD *)((char *)a2 + 140);
  *((_OWORD *)v2 + 3) = *(_OWORD *)((char *)a2 + 140);
  *((_DWORD *)v2 + 12) += *((_DWORD *)a2 + 73);
  v14 = *((_DWORD *)v2 + 13) + *((_DWORD *)a2 + 74);
  v15 = *((_DWORD *)v2 + 15);
  v16 = *((_DWORD *)v2 + 12);
  *((_DWORD *)v2 + 13) = v14;
  *((_DWORD *)v2 + 14) -= *((_DWORD *)a2 + 75);
  v17 = v15 - *((_DWORD *)a2 + 76);
  v13 = *((_DWORD *)v2 + 14) - v16 < 0;
  *((_DWORD *)v2 + 15) = v17;
  if ( v13 || v17 - v14 < 0 )
    *((_OWORD *)v2 + 3) = *(_OWORD *)((char *)a2 + 140);
  v18 = UserSessionState[4201];
  if ( !v18 )
    v18 = *((_DWORD *)a2 + 77);
  v19 = UserSessionState[4202];
  if ( !v19 )
    v19 = *((_DWORD *)a2 + 78);
  *((_OWORD *)v2 + 4) = *(_OWORD *)((char *)a2 + 140);
  v20 = *((_DWORD *)a2 + 37);
  v21 = v20 - EngMulDiv(v20, v18, 100);
  *((_DWORD *)v2 + 16) = v21;
  v22 = EngMulDiv(*((_DWORD *)a2 + 38), 100 - v19, 100);
  *((_DWORD *)v2 + 17) = v22;
  v23 = v22;
  v24 = *((_DWORD *)a2 + 37);
  v25 = v21;
  if ( v21 >= v24 )
    v25 = *((_DWORD *)a2 + 37);
  if ( v25 <= *((_DWORD *)a2 + 35) )
  {
    v21 = *((_DWORD *)a2 + 35);
  }
  else if ( v21 >= v24 )
  {
    v21 = *((_DWORD *)a2 + 37);
  }
  *((_DWORD *)v2 + 16) = v21;
  v26 = *((_DWORD *)a2 + 38) - ((*((_DWORD *)a2 + 92) & 8) == 0 ? 0x3E8 : 0);
  v27 = v26;
  if ( v23 < v26 )
    v27 = v23;
  if ( v27 <= *((_DWORD *)a2 + 36) )
  {
    v26 = *((_DWORD *)a2 + 36);
  }
  else if ( v23 < v26 )
  {
    v26 = v23;
  }
  *((_DWORD *)v2 + 17) = v26;
  *(_OWORD *)(v2 + 92) = *(_OWORD *)((char *)a2 + 332);
  *(_OWORD *)(v2 + 108) = *(_OWORD *)((char *)a2 + 348);
  if ( !IsRectEmptyInl((const struct tagRECT *)((char *)a2 + 316)) )
    v5 = v28;
  *(_OWORD *)(v2 + 124) = *v5;
  *((_DWORD *)v2 + 2) = *((_DWORD *)a2 + 68);
}
