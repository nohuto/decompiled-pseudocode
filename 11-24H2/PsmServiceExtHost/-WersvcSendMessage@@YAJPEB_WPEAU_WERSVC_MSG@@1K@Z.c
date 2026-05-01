/*
 * XREFs of ?WersvcSendMessage@@YAJPEB_WPEAU_WERSVC_MSG@@1K@Z @ 0x18006B6F4
 * Callers:
 *     ReportHangInternal2 @ 0x18006B9AC (ReportHangInternal2.c)
 *     ReportHangInternal @ 0x18009C398 (ReportHangInternal.c)
 * Callees:
 *     ?SignalStartWerSvc@@YAJXZ @ 0x18006BC04 (-SignalStartWerSvc@@YAJXZ.c)
 *     ?WaitForWerSvc@@YAJK@Z @ 0x180070E84 (-WaitForWerSvc@@YAJK@Z.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall WersvcSendMessage(const wchar_t *a1, struct _WERSVC_MSG *a2, struct _WERSVC_MSG *a3)
{
  NTSTATUS started; // ebx
  int v6; // eax
  char v7; // di
  __int64 *v8; // r14
  int v9; // eax
  HANDLE v10; // rcx
  int v11; // eax
  __int64 SystemInformation; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v14; // [rsp+68h] [rbp-98h] BYREF
  PSID Sid; // [rsp+70h] [rbp-90h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-88h] BYREF
  __int64 v17; // [rsp+80h] [rbp-80h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  __int128 v19; // [rsp+98h] [rbp-68h] BYREF
  __int128 v20; // [rsp+A8h] [rbp-58h]
  __int128 v21; // [rsp+B8h] [rbp-48h]
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v23[16]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v24; // [rsp+E0h] [rbp-20h]

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  memset_0(v23, 0, 0x48uLL);
  v17 = 0LL;
  DestinationString = 0LL;
  Handle = 0LL;
  Sid = 0LL;
  v14 = 0LL;
  SystemInformation = 0LL;
  started = SignalStartWerSvc();
  if ( started >= 0 )
  {
    started = NtQuerySystemInformation(MaxSystemInfoClass|SystemObjectInformation, &SystemInformation, 8u, 0LL);
    if ( started >= 0 )
    {
      v6 = WaitForWerSvc(SystemInformation);
      started = v6;
      if ( v6 >= 0 )
      {
        if ( v6 == 258 )
        {
LABEL_5:
          started = -1073740973;
          goto LABEL_16;
        }
        v7 = 1;
        started = RtlAllocateAndInitializeSid(&IdentifierAuthority, 1u, 0x12u, 0, 0, 0, 0, 0, 0, 0, &Sid);
        if ( started >= 0 )
        {
          if ( HIDWORD(SystemInformation) != -1 )
          {
            v7 = 0;
            v17 = -10000LL * SHIDWORD(SystemInformation);
          }
          RtlInitUnicodeString(&DestinationString, L"\\WindowsErrorReportingServicePort");
          LODWORD(v19) = 48;
          v24 = 1400LL;
          v8 = &v17;
          *((_QWORD *)&v19 + 1) = 0LL;
          DWORD2(v20) = 0;
          *(_QWORD *)&v20 = 0LL;
          if ( v7 )
            v8 = 0LL;
          v21 = 0LL;
          v9 = NtAlpcConnectPort(&Handle, &DestinationString, &v19, v23, 0x20000, Sid, 0LL, 0LL, 0LL, 0LL, v8);
          started = v9;
          if ( v9 >= 0 )
          {
            if ( v9 == 258 )
              goto LABEL_5;
            memset_0((char *)a3 + 4, 0, 0x574uLL);
            v10 = Handle;
            *(_DWORD *)a3 = 91751760;
            v14 = 1400LL;
            v11 = NtAlpcSendWaitReceivePort(v10, 0x20000LL, a2, 0LL, a3, &v14, 0LL, v8);
            started = v11;
            if ( v11 >= 0 && v11 != 258 )
              started = v14 != 1400 ? 0xC000021F : 0;
          }
        }
      }
    }
  }
LABEL_16:
  if ( Sid )
    RtlFreeSid(Sid);
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)started;
}
