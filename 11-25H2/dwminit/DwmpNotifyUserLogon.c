/*
 * XREFs of DwmpNotifyUserLogon @ 0x18000D920
 * Callers:
 *     <none>
 * Callees:
 *     ?TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z @ 0x18000CBDC (-TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z.c)
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000E6AC (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?SendNotification@CApiPortClient@@QEAAJPEAXF@Z @ 0x18000F104 (-SendNotification@CApiPortClient@@QEAAJPEAXF@Z.c)
 */

__int64 __fastcall DwmpNotifyUserLogon(HANDLE hToken)
{
  signed int v2; // ebx
  REGSAM v3; // edi
  BOOL v4; // esi
  CApiPortClient *v5; // rcx
  __int16 v6; // r8
  HKEY v7; // r14
  HANDLE v8; // rbx
  HANDLE v9; // rax
  signed int v10; // eax
  unsigned int v11; // edx
  int v12; // ecx
  HKEY v13; // rdi
  HANDLE v14; // rbx
  HANDLE v15; // rax
  signed int v16; // eax
  HKEY v17; // rdi
  HANDLE v18; // rbx
  HANDLE CurrentProcess; // rax
  signed int LastError; // eax
  int v21; // eax
  HKEY v23; // [rsp+40h] [rbp-40h] BYREF
  __int128 TargetHandle; // [rsp+48h] [rbp-38h] BYREF
  HANDLE v25; // [rsp+58h] [rbp-28h] BYREF
  int v26; // [rsp+60h] [rbp-20h] BYREF
  __int128 v27; // [rsp+64h] [rbp-1Ch]
  HANDLE v28; // [rsp+74h] [rbp-Ch]
  BOOL v29; // [rsp+7Ch] [rbp-4h]
  HKEY phkResult; // [rsp+C8h] [rbp+48h] BYREF
  HKEY v31; // [rsp+D0h] [rbp+50h] BYREF
  HKEY v32; // [rsp+D8h] [rbp+58h] BYREF

  v31 = 0LL;
  v2 = 0;
  TargetHandle = 0uLL;
  v32 = 0LL;
  v23 = 0LL;
  v25 = 0LL;
  AcquireSRWLockShared(&gDwmStateLock);
  if ( ghDwmProcess )
  {
    phkResult = 0LL;
    v3 = 131097;
    v4 = 0;
    if ( hToken )
    {
      v4 = ImpersonateLoggedOnUser(hToken);
      if ( v4 )
        v3 = 131103;
    }
    if ( !RegOpenCurrentUser(v3, &phkResult) )
    {
      RegOpenKeyExW(phkResult, L"Software\\Microsoft\\Windows\\DWM", 0, v3, &v31);
      RegOpenKeyExW(phkResult, L"Software\\Policies\\Microsoft\\Windows\\DWM", 0, 0x20019u, &v32);
      RegOpenKeyExW(phkResult, L"Software\\Microsoft\\Windows\\CurrentVersion\\Themes\\Personalize", 0, 0x20019u, &v23);
      CloseHandle(phkResult);
    }
    if ( v4 )
      RevertToSelf();
    v7 = v31;
    if ( !v31
      || (v31 = 0LL,
          SetLastError(0),
          v8 = ghDwmProcess,
          v9 = GetCurrentProcess(),
          DuplicateHandle(v9, v7, v8, (LPHANDLE)&TargetHandle, v3, 0, 1u)) )
    {
      v13 = v32;
      if ( !v32
        || (v32 = 0LL,
            SetLastError(0),
            v14 = ghDwmProcess,
            v15 = GetCurrentProcess(),
            DuplicateHandle(v15, v13, v14, (LPHANDLE)&TargetHandle + 1, 0x20019u, 0, 1u)) )
      {
        v17 = v23;
        if ( !v23
          || (v23 = 0LL,
              SetLastError(0),
              v18 = ghDwmProcess,
              CurrentProcess = GetCurrentProcess(),
              DuplicateHandle(CurrentProcess, v17, v18, &v25, 0x20019u, 0, 1u)) )
        {
          v26 = 536870914;
          v29 = !v4;
          v27 = TargetHandle;
          v28 = v25;
          v21 = CApiPortClient::SendNotification(v5, &v26, v6);
          v2 = v21;
          if ( v21 >= 0 )
            goto LABEL_30;
          v11 = 1658;
          v12 = v21;
          goto LABEL_29;
        }
        LastError = GetLastError();
        v2 = LastError;
        if ( LastError > 0 )
          v2 = (unsigned __int16)LastError | 0x80070000;
        v11 = 1652;
      }
      else
      {
        v16 = GetLastError();
        v2 = v16;
        if ( v16 > 0 )
          v2 = (unsigned __int16)v16 | 0x80070000;
        v11 = 1634;
      }
    }
    else
    {
      v10 = GetLastError();
      v2 = v10;
      if ( v10 > 0 )
        v2 = (unsigned __int16)v10 | 0x80070000;
      v11 = 1616;
    }
    if ( v2 >= 0 )
      v2 = -2003304445;
    v12 = v2;
LABEL_29:
    DoStackCaptureDirect(v12, v11);
  }
LABEL_30:
  TraceLoggingWriteEtw(7, v2, 0);
  ReleaseSRWLockShared(&gDwmStateLock);
  if ( v31 )
    CloseHandle(v31);
  if ( v32 )
    CloseHandle(v32);
  if ( v23 )
    CloseHandle(v23);
  return (unsigned int)v2;
}
