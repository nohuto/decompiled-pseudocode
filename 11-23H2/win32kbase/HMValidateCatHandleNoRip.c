/*
 * XREFs of HMValidateCatHandleNoRip @ 0x1C0208374
 * Callers:
 *     UserGetWindowThreadProcessId @ 0x1C014F370 (UserGetWindowThreadProcessId.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0046340 (W32GetThreadWin32Thread.c)
 *     ValidateHandleSecure @ 0x1C004F140 (ValidateHandleSecure.c)
 */

__int64 __fastcall HMValidateCatHandleNoRip(unsigned __int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8
  _QWORD *v5; // r14
  char *v6; // rdi
  __int64 v7; // rbp
  __int16 v8; // ax
  __int64 v9; // r8
  __int64 v10; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v12; // r8
  __int16 v13; // ax
  _QWORD *v14; // rax
  __int64 v15; // rax

  v2 = 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( (unsigned __int64)(unsigned __int16)a1 < *((_QWORD *)gpsi + 1) )
  {
    v5 = gpKernelHandleTable;
    v6 = (char *)qword_1C028FE68 + dword_1C028FE70 * (unsigned int)(unsigned __int16)a1;
    v7 = 3 * ((__int64)(dword_1C028FE70 * (unsigned int)(unsigned __int16)a1) >> 5);
    v8 = WORD1(a1) & 0x7FFF;
    if ( (WORD1(a1) & 0x7FFF) == *((_WORD *)v6 + 13)
      || v8 == 0x7FFF
      || !v8 && PsGetCurrentProcessWow64Process(0x7FFFLL, v3, v4) )
    {
      if ( v6[24] == 23 )
        v2 = v5[v7];
      if ( (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 488) & 0x20000000) != 0 )
      {
        if ( !(unsigned int)ValidateHandleSecure(a1, 3LL, v9) )
          v2 = 0LL;
      }
      else
      {
        v10 = -(__int64)((unsigned int)ValidateHandleSecure(a1, 2LL, v9) != 0);
        v2 &= v10;
      }
      if ( v6[25] < 0 )
      {
        CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v10);
        v12 = CurrentProcessWin32Process;
        if ( CurrentProcessWin32Process )
        {
          if ( *CurrentProcessWin32Process )
          {
            v13 = *((_WORD *)&unk_1C024292C + 12 * (unsigned __int8)v6[24]);
            if ( (v13 & 2) != 0 )
            {
              v14 = (_QWORD *)v5[v7 + 1];
            }
            else
            {
              if ( (v13 & 1) == 0 )
                return v2;
              v15 = v5[v7 + 1];
              if ( !v15 )
                return v2;
              v14 = *(_QWORD **)(v15 + 424);
            }
            if ( v14 && v14 != v12 )
              return 0LL;
          }
        }
      }
    }
  }
  return v2;
}
