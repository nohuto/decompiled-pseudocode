/*
 * XREFs of PpmEventParkNodeRestrictionEx @ 0x1405DB39C
 * Callers:
 *     PpmEventParkNodeRestriction @ 0x1404E4890 (PpmEventParkNodeRestriction.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     PpmEventAddAffinityMaskAsSubset @ 0x1405DA2C0 (PpmEventAddAffinityMaskAsSubset.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall PpmEventParkNodeRestrictionEx(char a1, __int64 a2)
{
  const EVENT_DESCRIPTOR *v2; // rax
  struct _EVENT_DATA_DESCRIPTOR *UserData; // rdi
  const EVENT_DESCRIPTOR *v5; // rbx
  unsigned int v6; // r9d
  struct _EVENT_DATA_DESCRIPTOR *v7; // rax
  struct _EVENT_DATA_DESCRIPTOR *v8; // rcx
  struct _EVENT_DATA_DESCRIPTOR *v9; // rcx
  ULONGLONG v10; // rax
  struct _EVENT_DATA_DESCRIPTOR *v11; // rcx
  int v12; // r8d
  char v14; // [rsp+48h] [rbp-19h] BYREF
  bool v15; // [rsp+49h] [rbp-18h] BYREF
  unsigned int v16; // [rsp+4Ch] [rbp-15h] BYREF
  char v17[4]; // [rsp+50h] [rbp-11h] BYREF
  int v18; // [rsp+54h] [rbp-Dh] BYREF
  GUID v19; // [rsp+58h] [rbp-9h] BYREF
  char v20[64]; // [rsp+68h] [rbp+7h] BYREF
  _UNKNOWN *retaddr; // [rsp+C0h] [rbp+5Fh] BYREF

  v2 = (const EVENT_DESCRIPTOR *)&retaddr;
  v19.Data1 = 0;
  v18 = 0;
  v16 = 0;
  UserData = PpmEventPerfCheckData;
  if ( PpmEventPerfCheckData )
  {
    v2 = &PPM_ETW_RESTRICTION_UPDATE;
    v5 = (const EVENT_DESCRIPTOR *)PPM_ETW_RESTRICTION_RUNDOWN;
    if ( !a1 )
      v5 = &PPM_ETW_RESTRICTION_UPDATE;
    if ( PpmEtwRegistered )
    {
      LOBYTE(v2) = EtwEventEnabled(PpmEtwHandle, v5);
      if ( (_BYTE)v2 )
      {
        PpmEventAddAffinityMaskAsSubset(
          0LL,
          (_WORD *)(a2 + 48),
          (__int64)v17,
          (__int64)v20,
          (__int64)UserData,
          &v19,
          &v18,
          &v16);
        v6 = v16;
        v14 = *(_BYTE *)(a2 + 1232);
        v7 = &UserData[v16];
        v7->Reserved = 0;
        v7->Ptr = (ULONGLONG)&v14;
        v7->Size = 1;
        v15 = *(_BYTE *)(a2 + 1236) != 0;
        v8 = &UserData[v6 + 1];
        v8->Reserved = 0;
        v8->Ptr = (ULONGLONG)&v15;
        v8->Size = 1;
        v9 = &UserData[v6 + 2];
        v9->Reserved = 0;
        v9->Ptr = a2 + 1252;
        v9->Size = 2;
        v10 = *(_QWORD *)(a2 + 1256);
        v11 = &UserData[v6 + 3];
        v12 = 4 * *(unsigned __int16 *)(a2 + 1252);
        v11->Reserved = 0;
        v11->Ptr = v10;
        v11->Size = v12;
        LOBYTE(v2) = EtwWriteEx(PpmEtwHandle, v5, 0LL, 0, 0LL, 0LL, v6 + 4, UserData);
      }
    }
  }
  return (char)v2;
}
