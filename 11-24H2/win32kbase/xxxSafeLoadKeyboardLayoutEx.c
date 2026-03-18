/*
 * XREFs of xxxSafeLoadKeyboardLayoutEx @ 0x14011AD30
 * Callers:
 *     NtUserLoadKeyboardLayoutEx @ 0x1401BC420 (NtUserLoadKeyboardLayoutEx.c)
 * Callees:
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x14011AEC8 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     ?ConvertHandleAndVerifyLoc@@YAPEAXPEAX@Z @ 0x14011B4F8 (-ConvertHandleAndVerifyLoc@@YAPEAXPEAX@Z.c)
 */

HKL __fastcall xxxSafeLoadKeyboardLayoutEx(
        struct tagWINDOWSTATION *a1,
        HANDLE Handle,
        HKL a3,
        unsigned int a4,
        unsigned int a5,
        struct tagKBDTABLE_MULT_INTERNAL *a6,
        unsigned __int16 *a7,
        unsigned int a8,
        unsigned int a9)
{
  HKL KeyboardLayout; // rsi
  __int64 v13; // rcx
  void *v14; // rbp
  unsigned int i; // ebx
  void *v17; // rax
  void *v18; // rcx
  PETHREAD *v19; // rbx
  __int64 v20; // rcx

  KeyboardLayout = 0LL;
  v14 = ConvertHandleAndVerifyLoc(Handle);
  if ( v14 )
  {
    if ( a6 )
    {
      if ( *(_DWORD *)a6 >= 8u )
      {
        UserSetLastError(87);
        *(_DWORD *)a6 = 0;
LABEL_4:
        ZwClose(v14);
        for ( i = 0; i < *(_DWORD *)a6; ++i )
        {
          v18 = (void *)*((_QWORD *)a6 + 2 * i + 81);
          if ( v18 )
            ZwClose(v18);
        }
        return KeyboardLayout;
      }
      if ( *(_DWORD *)a6 )
      {
        do
        {
          v17 = ConvertHandleAndVerifyLoc(*((HANDLE *)a6 + 2 * (unsigned int)KeyboardLayout + 81));
          *((_QWORD *)a6 + 2 * (unsigned int)KeyboardLayout + 81) = v17;
          if ( !v17 )
            break;
          LODWORD(KeyboardLayout) = (_DWORD)KeyboardLayout + 1;
        }
        while ( (unsigned int)KeyboardLayout < *(_DWORD *)a6 );
        *(_DWORD *)a6 = (_DWORD)KeyboardLayout;
      }
    }
    KeyboardLayout = xxxLoadKeyboardLayoutEx(a1, v14, a3, a4, a5, a6, a7, a8, a9);
    goto LABEL_4;
  }
  if ( (a9 & 0x40000000) != 0 )
  {
    v19 = (PETHREAD *)PtiCurrent(v13);
    W32GetUserSessionState(v20);
    PsGetThreadProcessId(*v19);
  }
  if ( (a9 & 0x40000200) == 0 )
    UserSetLastError(0);
  return KeyboardLayout;
}
