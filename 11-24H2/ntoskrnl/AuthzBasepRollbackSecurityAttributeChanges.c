/*
 * XREFs of AuthzBasepRollbackSecurityAttributeChanges @ 0x140697D2C
 * Callers:
 *     AuthzBasepFinaliseSecurityAttributesList @ 0x1403B8CD0 (AuthzBasepFinaliseSecurityAttributesList.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x1403BA310 (AuthzBasepDuplicateSecurityAttributes.c)
 * Callees:
 *     AuthzBasepFreeSecurityAttributeValues @ 0x1403B94E0 (AuthzBasepFreeSecurityAttributeValues.c)
 *     AuthzBasepRemoveSecurityAttributeValueFromLists @ 0x1403BAD50 (AuthzBasepRemoveSecurityAttributeValueFromLists.c)
 *     AuthzBasepRemoveSecurityAttributeFromLists @ 0x140428230 (AuthzBasepRemoveSecurityAttributeFromLists.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

bool __fastcall AuthzBasepRollbackSecurityAttributeChanges(_DWORD *a1, __int64 a2)
{
  char v2; // bl
  __int64 v4; // rdx
  int v5; // eax
  _QWORD *v6; // rsi
  __int64 v7; // r11
  int v8; // eax

  v2 = 1;
  AuthzBasepRemoveSecurityAttributeFromLists(a1, (__int64 *)a2, 0, 1);
  v5 = *(_DWORD *)(v4 + 56);
  if ( (v5 & 4) != 0 )
  {
    if ( (v5 & 1) == 0 )
    {
      AuthzBasepFreeSecurityAttributeValues(v4, 0);
      return v2;
    }
    *(_DWORD *)(v4 + 56) = v5 & 0xFFFFFFFB;
    AuthzBasepFreeSecurityAttributeValues(v4, 1);
  }
  v6 = (_QWORD *)(a2 + 96);
  while ( (_QWORD *)*v6 != v6 )
  {
    AuthzBasepRemoveSecurityAttributeValueFromLists((_DWORD *)a2, (__int64 *)(*v6 - 16LL), 0);
    v8 = *(_DWORD *)(v7 + 16);
    if ( (v8 & 4) != 0 )
    {
      --*(_DWORD *)(a2 + 64);
      *(_DWORD *)(v7 + 16) &= ~4u;
      v8 = *(_DWORD *)(v7 + 16);
    }
    if ( (v8 & 1) == 0 )
      ExFreePoolWithTag((PVOID)(v7 - 16), 0);
  }
  return (*(_BYTE *)(a2 + 56) & 1) == 0;
}
