/*
 * XREFs of MiRaisedIrqlFault @ 0x1402FADDC
 * Callers:
 *     MmAccessFault @ 0x140243610 (MmAccessFault.c)
 * Callees:
 *     MiNoFaultFound @ 0x140203670 (MiNoFaultFound.c)
 *     MiTransientCombineAddress @ 0x14020D0AC (MiTransientCombineAddress.c)
 *     MiGenerateAccessViolation @ 0x1402FB178 (MiGenerateAccessViolation.c)
 *     KeInvalidAccessAllowed @ 0x1402FC4D0 (KeInvalidAccessAllowed.c)
 *     MiCheckSystemNxFault @ 0x1404939B0 (MiCheckSystemNxFault.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall MiRaisedIrqlFault(__int64 a1)
{
  __int64 v2; // rcx
  _DWORD *MmInternal; // rcx
  int v4; // ecx
  ULONG_PTR v5; // r8
  bool v6; // cc
  __int64 v7; // rcx
  _BYTE *v8; // rax
  __int64 v10; // rax
  ULONG_PTR **i; // rcx
  ULONG_PTR v12; // rdx
  ULONG_PTR *v13; // rsi
  unsigned __int64 v14; // rbx
  __int64 v15; // rcx

  v2 = *(_QWORD *)(a1 + 16);
  if ( (v2 & 1) == 0 && (unsigned __int8)KeInvalidAccessAllowed(v2, 1LL) )
    return 3221225477LL;
  if ( (*(_DWORD *)(a1 + 80) & 0x80u) != 0 )
    KeBugCheckEx(0x50u, *(_QWORD *)a1, *(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16), 0xEuLL);
  MmInternal = KeGetCurrentPrcb()->MmInternal;
  if ( MmInternal )
  {
    v4 = MmInternal[80];
    if ( v4 )
    {
      if ( KeGetCurrentIrql() != 2 )
        KeBugCheckEx(0x50u, *(_QWORD *)a1, *(_QWORD *)(a1 + 8), KeGetCurrentIrql(), 0xAuLL);
      if ( v4 == 1 )
      {
        v5 = *(_QWORD *)a1;
        if ( *(_QWORD *)a1 >= 0xFFFFF6FB40000000uLL && v5 <= 0xFFFFF6FB7FFFFFFFuLL
          || v5 >= 0xFFFFF6FB7DA00000uLL && v5 <= 0xFFFFF6FB7DBFFFF8uLL )
        {
          return 3221225477LL;
        }
        if ( v5 < 0xFFFFF6FB7DBED000uLL )
          goto LABEL_14;
        v6 = v5 <= 0xFFFFF6FB7DBEDFF8uLL;
      }
      else
      {
        if ( v4 != 2 || *(_QWORD *)a1 < 0xFFFFF68000000000uLL )
          goto LABEL_14;
        v6 = *(_QWORD *)a1 <= 0xFFFFF6FFFFFFFFFFuLL;
      }
      if ( v6 )
        return 3221225477LL;
LABEL_14:
      KeBugCheckEx(0x50u, *(_QWORD *)a1, *(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16), 0xBuLL);
    }
  }
  v7 = *(_QWORD *)(a1 + 16);
  v8 = (_BYTE *)(v7 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (v7 & 1) != 0 )
  {
    if ( *v8 == 1 || *v8 == 3 || *v8 == 6 )
      return 3221225477LL;
  }
  else if ( (unsigned __int8)KeInvalidAccessAllowed(v7, 0LL) )
  {
    return 3221225477LL;
  }
  if ( (unsigned int)MiTransientCombineAddress((unsigned __int64)KeGetCurrentThread(), *(_QWORD *)a1, 1)
    || (unsigned int)MiGenerateAccessViolation(a1) )
  {
    return 3221225477LL;
  }
  if ( *(_QWORD *)a1 >= 0xFFFF800000000000uLL )
  {
    v10 = 3LL;
    for ( i = (ULONG_PTR **)(a1 + 48); ; --i )
    {
      v12 = **i;
      if ( (v12 & 1) == 0 )
        return 3489660934LL;
      if ( (v12 & 0x80u) != 0LL )
      {
        if ( (*(_BYTE *)(a1 + 8) & 2) != 0 && (v12 & 0x800) == 0 )
          KeBugCheckEx(0xBEu, *(_QWORD *)a1, **i, *(_QWORD *)(a1 + 16), 0xFuLL);
        MiCheckSystemNxFault(a1, v12, 3LL);
        if ( *(_QWORD *)a1 >= 0xFFFFF68000000000uLL && *(_QWORD *)a1 <= 0xFFFFF6FFFFFFFFFFuLL )
          KeBugCheckEx(0x50u, *(_QWORD *)a1, *(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16), 8uLL);
        return 0LL;
      }
      if ( !v10 )
        break;
      --v10;
    }
    v13 = (ULONG_PTR *)(((*(_QWORD *)a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v14 = *v13;
    if ( (*v13 & 1) == 0 )
      return 3489660934LL;
    if ( (*(_BYTE *)(a1 + 8) & 2) != 0 )
    {
      if ( (v14 & 0x200) != 0 )
        return 3489660934LL;
      if ( (v14 & 0x800) == 0 )
        KeBugCheckEx(0xBEu, *(_QWORD *)a1, *v13, *(_QWORD *)(a1 + 16), 0xAuLL);
    }
    MiCheckSystemNxFault(a1, *v13, 0LL);
    v15 = 48 * ((v14 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    if ( (unsigned __int16)*(_DWORD *)(v15 + 32) > 1u
      || (*(_QWORD *)v15 & 1) == 0
      || (*(_DWORD *)(v15 + 32) & 0x8000000) != 0 )
    {
      MiNoFaultFound(a1, (volatile signed __int64 *)v13, *(_QWORD *)a1, *(_QWORD *)(a1 + 16), 1u, v14);
      return 0LL;
    }
  }
  return 3489660934LL;
}
