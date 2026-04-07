/*
 * XREFs of ?_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x18009A7B0
 * Callers:
 *     ?zInternalRelatedId@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180032F40 (-zInternalRelatedId@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Para.c)
 *     ?zInternalRelatedId@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18003424C (-zInternalRelatedId@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0Is.c)
 *     ?zInternalRelatedId@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180083724 (-zInternalRelatedId@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorT.c)
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
