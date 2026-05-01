/*
 * XREFs of ??$_Add@AEBQEAUIUnknown@@@?$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUIUnknown@@@@V?$CSimpleArrayStandardCompareHelper@PEAUIUnknown@@@@V?$CSimpleArrayStandardMergeHelper@PEAUIUnknown@@@@@@QEAAJAEBQEAUIUnknown@@PEA_K@Z @ 0x1800CA08C
 * Callers:
 *     ?InitializeClone@CEnumerableObjectCollection@@IEAAJPEAV1@@Z @ 0x1802E8BC4 (-InitializeClone@CEnumerableObjectCollection@@IEAAJPEAV1@@Z.c)
 * Callees:
 *     ?Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z @ 0x1800CA378 (-Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z.c)
 */

__int64 __fastcall CTSimpleArray<IUnknown *,4294967294,CTPolicyCoTaskMem<IUnknown *>,CSimpleArrayStandardCompareHelper<IUnknown *>,CSimpleArrayStandardMergeHelper<IUnknown *>>::_Add<IUnknown * const &>(
        __int64 a1,
        _QWORD *a2,
        void *a3)
{
  __int64 *v4; // rsi
  __int64 v5; // rcx
  unsigned int v6; // r8d
  __int64 *v8; // rax
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // r8
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rbx
  __int64 v15; // rdx
  _QWORD *v16; // rax
  void *v18; // [rsp+60h] [rbp+18h] BYREF

  v18 = a3;
  v4 = (__int64 *)(a1 + 8);
  v5 = *(_QWORD *)(a1 + 8);
  v6 = 0;
  v8 = v4;
  v9 = *(_QWORD *)(a1 + 24);
  if ( v5 == v9 )
  {
    v10 = v5 + 1;
    v11 = -2147024774;
    if ( v10 > 0xFFFFFFFE )
      goto LABEL_19;
    v11 = 0;
    if ( v10 <= v9 )
      goto LABEL_19;
    v18 = 0LL;
    v12 = 2 * v9;
    if ( !is_mul_ok(v9, 2uLL) )
      return (unsigned int)-2147024362;
    v13 = v9;
    v14 = v9 + 4096;
    if ( v13 <= 0x1000 )
      v14 = v12;
    if ( v10 > v14 )
    {
      v14 = v10;
    }
    else if ( v14 > 0xFFFFFFFE )
    {
      v14 = 4294967294LL;
    }
    v18 = 0LL;
    if ( !is_mul_ok(v14, 8uLL) )
      return (unsigned int)-2147024362;
    v11 = CTCoAllocPolicy::Realloc(&v18, (v14 * (unsigned __int128)8uLL) >> 64, *(void **)a1, 8 * v14, &v18);
    v6 = v11;
    if ( v11 < 0 )
    {
LABEL_19:
      v6 = v11;
      if ( v11 < 0 )
        return v6;
    }
    else
    {
      *(_QWORD *)a1 = v18;
      *(_QWORD *)(a1 + 24) = v14;
    }
    v8 = (__int64 *)(a1 + 8);
  }
  v15 = *v4 + 1;
  *v8 = v15;
  v16 = (_QWORD *)(*(_QWORD *)a1 - 8LL + 8 * v15);
  if ( v16 )
    *v16 = *a2;
  return v6;
}
