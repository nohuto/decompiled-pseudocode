/*
 * XREFs of ?RemoveAll@?$CTSimpleArray@VGridRow@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VGridRow@@@@V?$CSimpleArrayStandardCompareHelper@VGridRow@@@@V?$CSimpleArrayStandardMergeHelper@VGridRow@@@@@@QEAAXXZ @ 0x1804C8FA4
 * Callers:
 *     ??1CSwitchItemGrid@@UEAA@XZ @ 0x1804C7970 (--1CSwitchItemGrid@@UEAA@XZ.c)
 *     ?Reset@GridLayout@@QEAAXXZ @ 0x1804C916C (-Reset@GridLayout@@QEAAXXZ.c)
 * Callees:
 *     ??_GGridRow@@QEAAPEAXI@Z @ 0x1804C7ABC (--_GGridRow@@QEAAPEAXI@Z.c)
 */

void __fastcall CTSimpleArray<GridRow,4294967294,CTPolicyCoTaskMem<GridRow>,CSimpleArrayStandardCompareHelper<GridRow>,CSimpleArrayStandardMergeHelper<GridRow>>::RemoveAll(
        __int64 a1)
{
  unsigned __int64 *v1; // rdi
  unsigned __int64 v3; // rbp
  __int64 v4; // rsi

  v1 = (unsigned __int64 *)(a1 + 8);
  if ( *(_QWORD *)a1 )
  {
    v3 = 0LL;
    if ( *v1 )
    {
      v4 = 0LL;
      do
      {
        GridRow::`scalar deleting destructor'((GridRow *)(v4 + *(_QWORD *)a1));
        ++v3;
        v4 += 56LL;
      }
      while ( v3 < *v1 );
    }
    CoTaskMemFree(*(LPVOID *)a1);
    *(_QWORD *)a1 = 0LL;
  }
  *v1 = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
}
