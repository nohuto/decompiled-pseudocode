/*
 * XREFs of ?SaveHKCUPathInSessionData@DpiPersistence@@YAJXZ @ 0x1403F19C8
 * Callers:
 *     DxgkInitializeDpi @ 0x1403F19B0 (DxgkInitializeDpi.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x14004C948 (-RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 *     ?GetUserRegistryPath@DXGSESSIONDATA@@QEAAPEAU_UNICODE_STRING@@G@Z @ 0x140063B04 (-GetUserRegistryPath@DXGSESSIONDATA@@QEAAPEAU_UNICODE_STRING@@G@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402955C0 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 */

NTSTATUS __fastcall DpiPersistence::SaveHKCUPathInSessionData(DpiPersistence *this)
{
  DXGGLOBAL *Global; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct DXGSESSIONDATA *SessionData; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int CurrentProcessSessionId; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // eax
  NTSTATUS result; // eax
  void *v14; // rcx
  struct _UNICODE_STRING *UserRegistryPath; // rax
  ULONG v16; // r8d
  __int64 v17; // rdi
  struct _UNICODE_STRING KeyPath; // [rsp+50h] [rbp-18h] BYREF

  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global);
  if ( SessionData )
  {
    KeyPath = 0LL;
    result = RtlFormatCurrentUserKeyPath(&KeyPath);
    if ( result >= 0 )
    {
      v14 = (void *)*((_QWORD *)SessionData + 2343);
      if ( v14 )
      {
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v14);
        *((_DWORD *)SessionData + 4684) = 0;
        *((_QWORD *)SessionData + 2343) = 0LL;
      }
      UserRegistryPath = DXGSESSIONDATA::GetUserRegistryPath(SessionData, KeyPath.MaximumLength);
      v17 = (int)RtlUnicodeStringCopy(UserRegistryPath, &KeyPath, v16);
      RtlFreeUnicodeString(&KeyPath);
      if ( (int)v17 < 0 )
      {
        WdLogSingleEntry1(2LL, v17);
        WdLogGlobalForLineNumber = 497;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"RtlFreeUnicodeString failed: (Status = 0x%I64x)",
          v17,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      return v17;
    }
  }
  else
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v3, v2, v5, v6);
    WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
    WdLogGlobalForLineNumber = 471;
    v12 = PsGetCurrentProcessSessionId(v9, v8, v10, v11);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Current session does not have session data in session 0x%I64x, returning 0x%I64x.",
      v12,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return -1073741811;
  }
  return result;
}
