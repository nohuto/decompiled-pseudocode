/*
 * XREFs of SepDeleteClaimAttributes @ 0x140A71894
 * Callers:
 *     SepSetTokenClaims @ 0x140A4E9F4 (SepSetTokenClaims.c)
 *     SepDeleteLogonSessionClaims @ 0x140A5D264 (SepDeleteLogonSessionClaims.c)
 *     SepTokenDeleteMethod @ 0x140AD6F50 (SepTokenDeleteMethod.c)
 * Callees:
 *     AuthzBasepFreeSecurityAttributesList @ 0x1403B95E0 (AuthzBasepFreeSecurityAttributesList.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall SepDeleteClaimAttributes(PVOID P)
{
  _DWORD *v2; // rcx
  _DWORD *v3; // rcx
  void *v4; // rcx

  if ( P )
  {
    v2 = (_DWORD *)*((_QWORD *)P + 72);
    if ( v2 )
    {
      AuthzBasepFreeSecurityAttributesList(v2);
      ExFreePoolWithTag(*((PVOID *)P + 72), 0);
      *((_QWORD *)P + 72) = 0LL;
    }
    v3 = (_DWORD *)*((_QWORD *)P + 73);
    if ( v3 )
    {
      AuthzBasepFreeSecurityAttributesList(v3);
      ExFreePoolWithTag(*((PVOID *)P + 73), 0);
      *((_QWORD *)P + 73) = 0LL;
    }
    v4 = (void *)*((_QWORD *)P + 1);
    if ( v4 )
    {
      ExFreePoolWithTag(v4, 0);
      *((_QWORD *)P + 1) = 0LL;
    }
    ExFreePoolWithTag(P, 0);
  }
}
