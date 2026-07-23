/*
 * XREFs of PpmEventDomainPerfStateChange @ 0x14032CA00
 * Callers:
 *     PpmPerfApplyDomainState @ 0x1403A14F0 (PpmPerfApplyDomainState.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     KeAndGroupAffinityEx @ 0x14032DF70 (KeAndGroupAffinityEx.c)
 *     PpmFireWmiEvent @ 0x1405D5478 (PpmFireWmiEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall PpmEventDomainPerfStateChange(__int64 a1)
{
  _UNKNOWN **v1; // rax
  unsigned __int16 v3; // ax
  unsigned __int16 v4; // di
  _OWORD *v5; // rdx
  bool v6; // cf
  unsigned __int64 v7; // rcx
  bool v8; // zf
  unsigned int v9; // r8d
  __int64 v10; // rcx
  __int64 v11; // rcx
  unsigned int v12; // r8d
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rax
  REGHANDLE v17; // rcx
  _OWORD *v18; // rdx
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  int v25; // [rsp+48h] [rbp-C0h] BYREF
  int v26; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int v27; // [rsp+50h] [rbp-B8h] BYREF
  int v28; // [rsp+54h] [rbp-B4h] BYREF
  _DWORD v29[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v30; // [rsp+60h] [rbp-A8h]
  __int64 v31; // [rsp+68h] [rbp-A0h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp-90h] BYREF
  unsigned int *v33; // [rsp+88h] [rbp-80h]
  __int64 v34; // [rsp+90h] [rbp-78h]
  int *v35; // [rsp+98h] [rbp-70h]
  __int64 v36; // [rsp+A0h] [rbp-68h]
  _OWORD v37[32]; // [rsp+4F8h] [rbp+3F0h] BYREF
  _UNKNOWN *retaddr; // [rsp+720h] [rbp+618h] BYREF

  v1 = &retaddr;
  if ( !*(_DWORD *)(a1 + 304) )
  {
    v26 = *(_DWORD *)(a1 + 808);
    v27 = *(_DWORD *)(a1 + 828);
    LOBYTE(v1) = WmiPerfStateDomainEventEnabled;
    if ( WmiPerfStateDomainEventEnabled )
    {
      v29[0] = v26;
      v22 = *(_QWORD *)(a1 + 32);
      v23 = *(_QWORD *)(a1 + 16);
      v31 = v22;
      v30 = v27;
      v29[1] = 0;
      LOBYTE(v1) = PpmFireWmiEvent(v23 - 136, &PPM_PERFSTATE_DOMAIN_CHANGE_GUID, 24LL, v29);
    }
    if ( PpmEtwRegistered )
    {
      LOBYTE(v1) = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_DOMAIN_PERF_STATE_CHANGE);
      if ( (_BYTE)v1 )
      {
        v3 = 0;
        v4 = 0;
        LOWORD(v25) = 0;
        do
        {
          v5 = &v37[v3];
          v6 = v4 < KeActiveProcessors.Count;
          *v5 = 0LL;
          *((_WORD *)v5 + 4) = v4;
          if ( v6 )
            v7 = KeActiveProcessors.Bitmap[v4];
          else
            v7 = 0LL;
          *(_QWORD *)v5 = v7;
          v8 = (unsigned int)KeAndGroupAffinityEx(a1 + 24, v5, v5) == 0;
          v3 = v25;
          if ( !v8 )
          {
            v3 = v25 + 1;
            LOWORD(v25) = v25 + 1;
          }
          ++v4;
        }
        while ( v4 < 0x20u );
        *(_QWORD *)&UserData.Size = 4LL;
        UserData.Ptr = (ULONGLONG)&v26;
        v33 = &v27;
        v34 = 4LL;
        v35 = &v25;
        v36 = 2LL;
        v9 = 3;
        if ( v3 )
        {
          v18 = v37;
          v19 = v3;
          do
          {
            v20 = 2LL * v9;
            *(&UserData.Ptr + v20) = (ULONGLONG)v18 + 8;
            *((_QWORD *)&UserData.Size + v20) = 2LL;
            v21 = 2LL * (v9 + 1);
            v9 += 2;
            *(&UserData.Ptr + v21) = (ULONGLONG)v18++;
            *((_QWORD *)&UserData.Size + v21) = 8LL;
            --v19;
          }
          while ( v19 );
        }
        v10 = 2LL * v9;
        *(&UserData.Ptr + v10) = a1 + 824;
        *((_QWORD *)&UserData.Size + v10) = 4LL;
        v11 = v9 + 1;
        v12 = v9 + 2;
        v11 *= 2LL;
        *(&UserData.Ptr + v11) = a1 + 832;
        *((_QWORD *)&UserData.Size + v11) = 4LL;
        v13 = 2LL * v12;
        *(&UserData.Ptr + v13) = a1 + 836;
        *((_QWORD *)&UserData.Size + v13) = 4LL;
        v14 = v12 + 1;
        v12 += 2;
        v14 *= 2LL;
        *(&UserData.Ptr + v14) = a1 + 840;
        v15 = *(unsigned __int8 *)(a1 + 856);
        *((_QWORD *)&UserData.Size + v14) = 4LL;
        v28 = v15;
        v16 = 2LL * v12;
        *(&UserData.Ptr + v16) = (ULONGLONG)&v28;
        v17 = PpmEtwHandle;
        *((_QWORD *)&UserData.Size + v16) = 4LL;
        LOBYTE(v1) = EtwWriteEx(v17, &PPM_ETW_DOMAIN_PERF_STATE_CHANGE, 0LL, 0, 0LL, 0LL, v12 + 1, &UserData);
      }
    }
  }
  return (char)v1;
}
