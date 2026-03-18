/*
 * XREFs of PopFxPepPerfInfoQuery @ 0x14074E334
 * Callers:
 *     PopFxRegisterComponentPerfStates @ 0x14074E534 (PopFxRegisterComponentPerfStates.c)
 * Callees:
 *     PopFxBugCheck @ 0x140377108 (PopFxBugCheck.c)
 *     RtlULongLongMult @ 0x140437830 (RtlULongLongMult.c)
 *     PopPluginQueryComponentPerfCapabilities @ 0x1405D2318 (PopPluginQueryComponentPerfCapabilities.c)
 *     PopPluginQueryComponentPerfSet @ 0x1405D2368 (PopPluginQueryComponentPerfSet.c)
 *     PopPluginQueryComponentPerfSetName @ 0x1405D2414 (PopPluginQueryComponentPerfSetName.c)
 *     PopPluginQueryComponentPerfStates @ 0x1405D24A0 (PopPluginQueryComponentPerfStates.c)
 *     PopFxPepPerfInfoFree @ 0x14074E2B4 (PopFxPepPerfInfoFree.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PopFxPepPerfInfoQuery(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4,
        unsigned int **a3,
        __int64 a4)
{
  ULONG_PTR v4; // r12
  NTSTATUS v5; // edi
  unsigned int *v6; // rsi
  unsigned int v9; // r13d
  unsigned int *Pool2; // rax
  unsigned int i; // ebp
  __int64 v12; // r15
  unsigned int v13; // eax
  __int64 v14; // rax
  __int16 v15; // cx
  __int64 v16; // rax
  ULONGLONG pullResult[9]; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v19; // [rsp+A8h] [rbp+20h] BYREF

  v4 = (unsigned int)BugCheckParameter4;
  v19 = 0;
  pullResult[0] = 0LL;
  v5 = 0;
  v6 = 0LL;
  if ( PopPluginQueryComponentPerfCapabilities(BugCheckParameter3, BugCheckParameter4, &v19, a4) )
  {
    v9 = v19;
    Pool2 = (unsigned int *)ExAllocatePool2(0x100uLL);
    v6 = Pool2;
    if ( Pool2 )
    {
      *Pool2 = v9;
      for ( i = 0; i < v9; ++i )
      {
        v12 = 12LL * i;
        PopPluginQueryComponentPerfSet(
          BugCheckParameter3,
          v4,
          i,
          &v6[v12 + 8],
          &v6[v12 + 9],
          &v6[v12 + 10],
          &v6[v12 + 10],
          &v6[v12 + 12]);
        if ( !v6[v12 + 9] )
        {
          v13 = v6[v12 + 10];
          if ( !v13 )
            PopFxBugCheck(0x61AuLL, *(_QWORD *)(BugCheckParameter3 + 64), BugCheckParameter3, v4);
          v5 = RtlULongLongMult(v13, 0x10uLL, pullResult);
          v14 = ExAllocatePool2(0x100uLL);
          *(_QWORD *)&v6[v12 + 12] = v14;
          if ( !v14 )
            goto LABEL_6;
          PopPluginQueryComponentPerfStates(BugCheckParameter3, v4, i, v14);
        }
        PopPluginQueryComponentPerfSetName(BugCheckParameter3, v4, i, (unsigned __int16 *)&v6[v12 + 2] + 1, 0LL);
        v15 = HIWORD(v6[v12 + 2]);
        if ( v15 )
        {
          LOWORD(v6[v12 + 2]) = v15 - 2;
          v16 = ExAllocatePool2(0x100uLL);
          *(_QWORD *)&v6[v12 + 4] = v16;
          if ( !v16 )
            goto LABEL_6;
          PopPluginQueryComponentPerfSetName(BugCheckParameter3, v4, i, (unsigned __int16 *)&v6[v12 + 2] + 1, v16);
        }
        else
        {
          LOWORD(v6[v12 + 2]) = 0;
          *(_QWORD *)&v6[v12 + 4] = 0LL;
        }
      }
      if ( v5 >= 0 )
      {
        *a3 = v6;
        return (unsigned int)v5;
      }
    }
    else
    {
LABEL_6:
      v5 = -1073741670;
    }
  }
  else
  {
    v5 = -1073741822;
  }
  PopFxPepPerfInfoFree(v6);
  return (unsigned int)v5;
}
