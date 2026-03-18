/*
 * XREFs of PopFxPepPerfInfoQuery @ 0x140742264
 * Callers:
 *     PopFxRegisterComponentPerfStates @ 0x140742464 (PopFxRegisterComponentPerfStates.c)
 * Callees:
 *     PopFxBugCheck @ 0x14034E260 (PopFxBugCheck.c)
 *     RtlULongLongMult @ 0x14043A9F0 (RtlULongLongMult.c)
 *     PopPluginQueryComponentPerfCapabilities @ 0x1405CDA98 (PopPluginQueryComponentPerfCapabilities.c)
 *     PopPluginQueryComponentPerfSet @ 0x1405CDAE8 (PopPluginQueryComponentPerfSet.c)
 *     PopPluginQueryComponentPerfSetName @ 0x1405CDB94 (PopPluginQueryComponentPerfSetName.c)
 *     PopPluginQueryComponentPerfStates @ 0x1405CDC20 (PopPluginQueryComponentPerfStates.c)
 *     PopFxPepPerfInfoFree @ 0x1407421E4 (PopFxPepPerfInfoFree.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PopFxPepPerfInfoQuery(ULONG_PTR BugCheckParameter3, __int64 BugCheckParameter4, unsigned int **a3)
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
  __int16 v14; // cx
  __int64 v15; // rax
  ULONGLONG pullResult[9]; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v18; // [rsp+A8h] [rbp+20h] BYREF

  v3 = (unsigned int)BugCheckParameter4;
  v18 = 0;
  pullResult[0] = 0LL;
  v4 = 0;
  v5 = 0LL;
  if ( PopPluginQueryComponentPerfCapabilities(BugCheckParameter3, BugCheckParameter4, &v18) )
  {
    v8 = v18;
    Pool2 = (unsigned int *)ExAllocatePool2(0x100uLL);
    v5 = Pool2;
    if ( Pool2 )
    {
      *Pool2 = v8;
      for ( i = 0; i < v8; ++i )
      {
        v11 = 12LL * i;
        PopPluginQueryComponentPerfSet(
          BugCheckParameter3,
          (unsigned int)v3,
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
          v13 = ExAllocatePool2(0x100uLL);
          *(_QWORD *)&v5[v11 + 12] = v13;
          if ( !v13 )
            goto LABEL_6;
          PopPluginQueryComponentPerfStates(BugCheckParameter3);
        }
        PopPluginQueryComponentPerfSetName(
          BugCheckParameter3,
          (unsigned int)v3,
          i,
          (unsigned __int16 *)&v5[v11 + 2] + 1);
        v14 = HIWORD(v5[v11 + 2]);
        if ( v14 )
        {
          LOWORD(v5[v11 + 2]) = v14 - 2;
          v15 = ExAllocatePool2(0x100uLL);
          *(_QWORD *)&v5[v11 + 4] = v15;
          if ( !v15 )
            goto LABEL_6;
          PopPluginQueryComponentPerfSetName(
            BugCheckParameter3,
            (unsigned int)v3,
            i,
            (unsigned __int16 *)&v5[v11 + 2] + 1);
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
