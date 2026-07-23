/*
 * XREFs of IopGetPersistedStateLocation @ 0x140AB5D7C
 * Callers:
 *     IopCreateSecureDeviceClassSettings @ 0x14099CB48 (IopCreateSecureDeviceClassSettings.c)
 * Callees:
 *     RtlGetPersistedStateLocation @ 0x1409B3D60 (RtlGetPersistedStateLocation.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopGetPersistedStateLocation(__int64 a1, const WCHAR *a2, __int64 a3, WCHAR **a4)
{
  ULONG BufferLengthIn; // esi
  WCHAR *TargetPath; // rdi
  NTSTATUS PersistedStateLocation; // eax
  unsigned int v9; // ebx
  __int64 result; // rax
  ULONG BufferLengthOut; // [rsp+70h] [rbp+18h] BYREF

  BufferLengthOut = 0;
  BufferLengthIn = 256;
  while ( 1 )
  {
    TargetPath = (WCHAR *)ExAllocatePool2(0x100uLL);
    if ( !TargetPath )
      break;
    PersistedStateLocation = RtlGetPersistedStateLocation(
                               L"SecureDeviceClass",
                               0LL,
                               a2,
                               LocationTypeRegistry,
                               TargetPath,
                               BufferLengthIn,
                               &BufferLengthOut);
    v9 = PersistedStateLocation;
    if ( PersistedStateLocation != -2147483643 )
    {
      if ( PersistedStateLocation >= 0 )
        goto LABEL_10;
      goto LABEL_8;
    }
    if ( BufferLengthOut <= BufferLengthIn )
    {
      v9 = -1073741595;
LABEL_8:
      ExFreePoolWithTag(TargetPath, 0);
      TargetPath = 0LL;
      goto LABEL_10;
    }
    BufferLengthIn = BufferLengthOut;
    ExFreePoolWithTag(TargetPath, 0);
  }
  v9 = -1073741670;
LABEL_10:
  result = v9;
  *a4 = TargetPath;
  return result;
}
