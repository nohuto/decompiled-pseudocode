/*
 * XREFs of ?WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z @ 0x1401CAB10
 * Callers:
 *     ?DrtTestUpdateRegistryForNewOverride@@YAJU_LUID@@IH@Z @ 0x1401CA7FC (-DrtTestUpdateRegistryForNewOverride@@YAJU_LUID@@IH@Z.c)
 *     DxgkUpdateDpiInfoForNewOverride @ 0x1401CADC0 (DxgkUpdateDpiInfoForNewOverride.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?GetUserRegistryPath@DXGSESSIONDATA@@QEAAPEAU_UNICODE_STRING@@G@Z @ 0x140063B04 (-GetUserRegistryPath@DXGSESSIONDATA@@QEAAPEAU_UNICODE_STRING@@G@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402955C0 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?WriteDwordToParticularRegValue@DpiPersistence@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z @ 0x14033B220 (-WriteDwordToParticularRegValue@DpiPersistence@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z.c)
 *     ?AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x14033CD38 (-AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall DpiPersistence::WriteDpiToRegistry(
        struct _LUID *this,
        const struct _LUID *a2,
        int a3,
        struct _UNICODE_STRING *a4)
{
  __int64 v5; // rdi
  const struct _UNICODE_STRING *v6; // r9
  int v7; // eax
  DXGGLOBAL *Global; // rax
  DXGSESSIONDATA *SessionData; // rax
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v11; // eax
  const struct _UNICODE_STRING *v12; // r9
  int v13; // eax
  unsigned __int16 *v15; // [rsp+28h] [rbp-29h]
  unsigned __int16 *v16; // [rsp+28h] [rbp-29h]
  unsigned int v17; // [rsp+30h] [rbp-21h]
  unsigned int v18; // [rsp+30h] [rbp-21h]
  struct _UNICODE_STRING v19; // [rsp+58h] [rbp+7h] BYREF
  __m128i v20; // [rsp+68h] [rbp+17h] BYREF
  struct _UNICODE_STRING v21; // [rsp+78h] [rbp+27h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+88h] [rbp+37h] BYREF
  struct _UNICODE_STRING v23; // [rsp+98h] [rbp+47h] BYREF

  v19 = 0LL;
  LODWORD(v5) = DpiPersistence::AllocateMonitorSetIdFromAdapterSource(this, a2, (unsigned int)&v19, a4);
  if ( (int)v5 >= 0 )
  {
    DestinationString = 0LL;
    v21 = 0LL;
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System");
    RtlInitUnicodeString(&v21, L"CurrentControlSet\\Control\\GraphicsDrivers\\ScaleFactors");
    LODWORD(v15) = a3;
    v7 = DpiPersistence::WriteDwordToParticularRegValue((DpiPersistence *)&DestinationString, &v21, &v19, v6, v15, v17);
    v5 = v7;
    if ( v7 < 0 )
    {
      WdLogSingleEntry1(2LL, v7);
      WdLogGlobalForLineNumber = 746;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to write DPI value to HKLM. Writing to HKCU anyway. (Status = 0x%I64x)",
        v5,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    Global = DXGGLOBAL::GetGlobal();
    SessionData = DXGGLOBAL::GetSessionData(Global);
    if ( SessionData )
    {
      v20 = 0LL;
      v23 = 0LL;
      v20 = *(__m128i *)DXGSESSIONDATA::GetUserRegistryPath(SessionData, 0);
      if ( _mm_srli_si128(v20, 8).m128i_u64[0] )
      {
        RtlInitUnicodeString(&v23, L"Control Panel\\Desktop\\PerMonitorSettings\\");
        LODWORD(v16) = a3;
        v13 = DpiPersistence::WriteDwordToParticularRegValue((DpiPersistence *)&v20, &v23, &v19, v12, v16, v18);
        v5 = v13;
        if ( v13 < 0 )
        {
          WdLogSingleEntry1(2LL, v13);
          WdLogGlobalForLineNumber = 781;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Failed to write DPI value to HKCU. (Status = 0x%I64x)",
            v5,
            0LL,
            0LL,
            0LL,
            0LL);
        }
      }
      else
      {
        if ( v20.m128i_i16[0] )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 771;
          DxgkLogInternalTriageEvent(
            0LL,
            262146LL,
            0xFFFFFFFFLL,
            L"HKCURootName.Length == 0",
            771LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 772;
      }
    }
    else
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId();
      LODWORD(v5) = -1073741811;
      WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
      WdLogGlobalForLineNumber = 759;
      v11 = PsGetCurrentProcessSessionId();
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Current session does not have session data in session 0x%I64x, returning 0x%I64x.",
        v11,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
    }
  }
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v19.Buffer);
  return (unsigned int)v5;
}
