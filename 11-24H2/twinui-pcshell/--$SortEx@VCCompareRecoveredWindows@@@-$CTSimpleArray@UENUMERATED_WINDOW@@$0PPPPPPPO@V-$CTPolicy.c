/*
 * XREFs of ??$SortEx@VCCompareRecoveredWindows@@@?$CTSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UENUMERATED_WINDOW@@@@V?$CSimpleArrayStandardCompareHelper@UENUMERATED_WINDOW@@@@V?$CSimpleArrayStandardMergeHelper@UENUMERATED_WINDOW@@@@@@QEAAJAEBVCCompareRecoveredWindows@@@Z @ 0x180140D20
 * Callers:
 *     ?RecoverApplicationWindows@@YAJPEAUIImmersiveShellHookNotification@@@Z @ 0x180140610 (-RecoverApplicationWindows@@YAJPEAUIImmersiveShellHookNotification@@@Z.c)
 * Callees:
 *     ?Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z @ 0x1800CA378 (-Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z.c)
 *     ?ULongLongMult@@YAJ_K0PEA_K@Z @ 0x180148D24 (-ULongLongMult@@YAJ_K0PEA_K@Z.c)
 *     ??$_MergeSort@VCCompareRecoveredWindows@@@?$CTSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UENUMERATED_WINDOW@@@@V?$CSimpleArrayStandardCompareHelper@UENUMERATED_WINDOW@@@@V?$CSimpleArrayStandardMergeHelper@UENUMERATED_WINDOW@@@@@@QEAAXAEBVCCompareRecoveredWindows@@_K1@Z @ 0x1802EF834 (--$_MergeSort@VCCompareRecoveredWindows@@@-$CTSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V-$CTPo.c)
 */

__int64 __fastcall CTSimpleArray<ENUMERATED_WINDOW,4294967294,CTPolicyCoTaskMem<ENUMERATED_WINDOW>,CSimpleArrayStandardCompareHelper<ENUMERATED_WINDOW>,CSimpleArrayStandardMergeHelper<ENUMERATED_WINDOW>>::SortEx<CCompareRecoveredWindows>(
        __int64 a1,
        __int64 a2)
{
  int v3; // ebx
  unsigned __int64 v4; // rcx
  LPVOID *v6; // rsi
  __int64 v7; // rdx
  IMalloc *v8; // rcx
  unsigned __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 > 1 )
  {
    v10 = 0LL;
    v6 = (LPVOID *)(a1 + 16);
    *(_QWORD *)(a1 + 16) = 0LL;
    v3 = ULongLongMult(v4 >> 1, 0x10uLL, &v10);
    if ( v3 >= 0 )
      v3 = CTCoAllocPolicy::Realloc(v8, v7, 0LL, v10, (void **)(a1 + 16));
    if ( v3 >= 0 )
    {
      CTSimpleArray<ENUMERATED_WINDOW,4294967294,CTPolicyCoTaskMem<ENUMERATED_WINDOW>,CSimpleArrayStandardCompareHelper<ENUMERATED_WINDOW>,CSimpleArrayStandardMergeHelper<ENUMERATED_WINDOW>>::_MergeSort<CCompareRecoveredWindows>(
        a1,
        a2,
        0LL,
        *(_QWORD *)(a1 + 8));
      CoTaskMemFree(*v6);
      *v6 = 0LL;
    }
  }
  return (unsigned int)v3;
}
