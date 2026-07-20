/*
 * XREFs of SmpProcessFileRenames @ 0x1400176FC
 * Callers:
 *     SmpLoadDataFromRegistry @ 0x140015DF4 (SmpLoadDataFromRegistry.c)
 * Callees:
 *     SmpLogFailureString @ 0x1400010B8 (SmpLogFailureString.c)
 *     SmpEventWrite @ 0x14000D668 (SmpEventWrite.c)
 *     SmpFreeSavedRegistryEntry @ 0x14000D6BC (SmpFreeSavedRegistryEntry.c)
 *     SmpEventWriteString2 @ 0x14000D86C (SmpEventWriteString2.c)
 *     SmpClearTemporaryFiles @ 0x14000E0F8 (SmpClearTemporaryFiles.c)
 *     SmpFinishPFROLogging @ 0x140014ADC (SmpFinishPFROLogging.c)
 *     SmpForceDeleteTargetFile @ 0x140014C44 (SmpForceDeleteTargetFile.c)
 *     SmpLogPFROError @ 0x140016F38 (SmpLogPFROError.c)
 *     SmpOpenTargetFile @ 0x1400174CC (SmpOpenTargetFile.c)
 *     SmpPathCanBeTrustedIsNotARedirection @ 0x140017580 (SmpPathCanBeTrustedIsNotARedirection.c)
 *     SmpRenameTargetFile @ 0x140017B28 (SmpRenameTargetFile.c)
 *     SmpShuffleMove @ 0x140018644 (SmpShuffleMove.c)
 *     SmpTryOverwriteReadonlyFile @ 0x1400188B4 (SmpTryOverwriteReadonlyFile.c)
 */

void __fastcall SmpProcessFileRenames(int a1)
{
  char v1; // r12
  __int64 *v2; // rax
  int v3; // r15d
  __int64 v4; // rbx
  char v5; // r13
  unsigned __int16 *v6; // rdi
  char v7; // r14
  unsigned __int16 v8; // dx
  _WORD *v9; // rax
  __int16 v10; // cx
  _WORD *v11; // rax
  int v12; // edi
  __int64 v13; // r9
  USHORT Length; // cx
  PWSTR Buffer; // rax
  unsigned int v16; // esi
  int v17; // eax
  __int64 v18; // r8
  __int64 v19; // r8
  struct _UNICODE_STRING *v20; // [rsp+30h] [rbp-39h]
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-31h] BYREF
  struct _OBJECT_ATTRIBUTES v22[2]; // [rsp+48h] [rbp-21h] BYREF
  unsigned __int8 OldValue; // [rsp+D8h] [rbp+6Fh] BYREF
  int ValueData; // [rsp+E0h] [rbp+77h] BYREF
  HANDLE Handle; // [rsp+E8h] [rbp+7Fh] BYREF

  OldValue = 1;
  Handle = 0LL;
  DestinationString = 0LL;
  v1 = 0;
  memset(v22, 0, 44);
  if ( SmpAllowProtectedRenames && RtlAdjustPrivilege(0x12u, 1u, 0, &OldValue) < 0 )
    OldValue = 1;
  if ( SmpClearTempFiles )
    SmpClearTemporaryFiles();
  SmpEventWrite(&SmssEvt_ProcessFileRenames_Start);
  v2 = (__int64 *)SmpFileRenameList;
  v3 = 0;
  v4 = SmpFileRenameList;
  ValueData = 0;
  while ( v2 != &SmpFileRenameList )
  {
    Handle = 0LL;
    v5 = 0;
    v20 = (struct _UNICODE_STRING *)v4;
    v6 = (unsigned __int16 *)(v4 + 16);
    v7 = 1;
    SmpEventWriteString2((__int64)&SmpFileRenameList, (unsigned __int16 *)(v4 + 16), (unsigned __int16 *)(v4 + 32));
    v8 = *(_WORD *)(v4 + 16);
    if ( v8 >= 4u )
    {
      v9 = *(_WORD **)(v4 + 24);
      if ( *v9 == 42 )
      {
        v10 = v9[1];
        v8 -= 4;
        *v6 = v8;
        *(_WORD *)(v4 + 18) -= 4;
        *(_QWORD *)(v4 + 24) = v9 + 2;
        v5 = 1;
        v7 = v10 != 48;
      }
    }
    if ( *(_WORD *)(v4 + 32) )
    {
      v22[0].RootDirectory = 0LL;
      v22[0].Length = 48;
      v22[0].ObjectName = (PUNICODE_STRING)(v4 + 16);
      v22[0].Attributes = 64;
      *(_OWORD *)&v22[0].SecurityDescriptor = 0LL;
      v12 = SmpOpenTargetFile(&Handle, 0x110000u, v22, 0, 3u);
      if ( v12 >= 0 )
      {
        if ( v7 != 1 || SmpPathCanBeTrustedIsNotARedirection(Handle, (unsigned __int16 *)(v4 + 16), 0) )
        {
          RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(v4 + 40));
          Length = DestinationString.Length;
          Buffer = DestinationString.Buffer;
          if ( DestinationString.Length >= 4u && *DestinationString.Buffer == 42 )
          {
            DestinationString.MaximumLength -= 4;
            Length = DestinationString.Length - 4;
            Buffer = DestinationString.Buffer + 2;
            DestinationString.Length -= 4;
            DestinationString.Buffer += 2;
          }
          if ( *Buffer == 33 || *Buffer == 64 )
          {
            v16 = 1;
            DestinationString.Buffer = Buffer + 1;
            DestinationString.MaximumLength -= 2;
            DestinationString.Length = Length - 2;
          }
          else
          {
            v16 = 0;
          }
          LOBYTE(v13) = v7;
          v17 = SmpRenameTargetFile(&DestinationString, Handle, v16, v13);
          v12 = v17;
          if ( v17 < 0 )
          {
            if ( v16 )
            {
              if ( v17 == -1073741790 )
              {
                LOBYTE(v18) = v7;
                v12 = SmpTryOverwriteReadonlyFile(&DestinationString, Handle, v18);
                if ( (int)(v12 + 0x80000000) >= 0 && v12 != -1073741638 )
                {
                  LOBYTE(v19) = v7;
                  v12 = SmpShuffleMove(&DestinationString, Handle, v19);
                  if ( v12 >= 0 )
                    ValueData = 1;
                }
              }
            }
          }
        }
        else
        {
          v12 = -1073740533;
        }
      }
    }
    else
    {
      v11 = *(_WORD **)(v4 + 24);
      if ( *v11 == 64 )
      {
        *(_QWORD *)(v4 + 24) = v11 + 1;
        *v6 = v8 - 2;
      }
      v12 = SmpForceDeleteTargetFile((struct _UNICODE_STRING *)(v4 + 16), v7);
    }
    if ( Handle )
      NtClose(Handle);
    if ( v12 < 0 )
    {
      SmpLogFailureString((__int64)"SmpProcessFileRenames", 0x1C3Bu, *(_QWORD *)(v4 + 24), v12);
      v1 |= SmpLogPFROError(v4 + 16, (const wchar_t *)(v4 + 32), v12);
    }
    else
    {
      ++v3;
    }
    if ( v5 == 1 )
    {
      *(_WORD *)(v4 + 16) += 4;
      *(_WORD *)(v4 + 18) += 4;
      *(_QWORD *)(v4 + 24) -= 4LL;
    }
    v4 = *(_QWORD *)v4;
    SmpFreeSavedRegistryEntry(v20);
    v2 = (__int64 *)SmpFileRenameList;
  }
  if ( !OldValue )
    RtlAdjustPrivilege(0x12u, 0, 0, &OldValue);
  RtlDeleteRegistryValue(2u, L"Session Manager", L"PendingFileRenameOperations");
  RtlDeleteRegistryValue(2u, L"Session Manager", L"PendingFileRenameOperations2");
  if ( a1 )
  {
    RtlDeleteRegistryValue(0, L"\\REGISTRY\\MACHINE\\OSDATA\\Session Manager", L"PendingFileRenameOperations");
    RtlDeleteRegistryValue(0, L"\\REGISTRY\\MACHINE\\OSDATA\\Session Manager", L"PendingFileRenameOperations2");
  }
  if ( ValueData )
    RtlWriteRegistryValue(2u, L"Session Manager", L"ClearTempFiles", 4u, &ValueData, 4u);
  SmpFinishPFROLogging(v3, v1);
  SmpEventWrite(&SmssEvt_ProcessFileRenames_Stop);
}
