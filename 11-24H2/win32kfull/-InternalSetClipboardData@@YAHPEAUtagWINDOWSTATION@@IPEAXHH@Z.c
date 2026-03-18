/*
 * XREFs of ?InternalSetClipboardData@@YAHPEAUtagWINDOWSTATION@@IPEAXHH@Z @ 0x14010454C
 * Callers:
 *     ?MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x140103AA8 (-MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     _SetClipboardData @ 0x140104750 (_SetClipboardData.c)
 *     ?PasteScreenPalette@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1402B21FC (-PasteScreenPalette@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ?FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z @ 0x140106020 (-FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z.c)
 *     ?UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z @ 0x1401E8E94 (-UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall InternalSetClipboardData(struct tagWINDOWSTATION *a1, unsigned int a2, void *a3, int a4, int a5)
{
  struct tagCLIP *ClipFormat; // rax
  struct tagCLIP *v10; // rdi
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v16; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  _BYTE v22[512]; // [rsp+20h] [rbp-228h] BYREF

  if ( !*((_QWORD *)a1 + 10) || !a2 )
  {
    UserSetLastError(1418);
    return 0LL;
  }
  ClipFormat = FindClipFormat(a1, a2, 2u);
  v10 = ClipFormat;
  if ( ClipFormat )
  {
    UT_FreeCBFormat(ClipFormat);
  }
  else
  {
    v11 = *((_QWORD *)a1 + 16);
    if ( v11 )
    {
      v12 = 32LL * *((unsigned int *)a1 + 34);
      if ( v12 > 0xFFFFFFFF || (int)v12 + 32 < (unsigned int)v12 )
        return 0LL;
      v13 = UserReAllocPool(v11, (unsigned int)v12, (unsigned int)(v12 + 32), 1650684757LL);
    }
    else
    {
      v13 = Win32AllocPoolZInit(32LL, 1650684757LL);
    }
    v14 = v13;
    if ( !v13 )
      return 0LL;
    *((_QWORD *)a1 + 16) = v13;
    if ( !(unsigned int)UserGetAtomName((unsigned __int16)a2, v22, 256LL) )
      return 0LL;
    UserAddAtomEx(v22, 0LL, 2LL);
    v16 = *((unsigned int *)a1 + 34);
    *((_DWORD *)a1 + 34) = v16 + 1;
    v10 = (struct tagCLIP *)(32LL * (unsigned int)v16 + v14);
    *(_DWORD *)v10 = a2;
  }
  *((_QWORD *)v10 + 1) = a3;
  *((_DWORD *)v10 + 4) = a4;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v16);
  if ( CurrentProcessWin32Process )
  {
    v18 = -*(_QWORD *)CurrentProcessWin32Process;
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  }
  *((_DWORD *)v10 + 5) = *(_DWORD *)(CurrentProcessWin32Process + 872);
  v19 = PsGetCurrentProcessWin32Process(v18);
  if ( v19 )
  {
    v21 = -*(_QWORD *)v19;
    v20 = -(__int64)(*(_QWORD *)v19 != 0LL);
    v19 &= v20;
  }
  *((_DWORD *)v10 + 6) = *(_DWORD *)(v19 + 876);
  if ( a5 )
  {
    *((_DWORD *)a1 + 16) |= 0x40u;
    if ( (*((_DWORD *)a1 + 16) & 0x80u) == 0 )
      ++*((_DWORD *)a1 + 36);
  }
  if ( !*((_QWORD *)a1 + 14) || *(struct tagTHREADINFO **)(*((_QWORD *)a1 + 14) + 16LL) != PtiCurrent(v21, v20) )
  {
    if ( a5 )
      ++*((_DWORD *)a1 + 35);
  }
  return 1LL;
}
