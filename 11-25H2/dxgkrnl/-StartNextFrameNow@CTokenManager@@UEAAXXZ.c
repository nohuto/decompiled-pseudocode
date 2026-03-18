/*
 * XREFs of ?StartNextFrameNow@CTokenManager@@UEAAXXZ @ 0x14004A350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CTokenManager::StartNextFrameNow(HANDLE *this)
{
  LONG PreviousState; // [rsp+30h] [rbp+8h] BYREF

  PreviousState = 0;
  ZwSetEvent(this[9], &PreviousState);
}
