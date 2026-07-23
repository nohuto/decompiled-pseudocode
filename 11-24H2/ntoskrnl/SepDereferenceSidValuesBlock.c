/*
 * XREFs of SepDereferenceSidValuesBlock @ 0x1407932B0
 * Callers:
 *     SepDeleteLogonSessionSidValues @ 0x14079327C (SepDeleteLogonSessionSidValues.c)
 *     SepSetTokenUserAndGroups @ 0x1409E8D10 (SepSetTokenUserAndGroups.c)
 * Callees:
 *     SepLogTokenSidManagement @ 0x14078FD30 (SepLogTokenSidManagement.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall SepDereferenceSidValuesBlock(volatile signed __int64 *P, __int64 a2, __int64 a3)
{
  signed __int64 v4; // rax
  bool v5; // zf
  bool v6; // sf
  bool v7; // of
  signed __int64 v8; // rax

  if ( P )
  {
    v4 = _InterlockedExchangeAdd64(P + 1, 0xFFFFFFFFFFFFFFFFuLL);
    v7 = __OFSUB__(v4, 1LL);
    v5 = v4 == 1;
    v6 = v4 - 1 < 0;
    v8 = v4 - 1;
    if ( v6 ^ v7 | v5 )
    {
      if ( v8 )
        __fastfail(0xEu);
      SepLogTokenSidManagement(5, (__int64)P, 0LL, a2, a3);
      ExFreePoolWithTag((PVOID)P, 0);
    }
  }
}
