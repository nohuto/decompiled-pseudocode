/*
 * XREFs of ?SaveHKCUPathInSessionData@DpiPersistence@@YAJXZ @ 0x1403F7BD8
 * Callers:
 *     DxgkInitializeDpi @ 0x1403F7BC0 (DxgkInitializeDpi.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x14004CEFC (-RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 *     ?GetUserRegistryPath@DXGSESSIONDATA@@QEAAPEAU_UNICODE_STRING@@G@Z @ 0x140063214 (-GetUserRegistryPath@DXGSESSIONDATA@@QEAAPEAU_UNICODE_STRING@@G@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x140289000 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
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
  __int64 v14; // r8
  __int64 v15; // r9
  void *v16; // rcx
  struct _UNICODE_STRING *UserRegistryPath; // rax
  ULONG v18; // r8d
  __int64 v19; // rdi
  struct _UNICODE_STRING KeyPath; // [rsp+50h] [rbp-18h] BYREF

  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global);
  if ( SessionData )
  {
    KeyPath = 0LL;
    result = RtlFormatCurrentUserKeyPath(&KeyPath);
    if ( result >= 0 )
    {
      v16 = (void *)*((_QWORD *)SessionData + 2343);
      if ( v16 )
      {
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v16);
        *((_DWORD *)SessionData + 4684) = 0;
        *((_QWORD *)SessionData + 2343) = 0LL;
      }
      UserRegistryPath = DXGSESSIONDATA::GetUserRegistryPath(SessionData, KeyPath.MaximumLength, v14, v15);
      v19 = (int)RtlUnicodeStringCopy(UserRegistryPath, &KeyPath, v18);
      RtlFreeUnicodeString(&KeyPath);
      if ( (int)v19 < 0 )
      {
        WdLogSingleEntry1(2LL, v19);
        WdLogGlobalForLineNumber = 497;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"RtlFreeUnicodeString failed: (Status = 0x%I64x)",
          v19,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      return v19;
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
      0x40000,
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
