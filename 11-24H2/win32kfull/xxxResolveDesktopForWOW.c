/*
 * XREFs of xxxResolveDesktopForWOW @ 0x140286E50
 * Callers:
 *     NtUserResolveDesktopForWOW @ 0x14029BF60 (NtUserResolveDesktopForWOW.c)
 * Callees:
 *     CloseProtectedHandle @ 0x1401AABAC (CloseProtectedHandle.c)
 *     ?SafeCopyUnicodeString@@YAXPEAU_UNICODE_STRING@@QEAU1@@Z @ 0x1401B10E0 (-SafeCopyUnicodeString@@YAXPEAU_UNICODE_STRING@@QEAU1@@Z.c)
 *     _OpenWindowStation @ 0x1401C4338 (_OpenWindowStation.c)
 *     _OpenDesktop @ 0x1401CE108 (_OpenDesktop.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall xxxResolveDesktopForWOW(PUNICODE_STRING Destination)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 UserSessionState; // rsi
  UNICODE_STRING v5; // xmm1
  __int16 v6; // cx
  PWSTR Buffer; // r9
  PWSTR i; // rdx
  int v9; // edi
  NTSTATUS v10; // edi
  __int64 v11; // r8
  void *v12; // rsi
  __int64 v14; // rdx
  int v15; // edi
  PVOID BaseAddress; // [rsp+30h] [rbp-2A8h] BYREF
  struct _UNICODE_STRING Destinationa; // [rsp+38h] [rbp-2A0h] BYREF
  PUNICODE_STRING v18; // [rsp+48h] [rbp-290h]
  ULONG_PTR RegionSize[2]; // [rsp+50h] [rbp-288h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-278h] BYREF
  UNICODE_STRING Source; // [rsp+70h] [rbp-268h] BYREF
  void *v22; // [rsp+80h] [rbp-258h]
  PUNICODE_STRING v23; // [rsp+88h] [rbp-250h]
  HANDLE Handle; // [rsp+90h] [rbp-248h] BYREF
  _BYTE v25[528]; // [rsp+B0h] [rbp-228h] BYREF

  v23 = Destination;
  DestinationString = 0LL;
  Source = 0LL;
  *(_QWORD *)&Destinationa.Length = 34209792LL;
  memset_0(v25, 0, 0x20AuLL);
  Handle = 0LL;
  BaseAddress = 0LL;
  Destinationa.Buffer = (PWSTR)v25;
  UserSessionState = W32GetUserSessionState(v3, v2);
  if ( !Destination->Length )
  {
    RtlInitUnicodeString(&DestinationString, L"Default");
LABEL_8:
    v9 = 1;
    goto LABEL_10;
  }
  v5 = *Destination;
  Source = v5;
  v6 = (unsigned __int16)_mm_cvtsi128_si32((__m128i)v5) >> 1;
  Buffer = Destination->Buffer;
  for ( i = Buffer; v6; --v6 )
  {
    if ( *i == 92 )
      break;
    ++i;
  }
  if ( !v6 )
  {
    DestinationString = v5;
    goto LABEL_8;
  }
  DestinationString.Buffer = i + 1;
  DestinationString.MaximumLength = 2 * v6 - 2;
  DestinationString.Length = DestinationString.MaximumLength;
  Source.Length = 2 * (i - Buffer);
  *i = 0;
  v9 = 0;
  RtlAppendUnicodeToString(&Destinationa, (PCWSTR)(UserSessionState + 63648));
  RtlAppendUnicodeToString(&Destinationa, L"\\");
  RtlAppendUnicodeStringToString(&Destinationa, &Source);
LABEL_10:
  if ( v9 )
  {
    RtlInitUnicodeString(&Source, L"WinSta0");
    RtlAppendUnicodeToString(&Destinationa, (PCWSTR)(UserSessionState + 63648));
    RtlAppendUnicodeToString(&Destinationa, L"\\");
    RtlAppendUnicodeStringToString(&Destinationa, &Source);
  }
  RegionSize[0] = 586LL;
  v10 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, RegionSize, 0x1000u, 4u);
  v18 = (PUNICODE_STRING)((char *)BaseAddress + 48);
  if ( v10 < 0 )
    return 3221225495LL;
  SafeCopyUnicodeString(v18, &Destinationa);
  *(_DWORD *)BaseAddress = 48;
  *((_QWORD *)BaseAddress + 1) = 0LL;
  *((_DWORD *)BaseAddress + 6) = 64;
  *((_QWORD *)BaseAddress + 2) = v18;
  *((_QWORD *)BaseAddress + 4) = 0LL;
  *((_QWORD *)BaseAddress + 5) = 0LL;
  v12 = (void *)OpenWindowStation((__int64)BaseAddress, 0x2000000, v11);
  v22 = v12;
  if ( v12 )
  {
    SafeCopyUnicodeString(v18, &DestinationString);
    *(_DWORD *)BaseAddress = 48;
    *((_QWORD *)BaseAddress + 1) = v12;
    *((_DWORD *)BaseAddress + 6) = 64;
    *((_QWORD *)BaseAddress + 2) = v18;
    *((_QWORD *)BaseAddress + 4) = 0LL;
    *((_QWORD *)BaseAddress + 5) = 0LL;
    v15 = OpenDesktop((struct _OBJECT_ATTRIBUTES *)BaseAddress, v14, 0LL, 0x2000000, &Handle);
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, RegionSize, 0x8000u);
    ObCloseHandle(v12, 1);
    if ( v15 >= 0 )
    {
      CloseProtectedHandle(Handle, 1);
      RtlCopyUnicodeString(Destination, &Source);
      RtlAppendUnicodeToString(Destination, L"\\");
      RtlAppendUnicodeStringToString(Destination, &DestinationString);
      return 0LL;
    }
    else
    {
      return (unsigned int)v15;
    }
  }
  else
  {
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, RegionSize, 0x8000u);
    return 3221225506LL;
  }
}
