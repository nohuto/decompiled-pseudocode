/*
 * XREFs of NtUserRemoteShadowStart @ 0x1C01D9480
 * Callers:
 *     <none>
 * Callees:
 *     RemoteShadowStart @ 0x1C0202B7C (RemoteShadowStart.c)
 */

__int64 __fastcall NtUserRemoteShadowStart(void *Src, size_t Size)
{
  unsigned int v2; // ebx
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9

  v2 = Size;
  EnterCrit(0LL, 0LL);
  v4 = RemoteShadowStart(Src, v2);
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v4;
}
