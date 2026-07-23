/*
 * XREFs of ExpSystemErrorHandler2 @ 0x140B63540
 * Callers:
 *     ExpSystemErrorHandler @ 0x1404FA9E0 (ExpSystemErrorHandler.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     PsGetCurrentServerSilo @ 0x1403C3490 (PsGetCurrentServerSilo.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     RtlInitAnsiString @ 0x14045BBA0 (RtlInitAnsiString.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     strcat_s @ 0x140501B10 (strcat_s.c)
 *     strcpy_s @ 0x140501BA0 (strcpy_s.c)
 *     RtlStringCbPrintfA @ 0x140537878 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     PoShutdownBugCheck @ 0x140751760 (PoShutdownBugCheck.c)
 *     PsTerminateServerSilo @ 0x1407725E0 (PsTerminateServerSilo.c)
 *     RtlAnsiStringToUnicodeString @ 0x140903ED0 (RtlAnsiStringToUnicodeString.c)
 *     RtlxUnicodeStringToOemSize @ 0x140904E70 (RtlxUnicodeStringToOemSize.c)
 *     RtlUnicodeStringToAnsiString @ 0x1409051E0 (RtlUnicodeStringToAnsiString.c)
 *     PsQuerySystemDllInfo @ 0x14091D988 (PsQuerySystemDllInfo.c)
 *     RtlFindMessage @ 0x1409B98E0 (RtlFindMessage.c)
 *     MmLockPagableSectionByHandle @ 0x140A35770 (MmLockPagableSectionByHandle.c)
 *     RtlUnicodeStringToOemString @ 0x140AA46A0 (RtlUnicodeStringToOemString.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall ExpSystemErrorHandler2(ULONG MessageId, __int64 a2, int a3, const char *a4, char a5)
{
  unsigned int v8; // edx
  __int16 v9; // di
  const void *v10; // r9
  unsigned int v11; // eax
  unsigned int v12; // esi
  __int64 i; // rbx
  char *Buffer; // rax
  char *v15; // r14
  char *v16; // rsi
  char *v17; // rbx
  __int64 SystemDllInfo; // rax
  void *v19; // r10
  unsigned __int16 v20; // di
  char *Pool2; // rax
  char *v22; // rax
  __int64 v23; // rdi
  BYTE *Text; // r14
  __int64 v25; // rax
  unsigned int v26; // r13d
  char *v27; // rax
  char *v28; // rax
  int j; // edi
  char *v30; // rbx
  unsigned __int64 CurrentServerSilo; // rax
  int v32; // [rsp+40h] [rbp-228h]
  NTSTATUS v33; // [rsp+50h] [rbp-218h]
  UNICODE_STRING UnicodeString; // [rsp+78h] [rbp-1F0h] BYREF
  _STRING SourceString; // [rsp+88h] [rbp-1E0h] BYREF
  _STRING v36; // [rsp+98h] [rbp-1D0h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+A8h] [rbp-1C0h]
  const char *v38; // [rsp+B0h] [rbp-1B8h]
  PMESSAGE_RESOURCE_ENTRY MessageEntry; // [rsp+B8h] [rbp-1B0h] BYREF
  _STRING DestinationString; // [rsp+C0h] [rbp-1A8h] BYREF
  ULONG_PTR BugCheckParameter2[2]; // [rsp+D0h] [rbp-198h] BYREF
  __int128 v42; // [rsp+E0h] [rbp-188h]
  __int64 v43; // [rsp+F0h] [rbp-178h]
  char pszFormat[40]; // [rsp+F8h] [rbp-170h] BYREF
  char pszDest[256]; // [rsp+120h] [rbp-148h] BYREF

  LODWORD(BugCheckParameter1) = MessageId;
  v38 = a4;
  *(_QWORD *)&DestinationString.Length = 0LL;
  MessageEntry = 0LL;
  SourceString = 0LL;
  UnicodeString = 0LL;
  v36 = 0LL;
  v9 = WORD2(PsGetCurrentServerSiloGlobals()[65].Flink);
  v11 = 5;
  if ( v8 <= 5 )
    v11 = v8;
  v12 = v11;
  pszFormat[0] = 0;
  *(_OWORD *)BugCheckParameter2 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  memmove(BugCheckParameter2, v10, 8LL * v11);
  DestinationString.Buffer = 0LL;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    v32 = i;
    if ( (unsigned int)i >= v12 )
      break;
    if ( _bittest(&a3, i) )
    {
      strcat_s(pszFormat, 0x20uLL, " %s");
      v33 = RtlUnicodeStringToAnsiString(&DestinationString, *(PCUNICODE_STRING *)&a4[8 * i], 1u);
      Buffer = (char *)L"???";
      if ( v33 >= 0 )
        Buffer = DestinationString.Buffer;
      BugCheckParameter2[(unsigned int)i] = (ULONG_PTR)Buffer;
    }
    else
    {
      strcat_s(pszFormat, 0x20uLL, " %x");
    }
  }
  strcat_s(pszFormat, 0x20uLL, "\n");
  v15 = pszFormat;
  v16 = "Unknown Hard Error";
  v17 = "Unknown Hard Error";
  SystemDllInfo = PsQuerySystemDllInfo(0);
  if ( SystemDllInfo )
  {
    v19 = *(void **)(SystemDllInfo + 24);
    if ( KeGetCurrentThread()->ApcState.Process == PsInitialSystemProcess )
      v19 = *(void **)(SystemDllInfo + 32);
    if ( RtlFindMessage(v19, 0xBu, v9 != 0 ? 0x409 : 0, MessageId, &MessageEntry) < 0 )
    {
      v17 = "Unknown Hard Error";
      v15 = "Unknown Hard Error";
      goto LABEL_42;
    }
    if ( (MessageEntry->Flags & 1) != 0 )
    {
      RtlInitUnicodeString(&UnicodeString, (PCWSTR)MessageEntry->Text);
      SourceString.Length = RtlxUnicodeStringToOemSize(&UnicodeString);
      v20 = SourceString.Length + 16;
      Pool2 = (char *)ExAllocatePool2(0x40uLL, (unsigned int)SourceString.Length + 16, 0x20727245u);
      v17 = Pool2;
      if ( !Pool2 )
      {
LABEL_20:
        v17 = "Unknown Hard Error";
        v22 = "Unknown Hard Error";
        v23 = -1LL;
        goto LABEL_28;
      }
      SourceString.MaximumLength = v20;
      SourceString.Buffer = Pool2;
      if ( RtlUnicodeStringToAnsiString(&SourceString, &UnicodeString, 0) < 0 )
      {
        ExFreePoolWithTag(v17, 0);
        goto LABEL_20;
      }
      v23 = -1LL;
    }
    else
    {
      Text = MessageEntry->Text;
      v23 = -1LL;
      v25 = -1LL;
      do
        ++v25;
      while ( Text[v25] );
      v26 = v25 + 16;
      v27 = (char *)ExAllocatePool2(0x40uLL, (unsigned int)(v25 + 16), 0x20727245u);
      v17 = v27;
      if ( !v27 )
      {
        v22 = "Unknown Hard Error";
        v17 = "Unknown Hard Error";
LABEL_28:
        if ( v17 == "Unknown Hard Error" )
        {
          j = v32;
        }
        else
        {
          v28 = v17;
          do
            ++v23;
          while ( v17[v23] );
          while ( (_DWORD)v23 && *v28 >= 32 )
          {
            ++v28;
            LODWORD(v23) = v23 - 1;
          }
          *v28 = 0;
          v22 = v28 + 1;
          for ( j = v23 - 1; j && *v22 && *v22 <= 32; --j )
            ++v22;
        }
        v15 = (char *)qword_140B721E0;
        if ( j )
          v15 = v22;
        goto LABEL_42;
      }
      strcpy_s(v27, v26, (const char *)Text);
    }
    v22 = pszFormat;
    goto LABEL_28;
  }
LABEL_42:
  if ( RtlStringCbPrintfA(pszDest, 0x100uLL, "\nSTOP: %lx %s\n", MessageId, v17) < 0 )
    RtlStringCbPrintfA(pszDest, 0x100uLL, "\nHardError %lx\n", MessageId);
  MmLockPagableSectionByHandle(ExPageLockHandle);
  v30 = "Unknown Hard Error";
  v38 = "Unknown Hard Error";
  RtlInitAnsiString(&SourceString, pszDest);
  if ( RtlAnsiStringToUnicodeString(&UnicodeString, &SourceString, 1u) >= 0 )
  {
    v36.Length = RtlxUnicodeStringToOemSize(&UnicodeString);
    v36.MaximumLength = v36.Length;
    v16 = (char *)ExAllocatePool2(0x40uLL, v36.Length, 0x20727245u);
    v36.Buffer = v16;
    if ( v16 )
      RtlUnicodeStringToOemString(&v36, &UnicodeString, 0);
  }
  if ( RtlStringCbPrintfA(pszDest, 0x100uLL, v15, BugCheckParameter2[0], BugCheckParameter2[1], v42) < 0 )
    RtlStringCbPrintfA(
      pszDest,
      0x100uLL,
      "Exception Processing Message %lx Parameters %Ix %Ix %Ix %Ix",
      MessageId,
      LODWORD(BugCheckParameter2[0]),
      LODWORD(BugCheckParameter2[1]),
      (_DWORD)v42,
      DWORD2(v42));
  RtlInitAnsiString(&SourceString, pszDest);
  if ( RtlAnsiStringToUnicodeString(&UnicodeString, &SourceString, 1u) >= 0 )
  {
    v36.Length = RtlxUnicodeStringToOemSize(&UnicodeString);
    v36.MaximumLength = v36.Length;
    v30 = (char *)ExAllocatePool2(0x40uLL, v36.Length, 0x20727245u);
    v36.Buffer = v30;
    if ( v30 )
      RtlUnicodeStringToOemString(&v36, &UnicodeString, 0);
  }
  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( !CurrentServerSilo )
  {
    if ( a5 )
      PoShutdownBugCheck(
        1,
        0x4Cu,
        (unsigned int)BugCheckParameter1,
        (ULONG_PTR)BugCheckParameter2,
        (ULONG_PTR)v16,
        (ULONG_PTR)v30);
    KeBugCheckEx(0x4Cu, (unsigned int)BugCheckParameter1, (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)v16, (ULONG_PTR)v30);
  }
  PsTerminateServerSilo(CurrentServerSilo);
}
