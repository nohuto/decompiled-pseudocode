/*
 * XREFs of AuthzBasepRemoveSecurityAttributeValueFromLists @ 0x1403BAD50
 * Callers:
 *     AuthzBasepFinaliseSecurityAttributesList @ 0x1403B8CD0 (AuthzBasepFinaliseSecurityAttributesList.c)
 *     AuthzBasepFreeSecurityAttributeValues @ 0x1403B94E0 (AuthzBasepFreeSecurityAttributeValues.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x1403B95E0 (AuthzBasepFreeSecurityAttributesList.c)
 *     SepFreeResourceInfo @ 0x1403B9940 (SepFreeResourceInfo.c)
 *     SepFilterCheck @ 0x1403B9AB0 (SepFilterCheck.c)
 *     AuthzBasepAddSecurityAttributeValues @ 0x1403BA040 (AuthzBasepAddSecurityAttributeValues.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x1403BA310 (AuthzBasepDuplicateSecurityAttributes.c)
 *     AuthzBasepDeleteSecurityAttributeValues @ 0x1404F62A0 (AuthzBasepDeleteSecurityAttributeValues.c)
 *     AuthzBasepRollbackSecurityAttributeChanges @ 0x140697D2C (AuthzBasepRollbackSecurityAttributeChanges.c)
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
