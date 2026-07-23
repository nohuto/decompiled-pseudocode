/*
 * XREFs of AdtpBuildAccessesString @ 0x140A6BDDC
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x140403974 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpPackageParameters @ 0x140448568 (AdtpPackageParameters.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x14069810C (AdtpBuildStagingReasonAuditStringInternal.c)
 *     AdtpBuildObjectTypeStrings @ 0x140AB2284 (AdtpBuildObjectTypeStrings.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     RtlAppendUnicodeToString @ 0x140403FC0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x140404080 (RtlAppendUnicodeStringToString.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlIntegerToUnicodeString @ 0x140860970 (RtlIntegerToUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x140929190 (RtlEqualUnicodeString.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall AdtpBuildAccessesString(
        const UNICODE_STRING *a1,
        const UNICODE_STRING *a2,
        int a3,
        int a4,
        PUNICODE_STRING a5,
        wchar_t **a6,
        __int64 a7,
        _DWORD *a8,
        _BYTE *a9)
{
  int v9; // r12d
  NTSTATUS appended; // r13d
  int v11; // r8d
  __int64 *v12; // r14
  int v13; // ecx
  const WCHAR *v14; // r15
  unsigned int v15; // ebx
  wchar_t *Pool2; // rax
  unsigned int v17; // ebx
  int *v18; // rsi
  wchar_t **v19; // rdi
  __int64 v21; // rax
  int v22; // ecx
  struct _KTHREAD *CurrentThread; // rax
  char v24; // si
  __int64 *v25; // rbx
  const UNICODE_STRING *v26; // rdi
  BOOLEAN v27; // al
  __int64 *v28; // rcx
  int v29; // r14d
  int v30; // esi
  unsigned int i; // ebx
  unsigned int v32; // esi
  __int64 *v33; // r14
  _QWORD *v34; // r12
  _QWORD *v35; // rbx
  bool v36; // r14
  const UNICODE_STRING *v37; // r15
  int v38; // r9d
  wchar_t *Buffer; // rax
  _QWORD *v40; // rdi
  UNICODE_STRING Destination; // [rsp+20h] [rbp-89h] BYREF
  int v42; // [rsp+30h] [rbp-79h]
  const WCHAR *v43; // [rsp+38h] [rbp-71h]
  wchar_t **v44; // [rsp+40h] [rbp-69h]
  UNICODE_STRING String; // [rsp+48h] [rbp-61h] BYREF
  PCUNICODE_STRING String2; // [rsp+58h] [rbp-51h]
  PCUNICODE_STRING v47; // [rsp+60h] [rbp-49h]
  _QWORD *v48; // [rsp+68h] [rbp-41h]
  wchar_t *v49; // [rsp+70h] [rbp-39h]
  UNICODE_STRING *v50; // [rsp+78h] [rbp-31h]
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-29h] BYREF
  UNICODE_STRING v52; // [rsp+90h] [rbp-19h] BYREF

  v9 = a3;
  v47 = a2;
  v42 = a3;
  appended = 0;
  String2 = a1;
  v11 = 0;
  v50 = a5;
  v12 = 0LL;
  v44 = a6;
  *(_QWORD *)&String.Length = 0LL;
  v48 = 0LL;
  *(_DWORD *)(&Destination.MaximumLength + 1) = 0;
  DestinationString = 0LL;
  v52 = 0LL;
  if ( !v9 )
  {
    if ( a6 )
    {
      a6[1] = (wchar_t *)4;
      *a6 = (wchar_t *)byte_14001DF78;
    }
    else if ( a5 )
    {
      RtlInitUnicodeString(a5, L"-");
    }
    return 0LL;
  }
  v13 = v9;
  do
  {
    ++v11;
    v13 &= v13 - 1;
  }
  while ( v13 );
  if ( !a4 )
    goto LABEL_5;
  v38 = a4 - 1;
  if ( v38 )
  {
    if ( v38 != 1 )
    {
LABEL_5:
      v14 = L"\r\n\t\t\t\t";
      goto LABEL_6;
    }
    v14 = L":\t";
  }
  else
  {
    v14 = L"\r\n";
  }
LABEL_6:
  v43 = v14;
  v15 = 24 * v11 + 1;
  if ( a7 && a8 && (v21 = (unsigned int)*a8, v22 = v21 + v15, (unsigned int)v21 + v15 < 0x400) )
  {
    Pool2 = (wchar_t *)(a7 + 2 * v21);
    *a8 = v22;
    v49 = Pool2;
  }
  else
  {
    Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL, 2LL * v15, 0x6B416553u);
    v49 = Pool2;
    if ( !Pool2 )
      return 3221225495LL;
    *a9 = 1;
  }
  Destination.Length = 0;
  Destination.MaximumLength = 2 * v15;
  v17 = 5;
  Destination.Buffer = Pool2;
  if ( (v9 & 0x1F0000) != 0 )
  {
    v32 = 0;
    v33 = AdtpStandardAccessTypes;
    do
    {
      if ( (v9 & *(_DWORD *)v33) != 0 )
      {
        RtlAppendUnicodeToString(&Destination, L"%%");
        RtlAppendUnicodeStringToString(&Destination, (PCUNICODE_STRING)&AdtpEventIdStringStandard + v32);
        appended = RtlAppendUnicodeToString(&Destination, v14);
      }
      ++v32;
      v33 = (__int64 *)((char *)v33 + 4);
    }
    while ( v32 < 5 );
    v12 = *(__int64 **)&String.Length;
  }
  v18 = &dword_14001BCFC;
  do
  {
    if ( (v9 & *v18) != 0 )
    {
      RtlAppendUnicodeToString(&Destination, L"%%");
      RtlAppendUnicodeStringToString(&Destination, (PCUNICODE_STRING)&AdtpEventIdStringStandard + v17);
      appended = RtlAppendUnicodeToString(&Destination, v14);
    }
    ++v17;
    ++v18;
  }
  while ( v17 < 7 );
  v19 = v44;
  if ( (_WORD)v9 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&AdtpSourceModuleLock, 1u);
    v24 = 0;
    v25 = &AdtpSourceModules;
    if ( AdtpSourceModules )
    {
      v26 = String2;
      do
      {
        if ( v24 )
          break;
        v27 = RtlEqualUnicodeString((PCUNICODE_STRING)(*v25 + 8), v26, 1u);
        v28 = (__int64 *)*v25;
        if ( v27 )
        {
          v24 = 1;
          *v25 = *v28;
          v12 = v28;
          *v28 = AdtpSourceModules;
          AdtpSourceModules = (__int64)v28;
        }
        else
        {
          v25 = (__int64 *)*v25;
        }
      }
      while ( *v25 );
      v19 = v44;
      if ( v24 == 1 )
      {
        v34 = v12 + 3;
        v24 = 0;
        v35 = v12 + 3;
        RtlInitUnicodeString(&DestinationString, L"DS");
        v36 = 0;
        if ( RtlEqualUnicodeString(String2, &DestinationString, 1u) )
        {
          if ( v47->Length == 78 )
          {
            Buffer = v47->Buffer;
            if ( *Buffer == 37 && Buffer[1] == 123 && Buffer[38] == 125 )
              v36 = 1;
          }
        }
        RtlInitUnicodeString(&v52, L"Directory Service Object");
        if ( *v34 )
        {
          v37 = v47;
          do
          {
            if ( v24 )
              break;
            if ( v36 && RtlEqualUnicodeString((PCUNICODE_STRING)(*v35 + 8LL), &v52, 1u)
              || RtlEqualUnicodeString((PCUNICODE_STRING)(*v35 + 8LL), v37, 1u) )
            {
              v40 = (_QWORD *)*v35;
              v24 = 1;
              v48 = v40;
              *v35 = *v40;
              *v40 = *v34;
              *v34 = v40;
            }
            else
            {
              v35 = (_QWORD *)*v35;
            }
          }
          while ( *v35 );
          v19 = v44;
          v14 = v43;
        }
        v9 = v42;
      }
    }
    ExReleaseResourceLite(&AdtpSourceModuleLock);
    KeLeaveCriticalRegion();
    if ( v24 )
      v29 = *((_DWORD *)v48 + 6);
    else
      v29 = 1552;
    *(_QWORD *)&String.Length = 1310720LL;
    String.Buffer = (wchar_t *)&v52;
    v30 = 1;
    for ( i = 0; i < 0x10; ++i )
    {
      if ( (v30 & v9) != 0 )
      {
        appended = RtlIntegerToUnicodeString(i + v29, 0xAu, &String);
        if ( appended >= 0 )
        {
          RtlAppendUnicodeToString(&Destination, L"%%");
          RtlAppendUnicodeStringToString(&Destination, &String);
          appended = RtlAppendUnicodeToString(&Destination, v14);
        }
      }
      v30 *= 2;
    }
  }
  if ( appended >= 0 )
  {
    if ( v19 )
    {
      *v19 = v49;
      v19[1] = (wchar_t *)((unsigned int)Destination.Length + 2);
    }
    else
    {
      *v50 = Destination;
    }
  }
  return (unsigned int)appended;
}
