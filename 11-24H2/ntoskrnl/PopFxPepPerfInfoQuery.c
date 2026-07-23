/*
 * XREFs of PopFxPepPerfInfoQuery @ 0x14074C664
 * Callers:
 *     PopFxRegisterComponentPerfStates @ 0x14074C864 (PopFxRegisterComponentPerfStates.c)
 * Callees:
 *     PopFxBugCheck @ 0x1403A9948 (PopFxBugCheck.c)
 *     RtlULongLongMult @ 0x14042A2B0 (RtlULongLongMult.c)
 *     PopPluginQueryComponentPerfCapabilities @ 0x1405CFA38 (PopPluginQueryComponentPerfCapabilities.c)
 *     PopPluginQueryComponentPerfSet @ 0x1405CFA88 (PopPluginQueryComponentPerfSet.c)
 *     PopPluginQueryComponentPerfSetName @ 0x1405CFB34 (PopPluginQueryComponentPerfSetName.c)
 *     PopPluginQueryComponentPerfStates @ 0x1405CFBC0 (PopPluginQueryComponentPerfStates.c)
 *     PopFxPepPerfInfoFree @ 0x14074C5E4 (PopFxPepPerfInfoFree.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PopFxPepPerfInfoQuery(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4, unsigned int **a3)
{
  ULONG_PTR v3; // r12
  NTSTATUS v4; // edi
  unsigned int *v5; // rsi
  unsigned int v8; // r13d
  unsigned int *Pool2; // rax
  unsigned int i; // ebp
  __int64 v11; // r15
  unsigned int v12; // eax
  __int64 v13; // rax
  unsigned __int16 *v14; // rbx
  __int16 v15; // cx
  ULONG_PTR v16; // rdx
  __int64 v17; // rax
  ULONGLONG pullResult[9]; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v20; // [rsp+A8h] [rbp+20h] BYREF

  v3 = (unsigned int)BugCheckParameter4;
  v20 = 0;
  pullResult[0] = 0LL;
  v4 = 0;
  v5 = 0LL;
  if ( PopPluginQueryComponentPerfCapabilities(BugCheckParameter3, BugCheckParameter4, &v20) )
  {
    v8 = v20;
    Pool2 = (unsigned int *)ExAllocatePool2(0x100uLL, (int)(48 * v20) + 8LL, 0x4D584650u);
    v5 = Pool2;
    if ( Pool2 )
    {
      *Pool2 = v8;
      for ( i = 0; i < v8; ++i )
      {
        v11 = 12LL * i;
        PopPluginQueryComponentPerfSet(
          BugCheckParameter3,
          v3,
          i,
          &v5[v11 + 8],
          &v5[v11 + 9],
          &v5[v11 + 10],
          &v5[v11 + 10],
          &v5[v11 + 12]);
        if ( !v5[v11 + 9] )
        {
          v12 = v5[v11 + 10];
          if ( !v12 )
            PopFxBugCheck(0x61AuLL, *(_QWORD *)(BugCheckParameter3 + 64), BugCheckParameter3, v3);
          v4 = RtlULongLongMult(v12, 0x10uLL, pullResult);
          v13 = ExAllocatePool2(0x100uLL, pullResult[0], 0x4D584650u);
          *(_QWORD *)&v5[v11 + 12] = v13;
          if ( !v13 )
            goto LABEL_6;
          PopPluginQueryComponentPerfStates(BugCheckParameter3, v3, i, v13);
        }
        v14 = (unsigned __int16 *)&v5[v11];
        PopPluginQueryComponentPerfSetName(BugCheckParameter3, v3, i, (unsigned __int16 *)&v5[v11 + 2] + 1, 0LL);
        v15 = HIWORD(v5[v11 + 2]);
        if ( v15 )
        {
          v16 = v14[5];
          LOWORD(v5[v11 + 2]) = v15 - 2;
          v17 = ExAllocatePool2(0x100uLL, v16, 0x4D584650u);
          *(_QWORD *)&v5[v11 + 4] = v17;
          if ( !v17 )
            goto LABEL_6;
          PopPluginQueryComponentPerfSetName(BugCheckParameter3, v3, i, v14 + 5, v17);
        }
        else
        {
          LOWORD(v5[v11 + 2]) = 0;
          *(_QWORD *)&v5[v11 + 4] = 0LL;
        }
      }
      if ( v4 >= 0 )
      {
        *a3 = v5;
        return (unsigned int)v4;
      }
    }
    else
    {
LABEL_6:
      v4 = -1073741670;
    }
  }
  else
  {
    v4 = -1073741822;
  }
  PopFxPepPerfInfoFree(v5);
  return (unsigned int)v4;
}
