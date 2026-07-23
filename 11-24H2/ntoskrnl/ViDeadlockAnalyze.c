/*
 * XREFs of ViDeadlockAnalyze @ 0x140B9ABE4
 * Callers:
 *     ViDeadlockAnalyze @ 0x140B9ABE4 (ViDeadlockAnalyze.c)
 *     VfDeadlockAcquireResource @ 0x140BAA3C4 (VfDeadlockAcquireResource.c)
 * Callees:
 *     KeQueryCurrentStackInformation @ 0x14028A190 (KeQueryCurrentStackInformation.c)
 *     VfReportIssueWithOptions @ 0x1406109F4 (VfReportIssueWithOptions.c)
 *     KeGetCurrentStackPointer @ 0x1406AB330 (KeGetCurrentStackPointer.c)
 *     ViDeadlockAddParticipant @ 0x140B9A84C (ViDeadlockAddParticipant.c)
 *     ViDeadlockAnalyze @ 0x140B9ABE4 (ViDeadlockAnalyze.c)
 *     ViDeadlockCertify @ 0x140B9AE48 (ViDeadlockCertify.c)
 *     ViDeadlockPreprocessOptions @ 0x140B9BBC4 (ViDeadlockPreprocessOptions.c)
 */

__int64 __fastcall ViDeadlockAnalyze(ULONG_PTR a1, ULONG_PTR a2, int a3, unsigned int a4, __int64 a5)
{
  unsigned int v8; // ebx
  _DWORD *v9; // rcx
  _DWORD *v10; // rdx
  int v11; // r8d
  __int64 v13; // rcx
  _QWORD *v14; // r12
  unsigned int v15; // r8d
  _QWORD *i; // r14
  _QWORD *v17; // rsi
  __int64 v18; // rdx
  int v19; // r9d
  unsigned int v20; // ecx
  int v21; // [rsp+88h] [rbp+20h]

  v21 = a4;
  v8 = 1;
  if ( a3 )
  {
    v9 = ViDeadlockGlobals;
    *((_DWORD *)ViDeadlockGlobals + 8199) = 0;
    ++v9[8201];
    v9[8216] = 0;
    *((_QWORD *)v9 + 4107) = 0LL;
    if ( v9[8201] == 1073741822 )
      ViDeadlockState |= 8u;
    KeQueryCurrentStackInformation((__int64)(v9 + 8283), (__int64)(v9 + 8284), (__int64)(v9 + 8286));
    a4 = v21;
  }
  v10 = ViDeadlockGlobals;
  v11 = *((_DWORD *)ViDeadlockGlobals + 8201);
  if ( *(_DWORD *)(a2 + 72) >> 3 == v11 )
    return 0LL;
  ++*((_DWORD *)ViDeadlockGlobals + 8199);
  *(_DWORD *)(a2 + 72) = (8 * v11) | *(_DWORD *)(a2 + 72) & 7;
  if ( a4 > v10[8202] )
  {
    ++v10[8204];
    return 0LL;
  }
  if ( v10[8199] >= v10[8203] )
  {
    ++v10[8205];
    return 0LL;
  }
  if ( (unsigned __int64)&KeGetCurrentStackPointer()[-*((_QWORD *)ViDeadlockGlobals + 4142)] <= 0x1630 )
  {
    ++*((_DWORD *)ViDeadlockGlobals + 8206);
    return 0LL;
  }
  v13 = *(_QWORD *)(a2 + 56);
  if ( a1 != *(_QWORD *)(v13 + 8) || (*(_DWORD *)(a2 + 72) & 4) != 0 )
  {
    v14 = (_QWORD *)(v13 + 24);
    v15 = 0;
    for ( i = *(_QWORD **)(v13 + 24); ; i = (_QWORD *)*i )
    {
      v8 = v15;
      if ( i == v14 )
        break;
      v17 = i - 5;
      v18 = *(i - 5);
      *((_DWORD *)i + 8) = i[4] & 7 | (8 * *((_DWORD *)ViDeadlockGlobals + 8201));
      if ( v18 )
      {
        v19 = v21 + 1;
        if ( v17 == (_QWORD *)a2 )
          v19 = v21;
        v8 = ViDeadlockAnalyze(a1, v18, 0, v19, a5);
        v15 = v8;
        if ( v8 )
        {
          ViDeadlockAddParticipant((__int64)(i - 5));
          if ( v17 == (_QWORD *)a2 )
            goto LABEL_26;
          goto LABEL_15;
        }
      }
    }
    if ( v15 )
      goto LABEL_26;
    if ( !a3 )
      return v8;
  }
  else
  {
LABEL_15:
    ViDeadlockAddParticipant(a2);
LABEL_26:
    if ( !a3 )
      return v8;
    if ( (unsigned int)ViDeadlockCertify(a5, a2) )
    {
      *((_QWORD *)ViDeadlockGlobals + 4107) = a1;
      ViDeadlockPreprocessOptions(
        byte_140E0EA80,
        "Type !deadlock in the debugger for more information.",
        4097LL,
        a1,
        a2,
        0LL);
      VfReportIssueWithOptions(0xC4u, 0x1001uLL, a1, a2, 0LL, byte_140E0EA80);
      return 0LL;
    }
    v8 = 0;
  }
  v20 = *((_DWORD *)ViDeadlockGlobals + 8199);
  if ( v20 > *((_DWORD *)ViDeadlockGlobals + 8200) )
    *((_DWORD *)ViDeadlockGlobals + 8200) = v20;
  return v8;
}
