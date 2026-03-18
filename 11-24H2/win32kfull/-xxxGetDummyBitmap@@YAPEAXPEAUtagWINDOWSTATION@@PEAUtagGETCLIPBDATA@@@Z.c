/*
 * XREFs of ?xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1402B24D8
 * Callers:
 *     xxxGetClipboardData @ 0x140104130 (xxxGetClipboardData.c)
 * Callees:
 *     ??1?$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ @ 0x140040808 (--1-$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140074770 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     HMValidateHandleNoRip @ 0x14008ED8C (HMValidateHandleNoRip.c)
 *     xxxGetClipboardData @ 0x140104130 (xxxGetClipboardData.c)
 *     ?FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z @ 0x140106020 (-FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z.c)
 *     ?UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z @ 0x1401E8E94 (-UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z.c)
 *     ?xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z @ 0x1402B2304 (-xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z.c)
 */

HBITMAP __fastcall xxxGetDummyBitmap(struct tagTHREADINFO **a1, struct tagGETCLIPBDATA *a2)
{
  void *v4; // rbx
  void *ClipboardData; // rbp
  struct tagCLIP *ClipFormat; // rax
  HBITMAP result; // rax
  struct tagCLIP *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  struct tagTHREADINFO *v13; // rax
  __int64 v14; // rdx
  HBITMAP v15; // rbx
  struct tagCLIP *v16; // rax
  struct tagCLIP *v17; // rsi
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0LL;
  ClipboardData = 0LL;
  if ( (*(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 19928) + 7004LL) & 1) != 0 )
    ClipboardData = xxxGetClipboardData(a1, 9LL, (__int64)a2);
  ClipFormat = FindClipFormat((unsigned __int64)a1, 0x11u, 1);
  if ( ClipFormat )
  {
    if ( *((_QWORD *)ClipFormat + 1) != 2LL )
    {
      result = (HBITMAP)xxxGetClipboardData(a1, 17LL, (__int64)a2);
      v4 = result;
      if ( result )
      {
        *(_DWORD *)a2 = 17;
        *((_QWORD *)a2 + 1) = ClipboardData;
        return result;
      }
    }
  }
  v8 = FindClipFormat((unsigned __int64)a1, 8u, 1);
  if ( v8 && *((_QWORD *)v8 + 1) != 2LL )
    v4 = xxxGetClipboardData(a1, 8LL, (__int64)a2);
  if ( !v4 )
    return 0LL;
  BugCheckParameter3[1] = 0LL;
  LOBYTE(v9) = 6;
  BugCheckParameter3[0] = -1LL;
  v12 = HMValidateHandleNoRip((__int64)v4, v9);
  if ( !v12 )
  {
    Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(BugCheckParameter3, v10);
    return 0LL;
  }
  v13 = PtiCurrent(v11, v10);
  Win32HM_LockIntoThread<1>((__int64)v13, v12, (__int64 *)BugCheckParameter3);
  v15 = xxxDIBtoBMP((struct tagBITMAPINFO *)(v12 + 20), (__int64)ClipboardData, *(_DWORD *)(v12 + 16));
  if ( v15 )
  {
    v16 = FindClipFormat((unsigned __int64)a1, 2u, 1);
    v17 = v16;
    if ( v16 )
    {
      UT_FreeCBFormat(v16);
      *((_QWORD *)v17 + 1) = v15;
      GreSetBitmapOwner(v15, 0LL);
      *(_DWORD *)a2 = 2;
    }
    else
    {
      GreDeleteObject(v15);
      v15 = 0LL;
    }
  }
  Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(BugCheckParameter3, v14);
  return v15;
}
