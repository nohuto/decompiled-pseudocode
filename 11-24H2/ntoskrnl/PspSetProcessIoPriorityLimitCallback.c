/*
 * XREFs of PspSetProcessIoPriorityLimitCallback @ 0x140A5FAF0
 * Callers:
 *     PspSetProcessBackgroundCountCallback @ 0x140A5FAD0 (PspSetProcessBackgroundCountCallback.c)
 * Callees:
 *     PspNotifyProcessEffectiveIoLimitChanged @ 0x1403E2874 (PspNotifyProcessEffectiveIoLimitChanged.c)
 */

__int64 __fastcall PspSetProcessIoPriorityLimitCallback(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx

  if ( (*(_DWORD *)(a1 + 496) & 1) == 0 )
  {
    v2 = *(_QWORD *)(a1 + 672);
    v3 = *a2;
    if ( (_DWORD)v3 != *(_DWORD *)(v2 + 1084) )
      PspNotifyProcessEffectiveIoLimitChanged(a1, v3, (unsigned int)v3 < *(_DWORD *)(v2 + 1084));
  }
  return 0LL;
}
