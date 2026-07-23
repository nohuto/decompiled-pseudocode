/*
 * XREFs of SepAddTokenOriginClaim @ 0x140A94630
 * Callers:
 *     SeDuplicateTokenWithPredictedClaims @ 0x140792ADC (SeDuplicateTokenWithPredictedClaims.c)
 *     SeDuplicateTokenAndAddOriginClaim @ 0x140AA9F14 (SeDuplicateTokenAndAddOriginClaim.c)
 *     SeSubProcessToken @ 0x140AD660C (SeSubProcessToken.c)
 * Callees:
 *     AuthzBasepSetSecurityAttributesToken @ 0x1403B8BCC (AuthzBasepSetSecurityAttributesToken.c)
 *     RtlCopyUnicodeString @ 0x1403FA370 (RtlCopyUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x140404080 (RtlAppendUnicodeStringToString.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     RtlUShortAdd @ 0x140463CC0 (RtlUShortAdd.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepAddTokenOriginClaim(_DWORD *a1, int a2, __int64 a3, __int64 a4)
{
  int appended; // ebx
  _DWORD *v6; // rdi
  UNICODE_STRING v7; // xmm0
  __int64 v8; // rcx
  const UNICODE_STRING *v9; // rdi
  __int16 v10; // cx
  ULONG_PTR v11; // rbx
  wchar_t *Pool2; // rax
  __int64 v13; // r9
  __int64 v14; // rcx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-59h] BYREF
  int v17; // [rsp+30h] [rbp-49h] BYREF
  int v18; // [rsp+34h] [rbp-45h]
  UNICODE_STRING *v19; // [rsp+38h] [rbp-41h]
  __int128 v20; // [rsp+40h] [rbp-39h] BYREF
  UNICODE_STRING v21; // [rsp+50h] [rbp-29h] BYREF
  int v22; // [rsp+60h] [rbp-19h]
  int v23; // [rsp+64h] [rbp-15h]
  int v24; // [rsp+68h] [rbp-11h]
  const UNICODE_STRING *v25; // [rsp+70h] [rbp-9h]
  UNICODE_STRING v26; // [rsp+78h] [rbp-1h]
  UNICODE_STRING v27; // [rsp+88h] [rbp+Fh]
  UNICODE_STRING SourceString; // [rsp+98h] [rbp+1Fh] BYREF
  USHORT pusResult; // [rsp+E8h] [rbp+6Fh] BYREF
  int v30; // [rsp+F0h] [rbp+77h] BYREF

  *(_QWORD *)&SourceString.Length = 1966108LL;
  *(_QWORD *)&v27.Length = 4849736LL;
  SourceString.Buffer = L"POLICYAPPID://";
  v27.Buffer = L"SMARTLOCKER://SMARTSCREENORIGINCLAIM";
  *(_QWORD *)&v26.Length = 6422624LL;
  v26.Buffer = L"SMARTLOCKER://SMARTSCREENORIGINCLAIMNOTINHERITED";
  pusResult = 0;
  appended = 0;
  v6 = 0LL;
  DestinationString = 0LL;
  v20 = 0LL;
  if ( a2 == 536 )
  {
    v6 = a1;
    if ( !*a1 )
    {
      a1 = (_DWORD *)v20;
      goto LABEL_7;
    }
    DWORD2(v20) = 524;
  }
  else
  {
    DWORD2(v20) = a2;
  }
  *(_QWORD *)&v20 = a1;
LABEL_7:
  if ( !a1 )
    goto LABEL_12;
  v17 = 1;
  v19 = &v21;
  v18 = 1;
  if ( (_BYTE)a4 )
    v7 = v26;
  else
    v7 = v27;
  v8 = *(_QWORD *)(a3 + 776);
  v25 = (const UNICODE_STRING *)&v20;
  v22 = 16;
  v21 = v7;
  v24 = 1;
  v23 = 65;
  v30 = 4;
  appended = AuthzBasepSetSecurityAttributesToken(v8, &v30, (__int64)&v17, a4);
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
          Pool2 = (wchar_t *)ExAllocatePool2(0x102uLL, v11, 0x434F6553u);
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
        v14 = *(_QWORD *)(a3 + 776);
        v19 = &v21;
        v17 = 1;
        v25 = v9 - 1;
        v18 = 1;
        v21 = DestinationString;
        v22 = 3;
        v24 = 1;
        v23 = 65;
        v30 = 4;
        appended = AuthzBasepSetSecurityAttributesToken(v14, &v30, (__int64)&v17, v13);
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
