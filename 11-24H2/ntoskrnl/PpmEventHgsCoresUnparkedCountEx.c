/*
 * XREFs of PpmEventHgsCoresUnparkedCountEx @ 0x1405DA8F8
 * Callers:
 *     PpmEventHgsCoresUnparkedCount @ 0x1404E4750 (PpmEventHgsCoresUnparkedCount.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     PpmEventAddAffinityMaskAsSubset @ 0x1405DA2C0 (PpmEventAddAffinityMaskAsSubset.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall PpmEventHgsCoresUnparkedCountEx(__int64 a1)
{
  struct _EVENT_DATA_DESCRIPTOR *UserData; // rbx
  unsigned int v3; // r8d
  struct _EVENT_DATA_DESCRIPTOR *v4; // rcx
  struct _EVENT_DATA_DESCRIPTOR *v5; // rcx
  struct _EVENT_DATA_DESCRIPTOR *v6; // rcx
  struct _EVENT_DATA_DESCRIPTOR *v7; // rcx
  unsigned int v8; // [rsp+40h] [rbp-78h] BYREF
  _BYTE v9[4]; // [rsp+44h] [rbp-74h] BYREF
  int v10; // [rsp+48h] [rbp-70h] BYREF
  GUID v11; // [rsp+4Ch] [rbp-6Ch] BYREF
  _BYTE v12[64]; // [rsp+60h] [rbp-58h] BYREF

  v11.Data1 = 0;
  v10 = 0;
  v8 = 0;
  UserData = PpmEventPerfCheckData;
  if ( PpmEventPerfCheckData && PpmEtwRegistered )
  {
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_HETERO_PARKING_SELECTION_COUNT) )
    {
      *(_DWORD *)&v11.Data2 = ((unsigned int)PpmHeteroHgsContainmentState >> 3) & 1;
      PpmEventAddAffinityMaskAsSubset(
        0LL,
        (_WORD *)(a1 + 48),
        (__int64)v9,
        (__int64)v12,
        (__int64)UserData,
        &v11,
        &v10,
        &v8);
      v3 = v8;
      v4 = &UserData[v8];
      v4->Reserved = 0;
      v4->Ptr = a1 + 1268;
      v4->Size = 2;
      v5 = &UserData[v3 + 1];
      v5->Reserved = 0;
      v5->Ptr = a1 + 1264;
      v5->Size = 2;
      v6 = &UserData[v3 + 2];
      v6->Reserved = 0;
      v6->Ptr = a1 + 1266;
      v6->Size = 2;
      v7 = &UserData[v3 + 3];
      v7->Reserved = 0;
      v7->Ptr = (ULONGLONG)&v11.Data2;
      v7->Size = 4;
      EtwWriteEx(PpmEtwHandle, &PPM_ETW_HETERO_PARKING_SELECTION_COUNT, 0LL, 0, 0LL, 0LL, v3 + 4, UserData);
    }
  }
}
