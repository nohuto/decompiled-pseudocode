/*
 * XREFs of EtwTraceMemoryAcg @ 0x1404585D0
 * Callers:
 *     MiArbitraryCodeBlocked @ 0x140A13140 (MiArbitraryCodeBlocked.c)
 * Callees:
 *     EtwWriteEx @ 0x140259680 (EtwWriteEx.c)
 *     EtwpLevelKeywordEnabled @ 0x1402A2030 (EtwpLevelKeywordEnabled.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

void __fastcall EtwTraceMemoryAcg(int a1)
{
  unsigned __int8 v1; // dl
  __int64 v2; // r8
  __int64 v3; // r9
  const GUID *ActivityId; // r10
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-28h] BYREF
  int v6; // [rsp+70h] [rbp+8h] BYREF

  v6 = a1;
  if ( EtwpMemoryProvRegHandle
    && (EtwpLevelKeywordEnabled(*(_QWORD *)(EtwpMemoryProvRegHandle + 32) + 96LL, 0, 256LL)
     || *(_WORD *)(v3 + 102) != (_WORD)ActivityId && EtwpLevelKeywordEnabled(*(_QWORD *)(v3 + 40) + 96LL, v1, v2)) )
  {
    UserData.Ptr = (ULONGLONG)&v6;
    *(_QWORD *)&UserData.Size = 4LL;
    EtwWriteEx(EtwpMemoryProvRegHandle, &KERNEL_MEM_EVENT_ACG, 0LL, 1u, ActivityId, ActivityId, 1u, &UserData);
  }
}
