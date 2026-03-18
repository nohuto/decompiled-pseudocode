/*
 * XREFs of MiRaisedIrqlFault @ 0x1403E1B20
 * Callers:
 *     MmAccessFault @ 0x1402B5880 (MmAccessFault.c)
 * Callees:
 *     MiTransientCombineAddress @ 0x1403E2664 (MiTransientCombineAddress.c)
 *     KeInvalidAccessAllowed @ 0x1403E2860 (KeInvalidAccessAllowed.c)
 *     MiGenerateAccessViolation @ 0x1403E297C (MiGenerateAccessViolation.c)
 *     MiNoFaultFound @ 0x1403E2AA0 (MiNoFaultFound.c)
 *     MiCheckSystemNxFault @ 0x1403E2CC4 (MiCheckSystemNxFault.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall MiRaisedIrqlFault(_QWORD *a1)
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
  ULONG_PTR v14; // rbx
  __int64 v15; // rcx

  v2 = a1[2];
  if ( (v2 & 1) == 0 && (unsigned __int8)KeInvalidAccessAllowed(v2, 1LL) )
    return 3221225477LL;
  if ( (*((_DWORD *)a1 + 20) & 0x80u) != 0 )
    KeBugCheckEx(0x50u, *a1, a1[1], a1[2], 0xEuLL);
  MmInternal = KeGetCurrentPrcb()->MmInternal;
  if ( MmInternal )
  {
    v4 = MmInternal[80];
    if ( v4 )
    {
      if ( KeGetCurrentIrql() != 2 )
        KeBugCheckEx(0x50u, *a1, a1[1], KeGetCurrentIrql(), 0xAuLL);
      if ( v4 == 1 )
      {
        v5 = *a1;
        if ( *a1 >= 0xFFFFF6FB40000000uLL && v5 <= 0xFFFFF6FB7FFFFFFFuLL
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
        if ( v4 != 2 || *a1 < 0xFFFFF68000000000uLL )
          goto LABEL_14;
        v6 = *a1 <= 0xFFFFF6FFFFFFFFFFuLL;
      }
      if ( v6 )
        return 3221225477LL;
LABEL_14:
      KeBugCheckEx(0x50u, *a1, a1[1], a1[2], 0xBuLL);
    }
  }
  v7 = a1[2];
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
  if ( (unsigned int)MiTransientCombineAddress(KeGetCurrentThread(), *a1, 1LL)
    || (unsigned int)MiGenerateAccessViolation(a1) )
  {
    return 3221225477LL;
  }
  if ( *a1 >= 0xFFFF800000000000uLL )
  {
    v10 = 3LL;
    for ( i = (ULONG_PTR **)(a1 + 6); ; --i )
    {
      v12 = **i;
      if ( (v12 & 1) == 0 )
        return 3489660934LL;
      if ( (v12 & 0x80u) != 0LL )
      {
        if ( (a1[1] & 2) != 0 && (v12 & 0x800) == 0 )
          KeBugCheckEx(0xBEu, *a1, **i, a1[2], 0xFuLL);
        MiCheckSystemNxFault(a1, v12, 3LL);
        if ( *a1 >= 0xFFFFF68000000000uLL && *a1 <= 0xFFFFF6FFFFFFFFFFuLL )
          KeBugCheckEx(0x50u, *a1, a1[1], a1[2], 8uLL);
        return 0LL;
      }
      if ( !v10 )
        break;
      --v10;
    }
    v13 = (ULONG_PTR *)(((*a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v14 = *v13;
    if ( (*v13 & 1) == 0 )
      return 3489660934LL;
    if ( (a1[1] & 2) != 0 )
    {
      if ( (v14 & 0x200) != 0 )
        return 3489660934LL;
      if ( (v14 & 0x800) == 0 )
        KeBugCheckEx(0xBEu, *a1, *v13, a1[2], 0xAuLL);
    }
    MiCheckSystemNxFault(a1, *v13, 0LL);
    v15 = 48 * ((v14 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    if ( (unsigned __int16)*(_DWORD *)(v15 + 32) > 1u
      || (*(_QWORD *)v15 & 1) == 0
      || (*(_DWORD *)(v15 + 32) & 0x8000000) != 0 )
    {
      MiNoFaultFound(a1, v13, *a1, a1[2], 1, v14);
      return 0LL;
    }
  }
  return 3489660934LL;
}
