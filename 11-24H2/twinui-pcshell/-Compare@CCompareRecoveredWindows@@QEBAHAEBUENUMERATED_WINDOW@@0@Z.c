/*
 * XREFs of ?Compare@CCompareRecoveredWindows@@QEBAHAEBUENUMERATED_WINDOW@@0@Z @ 0x1802EFA2C
 * Callers:
 *     ??$_MergeSort@VCCompareRecoveredWindows@@@?$CTSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UENUMERATED_WINDOW@@@@V?$CSimpleArrayStandardCompareHelper@UENUMERATED_WINDOW@@@@V?$CSimpleArrayStandardMergeHelper@UENUMERATED_WINDOW@@@@@@QEAAXAEBVCCompareRecoveredWindows@@_K1@Z @ 0x1802EF834 (--$_MergeSort@VCCompareRecoveredWindows@@@-$CTSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V-$CTPo.c)
 *     ??$_MergeThem@VCCompareRecoveredWindows@@@?$CTSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UENUMERATED_WINDOW@@@@V?$CSimpleArrayStandardCompareHelper@UENUMERATED_WINDOW@@@@V?$CSimpleArrayStandardMergeHelper@UENUMERATED_WINDOW@@@@@@QEAAXAEBVCCompareRecoveredWindows@@_K1@Z @ 0x1802EF918 (--$_MergeThem@VCCompareRecoveredWindows@@@-$CTSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V-$CTPo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompareRecoveredWindows::Compare(
        CCompareRecoveredWindows *this,
        const struct ENUMERATED_WINDOW *a2,
        HWND *a3)
{
  int v3; // r9d
  unsigned int v4; // ebx
  HWND v6; // rcx
  CCompareRecoveredWindows *pvAttribute; // [rsp+30h] [rbp+8h] BYREF
  int v9; // [rsp+38h] [rbp+10h] BYREF

  pvAttribute = this;
  v3 = *((_DWORD *)a2 + 2);
  v4 = -1;
  if ( v3 == *((_DWORD *)a3 + 2) && (v3 == 1 || v3 == 8) && v3 != 1 )
  {
    v6 = *(HWND *)a2;
    LODWORD(pvAttribute) = 0;
    v9 = 0;
    if ( DwmGetWindowAttribute(v6, 0xEu, &pvAttribute, 4u) >= 0
      && DwmGetWindowAttribute(*a3, 0xEu, &v9, 4u) >= 0
      && ((unsigned __int8)pvAttribute & 2) != 0
      && (v9 & 2) == 0 )
    {
      return 1;
    }
  }
  return v4;
}
