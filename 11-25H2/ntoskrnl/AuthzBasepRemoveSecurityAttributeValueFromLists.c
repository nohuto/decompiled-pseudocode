/*
 * XREFs of AuthzBasepRemoveSecurityAttributeValueFromLists @ 0x140291470
 * Callers:
 *     AuthzBasepFreeSecurityAttributeValues @ 0x1402904E0 (AuthzBasepFreeSecurityAttributeValues.c)
 *     AuthzBasepAddSecurityAttributeValues @ 0x140290794 (AuthzBasepAddSecurityAttributeValues.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x140290A60 (AuthzBasepDuplicateSecurityAttributes.c)
 *     AuthzBasepFinaliseSecurityAttributesList @ 0x140291740 (AuthzBasepFinaliseSecurityAttributesList.c)
 *     SepFreeResourceInfo @ 0x140362310 (SepFreeResourceInfo.c)
 *     SepFilterCheck @ 0x140363580 (SepFilterCheck.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x140366160 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepDeleteSecurityAttributeValues @ 0x1404F61C0 (AuthzBasepDeleteSecurityAttributeValues.c)
 *     AuthzBasepRollbackSecurityAttributeChanges @ 0x14068B90C (AuthzBasepRollbackSecurityAttributeChanges.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall AuthzBasepRemoveSecurityAttributeValueFromLists(_DWORD *a1, __int64 *a2, char a3)
{
  __int64 **result; // rax
  __int64 *v5; // r8
  __int64 **v6; // r9
  __int64 ***v7; // r8

  result = (__int64 **)*((unsigned int *)a2 + 8);
  if ( ((unsigned __int8)result & 2) != 0 )
  {
    v6 = (__int64 **)a2[2];
    result = (__int64 **)(a2 + 2);
    if ( v6[1] != a2 + 2 || (v7 = (__int64 ***)a2[3], *v7 != result) )
LABEL_6:
      __fastfail(3u);
    *v7 = v6;
    v6[1] = (__int64 *)v7;
    *((_DWORD *)a2 + 8) &= ~2u;
    if ( a1 )
      --a1[22];
  }
  if ( a3 )
  {
    result = (__int64 **)*((unsigned int *)a2 + 8);
    if ( ((unsigned __int8)result & 1) != 0 )
    {
      v5 = (__int64 *)*a2;
      if ( *(__int64 **)(*a2 + 8) != a2 )
        goto LABEL_6;
      result = (__int64 **)a2[1];
      if ( *result != a2 )
        goto LABEL_6;
      *result = v5;
      v5[1] = (__int64)result;
      *((_DWORD *)a2 + 8) &= ~1u;
      if ( a1 )
      {
        --a1[15];
        result = (__int64 **)*((unsigned int *)a2 + 8);
        if ( ((unsigned __int8)result & 4) != 0 )
          --a1[16];
      }
    }
  }
  return result;
}
