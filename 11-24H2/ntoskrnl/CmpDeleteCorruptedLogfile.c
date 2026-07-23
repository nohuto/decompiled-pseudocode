/*
 * XREFs of CmpDeleteCorruptedLogfile @ 0x1407E6BF0
 * Callers:
 *     CmpInitCmRM @ 0x140AE6674 (CmpInitCmRM.c)
 *     CmpStartCLFSLog @ 0x140AE7708 (CmpStartCLFSLog.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     RtlAppendUnicodeStringToString @ 0x140404080 (RtlAppendUnicodeStringToString.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     RtlUShortAdd @ 0x140463CC0 (RtlUShortAdd.c)
 *     RtlUnicodeStringPrintf @ 0x14047B368 (RtlUnicodeStringPrintf.c)
 *     CmpDeleteCorruptedFile @ 0x140669E80 (CmpDeleteCorruptedFile.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpDeleteCorruptedLogfile(
        const UNICODE_STRING *a1,
        const UNICODE_STRING *a2,
        const UNICODE_STRING *a3,
        const UNICODE_STRING *a4,
        unsigned int a5,
        const wchar_t *pszFormat,
        USHORT a7)
{
  unsigned int v7; // esi
  NTSTATUS v9; // r15d
  int v11; // edi
  int v12; // r13d
  NTSTATUS v13; // r14d
  USHORT Length; // dx
  NTSTATUS appended; // ebx
  wchar_t *Pool2; // rax
  wchar_t *v17; // rax
  unsigned int MaximumLength; // ebx
  wchar_t *v20; // rax
  unsigned __int16 v21; // r15
  NTSTATUS v22; // r12d
  NTSTATUS v23; // eax
  NTSTATUS v24; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING v26; // [rsp+50h] [rbp-B0h] BYREF
  PCUNICODE_STRING v27; // [rsp+60h] [rbp-A0h] BYREF
  PCUNICODE_STRING Source; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING v29; // [rsp+70h] [rbp-90h] BYREF
  NTSTATUS v30; // [rsp+80h] [rbp-80h] BYREF
  int v31; // [rsp+84h] [rbp-7Ch] BYREF
  NTSTATUS v32; // [rsp+88h] [rbp-78h] BYREF
  PCUNICODE_STRING v33; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING v34; // [rsp+98h] [rbp-68h] BYREF
  UNICODE_STRING Destination; // [rsp+B0h] [rbp-50h] BYREF
  UNICODE_STRING v36; // [rsp+C0h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+D0h] [rbp-30h] BYREF
  NTSTATUS *v38; // [rsp+F0h] [rbp-10h]
  __int64 v39; // [rsp+F8h] [rbp-8h]
  NTSTATUS *v40; // [rsp+100h] [rbp+0h]
  __int64 v41; // [rsp+108h] [rbp+8h]
  int *v42; // [rsp+110h] [rbp+10h]
  __int64 v43; // [rsp+118h] [rbp+18h]
  NTSTATUS *v44; // [rsp+120h] [rbp+20h]
  __int64 v45; // [rsp+128h] [rbp+28h]
  PCUNICODE_STRING *v46; // [rsp+130h] [rbp+30h]
  __int64 v47; // [rsp+138h] [rbp+38h]
  PCUNICODE_STRING *v48; // [rsp+140h] [rbp+40h]
  __int64 v49; // [rsp+148h] [rbp+48h]
  PCUNICODE_STRING *p_Source; // [rsp+150h] [rbp+50h]
  __int64 v51; // [rsp+158h] [rbp+58h]
  UNICODE_STRING *v52; // [rsp+160h] [rbp+60h]
  __int64 v53; // [rsp+168h] [rbp+68h]

  v7 = a5;
  v33 = a2;
  Source = a1;
  v9 = 0;
  v27 = a4;
  v24 = 0;
  DestinationString = 0LL;
  v11 = 0;
  v12 = 0;
  v36 = 0LL;
  v13 = 0;
  v34 = 0LL;
  v26 = 0LL;
  Destination = 0LL;
  v29 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&v36, L".blf");
  RtlInitUnicodeString(&v34, L".cnpf");
  RtlInitUnicodeString(&v26, 0LL);
  RtlInitUnicodeString(&Destination, 0LL);
  RtlInitUnicodeString(&v29, 0LL);
  Length = a2->Length;
  DestinationString.MaximumLength = Source->Length;
  appended = RtlUShortAdd(DestinationString.MaximumLength, Length, &DestinationString.MaximumLength);
  if ( appended < 0 )
    goto LABEL_15;
  appended = RtlUShortAdd(DestinationString.MaximumLength, a3->Length, &DestinationString.MaximumLength);
  if ( appended < 0 )
    goto LABEL_15;
  appended = RtlUShortAdd(DestinationString.MaximumLength, v36.Length, &DestinationString.MaximumLength);
  if ( appended < 0 )
    goto LABEL_15;
  appended = RtlUShortAdd(DestinationString.MaximumLength, v34.Length, &DestinationString.MaximumLength);
  if ( appended < 0 )
    goto LABEL_15;
  appended = RtlUShortAdd(DestinationString.MaximumLength, 2u, &DestinationString.MaximumLength);
  if ( appended < 0 )
    goto LABEL_15;
  Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL, DestinationString.MaximumLength, 0x20204D43u);
  DestinationString.Buffer = Pool2;
  if ( !Pool2 )
  {
    appended = -1073741670;
    goto LABEL_15;
  }
  memset_0(Pool2, 0, DestinationString.MaximumLength);
  v26.MaximumLength = DestinationString.MaximumLength;
  appended = RtlUShortAdd(DestinationString.MaximumLength, a7, &v26.MaximumLength);
  if ( appended < 0
    || (appended = RtlUShortAdd(v26.MaximumLength, v27->Length, &v26.MaximumLength), appended < 0)
    || (appended = RtlUShortAdd(v26.MaximumLength, v34.Length, &v26.MaximumLength), appended < 0)
    || (appended = RtlUShortAdd(v26.MaximumLength, 2u, &v26.MaximumLength), appended < 0) )
  {
LABEL_14:
    v9 = 0;
    goto LABEL_15;
  }
  v17 = (wchar_t *)ExAllocatePool2(0x100uLL, v26.MaximumLength, 0x20204D43u);
  v26.Buffer = v17;
  if ( !v17 )
    goto LABEL_13;
  memset_0(v17, 0, v26.MaximumLength);
  Destination = v26;
  v29.MaximumLength = a7;
  appended = RtlUShortAdd(a7, 2u, &v29.MaximumLength);
  if ( appended < 0 )
    goto LABEL_14;
  MaximumLength = v29.MaximumLength;
  v20 = (wchar_t *)ExAllocatePool2(0x100uLL, v29.MaximumLength, 0x20204D43u);
  v29.Buffer = v20;
  if ( !v20 )
  {
LABEL_13:
    appended = -1073741670;
    goto LABEL_14;
  }
  memset_0(v20, 0, MaximumLength);
  appended = RtlAppendUnicodeStringToString(&DestinationString, Source);
  if ( appended < 0 )
    goto LABEL_14;
  appended = RtlAppendUnicodeStringToString(&DestinationString, v33);
  if ( appended < 0 )
    goto LABEL_14;
  appended = RtlAppendUnicodeStringToString(&DestinationString, a3);
  if ( appended < 0 )
    goto LABEL_14;
  appended = RtlAppendUnicodeStringToString(&Destination, &DestinationString);
  if ( appended < 0 )
    goto LABEL_14;
  appended = RtlAppendUnicodeStringToString(&DestinationString, &v36);
  if ( appended < 0 )
    goto LABEL_14;
  appended = CmpDeleteCorruptedFile(&DestinationString);
  if ( appended < 0 )
    goto LABEL_14;
  v11 = 1;
  appended = RtlAppendUnicodeStringToString(&DestinationString, &v34);
  if ( appended < 0 )
  {
    v9 = 0;
  }
  else
  {
    v13 = CmpDeleteCorruptedFile(&DestinationString);
    v11 = (v13 >> 31) + 2;
    if ( a5 == -1 )
    {
LABEL_49:
      if ( appended >= 0 )
        goto LABEL_18;
    }
    else
    {
      v21 = Destination.Length;
      v22 = 0;
      while ( 1 )
      {
        v29.Length = 0;
        appended = RtlUnicodeStringPrintf(&v29, pszFormat, v7);
        if ( appended < 0 )
          break;
        v26.Length = v21;
        appended = RtlAppendUnicodeStringToString(&v26, &v29);
        if ( appended < 0 )
          break;
        appended = RtlAppendUnicodeStringToString(&v26, v27);
        if ( appended < 0 )
          break;
        v23 = CmpDeleteCorruptedFile(&v26);
        appended = v23;
        if ( v23 < 0 )
        {
          if ( v23 != -1073741772 )
            goto LABEL_49;
          appended = 0;
          goto LABEL_18;
        }
        v24 = ++v22;
        appended = RtlAppendUnicodeStringToString(&v26, &v34);
        if ( appended < 0 )
        {
          v9 = v22;
          goto LABEL_15;
        }
        v13 = CmpDeleteCorruptedFile(&v26);
        if ( v13 >= 0 )
          ++v12;
        if ( ++v7 == -1 )
          goto LABEL_18;
      }
    }
    v9 = v24;
  }
LABEL_15:
  if ( (unsigned int)dword_140E09F58 > 5 && tlgKeywordOn((__int64)&dword_140E09F58, 0x400000000000LL) )
  {
    v24 = appended;
    v38 = &v24;
    v39 = 4LL;
    v40 = &v30;
    v30 = v13;
    v42 = &v31;
    v41 = 4LL;
    v44 = &v32;
    v31 = v11;
    v46 = &v33;
    LODWORD(v27) = a5;
    v48 = &v27;
    p_Source = &Source;
    v52 = &v34;
    v43 = 4LL;
    v32 = v9;
    v45 = 4LL;
    LODWORD(v33) = v12;
    v47 = 4LL;
    v49 = 4LL;
    LODWORD(Source) = v7;
    v51 = 4LL;
    *(_QWORD *)&v34.Length = 0x1000000LL;
    v53 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E09F58,
      (unsigned __int8 *)byte_140056A23,
      0LL,
      0LL,
      0xAu,
      &v37);
  }
LABEL_18:
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  if ( v26.Buffer )
    ExFreePoolWithTag(v26.Buffer, 0);
  if ( v29.Buffer )
    ExFreePoolWithTag(v29.Buffer, 0);
  return (unsigned int)appended;
}
