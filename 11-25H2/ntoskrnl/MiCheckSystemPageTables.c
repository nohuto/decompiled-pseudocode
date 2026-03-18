/*
 * XREFs of MiCheckSystemPageTables @ 0x1403E2760
 * Callers:
 *     MiSystemFault @ 0x1403E1EBC (MiSystemFault.c)
 * Callees:
 *     KeInvalidAccessAllowed @ 0x1403E2860 (KeInvalidAccessAllowed.c)
 *     MiGenerateAccessViolation @ 0x1403E297C (MiGenerateAccessViolation.c)
 *     MiCheckSystemNxFault @ 0x1403E2CC4 (MiCheckSystemNxFault.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall MiCheckSystemPageTables(ULONG_PTR *a1)
{
  ULONG_PTR **v2; // rcx
  __int64 result; // rax
  ULONG_PTR v4; // rbx
  ULONG_PTR v5; // rcx
  _BYTE *v6; // rax
  ULONG_PTR v7; // rdx

  v2 = (ULONG_PTR **)(a1 + 6);
  for ( result = 3LL; ; --result )
  {
    if ( !result )
      return result;
    v4 = **v2;
    if ( (v4 & 1) == 0 )
      KeBugCheckEx(0x50u, *a1, a1[1], a1[2], 0xDuLL);
    if ( (v4 & 0x80u) != 0LL )
      break;
    --v2;
  }
  if ( (a1[1] & 2) == 0 || (v4 & 0x800) != 0 )
  {
    MiCheckSystemNxFault(a1, **v2, 6LL);
    v5 = a1[2];
    v6 = (_BYTE *)(v5 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( (v5 & 1) != 0 )
    {
      if ( *v6 == 1 || *v6 == 3 || *v6 == 6 )
        return 1LL;
    }
    else if ( (unsigned __int8)KeInvalidAccessAllowed(v5, 0LL) )
    {
      return 1LL;
    }
    v7 = *a1;
    if ( *a1 >= 0xFFFFF68000000000uLL && v7 <= 0xFFFFF6FFFFFFFFFFuLL )
      KeBugCheckEx(0x50u, v7, a1[1], a1[2], 8uLL);
    return 1LL;
  }
  if ( !(unsigned int)MiGenerateAccessViolation(a1) )
    KeBugCheckEx(0xBEu, *a1, v4, a1[2], 0x10uLL);
  return 2LL;
}
