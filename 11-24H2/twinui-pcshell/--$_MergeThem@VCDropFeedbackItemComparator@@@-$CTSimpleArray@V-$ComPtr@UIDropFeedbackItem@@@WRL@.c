/*
 * XREFs of ??$_MergeThem@VCDropFeedbackItemComparator@@@?$CTSimpleArray@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@@@@@QEAAXAEBVCDropFeedbackItemComparator@@_K1@Z @ 0x18053DF0C
 * Callers:
 *     ??$_MergeSort@VCDropFeedbackItemComparator@@@?$CTSimpleArray@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@@@@@QEAAXAEBVCDropFeedbackItemComparator@@_K1@Z @ 0x18053DE24 (--$_MergeSort@VCDropFeedbackItemComparator@@@-$CTSimpleArray@V-$ComPtr@UIDropFeedbackItem@@@WRL@.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Compare@CDropFeedbackItemComparator@@QEBAHV?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@0@Z @ 0x18053E2CC (-Compare@CDropFeedbackItemComparator@@QEBAHV-$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@0@Z.c)
 *     memcpy_0 @ 0x1806CA2DC (memcpy_0.c)
 */

char *__fastcall CTSimpleArray<Microsoft::WRL::ComPtr<IDropFeedbackItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IDropFeedbackItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IDropFeedbackItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IDropFeedbackItem>>>::_MergeThem<CDropFeedbackItemComparator>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4)
{
  char *v5; // r12
  char *v6; // rsi
  size_t v7; // rbx
  void *v8; // rbp
  __int64 v9; // rdi
  __int64 *v10; // r13
  __int64 v11; // r15
  __int64 v12; // rcx
  char *result; // rax
  char *v14; // [rsp+20h] [rbp-58h]
  __int64 *v15; // [rsp+28h] [rbp-50h]
  __int64 v16; // [rsp+80h] [rbp+8h] BYREF
  __int64 v17; // [rsp+88h] [rbp+10h]
  __int64 v18; // [rsp+90h] [rbp+18h] BYREF
  char *v19; // [rsp+98h] [rbp+20h]

  v19 = (char *)a4;
  v17 = a2;
  v5 = (char *)(a4 >> 1);
  v6 = (char *)(*(_QWORD *)a1 + 8 * a3);
  v7 = 8 * (a4 >> 1);
  memcpy_0(*(void **)(a1 + 16), v6, v7);
  v8 = 0LL;
  v14 = v5;
  v9 = 0LL;
  v10 = (__int64 *)&v6[v7];
  LOBYTE(v17) = 0;
  do
  {
    v16 = *v10;
    v15 = v10;
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(&v16);
    v11 = 8LL * (_QWORD)v8;
    v18 = *(_QWORD *)(8LL * (_QWORD)v8 + *(_QWORD *)(a1 + 16));
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(&v18);
    if ( (int)CDropFeedbackItemComparator::Compare(v12, &v18, &v16) <= 0 )
    {
      result = *(char **)(a1 + 16);
      v8 = (char *)v8 + 1;
      *(_QWORD *)&v6[8 * v9] = *(_QWORD *)&result[v11];
      if ( v8 == v5 )
        return result;
    }
    else
    {
      ++v10;
      ++v14;
      *(_QWORD *)&v6[8 * v9] = *v15;
      result = v19;
      if ( v14 == v19 )
      {
        result = (char *)memcpy_0(
                           &v6[8 * v9 + 8],
                           (const void *)(v11 + *(_QWORD *)(a1 + 16)),
                           8LL * (_QWORD)&v19[-v9 - 1]);
        LOBYTE(v17) = 1;
      }
    }
    ++v9;
  }
  while ( !(_BYTE)v17 );
  return result;
}
