/*
 * XREFs of ?_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x18005BE50
 * Callers:
 *     ?zInternalRelatedId@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18005EB18 (-zInternalRelatedId@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryMana.c)
 * Callees:
 *     <none>
 */

bool __fastcall _tlgGuidIsZero(const struct _GUID *a1)
{
  bool result; // al

  result = 0;
  if ( !a1->Data1 && !*(_DWORD *)&a1->Data2 && !*(_DWORD *)a1->Data4 )
    return *(_DWORD *)&a1->Data4[4] == 0;
  return result;
}
