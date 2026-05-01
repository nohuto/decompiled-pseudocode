/*
 * XREFs of ?_EnsureCapacity@?$CTSimpleArray@PEAVCDesktopVisibilityChangeSource@CImmersiveMode@@$0PPPPPPPO@V?$CTPolicyLocalMem@PEAVCDesktopVisibilityChangeSource@CImmersiveMode@@@@V?$CSimpleArrayStandardCompareHelper@PEAVCDesktopVisibilityChangeSource@CImmersiveMode@@@@V?$CSimpleArrayStandardMergeHelper@PEAVCDesktopVisibilityChangeSource@CImmersiveMode@@@@@@QEAAJ_K0@Z @ 0x1801A9AD4
 * Callers:
 *     ?_RegisterDesktopVisibilitySource@CImmersiveMode@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1801A9140 (-_RegisterDesktopVisibilitySource@CImmersiveMode@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTSimpleArray<CImmersiveMode::CDesktopVisibilityChangeSource *,4294967294,CTPolicyLocalMem<CImmersiveMode::CDesktopVisibilityChangeSource *>,CSimpleArrayStandardCompareHelper<CImmersiveMode::CDesktopVisibilityChangeSource *>,CSimpleArrayStandardMergeHelper<CImmersiveMode::CDesktopVisibilityChangeSource *>>::_EnsureCapacity(
        __int64 a1,
        unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v4; // rbx
  __int64 v5; // rcx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rbx
  void *v8; // rcx
  SIZE_T v9; // rax
  HLOCAL v10; // rcx

  result = 2147942522LL;
  if ( a2 <= 0xFFFFFFFE )
  {
    v4 = *(_QWORD *)(a1 + 24);
    result = 0LL;
    if ( a2 > v4 )
    {
      v5 = 2 * v4;
      if ( !is_mul_ok(v4, 2uLL) )
        return 2147942934LL;
      v6 = v4;
      v7 = v4 + 4096;
      if ( v6 <= 0x1000 )
        v7 = v5;
      if ( a2 > v7 )
      {
        v7 = a2;
      }
      else if ( v7 > 0xFFFFFFFE )
      {
        v7 = 4294967294LL;
      }
      v8 = *(void **)a1;
      v9 = 8 * v7;
      if ( !is_mul_ok(v7, 8uLL) )
        return 2147942934LL;
      if ( v8 )
      {
        v10 = LocalReAlloc(v8, v9, 0x42u);
        if ( !v10 )
          return 2147942414LL;
        result = 0LL;
      }
      else
      {
        v10 = LocalAlloc(0x40u, v9);
        result = v10 == 0LL ? 0x8007000E : 0;
        if ( !v10 )
          return result;
      }
      *(_QWORD *)(a1 + 24) = v7;
      *(_QWORD *)a1 = v10;
    }
  }
  return result;
}
