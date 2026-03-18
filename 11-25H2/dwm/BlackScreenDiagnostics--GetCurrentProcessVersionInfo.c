/*
 * XREFs of BlackScreenDiagnostics::GetCurrentProcessVersionInfo @ 0x14000F228
 * Callers:
 *     ?Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFlags@2@AEBU_GUID@@@Z @ 0x14000F898 (-Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFla.c)
 * Callees:
 *     __security_check_cookie @ 0x140004EE0 (__security_check_cookie.c)
 *     memset_0 @ 0x140005D98 (memset_0.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x14000B1F8 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ??$_Construct_n@$$V@?$vector@EV?$allocator@E@std@@@std@@AEAAX_K@Z @ 0x14000EC1C (--$_Construct_n@$$V@-$vector@EV-$allocator@E@std@@@std@@AEAAX_K@Z.c)
 *     ??$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@Z @ 0x14000EE90 (--$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@-$basic_string@GU-$char_trai.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x14000EFA8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x14000F044 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?_Large_mode_engaged@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBA_NXZ @ 0x1400100D8 (-_Large_mode_engaged@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBA_NXZ.c)
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x140010154 (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x1400104FC (MicrosoftTelemetryAssertTriggeredArgs.c)
 *     memmove_0 @ 0x140010BC8 (memmove_0.c)
 */

__int64 __fastcall BlackScreenDiagnostics::GetCurrentProcessVersionInfo(_QWORD *a1, __int64 a2, __int64 a3)
{
  _WORD *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  HANDLE CurrentProcess; // rax
  DWORD v8; // eax
  __int64 v9; // rcx
  __int64 v11; // rdx
  const WCHAR *v12; // r8
  DWORD FileVersionInfoSizeW; // eax
  DWORD v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rdx
  DWORD v17; // r8d
  void *v18; // r9
  const WCHAR *v19; // r10
  DWORD LastError; // eax
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // r8
  unsigned __int64 v24; // rdx
  char *v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rbx
  DWORD dwSize[2]; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int16 *lpBuffer; // [rsp+50h] [rbp-B8h] BYREF
  LPVOID lpBuffer_8[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v31; // [rsp+68h] [rbp-A0h]
  LPCWSTR lptstrFilename[4]; // [rsp+70h] [rbp-98h] BYREF
  _OWORD Src[3]; // [rsp+90h] [rbp-78h] BYREF
  __int16 v34; // [rsp+C0h] [rbp-48h]
  WCHAR ExeName[264]; // [rsp+C8h] [rbp-40h] BYREF

  if ( a1[3] < 7uLL )
  {
    std::wstring::_Reallocate_for<_lambda_05cef1f6fdf474c9f3ed207deba0f73b_,unsigned short const *>(
      (__int64)a1,
      7uLL,
      a3,
      L"Unknown");
  }
  else
  {
    v4 = a1;
    if ( (unsigned __int8)((__int64 (*)(void))std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged)() )
      v4 = *(_WORD **)v6;
    *(_QWORD *)(v6 + 16) = v5;
    memmove_0(v4, L"Unknown", 0xEuLL);
    v4[7] = 0;
  }
  dwSize[0] = 260;
  memset_0(ExeName, 0, 0x208uLL);
  CurrentProcess = GetCurrentProcess();
  if ( QueryFullProcessImageNameW(CurrentProcess, 0, ExeName, dwSize) )
  {
    std::wstring::wstring(lptstrFilename, ExeName);
    if ( (unsigned __int8)std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(
                            lptstrFilename,
                            v11,
                            lptstrFilename) )
      v12 = lptstrFilename[0];
    FileVersionInfoSizeW = GetFileVersionInfoSizeW(v12, 0LL);
    if ( FileVersionInfoSizeW )
    {
      v31 = 0LL;
      *(_OWORD *)lpBuffer_8 = 0LL;
      std::vector<unsigned char>::_Construct_n<>(lpBuffer_8, FileVersionInfoSizeW);
      if ( (unsigned __int8)std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(
                              lptstrFilename,
                              v16,
                              (unsigned int)(LODWORD(lpBuffer_8[1]) - LODWORD(lpBuffer_8[0]))) )
        v19 = lptstrFilename[0];
      if ( GetFileVersionInfoW(v19, 0, v17, v18) )
      {
        lpBuffer = 0LL;
        dwSize[1] = 0;
        if ( VerQueryValueW(lpBuffer_8[0], L"\\", (LPVOID *)&lpBuffer, &dwSize[1]) )
        {
          memset(Src, 0, sizeof(Src));
          v34 = 0;
          StringCchPrintfW(
            (unsigned __int16 *)Src,
            0x19uLL,
            (size_t *)L"%hu.%hu.%hu.%hu",
            lpBuffer[5],
            lpBuffer[4],
            lpBuffer[7],
            lpBuffer[6]);
          v24 = -1LL;
          do
            ++v24;
          while ( *((_WORD *)Src + v24) );
          if ( v24 > a1[3] )
          {
            std::wstring::_Reallocate_for<_lambda_05cef1f6fdf474c9f3ed207deba0f73b_,unsigned short const *>(
              (__int64)a1,
              v24,
              v23,
              Src);
          }
          else
          {
            v25 = (char *)a1;
            if ( (unsigned __int8)std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(
                                    a1,
                                    v24,
                                    v23) )
              v25 = (char *)*a1;
            a1[2] = v26;
            v27 = 2 * v26;
            memmove_0(v25, Src, 2 * v26);
            *(_WORD *)&v25[v27] = 0;
          }
        }
        else
        {
          MicrosoftTelemetryAssertTriggeredArgs(v22, 0LL, 0LL);
        }
      }
      else
      {
        LastError = GetLastError();
        MicrosoftTelemetryAssertTriggeredArgs(v21, LastError, 0LL);
      }
      std::vector<unsigned char>::_Tidy(lpBuffer_8);
    }
    else
    {
      v14 = GetLastError();
      MicrosoftTelemetryAssertTriggeredArgs(v15, v14, 0LL);
    }
    return std::wstring::~wstring((__int64)lptstrFilename);
  }
  else
  {
    v8 = GetLastError();
    return MicrosoftTelemetryAssertTriggeredArgs(v9, v8, 0LL);
  }
}
