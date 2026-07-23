/*
 * XREFs of MiCreateSectionForDriver @ 0x140A1199C
 * Callers:
 *     MiObtainSectionForDriver @ 0x140A116B4 (MiObtainSectionForDriver.c)
 * Callees:
 *     DbgPrintEx @ 0x140275B40 (DbgPrintEx.c)
 *     RtlCopyUnicodeString @ 0x1403FA370 (RtlCopyUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x140403FC0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x140404080 (RtlAppendUnicodeStringToString.c)
 *     RtlStringCbPrintfW @ 0x140404170 (RtlStringCbPrintfW.c)
 *     MiCreateSystemSection @ 0x140443248 (MiCreateSystemSection.c)
 *     KeComputeSha256 @ 0x140497580 (KeComputeSha256.c)
 *     MiGetBaseNameFromImageFileName @ 0x1404C6CE4 (MiGetBaseNameFromImageFileName.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwOpenFile @ 0x1406A7A10 (ZwOpenFile.c)
 *     ObCloseHandle @ 0x1408AB1B0 (ObCloseHandle.c)
 *     MiLogFailedDriverLoad @ 0x140A11CEC (MiLogFailedDriverLoad.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     KdPullRemoteFile @ 0x140B78618 (KdPullRemoteFile.c)
 */

__int64 __fastcall MiCreateSectionForDriver(UNICODE_STRING *p_DestinationString, __int64 a2, int a3, _QWORD *a4)
{
  __int64 v6; // rbx
  wchar_t *Pool2; // rcx
  int v9; // r10d
  unsigned __int16 Length; // bx
  __int64 v11; // rcx
  UNICODE_STRING *v12; // rsi
  unsigned __int8 *v13; // rdi
  __int64 v14; // r14
  int v15; // ebx
  int v17; // [rsp+40h] [rbp-C0h]
  int v18; // [rsp+48h] [rbp-B8h]
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  HANDLE FileHandle; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING Source; // [rsp+88h] [rbp-78h] BYREF
  __int64 v22; // [rsp+98h] [rbp-68h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-60h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+D0h] [rbp-30h] BYREF
  wchar_t pszDest; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v26[32]; // [rsp+E8h] [rbp-18h] BYREF

  *a4 = 0LL;
  byte_140E2D96C = 1;
  v22 = 0LL;
  v6 = a2;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  FileHandle = 0LL;
  Source = 0LL;
  IoStatusBlock = 0LL;
  DestinationString = 0LL;
  if ( !a2 )
  {
    if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
    {
      Pool2 = 0LL;
      if ( (NtGlobalFlag2 & 8) != 0 )
      {
        DestinationString.Length = 176;
        if ( (int)MiGetBaseNameFromImageFileName(&p_DestinationString->Length, (__int64)&Source) < 0 )
        {
          Length = Source.Length;
        }
        else
        {
          Length = Source.Length;
          if ( Source.Length && (v11 = (unsigned int)(v9 + 2), v11 + (unsigned __int64)Source.Length <= 0xFFFF) )
          {
            LOWORD(v9) = v9 + 2 + Source.Length;
            DestinationString.Length = v11 + Source.Length;
          }
          else
          {
            Length = 0;
            Source.Length = 0;
          }
        }
        DestinationString.MaximumLength = v9;
        Pool2 = (wchar_t *)ExAllocatePool2(0x40uLL, (unsigned __int16)v9, 0x644B6D4Du);
        DestinationString.Buffer = Pool2;
      }
      else
      {
        Length = Source.Length;
      }
      v12 = p_DestinationString;
      if ( Pool2 )
      {
        KeComputeSha256((__int64)p_DestinationString->Buffer, p_DestinationString->Length, (__int64)v26);
        RtlCopyUnicodeString(&DestinationString, &stru_14000BF30);
        v13 = v26;
        v14 = 32LL;
        do
        {
          RtlStringCbPrintfW(&pszDest, 6uLL, L"%02x", *v13);
          RtlAppendUnicodeToString(&DestinationString, &pszDest);
          ++v13;
          --v14;
        }
        while ( v14 );
        if ( Length )
        {
          RtlAppendUnicodeToString(&DestinationString, L"_");
          RtlAppendUnicodeStringToString(&DestinationString, &Source);
        }
        p_DestinationString = &DestinationString;
      }
      if ( (int)KdPullRemoteFile(v12, p_DestinationString) < 0 )
        p_DestinationString = v12;
      else
        DbgPrintEx(0x66u, 2u, "MmLoadSystemImage: Pulled %wZ from kd\n", v12);
    }
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = p_DestinationString;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v15 = ZwOpenFile(&FileHandle, 0x20u, &ObjectAttributes, &IoStatusBlock, 5u, 0);
    if ( v15 < 0 )
    {
      if ( DestinationString.Buffer )
        ExFreePoolWithTag(DestinationString.Buffer, 0);
      return (unsigned int)v15;
    }
    v6 = (__int64)FileHandle;
    if ( DestinationString.Buffer )
      ExFreePoolWithTag(DestinationString.Buffer, 0);
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v15 = MiCreateSystemSection(
          &v22,
          a2,
          (int)&ObjectAttributes,
          (__int64)a4,
          16,
          ((a3 >> 31) & 0x400000u) + 0x100000,
          ((unsigned int)a3 >> 27) & 8,
          v6,
          v17,
          v18,
          -1,
          0,
          0);
  if ( FileHandle )
    ObCloseHandle(FileHandle, 0);
  if ( v15 < 0 )
  {
    MiLogFailedDriverLoad(p_DestinationString, 0LL, 0LL, (unsigned int)v15);
    return (unsigned int)v15;
  }
  *a4 = v22;
  return 0LL;
}
