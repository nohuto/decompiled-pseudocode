/*
 * XREFs of ?ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C00AF408
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00F6650 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxEndDeferWindowPosEx @ 0x1C01236C0 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00B02D0 (HMValidateHandleNoSecure.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

__int64 __fastcall ValidateWindowPos(struct tagCVR *a1, struct tagWND *a2)
{
  __int64 v2; // rdi
  __int64 v5; // rsi
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  _QWORD *v10; // r15
  _QWORD *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r15
  __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  _QWORD *v21; // rax
  __int64 v22; // r9
  char v23; // r10

  v2 = *(_QWORD *)a1;
  PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( (unsigned __int64)(unsigned __int16)v2 >= *(_QWORD *)(gpsi + 8LL) )
    return 0LL;
  v5 = gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)v2;
  v6 = 0;
  v10 = (_QWORD *)HMPkheFromPhe(v5);
  LOWORD(v2) = WORD1(v2) & 0x7FFF;
  if ( (WORD1(v2) & 0x7FFF) != *(_WORD *)(v5 + 26)
    && (_WORD)v2 != 0x7FFF
    && ((_WORD)v2 || !PsGetCurrentProcessWow64Process(v8, v7, v9)) )
  {
    return 0LL;
  }
  if ( (*(_BYTE *)(v5 + 25) & 1) != 0 )
    return 0LL;
  if ( *(_BYTE *)(v5 + 24) != 1 )
    return 0LL;
  v11 = (_QWORD *)*v10;
  if ( !*v10 )
    return 0LL;
  *((_QWORD *)a1 + 13) = v11[2];
  if ( (*((_DWORD *)a1 + 8) & 4) != 0 )
    return 1LL;
  v12 = v11[3];
  v13 = 0LL;
  if ( v12 )
  {
    v14 = *(_QWORD *)(v12 + 8);
    if ( v14 )
      v13 = *(_QWORD *)(v14 + 24);
  }
  v15 = v11[5];
  v16 = v11[13];
  v17 = *(unsigned __int8 *)(v15 + 19);
  if ( (v17 & 0x80u) != 0LL )
    return 0LL;
  v18 = *((_QWORD *)a1 + 1);
  if ( v18 > 0xFFFFFFFFFFFFFFFDuLL )
  {
    if ( v16 != v13 )
      return 0LL;
    goto LABEL_17;
  }
  if ( v18 )
  {
    if ( v18 != 1 )
    {
      LOBYTE(v17) = 1;
      v21 = (_QWORD *)HMValidateHandleNoSecure(v18, v17);
      if ( v21 && (v22 = v21[5], v23 = *(_BYTE *)(v22 + 19), v23 >= 0) )
      {
        if ( v11 == v21 || v11[13] != v21[13] )
          return 0LL;
        if ( !a2 )
          return 1LL;
        if ( v16 != v13 )
          goto LABEL_18;
        if ( ((*(_BYTE *)(v11[5] + 19LL) & 4 ^ (*(unsigned __int8 *)(v11[5] + 24LL) >> 1) & 4) & 0xFFFFFFFC) == 0 )
        {
          v19 = v21[11];
LABEL_28:
          if ( v19
            && ((*(_BYTE *)(*(_QWORD *)(v19 + 40) + 19LL) & 4 ^ (*(unsigned __int8 *)(*(_QWORD *)(v19 + 40) + 24LL) >> 1) & 4) & 0xFFFFFFFC) != 0 )
          {
            return 0LL;
          }
LABEL_18:
          LOBYTE(v6) = a2 == (struct tagWND *)v11[13];
          return v6;
        }
        if ( ((v23 & 4 ^ (*(unsigned __int8 *)(v22 + 24) >> 1) & 4) & 0xFFFFFFFC) != 0 )
          goto LABEL_18;
      }
      else
      {
        UserSetLastError(6LL);
      }
      return 0LL;
    }
LABEL_17:
    if ( a2 )
      goto LABEL_18;
    return 1LL;
  }
  if ( a2 )
  {
    if ( v16 != v13 || ((v17 & 4 ^ (*(unsigned __int8 *)(v15 + 24) >> 1) & 4) & 0xFFFFFFFC) != 0 )
      goto LABEL_18;
    v19 = *((_QWORD *)a2 + 14);
    goto LABEL_28;
  }
  return 1LL;
}
