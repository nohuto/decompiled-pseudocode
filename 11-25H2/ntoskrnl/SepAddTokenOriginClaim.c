/*
 * XREFs of SepAddTokenOriginClaim @ 0x140A93A94
 * Callers:
 *     SeSubProcessToken @ 0x140A0C9E8 (SeSubProcessToken.c)
 *     SeDuplicateTokenAndAddOriginClaim @ 0x140AA9BC4 (SeDuplicateTokenAndAddOriginClaim.c)
 * Callees:
 *     AuthzBasepSetSecurityAttributesToken @ 0x140291638 (AuthzBasepSetSecurityAttributesToken.c)
 *     RtlCopyUnicodeString @ 0x14036CBB0 (RtlCopyUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x140404430 (RtlAppendUnicodeStringToString.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     RtlUShortAdd @ 0x140472A24 (RtlUShortAdd.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepAddTokenOriginClaim(_DWORD *a1, int a2, __int64 a3, char a4)
{
  int appended; // ebx
  _DWORD *v6; // rdi
  UNICODE_STRING v7; // xmm0
  __int64 v8; // rcx
  const UNICODE_STRING *v9; // rdi
  __int16 v10; // cx
  USHORT v11; // bx
  wchar_t *Pool2; // rax
  __int64 v13; // rcx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-59h] BYREF
  int v16; // [rsp+30h] [rbp-49h] BYREF
  int v17; // [rsp+34h] [rbp-45h]
  UNICODE_STRING *v18; // [rsp+38h] [rbp-41h]
  __int128 v19; // [rsp+40h] [rbp-39h] BYREF
  UNICODE_STRING v20; // [rsp+50h] [rbp-29h] BYREF
  int v21; // [rsp+60h] [rbp-19h]
  int v22; // [rsp+64h] [rbp-15h]
  int v23; // [rsp+68h] [rbp-11h]
  const UNICODE_STRING *v24; // [rsp+70h] [rbp-9h]
  UNICODE_STRING v25; // [rsp+78h] [rbp-1h]
  UNICODE_STRING v26; // [rsp+88h] [rbp+Fh]
  UNICODE_STRING SourceString; // [rsp+98h] [rbp+1Fh] BYREF
  USHORT pusResult; // [rsp+E8h] [rbp+6Fh] BYREF
  int v29; // [rsp+F0h] [rbp+77h] BYREF

  *(_QWORD *)&SourceString.Length = 1966108LL;
  *(_QWORD *)&v26.Length = 4849736LL;
  SourceString.Buffer = L"POLICYAPPID://";
  v26.Buffer = L"SMARTLOCKER://SMARTSCREENORIGINCLAIM";
  *(_QWORD *)&v25.Length = 6422624LL;
  v25.Buffer = L"SMARTLOCKER://SMARTSCREENORIGINCLAIMNOTINHERITED";
  pusResult = 0;
  appended = 0;
  v6 = 0LL;
  DestinationString = 0LL;
  v19 = 0LL;
  if ( a2 == 536 )
  {
    v6 = a1;
    if ( !*a1 )
    {
      a1 = (_DWORD *)v19;
      goto LABEL_7;
    }
    DWORD2(v19) = 524;
  }
  else
  {
    DWORD2(v19) = a2;
  }
  *(_QWORD *)&v19 = a1;
LABEL_7:
  if ( !a1 )
    goto LABEL_12;
  v16 = 1;
  v18 = &v20;
  v17 = 1;
  if ( a4 )
    v7 = v25;
  else
    v7 = v26;
  v8 = *(_QWORD *)(a3 + 776);
  v24 = (const UNICODE_STRING *)&v19;
  v21 = 16;
  v20 = v7;
  v23 = 1;
  v22 = 65;
  v29 = 4;
  appended = AuthzBasepSetSecurityAttributesToken(v8, &v29, (__int64)&v16);
  if ( appended >= 0 )
  {
LABEL_12:
    if ( v6 )
    {
      v9 = (const UNICODE_STRING *)*((_QWORD *)v6 + 66);
      RtlInitUnicodeString(&DestinationString, 0LL);
      while ( v9 )
      {
        appended = RtlUShortAdd(0x1Cu, v9[-2].Length, &pusResult);
        if ( appended < 0 )
          break;
        appended = RtlUShortAdd(pusResult, v10 - 26, &pusResult);
        if ( appended < 0 )
          break;
        v11 = pusResult;
        DestinationString.Length = 0;
        if ( pusResult > DestinationString.MaximumLength )
        {
          if ( DestinationString.Buffer )
            ExFreePoolWithTag(DestinationString.Buffer, 0x434F6553u);
          DestinationString.MaximumLength = v11;
          Pool2 = (wchar_t *)ExAllocatePool2(0x102uLL);
          DestinationString.Buffer = Pool2;
          if ( !Pool2 )
          {
            appended = -1073741670;
            goto LABEL_26;
          }
        }
        RtlCopyUnicodeString(&DestinationString, &SourceString);
        appended = RtlAppendUnicodeStringToString(&DestinationString, v9 - 2);
        if ( appended < 0 )
          break;
        v13 = *(_QWORD *)(a3 + 776);
        v18 = &v20;
        v16 = 1;
        v24 = v9 - 1;
        v17 = 1;
        v20 = DestinationString;
        v21 = 3;
        v23 = 1;
        v22 = 65;
        v29 = 4;
        appended = AuthzBasepSetSecurityAttributesToken(v13, &v29, (__int64)&v16);
        if ( appended < 0 )
          break;
        v9 = *(const UNICODE_STRING **)&v9->Length;
      }
    }
  }
  Pool2 = DestinationString.Buffer;
LABEL_26:
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x434F6553u);
  return (unsigned int)appended;
}
