/*
 * XREFs of MiUpdateUserMappings @ 0x140B6A44C
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x140B6552C (PopInvokeSystemStateHandler.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiSanitizeShadowPxe @ 0x140233C54 (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x140233CD4 (MiWritePteShadow.c)
 *     MiPteInShadowRange @ 0x1402863E0 (MiPteInShadowRange.c)
 *     MiMakeQuasiPte @ 0x14041CEC0 (MiMakeQuasiPte.c)
 *     MiRevertQuasiPte @ 0x14041CEE0 (MiRevertQuasiPte.c)
 *     MiGetPteAddress @ 0x140437550 (MiGetPteAddress.c)
 */

unsigned __int64 MiUpdateUserMappings()
{
  ULONG_PTR *i; // rdi
  __int64 v1; // rax
  unsigned __int64 result; // rax
  ULONG_PTR v3; // rbx
  int v4; // esi
  unsigned __int64 QuasiPte; // [rsp+38h] [rbp+10h]
  unsigned __int64 v6; // [rsp+40h] [rbp+18h]

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
        v3 = QuasiPte;
        v4 = MiSanitizeShadowPxe();
      }
    }
    else
    {
      if ( (v1 & 0x400) == 0 )
        goto LABEL_4;
      v6 = MiRevertQuasiPte(v1);
      v3 = v6;
      v4 = 0;
      if ( MiPteInShadowRange((unsigned __int64)i) )
      {
        v3 = v6;
        v4 = MiSanitizeShadowPxe();
      }
      if ( _bittest64(&MiFlags, 0x24u)
        && (v3 & 0x20) == 0
        && (unsigned __int64)i >= MiGetPteAddress(0xFFFF800000000000uLL) )
      {
        MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)i, v3, 128);
      }
    }
    *i = v3;
    if ( v4 )
      MiWritePteShadow();
LABEL_4:
    result = 0xFFFFF6FB7DBED7F8uLL;
  }
  return result;
}
