/*
 * XREFs of PpmEventTraceProfiles @ 0x140A3CB8C
 * Callers:
 *     PpmRegisterProfiles @ 0x1407635A0 (PpmRegisterProfiles.c)
 *     PpmEventTraceControlCallback @ 0x140AC8550 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PpmEndProfileAccumulation @ 0x140A3D2A0 (PpmEndProfileAccumulation.c)
 */

char __fastcall PpmEventTraceProfiles(char a1)
{
  _UNKNOWN **v1; // rax
  const EVENT_DESCRIPTOR *v3; // rdx
  __int64 *v4; // rdi
  unsigned __int8 v5; // bl
  ULONGLONG *v6; // r8
  ULONGLONG v7; // r9
  __int64 v8; // rdx
  _WORD *v9; // rax
  __int64 v10; // rax
  ULONGLONG v11; // kr00_8
  const EVENT_DESCRIPTOR *v12; // rdx
  unsigned __int64 v14; // [rsp+38h] [rbp-79h] BYREF
  unsigned __int64 v15; // [rsp+40h] [rbp-71h] BYREF
  unsigned __int64 v16; // [rsp+48h] [rbp-69h] BYREF
  __int64 v17; // [rsp+50h] [rbp-61h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-59h] BYREF
  ULONGLONG *v19; // [rsp+68h] [rbp-49h]
  __int64 v20; // [rsp+70h] [rbp-41h]
  ULONGLONG *v21; // [rsp+78h] [rbp-39h]
  __int64 v22; // [rsp+80h] [rbp-31h]
  char *v23; // [rsp+88h] [rbp-29h]
  __int64 v24; // [rsp+90h] [rbp-21h]
  char *v25; // [rsp+98h] [rbp-19h]
  __int64 v26; // [rsp+A0h] [rbp-11h]
  ULONGLONG *v27; // [rsp+A8h] [rbp-9h]
  __int64 v28; // [rsp+B0h] [rbp-1h]
  unsigned __int64 *v29; // [rsp+B8h] [rbp+7h]
  __int64 v30; // [rsp+C0h] [rbp+Fh]
  unsigned __int64 *v31; // [rsp+C8h] [rbp+17h]
  __int64 v32; // [rsp+D0h] [rbp+1Fh]
  unsigned __int64 *v33; // [rsp+D8h] [rbp+27h]
  __int64 v34; // [rsp+E0h] [rbp+2Fh]
  _UNKNOWN *retaddr; // [rsp+110h] [rbp+5Fh] BYREF

  v1 = &retaddr;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  if ( PpmEtwRegistered )
  {
    v3 = &PPM_ETW_PROCESSOR_PROFILE_REGISTERED;
    if ( a1 )
      v3 = (const EVENT_DESCRIPTOR *)L"g";
    LOBYTE(v1) = EtwEventEnabled(PpmEtwHandle, v3);
    if ( (_BYTE)v1 )
    {
      v4 = PpmCurrentProfile[0];
      v5 = 0;
      v17 = MEMORY[0xFFFFF78000000008];
      PpmEndProfileAccumulation(PpmCurrentProfile[0], MEMORY[0xFFFFF78000000008], PpmDefaultProfile);
      while ( 1 )
      {
        v7 = *v6;
        if ( !*v6 )
          goto LABEL_17;
        v8 = 0x7FFFFFFFLL;
        v9 = (_WORD *)*v6;
        do
        {
          if ( !*v9 )
            break;
          ++v9;
          --v8;
        }
        while ( v8 );
        v10 = (0x7FFFFFFF - v8) & -(__int64)(v8 != 0);
        if ( !v8 )
LABEL_17:
          LODWORD(v10) = 0;
        UserData.Size = 2 * v10 + 2;
        v19 = v6 + 1;
        v21 = v6 + 4;
        v23 = (char *)v6 + 28;
        v25 = (char *)v6 + 12;
        UserData.Ptr = v7;
        UserData.Reserved = 0;
        v20 = 1LL;
        v22 = 1LL;
        v24 = 4LL;
        v26 = 16LL;
        v14 = v6[129] / 0xA;
        v15 = v6[130] / 0xA;
        v11 = v6[131];
        v28 = 8LL;
        v27 = v6 + 128;
        v29 = &v14;
        v31 = &v15;
        v33 = &v16;
        v16 = v11 / 0xA;
        v12 = (const EVENT_DESCRIPTOR *)L"g";
        v30 = 8LL;
        v32 = 8LL;
        v34 = 8LL;
        if ( !a1 )
          v12 = &PPM_ETW_PROCESSOR_PROFILE_REGISTERED;
        LOBYTE(v1) = EtwWrite(PpmEtwHandle, v12, 0LL, 9u, &UserData);
        if ( v5 == PpmProfileCount )
          break;
        v6 = (ULONGLONG *)(PpmProfiles + 1056LL * v5++);
      }
      v4[127] = v17;
    }
  }
  return (char)v1;
}
