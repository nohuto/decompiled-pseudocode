/*
 * XREFs of ?WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z @ 0x1401C58C0
 * Callers:
 *     ?DrtTestUpdateRegistryForNewOverride@@YAJU_LUID@@IH@Z @ 0x1401C55AC (-DrtTestUpdateRegistryForNewOverride@@YAJU_LUID@@IH@Z.c)
 *     DxgkUpdateDpiInfoForNewOverride @ 0x1401C5B70 (DxgkUpdateDpiInfoForNewOverride.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?GetUserRegistryPath@DXGSESSIONDATA@@QEAAPEAU_UNICODE_STRING@@G@Z @ 0x140063214 (-GetUserRegistryPath@DXGSESSIONDATA@@QEAAPEAU_UNICODE_STRING@@G@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x140289000 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?WriteDwordToParticularRegValue@DpiPersistence@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z @ 0x140366B20 (-WriteDwordToParticularRegValue@DpiPersistence@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z.c)
 *     ?AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x140368638 (-AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall DpiPersistence::WriteDpiToRegistry(
        DpiPersistence *this,
        const struct _LUID *a2,
        int a3,
        struct _UNICODE_STRING *a4)
{
  __int64 v5; // rdi
  const struct _UNICODE_STRING *v6; // r9
  int v7; // eax
  DXGGLOBAL *Global; // rax
  DXGSESSIONDATA *SessionData; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v13; // eax
  const struct _UNICODE_STRING *v14; // r9
  int v15; // eax
  unsigned __int16 *v17; // [rsp+28h] [rbp-29h]
  unsigned __int16 *v18; // [rsp+28h] [rbp-29h]
  unsigned int v19; // [rsp+30h] [rbp-21h]
  unsigned int v20; // [rsp+30h] [rbp-21h]
  struct _UNICODE_STRING v21; // [rsp+58h] [rbp+7h] BYREF
  __m128i v22; // [rsp+68h] [rbp+17h] BYREF
  struct _UNICODE_STRING v23; // [rsp+78h] [rbp+27h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+88h] [rbp+37h] BYREF
  struct _UNICODE_STRING v25; // [rsp+98h] [rbp+47h] BYREF

  v21 = 0LL;
  LODWORD(v5) = DpiPersistence::AllocateMonitorSetIdFromAdapterSource(this, a2, (unsigned int)&v21, a4);
  if ( (int)v5 >= 0 )
  {
    DestinationString = 0LL;
    v23 = 0LL;
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System");
    RtlInitUnicodeString(&v23, L"CurrentControlSet\\Control\\GraphicsDrivers\\ScaleFactors");
    LODWORD(v17) = a3;
    v7 = DpiPersistence::WriteDwordToParticularRegValue((DpiPersistence *)&DestinationString, &v23, &v21, v6, v17, v19);
    v5 = v7;
    if ( v7 < 0 )
    {
      WdLogSingleEntry1(2LL, v7);
      WdLogGlobalForLineNumber = 746;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
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
      v22 = 0LL;
      v25 = 0LL;
      v22 = *(__m128i *)DXGSESSIONDATA::GetUserRegistryPath(SessionData, 0, v10, v11);
      if ( _mm_srli_si128(v22, 8).m128i_u64[0] )
      {
        RtlInitUnicodeString(&v25, L"Control Panel\\Desktop\\PerMonitorSettings\\");
        LODWORD(v18) = a3;
        v15 = DpiPersistence::WriteDwordToParticularRegValue((DpiPersistence *)&v22, &v25, &v21, v14, v18, v20);
        v5 = v15;
        if ( v15 < 0 )
        {
          WdLogSingleEntry1(2LL, v15);
          WdLogGlobalForLineNumber = 781;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
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
        if ( v22.m128i_i16[0] )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 771;
          DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"HKCURootName.Length == 0", 771LL, 0LL, 0LL, 0LL, 0LL);
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
      v13 = PsGetCurrentProcessSessionId();
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Current session does not have session data in session 0x%I64x, returning 0x%I64x.",
        v13,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
    }
  }
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v21.Buffer);
  return (unsigned int)v5;
}
