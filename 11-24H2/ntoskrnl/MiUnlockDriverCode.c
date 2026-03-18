/*
 * XREFs of MiUnlockDriverCode @ 0x140A8823C
 * Callers:
 *     MiUnloadSystemImage @ 0x140A8AD84 (MiUnloadSystemImage.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402637E0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiUnlockCodePage @ 0x1402C7618 (MiUnlockCodePage.c)
 *     MiGetPteAddress @ 0x140437550 (MiGetPteAddress.c)
 *     MiGetBaseLoaderPortion @ 0x1404D0508 (MiGetBaseLoaderPortion.c)
 */

__int64 __fastcall MiUnlockDriverCode(__int64 a1)
{
  unsigned __int64 v1; // rsi
  __int64 result; // rax
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 i; // rsi
  __int64 v7; // rcx

  v1 = *(_QWORD *)(a1 + 48);
  result = MI_IS_PHYSICAL_ADDRESS(v1);
  if ( !(_DWORD)result )
  {
    result = MiGetBaseLoaderPortion(a1);
    v4 = result;
    if ( (*(_DWORD *)(result + 184) & 1) != 0 )
    {
      result = MiGetPteAddress(v1);
      v5 = 0LL;
      for ( i = result; (unsigned int)v5 < *(_DWORD *)(v4 + 296); v5 = (unsigned int)(v5 + 1) )
      {
        v7 = *(_QWORD *)(v4 + 200);
        result = *(unsigned int *)(v7 + 12 * v5 + 8);
        if ( (_DWORD)result )
          result = MiUnlockCodePage(
                     (_QWORD *)(i + 8LL * *(unsigned int *)(v7 + 12 * v5)),
                     i + 8LL * *(unsigned int *)(v7 + 12 * v5 + 4),
                     0);
      }
    }
  }
  return result;
}
