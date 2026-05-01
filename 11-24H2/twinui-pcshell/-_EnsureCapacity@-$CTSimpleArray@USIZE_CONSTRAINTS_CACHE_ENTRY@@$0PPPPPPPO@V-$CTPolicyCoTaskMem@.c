/*
 * XREFs of ?_EnsureCapacity@?$CTSimpleArray@USIZE_CONSTRAINTS_CACHE_ENTRY@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@USIZE_CONSTRAINTS_CACHE_ENTRY@@@@V?$CSimpleArrayStandardCompareHelper@USIZE_CONSTRAINTS_CACHE_ENTRY@@@@V?$CSimpleArrayStandardMergeHelper@USIZE_CONSTRAINTS_CACHE_ENTRY@@@@@@QEAAJ_K0@Z @ 0x1800CABE0
 * Callers:
 *     ?SetSizeConstraintsForDpi@AppSizeConstraintsCache@@EEAAJIAEBUAPP_SIZE_CONSTRAINTS@@@Z @ 0x1800CAAE0 (-SetSizeConstraintsForDpi@AppSizeConstraintsCache@@EEAAJIAEBUAPP_SIZE_CONSTRAINTS@@@Z.c)
 * Callees:
 *     ?Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z @ 0x1800CA378 (-Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z.c)
 */

__int64 __fastcall CTSimpleArray<SIZE_CONSTRAINTS_CACHE_ENTRY,4294967294,CTPolicyCoTaskMem<SIZE_CONSTRAINTS_CACHE_ENTRY>,CSimpleArrayStandardCompareHelper<SIZE_CONSTRAINTS_CACHE_ENTRY>,CSimpleArrayStandardMergeHelper<SIZE_CONSTRAINTS_CACHE_ENTRY>>::_EnsureCapacity(
        __int64 a1,
        unsigned __int64 a2,
        void *a3)
{
  int v4; // r8d
  unsigned __int64 v5; // rbx
  __int64 v6; // rcx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rbx
  void *v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = a3;
  v4 = -2147024774;
  if ( a2 <= 0xFFFFFFFE )
  {
    v5 = *(_QWORD *)(a1 + 24);
    v4 = 0;
    if ( a2 > v5 )
    {
      v10 = 0LL;
      v6 = 2 * v5;
      if ( !is_mul_ok(v5, 2uLL) )
        return (unsigned int)-2147024362;
      v7 = v5;
      v8 = v5 + 4096;
      if ( v7 <= 0x1000 )
        v8 = v6;
      if ( a2 > v8 )
      {
        v8 = a2;
      }
      else if ( v8 > 0xFFFFFFFE )
      {
        v8 = 4294967294LL;
      }
      v10 = 0LL;
      if ( is_mul_ok(v8, 0x14uLL) )
      {
        v4 = CTCoAllocPolicy::Realloc(
               (IMalloc *)&v10,
               (v8 * (unsigned __int128)0x14uLL) >> 64,
               *(void **)a1,
               20 * v8,
               &v10);
        if ( v4 >= 0 )
        {
          *(_QWORD *)a1 = v10;
          *(_QWORD *)(a1 + 24) = v8;
        }
      }
      else
      {
        return (unsigned int)-2147024362;
      }
    }
  }
  return (unsigned int)v4;
}
