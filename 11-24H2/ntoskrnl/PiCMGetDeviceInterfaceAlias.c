/*
 * XREFs of PiCMGetDeviceInterfaceAlias @ 0x1408B31B0
 * Callers:
 *     PiCMHandleIoctl @ 0x1408C13C0 (PiCMHandleIoctl.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x140438B40 (PiControlFreeUserModeCallersBuffer.c)
 *     RtlInitUnicodeStringEx @ 0x14044FE60 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     PiCMCaptureInterfaceAliasInputData @ 0x1408B33C4 (PiCMCaptureInterfaceAliasInputData.c)
 *     IoGetDeviceInterfaceAlias @ 0x1408B4A00 (IoGetDeviceInterfaceAlias.c)
 *     PiCMReturnBufferResultData @ 0x1408C3020 (PiCMReturnBufferResultData.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiCMGetDeviceInterfaceAlias(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        _DWORD *a6)
{
  unsigned __int64 v6; // rsi
  _WORD *Pool2; // rdi
  unsigned __int64 v10; // r14
  NTSTATUS inited; // ebx
  __int64 v12; // rdx
  NTSTATUS v13; // eax
  UNICODE_STRING AliasSymbolicLinkName; // [rsp+50h] [rbp-49h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-39h] BYREF
  GUID AliasInterfaceClassGuid; // [rsp+70h] [rbp-29h] BYREF
  PCWSTR SourceString[2]; // [rsp+80h] [rbp-19h]
  __int64 v19; // [rsp+90h] [rbp-9h]

  v6 = 0LL;
  *a6 = 0;
  AliasSymbolicLinkName = 0LL;
  v19 = 0LL;
  Pool2 = 0LL;
  AliasInterfaceClassGuid = 0LL;
  LODWORD(v10) = 0;
  *(_OWORD *)SourceString = 0LL;
  DestinationString = 0LL;
  inited = PiCMCaptureInterfaceAliasInputData(a1, a2, a5, &AliasInterfaceClassGuid);
  if ( inited < 0 )
    goto LABEL_20;
  if ( !SourceString[1] || *(_DWORD *)&AliasInterfaceClassGuid.Data2 || !a3 || a4 < 0x14 )
  {
    v12 = 0LL;
    inited = -1073741811;
    goto LABEL_17;
  }
  if ( a4 - 20 >= 2 )
    v6 = a4 - 20;
  if ( (_DWORD)v6 )
  {
    Pool2 = (_WORD *)ExAllocatePool2(0x100uLL, (unsigned int)v6, 0x34706E50u);
    if ( !Pool2 )
      inited = -1073741670;
    if ( inited < 0 )
      goto LABEL_16;
    if ( (unsigned int)v6 >= 2 )
      *Pool2 = 0;
  }
  inited = RtlInitUnicodeStringEx(&DestinationString, SourceString[1]);
  if ( inited < 0
    || (inited = IoGetDeviceInterfaceAlias(
                   &DestinationString,
                   (const GUID *)AliasInterfaceClassGuid.Data4,
                   &AliasSymbolicLinkName),
        inited >= 0)
    && ((v10 = ((unsigned __int64)AliasSymbolicLinkName.Length + 2) >> 1, 2 * (unsigned __int64)(unsigned int)v10 > v6)
      ? (inited = -1073741789)
      : (memmove(Pool2, AliasSymbolicLinkName.Buffer, AliasSymbolicLinkName.Length), Pool2[(unsigned int)(v10 - 1)] = 0),
        ExFreePoolWithTag(AliasSymbolicLinkName.Buffer, 0),
        inited < 0) )
  {
    v12 = (unsigned int)(2 * v10);
    goto LABEL_17;
  }
LABEL_16:
  v12 = (unsigned int)(2 * v10);
  if ( inited < 0 )
  {
LABEL_17:
    v13 = PiCMReturnBufferResultData((unsigned int)inited, v12, 0LL, 0LL, 0, HIDWORD(v19), a3, a4, a6);
    goto LABEL_18;
  }
  v13 = PiCMReturnBufferResultData((unsigned int)inited, v12, 0LL, Pool2, v12, HIDWORD(v19), a3, a4, a6);
LABEL_18:
  inited = v13;
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x34706E50u);
LABEL_20:
  if ( SourceString[1] )
    PiControlFreeUserModeCallersBuffer(KeGetCurrentThread()->PreviousMode, (void *)SourceString[1]);
  return (unsigned int)inited;
}
