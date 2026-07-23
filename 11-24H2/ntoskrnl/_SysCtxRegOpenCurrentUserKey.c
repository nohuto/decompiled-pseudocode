/*
 * XREFs of _SysCtxRegOpenCurrentUserKey @ 0x140A8835C
 * Callers:
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x1408B5110 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1408C4460 (_CmOpenDeviceRegKeyWorker.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x1408C679C (_CmOpenCommonClassRegKeyWorker.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x1408C88C8 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _PnpCtxRegOpenCurrentUserKey @ 0x140A8832C (_PnpCtxRegOpenCurrentUserKey.c)
 * Callees:
 *     RtlEqualSid @ 0x1403EB6C0 (RtlEqualSid.c)
 *     RtlAppendUnicodeStringToString @ 0x140404080 (RtlAppendUnicodeStringToString.c)
 *     RtlSubAuthoritySid @ 0x140445040 (RtlSubAuthoritySid.c)
 *     RtlUShortAdd @ 0x140463CC0 (RtlUShortAdd.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwQueryInformationToken @ 0x1406A77D0 (ZwQueryInformationToken.c)
 *     RtlConvertSidToUnicodeString @ 0x140869960 (RtlConvertSidToUnicodeString.c)
 *     _SysCtxRegOpenKey @ 0x1408C3580 (_SysCtxRegOpenKey.c)
 *     RtlInitializeSid @ 0x1409DE5C0 (RtlInitializeSid.c)
 *     _SysCtxGetCachedContextBaseKey @ 0x140A221B0 (_SysCtxGetCachedContextBaseKey.c)
 *     _SysCtxOpenEffectiveToken @ 0x140A88604 (_SysCtxOpenEffectiveToken.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140B74850 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SysCtxRegOpenCurrentUserKey(_QWORD *a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  wchar_t *v5; // rdi
  int appended; // ebx
  PSID v10; // rsi
  unsigned __int16 v11; // bx
  wchar_t *Pool2; // rax
  __int64 v13; // rcx
  USHORT pusResult[2]; // [rsp+30h] [rbp-99h] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+34h] [rbp-95h] BYREF
  int TokenInformation; // [rsp+3Ch] [rbp-8Dh] BYREF
  ULONG ReturnLength; // [rsp+40h] [rbp-89h] BYREF
  int v19; // [rsp+44h] [rbp-85h] BYREF
  HANDLE TokenHandle; // [rsp+48h] [rbp-81h] BYREF
  UNICODE_STRING Destination; // [rsp+50h] [rbp-79h] BYREF
  __int64 v22; // [rsp+60h] [rbp-69h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-61h] BYREF
  _BYTE Sid[16]; // [rsp+78h] [rbp-51h] BYREF
  PSID Sid2[11]; // [rsp+88h] [rbp-41h] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  TokenHandle = 0LL;
  TokenInformation = 0;
  v19 = 0;
  ReturnLength = 0;
  v5 = 0LL;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  UnicodeString = 0LL;
  v22 = 0LL;
  *(_DWORD *)(&Destination.MaximumLength + 1) = 0;
  pusResult[0] = 0;
  appended = SysCtxOpenEffectiveToken(a1, &TokenHandle);
  if ( appended < 0 )
    goto LABEL_21;
  appended = ZwQueryInformationToken(TokenHandle, TokenType, &TokenInformation, 4u, &ReturnLength);
  if ( appended < 0 )
    goto LABEL_21;
  if ( TokenInformation == 2 )
  {
    appended = ZwQueryInformationToken(TokenHandle, TokenImpersonationLevel, &v19, 4u, &ReturnLength);
    if ( appended < 0 )
      goto LABEL_21;
    if ( v19 < 2 )
    {
      appended = -1073741790;
      goto LABEL_21;
    }
  }
  else if ( TokenInformation != 1 )
  {
    goto LABEL_8;
  }
  appended = ZwQueryInformationToken(TokenHandle, TokenUser, Sid2, 0x54u, &ReturnLength);
  if ( appended < 0 )
    goto LABEL_21;
  v10 = Sid2[0];
  appended = RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
  if ( appended < 0 )
    goto LABEL_21;
  *RtlSubAuthoritySid(Sid, 0) = 18;
  if ( RtlEqualSid(Sid, v10) )
  {
LABEL_8:
    appended = -1073741637;
    goto LABEL_21;
  }
  appended = RtlConvertSidToUnicodeString(&UnicodeString, v10, 1u);
  if ( appended >= 0 )
  {
    appended = RtlUShortAdd(UnicodeString.Length, 0x1Eu, pusResult);
    if ( appended >= 0 )
    {
      appended = RtlUShortAdd(pusResult[0], 2u, pusResult);
      if ( appended >= 0 )
      {
        v11 = pusResult[0];
        Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL, pusResult[0], 0x53504E50u);
        v5 = Pool2;
        if ( Pool2 )
        {
          Destination.Length = 0;
          Destination.MaximumLength = v11;
          Destination.Buffer = Pool2;
          appended = RtlAppendUnicodeStringToString(&Destination, &stru_14000C5A8);
          if ( appended >= 0 )
          {
            appended = RtlAppendUnicodeStringToString(&Destination, &UnicodeString);
            if ( appended >= 0 )
            {
              appended = SysCtxGetCachedContextBaseKey(a1, 3, &v22);
              if ( appended >= 0 )
                appended = SysCtxRegOpenKey(v13, v22, (__int64)(Destination.Buffer + 15), a2, a3, a4);
            }
          }
        }
        else
        {
          appended = -1073741801;
        }
      }
    }
  }
LABEL_21:
  if ( TokenHandle )
    ZwClose(TokenHandle);
  if ( UnicodeString.Buffer )
    ExFreePool(UnicodeString.Buffer);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return (unsigned int)appended;
}
