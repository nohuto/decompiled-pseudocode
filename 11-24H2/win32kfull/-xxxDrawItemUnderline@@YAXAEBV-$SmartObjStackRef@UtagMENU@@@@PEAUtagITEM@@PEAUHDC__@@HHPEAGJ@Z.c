/*
 * XREFs of ?xxxDrawItemUnderline@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1402E9060
 * Callers:
 *     ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x14003C16C (-xxxDrawMenuItemText@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     xxxDrawMenuBarUnderlines @ 0x1401FF370 (xxxDrawMenuBarUnderlines.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     MNIspItemValid @ 0x14006B1A4 (MNIspItemValid.c)
 *     ?CALL_LPK@@YAHQEAUtagTHREADINFO@@@Z @ 0x14007C360 (-CALL_LPK@@YAHQEAUtagTHREADINFO@@@Z.c)
 *     xxxClientGetTextExtentPointW @ 0x14007CAC8 (xxxClientGetTextExtentPointW.c)
 *     GreGetTextExtentW @ 0x14007E5DC (GreGetTextExtentW.c)
 *     GrePatBlt @ 0x1400C4060 (GrePatBlt.c)
 *     GetDpiMetricsForCurrentThread @ 0x1402F1688 (GetDpiMetricsForCurrentThread.c)
 */

char __fastcall xxxDrawItemUnderline(
        __int64 **a1,
        __int64 a2,
        HDC a3,
        int a4,
        int a5,
        const WCHAR *SourceString,
        int a7)
{
  struct tagTHREADINFO *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct tagTHREADINFO *v14; // r12
  __int64 CurrentProcessWin32Process; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 DpiMetricsForCurrentThread; // rax
  int v20; // r15d
  int v21; // eax
  const WCHAR *v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  bool v26; // zf
  __int64 v27; // rax
  __int64 v28; // rax
  _QWORD v30[5]; // [rsp+30h] [rbp-28h] BYREF

  v11 = PtiCurrent((__int64)a1, a2);
  v14 = v11;
  if ( a7 == 0xFFFF )
    return (char)v11;
  if ( *(_DWORD *)(*(_QWORD *)a2 + 84LL) == 0x7FFFFFFF )
    goto LABEL_6;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13);
  if ( CurrentProcessWin32Process )
  {
    v13 = -*(_QWORD *)CurrentProcessWin32Process;
    v12 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    CurrentProcessWin32Process &= v12;
  }
  if ( (*(_DWORD *)(CurrentProcessWin32Process + 752) & 0xF) != 0 )
  {
LABEL_6:
    if ( a7 )
    {
      v30[0] = 0LL;
      if ( (unsigned int)CALL_LPK(v14) )
      {
        xxxClientGetTextExtentPointW(a3, SourceString, a7, v30);
        v16 = (__int64)a1[2];
        if ( !v16 )
          v16 = **a1;
        LOBYTE(v11) = MNIspItemValid(v16, a2);
        if ( !(_BYTE)v11 )
          return (char)v11;
      }
      else
      {
        GreGetTextExtentW(a3, (__int64)SourceString, (unsigned int)a7, (__int64)v30);
      }
      DpiMetricsForCurrentThread = GetDpiMetricsForCurrentThread(v18, v17);
      v13 = (unsigned int)(LODWORD(v30[0]) - *(_DWORD *)(DpiMetricsForCurrentThread + 24));
      *(_DWORD *)(*(_QWORD *)a2 + 84LL) = v13;
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)a2 + 84LL) = 0;
    }
  }
  v20 = *(_DWORD *)(*(_QWORD *)a2 + 84LL) + a4;
  if ( *(_DWORD *)(*(_QWORD *)a2 + 88LL) )
  {
LABEL_23:
    v28 = GetDpiMetricsForCurrentThread(v13, v12);
    LOBYTE(v11) = GrePatBlt(a3, v20, *(_DWORD *)(v28 + 32) + a5, *(_DWORD *)(*(_QWORD *)a2 + 88LL), 1, 15728673);
    return (char)v11;
  }
  v30[0] = 0LL;
  v21 = CALL_LPK(v14);
  v22 = &SourceString[a7];
  if ( v21 )
  {
    xxxClientGetTextExtentPointW(a3, v22, 1, v30);
    v23 = (__int64)a1[2];
    if ( !v23 )
      v23 = **a1;
    LOBYTE(v11) = MNIspItemValid(v23, a2);
    v26 = (_BYTE)v11 == 0;
  }
  else
  {
    LODWORD(v11) = GreGetTextExtentW(a3, (__int64)v22, 1LL, (__int64)v30);
    v26 = (_DWORD)v11 == 0;
  }
  if ( !v26 )
  {
    v27 = GetDpiMetricsForCurrentThread(v25, v24);
    v13 = (unsigned int)(LODWORD(v30[0]) - *(_DWORD *)(v27 + 24));
    *(_DWORD *)(*(_QWORD *)a2 + 88LL) = v13;
    goto LABEL_23;
  }
  return (char)v11;
}
