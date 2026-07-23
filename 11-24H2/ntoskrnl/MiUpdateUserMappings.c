/*
 * XREFs of MiUpdateUserMappings @ 0x140B6BB5C
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x140B6766C (PopInvokeSystemStateHandler.c)
 * Callees:
 *     MiPteInShadowRange @ 0x140202630 (MiPteInShadowRange.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiSanitizeShadowPxe @ 0x140203820 (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x1402038A0 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeQuasiPte @ 0x1404114F0 (MiMakeQuasiPte.c)
 *     MiRevertQuasiPte @ 0x140411510 (MiRevertQuasiPte.c)
 *     MiGetPteAddress @ 0x140429FD0 (MiGetPteAddress.c)
 */

unsigned __int64 MiUpdateUserMappings()
{
  ULONG_PTR *i; // rdi
  __int64 v1; // rax
  unsigned __int64 result; // rax
  ULONG_PTR v3; // rbx
  int v4; // esi
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  unsigned __int64 QuasiPte; // [rsp+38h] [rbp+10h] BYREF
  unsigned __int64 v12; // [rsp+40h] [rbp+18h] BYREF

  for ( i = (ULONG_PTR *)0xFFFFF6FB7DBED000LL; (unsigned __int64)i <= 0xFFFFF6FB7DBED7F8uLL; ++i )
  {
    v1 = MI_READ_PTE_LOCK_FREE((unsigned __int64)i);
    if ( (v1 & 1) != 0 )
    {
      QuasiPte = MiMakeQuasiPte(v1);
      v3 = QuasiPte;
      v4 = 0;
      if ( MiPteInShadowRange((unsigned __int64)i) )
      {
        v8 = MiSanitizeShadowPxe(v5, (__int64)&QuasiPte, v6);
        v3 = QuasiPte;
        v4 = v8;
      }
    }
    else
    {
      if ( (v1 & 0x400) == 0 )
        goto LABEL_4;
      v12 = MiRevertQuasiPte(v1);
      v3 = v12;
      v4 = 0;
      if ( MiPteInShadowRange((unsigned __int64)i) )
      {
        v10 = MiSanitizeShadowPxe(v9, (__int64)&v12, v6);
        v3 = v12;
        v4 = v10;
      }
      if ( _bittest64(&MiFlags, 0x24u)
        && (v3 & 0x20) == 0
        && (unsigned __int64)i >= MiGetPteAddress(0xFFFF800000000000uLL) )
      {
        MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)i, v3, 128LL);
      }
    }
    *i = v3;
    if ( v4 )
      MiWritePteShadow((__int64)i, v3, v6, v7);
LABEL_4:
    result = 0xFFFFF6FB7DBED7F8uLL;
  }
  return result;
}
