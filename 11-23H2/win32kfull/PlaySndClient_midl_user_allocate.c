/*
 * XREFs of PlaySndClient_midl_user_allocate @ 0x1C007A930
 * Callers:
 *     PlaySoundPostMessage @ 0x1C03993D0 (PlaySoundPostMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PlaySndClient_midl_user_allocate(__int64 a1)
{
  return ExAllocatePool2(256LL, a1, 1399025746LL);
}
