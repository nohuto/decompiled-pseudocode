/*
 * XREFs of MiDbgReleaseAddress @ 0x1406738A0
 * Callers:
 *     MiDbgCopyMemory @ 0x140672C90 (MiDbgCopyMemory.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1402480C0 (MiPteInShadowRange.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402AC190 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiSanitizeShadowPxe @ 0x1403FDBDC (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x1403FDC5C (MiWritePteShadow.c)
 *     KeFlushSingleCurrentTb @ 0x1405B8A4C (KeFlushSingleCurrentTb.c)
 *     KeFlushSingleTb @ 0x1405B8C34 (KeFlushSingleTb.c)
 *     MiRealVaToFlushType @ 0x14067440C (MiRealVaToFlushType.c)
 */

void __fastcall MiDbgReleaseAddress(unsigned __int64 a1, ULONG_PTR *a2, char a3)
{
  ULONG_PTR v3; // rbx
  __int64 v6; // rdi
  unsigned __int64 v7; // rax
  ULONG_PTR *v8; // rdi
  int v9; // ebp
  unsigned int v10; // edx

  v3 = *a2;
  if ( *a2 )
  {
    if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(a1) )
    {
      v6 = (a1 >> 18) & 0x3FFFFFF8;
      v7 = 0xFFFFF6FB40000000uLL;
    }
    else
    {
      v6 = (a1 >> 9) & 0x7FFFFFFFF8LL;
      v7 = 0xFFFFF68000000000uLL;
    }
    v8 = (ULONG_PTR *)(v7 + v6);
    _InterlockedIncrement(&dword_140E2FF9C);
    v9 = 0;
    if ( MiPteInShadowRange((unsigned __int64)v8) )
      v9 = MiSanitizeShadowPxe();
    if ( _bittest64(&MiFlags, 0x24u) && (v3 & 0x20) == 0 && (unsigned __int64)v8 >= 0xFFFFF6C000000000uLL )
      MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v8, v3, 128);
    *v8 = v3;
    if ( v9 )
      MiWritePteShadow();
    _InterlockedDecrement(&dword_140E2FF9C);
    v10 = MiRealVaToFlushType(a1);
    if ( (a3 & 4) != 0 )
      KeFlushSingleCurrentTb(a1, v10);
    else
      KeFlushSingleTb(a1, v10, 2u);
  }
}
