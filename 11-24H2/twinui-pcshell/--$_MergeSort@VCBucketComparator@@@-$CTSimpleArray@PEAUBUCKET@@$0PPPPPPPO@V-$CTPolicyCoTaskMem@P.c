/*
 * XREFs of ??$_MergeSort@VCBucketComparator@@@?$CTSimpleArray@PEAUBUCKET@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUBUCKET@@@@V?$CSimpleArrayStandardCompareHelper@PEAUBUCKET@@@@V?$CSimpleArrayStandardMergeHelper@PEAUBUCKET@@@@@@QEAAXAEBVCBucketComparator@@_K1@Z @ 0x1806C7FDC
 * Callers:
 *     ??$SortEx@VCBucketComparator@@@?$CTSimpleArray@PEAUBUCKET@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUBUCKET@@@@V?$CSimpleArrayStandardCompareHelper@PEAUBUCKET@@@@V?$CSimpleArrayStandardMergeHelper@PEAUBUCKET@@@@@@QEAAJAEBVCBucketComparator@@@Z @ 0x1806C7F38 (--$SortEx@VCBucketComparator@@@-$CTSimpleArray@PEAUBUCKET@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUB.c)
 *     ??$_MergeSort@VCBucketComparator@@@?$CTSimpleArray@PEAUBUCKET@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUBUCKET@@@@V?$CSimpleArrayStandardCompareHelper@PEAUBUCKET@@@@V?$CSimpleArrayStandardMergeHelper@PEAUBUCKET@@@@@@QEAAXAEBVCBucketComparator@@_K1@Z @ 0x1806C7FDC (--$_MergeSort@VCBucketComparator@@@-$CTSimpleArray@PEAUBUCKET@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@P.c)
 * Callees:
 *     ??$_MergeSort@VCBucketComparator@@@?$CTSimpleArray@PEAUBUCKET@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUBUCKET@@@@V?$CSimpleArrayStandardCompareHelper@PEAUBUCKET@@@@V?$CSimpleArrayStandardMergeHelper@PEAUBUCKET@@@@@@QEAAXAEBVCBucketComparator@@_K1@Z @ 0x1806C7FDC (--$_MergeSort@VCBucketComparator@@@-$CTSimpleArray@PEAUBUCKET@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@P.c)
 *     ??$_MergeThem@VCBucketComparator@@@?$CTSimpleArray@PEAUBUCKET@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUBUCKET@@@@V?$CSimpleArrayStandardCompareHelper@PEAUBUCKET@@@@V?$CSimpleArrayStandardMergeHelper@PEAUBUCKET@@@@@@QEAAXAEBVCBucketComparator@@_K1@Z @ 0x1806C80A0 (--$_MergeThem@VCBucketComparator@@@-$CTSimpleArray@PEAUBUCKET@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@P.c)
 *     ?Compare@CBucketComparator@@QEBAHPEAUBUCKET@@0@Z @ 0x1806C8204 (-Compare@CBucketComparator@@QEBAHPEAUBUCKET@@0@Z.c)
 */

__int64 __fastcall CTSimpleArray<BUCKET *,4294967294,CTPolicyCoTaskMem<BUCKET *>,CSimpleArrayStandardCompareHelper<BUCKET *>,CSimpleArrayStandardMergeHelper<BUCKET *>>::_MergeSort<CBucketComparator>(
        CBucketComparator *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4)
{
  __int64 result; // rax
  unsigned __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r10

  result = a4 - 1;
  if ( a4 != 1 )
  {
    if ( a4 == 2 )
    {
      result = CBucketComparator::Compare(
                 a1,
                 *(struct BUCKET **)(*(_QWORD *)a1 + 8 * a3),
                 *(struct BUCKET **)(*(_QWORD *)a1 + 8 * a3 + 8));
      if ( (int)result > 0 )
      {
        **((_QWORD **)a1 + 2) = v11;
        *(_QWORD *)(*(_QWORD *)a1 + 8 * a3) = *(_QWORD *)(*(_QWORD *)a1 + 8 * a3 + 8);
        result = **((_QWORD **)a1 + 2);
        *(_QWORD *)(*(_QWORD *)a1 + 8 * a3 + 8) = result;
      }
    }
    else
    {
      v9 = a4 >> 1;
      CTSimpleArray<BUCKET *,4294967294,CTPolicyCoTaskMem<BUCKET *>,CSimpleArrayStandardCompareHelper<BUCKET *>,CSimpleArrayStandardMergeHelper<BUCKET *>>::_MergeSort<CBucketComparator>(
        a1,
        a2,
        a3,
        a4 >> 1);
      CTSimpleArray<BUCKET *,4294967294,CTPolicyCoTaskMem<BUCKET *>,CSimpleArrayStandardCompareHelper<BUCKET *>,CSimpleArrayStandardMergeHelper<BUCKET *>>::_MergeSort<CBucketComparator>(
        a1,
        a2,
        v9 + a3,
        a4 - v9);
      return CTSimpleArray<BUCKET *,4294967294,CTPolicyCoTaskMem<BUCKET *>,CSimpleArrayStandardCompareHelper<BUCKET *>,CSimpleArrayStandardMergeHelper<BUCKET *>>::_MergeThem<CBucketComparator>(
               a1,
               v10,
               a3,
               a4);
    }
  }
  return result;
}
