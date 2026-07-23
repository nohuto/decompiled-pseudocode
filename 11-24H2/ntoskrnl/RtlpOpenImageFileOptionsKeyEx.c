/*
 * XREFs of RtlpOpenImageFileOptionsKeyEx @ 0x140A25BD8
 * Callers:
 *     SepCheckAndSetAuditModeForProcess @ 0x1409FA668 (SepCheckAndSetAuditModeForProcess.c)
 *     PspAllocateProcess @ 0x1409FACD0 (PspAllocateProcess.c)
 *     RtlOpenImageFileOptionsKey @ 0x140A25BC0 (RtlOpenImageFileOptionsKey.c)
 * Callees:
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     RtlpOpenBaseImageFileOptionsKey @ 0x140A25D24 (RtlpOpenBaseImageFileOptionsKey.c)
 *     RtlpProcessIFEOKeyFilter @ 0x140A25DA8 (RtlpProcessIFEOKeyFilter.c)
 */

__int64 __fastcall RtlpOpenImageFileOptionsKeyEx(unsigned __int16 *a1, __int64 a2, __int64 a3, HANDLE *a4)
{
  unsigned int v4; // edx
  unsigned int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // edx
  bool v10; // r15
  __int64 result; // rax
  HANDLE v12; // rdi
  ULONG v13; // eax
  bool v14; // zf
  __int64 v15; // rdx
  NTSTATUS v16; // ebx
  __int128 v17; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp+30h] BYREF
  HANDLE KeyHandle; // [rsp+A8h] [rbp+48h] BYREF

  Handle = 0LL;
  *a4 = 0LL;
  v4 = *a1;
  KeyHandle = 0LL;
  v7 = v4;
  v8 = *((_QWORD *)a1 + 1) + v4;
  v17 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  while ( v7 && *(_WORD *)(v8 - 2) != 92 )
  {
    v8 -= 2LL;
    v7 -= 2;
  }
  v9 = v4 - v7;
  *((_QWORD *)&v17 + 1) = v8;
  LOWORD(v17) = v9;
  if ( (unsigned __int16)v9 != v9 )
    return 3221225507LL;
  v10 = RtlpDisableIFEOCaching != 0;
  result = RtlpOpenBaseImageFileOptionsKey(&Handle);
  if ( (int)result >= 0 )
  {
    v12 = Handle;
    v13 = 1600;
    v14 = KeGetCurrentThread()->PreviousMode == 1;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = Handle;
    if ( !v14 )
      v13 = 576;
    ObjectAttributes.Attributes = v13;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v17;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v16 = ZwOpenKey(&KeyHandle, 9u, &ObjectAttributes);
    if ( v10 )
      ZwClose(v12);
    if ( v16 >= 0 )
    {
      Handle = KeyHandle;
      v16 = RtlpProcessIFEOKeyFilter(&Handle, v15, a1);
      if ( v16 >= 0 )
      {
        *a4 = Handle;
      }
      else if ( Handle )
      {
        ZwClose(Handle);
      }
    }
    return (unsigned int)v16;
  }
  return result;
}
