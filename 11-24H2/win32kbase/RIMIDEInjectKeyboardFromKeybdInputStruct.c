/*
 * XREFs of RIMIDEInjectKeyboardFromKeybdInputStruct @ 0x14017D678
 * Callers:
 *     NtUserInjectKeyboardInput @ 0x14016E210 (NtUserInjectKeyboardInput.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RIMIsRunningOnDesktop @ 0x1400A8A78 (RIMIsRunningOnDesktop.c)
 *     ?InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z @ 0x1401221F4 (-InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z.c)
 *     RIMIDEValidateKeybdInputStruct @ 0x14019B144 (RIMIDEValidateKeybdInputStruct.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMIDEInjectKeyboardInput @ 0x1401E6A34 (RIMIDEInjectKeyboardInput.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall RIMIDEInjectKeyboardFromKeybdInputStruct(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // r14d
  _BYTE *v7; // rdi
  _WORD *v8; // rbx
  __int64 v9; // rcx
  bool v10; // zf
  char v11; // al
  unsigned int v12; // r8d
  __int16 v13; // ax
  __int16 v14; // ax
  __int16 v15; // dx
  __int16 v16; // dx
  __int16 v17; // cx
  __int16 v18; // ax
  __int16 v19; // ax
  unsigned __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // ebx
  char v23; // di
  bool v24; // si
  __int64 v25; // rax
  int v26; // r8d
  int v27; // edx
  char v29; // bl
  bool v30; // di
  __int64 UserSessionState; // rax
  int v32; // r8d
  int v33; // edx
  _BYTE v34[192]; // [rsp+60h] [rbp-108h] BYREF

  memset(v34, 0, sizeof(v34));
  if ( a3 > 0x10 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1553LL);
  InputTraceLogging::RIM::InjectInput(-(__int64)(a1 != 0) & (a1 + 72));
  v6 = 0;
  if ( a3 )
  {
    v7 = &v34[4];
    v8 = (_WORD *)(a2 + 16);
    while ( (unsigned int)RIMIDEValidateKeybdInputStruct(a2 + 24LL * v6) )
    {
      if ( *(_DWORD *)(a1 + 460) || (v10 = !RIMIsRunningOnDesktop(v9), v11 = 0, v10) )
        v11 = 1;
      v12 = *((_DWORD *)v8 - 3);
      if ( (v12 & 0x8000) == 0 || (v10 = v11 == 0, v13 = -3, v10) )
        v13 = -2;
      *((_WORD *)v7 - 2) = v13;
      v14 = 8 * (v12 & 0x10);
      if ( (v12 & 4) != 0 )
      {
        v15 = v14 | 0x20;
      }
      else
      {
        v15 = 8 * (v12 & 0x10);
        if ( *(v8 - 8) && (v12 & 8) == 0 )
          v15 = v14 | 0x40;
      }
      v16 = (2 * (v12 & 1)) | (v12 >> 1) & 1 | v15;
      if ( (v12 & 0x8000) != 0 )
      {
        v17 = 256;
        if ( *v8 == 256 || (v17 = 512, *v8 == 512) )
          v16 |= v17;
      }
      *(_WORD *)v7 = v16;
      if ( (v16 & 0x40) != 0 )
        v18 = *(v8 - 8);
      else
        v18 = *(v8 - 7);
      *((_WORD *)v7 - 1) = v18;
      if ( (v12 & 0x20) != 0 )
        v19 = v8[1];
      else
        v19 = 0;
      *((_WORD *)v7 + 1) = v19;
      LODWORD(v20) = *((_DWORD *)v8 - 2);
      if ( !(_DWORD)v20 )
        v20 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      *((_DWORD *)v7 + 1) = v20;
      ++v6;
      v7 += 12;
      v8 += 12;
      if ( v6 >= a3 )
        goto LABEL_30;
    }
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v29 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v29 = 0;
    }
    v30 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v29 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v32) = v30;
      LOBYTE(v33) = v29;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v33,
        v32,
        *(_QWORD *)(UserSessionState + 19392),
        2,
        1,
        33,
        (__int64)&WPP_a924233173b9385c264afbc4034b0533_Traceguids);
    }
    return (unsigned int)-1073741811;
  }
  else
  {
LABEL_30:
    v22 = RIMIDEInjectKeyboardInput(a1, v34, a3);
    if ( v22 < 0 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (v21 = *((unsigned int *)WPP_GLOBAL_Control + 11), (v21 & 1) == 0)
        || (v23 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v23 = 0;
      }
      v24 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v25 = W32GetUserSessionState(v21);
        LOBYTE(v26) = v24;
        LOBYTE(v27) = v23;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v27,
          v26,
          *(_QWORD *)(v25 + 19392),
          2,
          1,
          34,
          (__int64)&WPP_a924233173b9385c264afbc4034b0533_Traceguids,
          v22);
      }
    }
  }
  return (unsigned int)v22;
}
