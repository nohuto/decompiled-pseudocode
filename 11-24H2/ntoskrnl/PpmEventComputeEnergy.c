/*
 * XREFs of PpmEventComputeEnergy @ 0x140445570
 * Callers:
 *     PpmCheckComputeEnergy @ 0x140445380 (PpmCheckComputeEnergy.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwpLevelKeywordEnabled @ 0x1402D1760 (EtwpLevelKeywordEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall PpmEventComputeEnergy(int a1, __int64 a2)
{
  unsigned __int8 v2; // dl
  __int64 v3; // r8
  __int64 v4; // r9
  const GUID *ActivityId; // r10
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-38h] BYREF
  __int64 *v7; // [rsp+50h] [rbp-28h]
  __int64 v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+80h] [rbp+8h] BYREF
  __int64 v10; // [rsp+88h] [rbp+10h] BYREF

  v10 = a2;
  v9 = a1;
  if ( PpmEtwRegistered
    && PpmEtwHandle
    && (EtwpLevelKeywordEnabled(*(_QWORD *)(PpmEtwHandle + 32) + 96LL, 4u, 256LL)
     || *(_WORD *)(v4 + 102) != (_WORD)ActivityId && EtwpLevelKeywordEnabled(*(_QWORD *)(v4 + 40) + 96LL, v2, v3)) )
  {
    UserData.Ptr = (ULONGLONG)&v9;
    *(_QWORD *)&UserData.Size = 4LL;
    v7 = &v10;
    v8 = 8LL;
    EtwWriteEx(PpmEtwHandle, &PPM_ETW_COMPUTE_ENERGY, 0LL, 0, ActivityId, ActivityId, 2u, &UserData);
  }
}
