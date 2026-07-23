/*
 * XREFs of AdtpBuildSidListString @ 0x140811508
 * Callers:
 *     AdtpPackageParameters @ 0x140448568 (AdtpPackageParameters.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140403FC0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x140404080 (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlLengthSidAsUnicodeString @ 0x1408697A0 (RtlLengthSidAsUnicodeString.c)
 *     RtlConvertSidToUnicodeString @ 0x140869960 (RtlConvertSidToUnicodeString.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AdtpBuildSidListString(unsigned int *a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5, char *a6)
{
  NTSTATUS appended; // ebx
  char v7; // r15
  unsigned int v10; // r14d
  unsigned int v11; // esi
  unsigned int v12; // r13d
  void **i; // rax
  void *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r8
  wchar_t *Pool2; // r14
  __int64 v18; // r13
  unsigned int v19; // esi
  PSID *v20; // r13
  unsigned int v21; // eax
  ULONG StringLength; // [rsp+20h] [rbp-E0h] BYREF
  UNICODE_STRING Destination; // [rsp+28h] [rbp-D8h] BYREF
  void **v25; // [rsp+38h] [rbp-C8h]
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD *v27; // [rsp+50h] [rbp-B0h]
  __int64 v28; // [rsp+58h] [rbp-A8h]
  char *v29; // [rsp+60h] [rbp-A0h]
  char v30; // [rsp+70h] [rbp-90h] BYREF

  appended = 0;
  v28 = a4;
  v7 = 0;
  v29 = a6;
  v27 = a5;
  UnicodeString = 0LL;
  Destination = 0LL;
  if ( a1 && (v10 = *a1) != 0 )
  {
    v11 = 1;
    v12 = 0;
    for ( i = (void **)(*((_QWORD *)a1 + 1) + 8LL); ; i = v25 + 2 )
    {
      v25 = i;
      if ( v12 >= v10 )
        break;
      v14 = *i;
      StringLength = 0;
      RtlLengthSidAsUnicodeString(v14, &StringLength);
      if ( v11 + (StringLength >> 1) + 7 < v11 )
      {
        appended = -1073741675;
        goto LABEL_26;
      }
      appended = 0;
      ++v12;
      v11 += (StringLength >> 1) + 7;
    }
    if ( v11 <= 0x7FFF )
    {
      v15 = (unsigned int)*v27;
      if ( (unsigned int)v15 + v11 >= 0x400 )
      {
        Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL, 2LL * v11, 0x6B416553u);
        if ( !Pool2 )
        {
          appended = -1073741801;
          goto LABEL_26;
        }
        v7 = 1;
      }
      else
      {
        v16 = v28;
        *v27 = v15 + v11;
        Pool2 = (wchar_t *)(v16 + 2 * v15);
      }
      v18 = *((_QWORD *)a1 + 1);
      Destination.MaximumLength = 2 * v11;
      UnicodeString.MaximumLength = 512;
      v19 = 0;
      Destination.Buffer = Pool2;
      UnicodeString.Buffer = (wchar_t *)&v30;
      v20 = (PSID *)(v18 + 8);
      while ( v19 < *a1 )
      {
        appended = RtlConvertSidToUnicodeString(&UnicodeString, *v20, 0);
        if ( appended < 0 )
          goto LABEL_22;
        RtlAppendUnicodeToString(&Destination, L"\r\n\t\t%{");
        RtlAppendUnicodeStringToString(&Destination, &UnicodeString);
        ++v19;
        appended = RtlAppendUnicodeToString(&Destination, L"}");
        v20 += 2;
      }
      if ( a3 )
      {
        v21 = Destination.Length + 2;
        *(_QWORD *)a3 = Pool2;
        *(_QWORD *)(a3 + 8) = v21;
      }
      if ( appended < 0 )
      {
LABEL_22:
        if ( v7 )
        {
          ExFreePoolWithTag(Pool2, 0);
          v7 = 0;
        }
      }
    }
    else
    {
      appended = -1073741811;
    }
  }
  else if ( a3 )
  {
    *(_DWORD *)(a3 + 12) = 0;
    *(_QWORD *)a3 = byte_14001DF78;
    *(_DWORD *)(a3 + 8) = 4;
  }
LABEL_26:
  *v29 = v7;
  return (unsigned int)appended;
}
