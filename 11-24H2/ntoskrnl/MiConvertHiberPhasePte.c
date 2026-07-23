/*
 * XREFs of MiConvertHiberPhasePte @ 0x140B6BA10
 * Callers:
 *     <none>
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPteAddress @ 0x140429FD0 (MiGetPteAddress.c)
 *     MiIsPfn @ 0x14044F7D0 (MiIsPfn.c)
 */

__int64 __fastcall MiConvertHiberPhasePte(__int64 a1, ULONG_PTR *a2, int a3)
{
  ULONG_PTR v3; // rbx
  bool v5; // zf
  __int16 v7; // ax
  ULONG_PTR v8; // rbx
  PVOID v10; // rsi
  ULONG_PTR v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a2;
  v5 = *(_QWORD *)(a1 + 184) == 0LL;
  v11 = *a2;
  if ( v5 )
  {
    v7 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v11);
    if ( (v7 & 1) == 0 && (v7 & 0x400) != 0 && (v7 & 4) != 0 )
    {
      v8 = v11 & 0xFFFFFFFFFFFFFBFAuLL | 1;
      v11 = v8;
      if ( _bittest64(&MiFlags, 0x24u)
        && (v8 & 0x20) == 0
        && (unsigned __int64)a2 >= MiGetPteAddress(0xFFFF800000000000uLL) )
      {
        MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)a2, v8, 128LL);
      }
      goto LABEL_6;
    }
  }
  else if ( (v3 & 1) != 0 && !a3 )
  {
    v10 = (PVOID)((v3 >> 12) & 0xFFFFFFFFFFLL);
    if ( (unsigned int)MiIsPfn((unsigned __int64)v10) )
    {
      if ( v10 != qword_140E37480[0]
        && v10 != (PVOID)qword_140E374B8
        && !_bittest64(*(const signed __int64 **)(*(_QWORD *)(a1 + 184) + 8LL), (unsigned int)v10) )
      {
        v8 = v3 & 0xFFFFFFFFFFFFFBFAuLL | 0x404;
        v11 = v8;
LABEL_6:
        *a2 = v8;
      }
    }
  }
  return 0LL;
}
