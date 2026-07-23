/*
 * XREFs of EtwpDelayCreate @ 0x1409D61B0
 * Callers:
 *     EtwpSavePersistedLogger @ 0x1407B02B0 (EtwpSavePersistedLogger.c)
 *     EtwpRealtimeCreateLogfile @ 0x1409D3A4C (EtwpRealtimeCreateLogfile.c)
 *     EtwpCreateLogFile @ 0x1409D51BC (EtwpCreateLogFile.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     ZwCreateFile @ 0x1406A7E50 (ZwCreateFile.c)
 *     SeImpersonateClientEx @ 0x1408E79D0 (SeImpersonateClientEx.c)
 *     PsRevertToSelf @ 0x140933040 (PsRevertToSelf.c)
 *     EtwpCreateNtFileName @ 0x1409D638C (EtwpCreateNtFileName.c)
 *     EtwpCreateDirectoryFile @ 0x140A50CA0 (EtwpCreateDirectoryFile.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpDelayCreate(
        PVOID *a1,
        __int64 a2,
        char *a3,
        char a4,
        char a5,
        char a6,
        PSECURITY_CLIENT_CONTEXT ClientContext)
{
  __int64 v9; // rcx
  char v11; // r12
  int v12; // eax
  WCHAR *v13; // rsi
  NTSTATUS v14; // ebx
  char v16; // bl
  char v17; // r15
  __int16 *i; // rdi
  __int16 v19; // ax
  ULONG ShareAccess; // [rsp+30h] [rbp-81h]
  PVOID P; // [rsp+60h] [rbp-51h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-49h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-39h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-29h] BYREF
  char v25; // [rsp+108h] [rbp+57h] BYREF
  char v26; // [rsp+118h] [rbp+67h]

  v26 = a4;
  v25 = 0;
  P = 0LL;
  v9 = *(_QWORD *)(a2 + 8);
  v11 = 0;
  IoStatusBlock = 0LL;
  v12 = EtwpCreateNtFileName(v9, &P, &v25);
  v13 = (WCHAR *)P;
  v14 = v12;
  if ( v12 >= 0 )
  {
    if ( ClientContext )
    {
      v14 = SeImpersonateClientEx(ClientContext, 0LL);
      if ( v14 < 0 )
        goto LABEL_2;
      v11 = 1;
    }
    v16 = *a3;
    *(&ObjectAttributes.Length + 1) = 0;
    *(&ObjectAttributes.Attributes + 1) = 0;
    P = 0LL;
    v17 = a5;
    DestinationString = 0LL;
    if ( a1 )
    {
      RtlInitUnicodeString(&DestinationString, v13);
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Attributes = v17 != 0 ? 576 : 1600;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v14 = ZwCreateFile(
              &P,
              v17 != 0 ? 1245323 : 1179787,
              &ObjectAttributes,
              &IoStatusBlock,
              0LL,
              0x80u,
              5u,
              v16 != 0 ? 3 : 5,
              a4 != 0 ? 40 : 32,
              0LL,
              0);
      *a1 = P;
    }
    else
    {
      v14 = -1073741811;
    }
    if ( a6 && v14 == -1073741766 && !v25 )
    {
      for ( i = (__int16 *)(v13 + 12); *i != 92 && *i; ++i )
        ;
      v19 = *i;
      while ( v19 )
      {
        v19 = *++i;
        if ( *i == 92 )
        {
          ShareAccess = (unsigned __int8)*a3;
          *i = 0;
          v14 = EtwpCreateDirectoryFile(v13, 0LL, &IoStatusBlock, ShareAccess);
          if ( v14 < 0 )
            goto LABEL_13;
          *i = 92;
          v19 = 92;
        }
      }
      v14 = EtwpCreateDirectoryFile(v13, (__int64)a1, &IoStatusBlock, (unsigned __int8)*a3);
    }
LABEL_13:
    if ( v11 )
      PsRevertToSelf();
  }
LABEL_2:
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  if ( v14 >= 0 && *a3 && IoStatusBlock.Information == 2 )
    *a3 = 0;
  return (unsigned int)v14;
}
