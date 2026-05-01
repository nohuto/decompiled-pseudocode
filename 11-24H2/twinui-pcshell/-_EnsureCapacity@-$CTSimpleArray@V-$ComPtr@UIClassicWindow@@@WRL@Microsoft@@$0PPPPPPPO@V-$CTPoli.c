/*
 * XREFs of ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800CADEC
 * Callers:
 *     ?PositionNewActiveApp@?$CActivationBasedCollection@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@QEAAJAEBV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@_K@Z @ 0x180041C48 (-PositionNewActiveApp@-$CActivationBasedCollection@V-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@.c)
 *     ?PositionNewCreatedApp@CClassicWindowActivationBasedCollection@@UEAAJAEBV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@Z @ 0x1800CAD70 (-PositionNewCreatedApp@CClassicWindowActivationBasedCollection@@UEAAJAEBV-$ComPtr@UIClassicWindo.c)
 *     ?_HandleActivation@CClassicWindowManager@@AEAAJPEAUHWND__@@V?$optional@UHandleActivationHints@CClassicWindowManager@@@std@@@Z @ 0x18028796C (-_HandleActivation@CClassicWindowManager@@AEAAJPEAUHWND__@@V-$optional@UHandleActivationHints@CC.c)
 * Callees:
 *     ?Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z @ 0x1800CA378 (-Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z.c)
 */

__int64 __fastcall CTSimpleArray<Microsoft::WRL::ComPtr<IClassicWindow>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IClassicWindow>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IClassicWindow>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IClassicWindow>>>::_EnsureCapacity(
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
      if ( a2 <= v8 )
      {
        if ( v8 > 0xFFFFFFFE )
          v8 = 4294967294LL;
      }
      else
      {
        v8 = a2;
      }
      v10 = 0LL;
      if ( is_mul_ok(v8, 8uLL) )
      {
        v4 = CTCoAllocPolicy::Realloc((IMalloc *)&v10, (v8 * (unsigned __int128)8uLL) >> 64, *(void **)a1, 8 * v8, &v10);
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
