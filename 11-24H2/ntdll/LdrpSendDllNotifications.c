/*
 * XREFs of LdrpSendDllNotifications @ 0x1800712E4
 * Callers:
 *     LdrpUnloadNode @ 0x18001CA60 (LdrpUnloadNode.c)
 *     LdrpSendPostSnapNotifications @ 0x1800707A0 (LdrpSendPostSnapNotifications.c)
 *     LdrpCorProcessImports @ 0x1800746A0 (LdrpCorProcessImports.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800148F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall LdrpSendDllNotifications(__int64 a1, unsigned int a2)
{
  _UNKNOWN **i; // rbx
  _DWORD v5[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+28h] [rbp-30h]
  __int64 v7; // [rsp+30h] [rbp-28h]
  __int64 v8; // [rsp+38h] [rbp-20h]
  int v9; // [rsp+40h] [rbp-18h]

  v5[0] = 0;
  v5[1] = 0;
  v6 = a1 + 72;
  v7 = a1 + 88;
  v8 = *(_QWORD *)(a1 + 48);
  v9 = *(_DWORD *)(a1 + 64);
  RtlEnterCriticalSection((__int64)&LdrpDllNotificationLock);
  for ( i = (_UNKNOWN **)LdrpDllNotificationList; i != &LdrpDllNotificationList; i = (_UNKNOWN **)*i )
    ((void (__fastcall *)(_QWORD, _DWORD *, void *))i[2])(a2, v5, i[3]);
  return RtlLeaveCriticalSection((__int64)&LdrpDllNotificationLock);
}
