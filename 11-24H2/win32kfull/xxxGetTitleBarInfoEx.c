/*
 * XREFs of xxxGetTitleBarInfoEx @ 0x14010AFD8
 * Callers:
 *     xxxRealDefWindowProc @ 0x140252B3C (xxxRealDefWindowProc.c)
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140065000 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     IsToplevelWindowDesktopComposed @ 0x140073A04 (IsToplevelWindowDesktopComposed.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x140074CFC (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     DwmSyncGetTitleBarInfo @ 0x14010B188 (DwmSyncGetTitleBarInfo.c)
 *     xxxCalcCaptionButton @ 0x14010B4E8 (xxxCalcCaptionButton.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x14026E498 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall xxxGetTitleBarInfoEx(struct tagWND *a1, struct tagTITLEBARINFO *a2)
{
  __int64 v2; // r15
  unsigned int v4; // esi
  __int64 v6; // rdx
  __int64 v7; // rcx
  void *v8; // rbx
  NTSTATUS TitleBarInfo; // ebx
  __int64 v10; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // r12d
  char *v12; // rbx
  int v13; // eax
  int v15; // r8d
  int v16; // r9d
  _DWORD *v17; // rsi
  int v18; // ebx
  int v19; // edi
  ULONG v20; // eax
  __int64 v21; // [rsp+70h] [rbp+40h] BYREF
  int v22; // [rsp+78h] [rbp+48h] BYREF

  LODWORD(v2) = 0;
  v4 = 0;
  v22 = 0;
  if ( !(unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
    goto LABEL_8;
  v8 = (void *)ReferenceDwmApiPort(v7, v6);
  LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v21, 1);
  TitleBarInfo = DwmSyncGetTitleBarInfo(v8);
  LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v21);
  if ( TitleBarInfo < 0 )
  {
    v20 = RtlNtStatusToDosError(TitleBarInfo);
    UserSetLastError(v20);
    v13 = 1;
  }
  else
  {
    v4 = 1;
    v21 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v10);
    PhysicalToLogicalDPIRect((char *)a2 + 4, (char *)a2 + 4, CurrentThreadDpiAwarenessContext, &v21);
    v12 = (char *)a2 + 44;
    v2 = 6LL;
    do
    {
      PhysicalToLogicalDPIRect(v12, v12, CurrentThreadDpiAwarenessContext, &v21);
      v12 += 16;
      --v2;
    }
    while ( v2 );
    v13 = v22;
  }
  if ( !v13 )
  {
LABEL_8:
    *(_OWORD *)((char *)a2 + 20) = 0LL;
    *(_QWORD *)((char *)a2 + 36) = 0LL;
    memset_0((char *)a2 + 44, 0, 0x60uLL);
    xxxCommonGetTitleBarInfo(a1, a2, v15, v16);
    v17 = (_DWORD *)((char *)a2 + 28);
    v18 = 2;
    v19 = (_DWORD)a2 + 76;
    do
    {
      if ( (*v17 & 0x8000) == 0 )
      {
        LOWORD(v21) = v2;
        v22 = v2;
        xxxCalcCaptionButton((_DWORD)a1, v18, (unsigned int)&v21, v19, (__int64)&v22, 1);
      }
      ++v18;
      v19 += 16;
      ++v17;
    }
    while ( v18 <= 5 );
    return 1;
  }
  return v4;
}
