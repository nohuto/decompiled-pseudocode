/*
 * XREFs of xxxMetricsRecalc @ 0x140110EAC
 * Callers:
 *     ?xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z @ 0x14011127C (-xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z.c)
 *     xxxSystemParametersInfoWorker @ 0x14018F9C8 (xxxSystemParametersInfoWorker.c)
 *     ?xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1402900A4 (-xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z.c)
 * Callees:
 *     _GetDesktopWindow @ 0x140046470 (_GetDesktopWindow.c)
 *     BuildHwndList @ 0x140047FC0 (BuildHwndList.c)
 *     FreeHwndList @ 0x140048500 (FreeHwndList.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     _GetProp @ 0x1400639A0 (_GetProp.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxSetWindowPos @ 0x140076C44 (xxxSetWindowPos.c)
 *     HMValidateHandleNoSecure @ 0x14008CDA0 (HMValidateHandleNoSecure.c)
 *     xxxSendNotifyMessage @ 0x140119930 (xxxSendNotifyMessage.c)
 *     IsNonImmersiveBand @ 0x140148FEC (IsNonImmersiveBand.c)
 *     ?SetNormalRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@G@Z @ 0x1402DB324 (-SetNormalRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@G@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void __fastcall xxxMetricsRecalc(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6, int a7)
{
  char v8; // r13
  struct tagBWL *v9; // rax
  __int64 v10; // rdx
  struct tagBWL *v11; // rsi
  __int64 *v12; // r15
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rax
  struct tagWND *v16; // rbx
  int v17; // r14d
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rax
  _BOOL8 v22; // rcx
  __int64 UserSessionState; // rax
  __int64 Prop; // rax
  int v25; // ecx
  int v26; // r8d
  struct tagRECT v27; // xmm0
  __int64 DesktopWindow; // rax
  __int64 v29; // rdx
  int v30; // r8d
  int v31; // r9d
  unsigned int v32; // r10d
  unsigned int v33; // r11d
  __int64 v34; // rax
  __int64 v35; // rax
  char v36; // r8
  LONG bottom; // ecx
  int v38; // r10d
  __int64 v39; // rdx
  int v40; // [rsp+40h] [rbp-40h]
  struct tagBWL *v42; // [rsp+48h] [rbp-38h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+50h] [rbp-30h] BYREF
  struct tagRECT v44; // [rsp+60h] [rbp-20h] BYREF

  v40 = a2;
  v8 = a1;
  *(_QWORD *)&v44.left = PtiCurrent(a1, a2);
  v9 = BuildHwndList(
         *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v44.left + 504LL) + 24LL) + 112LL),
         3LL,
         0LL,
         1);
  v42 = v9;
  v11 = v9;
  if ( !v9 )
    return;
  v12 = (__int64 *)((char *)v9 + 32);
  v13 = (*((_QWORD *)v9 + 1) - (_QWORD)v9 - 32LL) >> 3;
  if ( (int)v13 <= 0 )
    goto LABEL_45;
  v14 = *(_QWORD *)&v44.left;
  do
  {
    LOBYTE(v10) = 1;
    v15 = HMValidateHandleNoSecure(*v12, v10);
    v16 = (struct tagWND *)v15;
    if ( !v15 )
      goto LABEL_43;
    if ( !(unsigned int)IsNonImmersiveBand(v15) )
      goto LABEL_43;
    v10 = *(_QWORD *)(*((_QWORD *)v16 + 2) + 464LL);
    if ( (*(_BYTE *)(v10 + 816) & 0x30) == 0x10 )
      goto LABEL_43;
    Win32HM_LockIntoThread<0>(v14, (__int64)v16, BugCheckParameter3);
    v17 = 0;
    if ( (v8 & 4) != 0 )
    {
      v18 = *((_QWORD *)v16 + 5);
      if ( (*(_BYTE *)(v18 + 31) & 0x20) != 0 )
      {
        v44 = *(struct tagRECT *)(v18 + 88);
LABEL_26:
        v17 = 1;
        DesktopWindow = GetDesktopWindow((__int64)v16);
        if ( v29 != DesktopWindow )
        {
          v34 = *(_QWORD *)(v29 + 40);
          v30 -= *(_DWORD *)(v34 + 108);
          v33 -= *(_DWORD *)(v34 + 104);
          v31 -= *(_DWORD *)(v34 + 104);
          v32 -= *(_DWORD *)(v34 + 108);
        }
        xxxSetWindowPos(v16, 0LL, v33, v32, v31 - v33, v30 - v32, 16700);
        goto LABEL_29;
      }
    }
    v19 = *((_QWORD *)v16 + 5);
    v20 = *(unsigned int *)(v19 + 28);
    v22 = 0;
    if ( (*(_DWORD *)(v19 + 28) & 0xC00000) == 12582912 || (v20 & 0x40000) != 0 )
    {
      v21 = *((_QWORD *)v16 + 2);
      if ( *(_DWORD *)(v21 + 672) > 0x9900u || (*(_DWORD *)(v21 + 688) & 0x30000000) == 0 )
        v22 = 1;
    }
    if ( (v8 & 1) != 0 && ((*(_BYTE *)(v19 + 30) & 4) != 0 || v22) )
    {
      UserSessionState = W32GetUserSessionState(v22, v20);
      Prop = GetProp((__int64)v16, *(unsigned __int16 *)(UserSessionState + 41398), 1u);
      v25 = a6;
      if ( (*(_BYTE *)(*((_QWORD *)v16 + 5) + 30LL) & 4) == 0 )
        v25 = a7;
      v20 = (unsigned int)(v25 + v40);
      v26 = v25 + a3;
      if ( Prop && (*(_DWORD *)(Prop + 16) & 0x20) != 0 )
      {
        *(_DWORD *)(Prop + 8) -= v20;
        *(_DWORD *)(Prop + 12) -= v26;
      }
      if ( (*(_BYTE *)(*((_QWORD *)v16 + 5) + 31LL) & 0x20) != 0 )
      {
        if ( Prop )
        {
          v44 = *(struct tagRECT *)(Prop + 20);
          v27 = v44;
          v44.right += v20;
          v44.top -= v26;
          v44.bottom += v26;
          v44.left = _mm_cvtsi128_si32((__m128i)v27) - v20;
          CHECKPOINT::SetNormalRect((CHECKPOINT *)Prop, v16, &v44, 0);
        }
        goto LABEL_29;
      }
      goto LABEL_26;
    }
LABEL_29:
    if ( (v8 & 2) != 0 )
    {
      if ( a4 )
        xxxSendNotifyMessage(v16, 128LL, 3LL, 0LL, 1);
      v35 = *((_QWORD *)v16 + 5);
      LOBYTE(v20) = *(_BYTE *)(v35 + 31);
      if ( (v20 & 0x20) == 0 && !v17 )
      {
        v36 = *(_BYTE *)(v35 + 16);
        v44 = *(struct tagRECT *)(v35 + 88);
        if ( (v36 & 1) != 0 )
          bottom = a5 + v44.bottom;
        else
          bottom = v44.bottom;
        if ( (v36 & 8) != 0
          && (v38 = a4 + bottom, bottom += a4, (v20 & 0x41) == 0x41)
          && (v39 = *(_QWORD *)(*((_QWORD *)v16 + 13) + 40LL), (*(_WORD *)(v39 + 42) & 0x2FFF) == 0x2A7) )
        {
          xxxSetWindowPos(
            v16,
            0LL,
            (unsigned int)(v44.left - *(_DWORD *)(v39 + 88)),
            (unsigned int)(v44.top - *(_DWORD *)(v39 + 92) - a4),
            v44.right - v44.left,
            v38 - v44.top,
            16444);
        }
        else
        {
          xxxSetWindowPos(v16, 0LL, 0LL, 0LL, v44.right - v44.left, bottom - v44.top, 16702);
        }
      }
    }
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v20);
LABEL_43:
    LODWORD(v13) = v13 - 1;
    ++v12;
  }
  while ( (int)v13 > 0 );
  v11 = v42;
LABEL_45:
  FreeHwndList(v11, v10);
}
