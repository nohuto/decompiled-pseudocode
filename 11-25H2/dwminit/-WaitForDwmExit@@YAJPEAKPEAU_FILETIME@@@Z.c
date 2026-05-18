/*
 * XREFs of ?WaitForDwmExit@@YAJPEAKPEAU_FILETIME@@@Z @ 0x18000CDAC
 * Callers:
 *     ?CleanupOldDwmProcess@@YAJXZ @ 0x18000AAF8 (-CleanupOldDwmProcess@@YAJXZ.c)
 *     DwmpTerminateSessionProcess @ 0x18000DFC0 (DwmpTerminateSessionProcess.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000E6AC (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Disconnect@CApiPortClient@@AEAAXXZ @ 0x18000EDE8 (-Disconnect@CApiPortClient@@AEAAXXZ.c)
 */

__int64 __fastcall WaitForDwmExit(LPDWORD lpExitCode, LPFILETIME lpExitTime)
{
  signed int v4; // ebx
  signed int v5; // eax
  signed int v6; // eax
  unsigned int v7; // edx
  signed int LastError; // eax
  struct _FILETIME CreationTime; // [rsp+30h] [rbp-18h] BYREF
  int v11; // [rsp+60h] [rbp+18h] BYREF
  unsigned __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0;
  EnterCriticalSection(&stru_180019DC0);
  if ( qword_180019DB8 && *(_QWORD *)(qword_180019DB8 + 16) )
    CApiPortClient::Disconnect((CApiPortClient *)&g_PortClient);
  LeaveCriticalSection(&stru_180019DC0);
  if ( !WaitForSingleObject(ghDwmProcess, 0x12Cu)
    || TerminateProcess(ghDwmProcess, 0x42Bu)
    || (v5 = GetLastError(), v5 == 5) )
  {
    if ( WaitForSingleObject(ghDwmProcess, 0xFFFFFFFF) )
    {
      v4 = -2147467259;
      v7 = 930;
    }
    else
    {
      SetLastError(0);
      if ( GetExitCodeProcess(ghDwmProcess, lpExitCode) )
      {
        if ( !lpExitTime
          || (CreationTime = 0LL,
              SetLastError(0),
              GetProcessTimes(ghDwmProcess, &CreationTime, lpExitTime, &CreationTime, &CreationTime)) )
        {
          v12 = 0xFFFFFFFF00000001uLL;
          RtlPublishWnfStateData(WNF_SEB_MIXED_REALITY, 0LL, &v12, 8LL, 0LL);
          v11 = 0;
          RtlPublishWnfStateData(WNF_DWM_RUNNING, 0LL, &v11, 4LL, 0LL);
          goto LABEL_27;
        }
        LastError = GetLastError();
        v4 = LastError;
        if ( LastError > 0 )
          v4 = (unsigned __int16)LastError | 0x80070000;
        v7 = 925;
        if ( v4 >= 0 )
          v4 = -2003304445;
      }
      else
      {
        v6 = GetLastError();
        v4 = v6;
        if ( v6 > 0 )
          v4 = (unsigned __int16)v6 | 0x80070000;
        v7 = 915;
        if ( v4 >= 0 )
          v4 = -2003304445;
      }
    }
    DoStackCaptureDirect(v4, v7);
  }
  else if ( v5 > 0 )
  {
    v4 = (unsigned __int16)v5 | 0x80070000;
  }
  else
  {
    v4 = v5;
  }
LABEL_27:
  if ( ghDwmProcess )
  {
    CloseHandle(ghDwmProcess);
    ghDwmProcess = 0LL;
  }
  return (unsigned int)v4;
}
