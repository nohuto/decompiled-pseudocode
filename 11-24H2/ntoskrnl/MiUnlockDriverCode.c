/*
 * XREFs of MiUnlockDriverCode @ 0x140A8472C
 * Callers:
 *     MiUnloadSystemImage @ 0x140A870C4 (MiUnloadSystemImage.c)
 * Callees:
 *     MiUnlockCodePage @ 0x140203B44 (MiUnlockCodePage.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140293050 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiGetPteAddress @ 0x140429FD0 (MiGetPteAddress.c)
 *     MiGetBaseLoaderPortion @ 0x1404C96FC (MiGetBaseLoaderPortion.c)
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
                     i + 8LL * *(unsigned int *)(v7 + 12 * v5),
                     i + 8LL * *(unsigned int *)(v7 + 12 * v5 + 4),
                     0);
      }
    }
  }
  return result;
}
