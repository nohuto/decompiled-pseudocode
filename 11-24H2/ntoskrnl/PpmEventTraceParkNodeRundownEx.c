/*
 * XREFs of PpmEventTraceParkNodeRundownEx @ 0x140765A0C
 * Callers:
 *     PpmEventTraceControlCallback @ 0x140AC8550 (PpmEventTraceControlCallback.c)
 * Callees:
 *     ?KiOrAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x1402AA18C (-KiOrAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     KeIsSingleGroupAffinityEx @ 0x1404697A0 (KeIsSingleGroupAffinityEx.c)
 *     PpmEventAddAffinityMaskAsSubset @ 0x1405DA2C0 (PpmEventAddAffinityMaskAsSubset.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void __fastcall PpmEventTraceParkNodeRundownEx(__int16 a1, __int64 a2)
{
  PEVENT_DATA_DESCRIPTOR v2; // rsi
  unsigned int i; // edi
  ULONG v5; // edx
  __int64 v6; // rcx
  __int64 v7; // rcx
  char v8; // [rsp+40h] [rbp-C0h] BYREF
  char v9; // [rsp+41h] [rbp-BFh] BYREF
  unsigned __int16 v10[2]; // [rsp+44h] [rbp-BCh] BYREF
  ULONG UserDataCount; // [rsp+48h] [rbp-B8h] BYREF
  int v12; // [rsp+4Ch] [rbp-B4h] BYREF
  _DWORD v13[4]; // [rsp+50h] [rbp-B0h] BYREF
  struct _KAFFINITY_EX v14; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+170h] [rbp+70h] BYREF
  __int64 v16; // [rsp+180h] [rbp+80h]
  __int64 v17; // [rsp+188h] [rbp+88h]
  __int64 v18; // [rsp+190h] [rbp+90h]
  __int64 v19; // [rsp+198h] [rbp+98h]
  char *v20; // [rsp+1A0h] [rbp+A0h]
  __int64 v21; // [rsp+1A8h] [rbp+A8h]
  char *v22; // [rsp+1B0h] [rbp+B0h]
  __int64 v23; // [rsp+1B8h] [rbp+B8h]
  unsigned __int64 *v24; // [rsp+1C0h] [rbp+C0h]
  __int64 v25; // [rsp+1C8h] [rbp+C8h]
  __int64 v26; // [rsp+1D0h] [rbp+D0h]
  __int64 v27; // [rsp+1D8h] [rbp+D8h]
  _BYTE v28[16]; // [rsp+1E0h] [rbp+E0h] BYREF
  _BYTE v29[256]; // [rsp+1F0h] [rbp+F0h] BYREF
  __int16 v30; // [rsp+330h] [rbp+230h] BYREF

  v30 = a1;
  v2 = PpmEventPerfCheckData;
  v13[0] = 0;
  v12 = 0;
  if ( PpmEventPerfCheckData )
  {
    v10[0] = 0;
    memset_0(&v14.8, 0, sizeof(v14.8));
    if ( PpmEtwRegistered )
    {
      if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PARK_NODE_RUNDOWN) )
      {
        *(_QWORD *)&v14.Count = 2097153LL;
        memset_0(&v14.8, 0, sizeof(v14.8));
        for ( i = 0;
              i < *(unsigned __int8 *)(a2 + 12);
              KiOrAffinityEx(
                &v14,
                (struct _KAFFINITY_EX *)(640LL * i++ + *(_QWORD *)(a2 + 1288) + 304LL),
                &v14,
                v14.Size) )
        {
          ;
        }
        if ( (unsigned int)KeIsSingleGroupAffinityEx((unsigned __int16 *)(a2 + 48), v10) )
        {
          UserData.Ptr = (ULONGLONG)v10;
          *(_QWORD *)&UserData.Size = 2LL;
          v17 = 8LL;
          v19 = 8LL;
          v21 = 1LL;
          v16 = a2 + 8 * (v10[0] + 7LL);
          v23 = 1LL;
          v18 = a2 + 8 * (v10[0] + 40LL);
          v8 = *(_BYTE *)(a2 + 1168);
          v9 = *(_BYTE *)(a2 + 1172);
          v20 = &v8;
          v22 = &v9;
          v25 = 8LL;
          v24 = &v14.Bitmap[v10[0]];
          v27 = 8LL;
          v26 = a2 + 8 * (v10[0] + 106LL);
          EtwWrite(PpmEtwHandle, &PPM_ETW_PARK_NODE_RUNDOWN_V3, 0LL, 7u, &UserData);
        }
        else
        {
          *(_QWORD *)&v2->Size = 2LL;
          v2->Ptr = (ULONGLONG)&v30;
          UserDataCount = 1;
          PpmEventAddAffinityMaskAsSubset(
            0LL,
            (_WORD *)(a2 + 48),
            (__int64)v28,
            (__int64)v29,
            (__int64)v2,
            v13,
            &v12,
            &UserDataCount);
          PpmEventAddAffinityMaskAsSubset(
            (_WORD *)(a2 + 48),
            (_WORD *)(a2 + 312),
            (__int64)v28,
            (__int64)v29,
            (__int64)v2,
            v13,
            &v12,
            &UserDataCount);
          v5 = UserDataCount;
          v6 = UserDataCount;
          v2[v6].Ptr = a2 + 1168;
          *(_QWORD *)&v2[v6].Size = 2LL;
          v7 = v5 + 1;
          UserDataCount = v5 + 2;
          v2[v7].Ptr = a2 + 1172;
          *(_QWORD *)&v2[v7].Size = 2LL;
          PpmEventAddAffinityMaskAsSubset(
            (_WORD *)(a2 + 48),
            &v14,
            (__int64)v28,
            (__int64)v29,
            (__int64)v2,
            v13,
            &v12,
            &UserDataCount);
          PpmEventAddAffinityMaskAsSubset(
            (_WORD *)(a2 + 48),
            (_WORD *)(a2 + 840),
            (__int64)v28,
            (__int64)v29,
            (__int64)v2,
            v13,
            &v12,
            &UserDataCount);
          EtwWrite(PpmEtwHandle, &PPM_ETW_PARK_NODE_RUNDOWN, 0LL, UserDataCount, v2);
        }
      }
    }
  }
}
