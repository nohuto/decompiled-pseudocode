/*
 * XREFs of AuthzBasepRemoveSecurityAttributeValueFromLists @ 0x140360380
 * Callers:
 *     AuthzBasepFreeSecurityAttributeValues @ 0x140356DA0 (AuthzBasepFreeSecurityAttributeValues.c)
 *     AuthzBasepFinaliseSecurityAttributesList @ 0x140357560 (AuthzBasepFinaliseSecurityAttributesList.c)
 *     SepFilterCheck @ 0x14035B6A0 (SepFilterCheck.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x14035C750 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepAddSecurityAttributeValues @ 0x14035F674 (AuthzBasepAddSecurityAttributeValues.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x14035F940 (AuthzBasepDuplicateSecurityAttributes.c)
 *     SepFreeResourceInfo @ 0x1403620C0 (SepFreeResourceInfo.c)
 *     AuthzBasepDeleteSecurityAttributeValues @ 0x1404F89C0 (AuthzBasepDeleteSecurityAttributeValues.c)
 *     AuthzBasepRollbackSecurityAttributeChanges @ 0x140696C5C (AuthzBasepRollbackSecurityAttributeChanges.c)
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
