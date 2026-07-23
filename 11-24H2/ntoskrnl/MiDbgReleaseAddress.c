/*
 * XREFs of MiDbgReleaseAddress @ 0x1406802C0
 * Callers:
 *     MiDbgCopyMemory @ 0x14067F6A8 (MiDbgCopyMemory.c)
 * Callees:
 *     MiPteInShadowRange @ 0x140202630 (MiPteInShadowRange.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiSanitizeShadowPxe @ 0x140203820 (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x1402038A0 (MiWritePteShadow.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140293050 (MI_IS_PHYSICAL_ADDRESS.c)
 *     KeFlushSingleCurrentTb @ 0x1405B9F1C (KeFlushSingleCurrentTb.c)
 *     KeFlushSingleTb @ 0x1405BA104 (KeFlushSingleTb.c)
 *     MiRealVaToFlushType @ 0x140680E2C (MiRealVaToFlushType.c)
 */

void __fastcall MiDbgReleaseAddress(unsigned __int64 a1, ULONG_PTR *a2, char a3)
{
  ULONG_PTR v3; // rbx
  __int64 v6; // rdi
  unsigned __int64 v7; // rax
  ULONG_PTR *v8; // rdi
  int v9; // ebp
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // eax
  unsigned int v14; // edx
  ULONG_PTR v15; // [rsp+48h] [rbp+10h] BYREF

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
    _InterlockedIncrement(&dword_140E30324);
    v15 = v3;
    v9 = 0;
    if ( MiPteInShadowRange((unsigned __int64)v8) )
    {
      v13 = MiSanitizeShadowPxe(v10, (__int64)&v15, v11);
      v3 = v15;
      v9 = v13;
    }
    if ( _bittest64(&MiFlags, 0x24u) && (v3 & 0x20) == 0 && (unsigned __int64)v8 >= 0xFFFFF6C000000000uLL )
      MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v8, v3, 128LL);
    *v8 = v3;
    if ( v9 )
      MiWritePteShadow((__int64)v8, v3, v11, v12);
    _InterlockedDecrement(&dword_140E30324);
    v14 = MiRealVaToFlushType(a1);
    if ( (a3 & 4) != 0 )
      KeFlushSingleCurrentTb(a1, v14);
    else
      KeFlushSingleTb(a1, v14, 2u);
  }
}
