/*
 * XREFs of PlaySndClient_midl_user_free @ 0x1C024AF00
 * Callers:
 *     PlaySoundPostMessage @ 0x1C03993D0 (PlaySoundPostMessage.c)
 * Callees:
 *     <none>
 */

void __fastcall PlaySndClient_midl_user_free(void *a1)
{
  ExFreePoolWithTag(a1, 0);
}
