/*
 * XREFs of NtCreateSymbolicLinkObject @ 0x140A1E380
 * Callers:
 *     CreateSystemRootLink @ 0x140C0C3F8 (CreateSystemRootLink.c)
 *     IopReassignSystemRoot @ 0x140C1EFE0 (IopReassignSystemRoot.c)
 * Callees:
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ObCreateSymbolicLink @ 0x140A1E6A8 (ObCreateSymbolicLink.c)
 */

NTSTATUS __cdecl NtCreateSymbolicLinkObject(
        PHANDLE LinkHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PUNICODE_STRING LinkTarget)
{
  char PreviousMode; // r9
  __int64 v9; // rcx
  UNICODE_STRING v10; // xmm1
  unsigned __int16 epi16; // ax
  unsigned __int16 v12; // di
  NTSTATUS SymbolicLink; // ebx
  REGHANDLE v14; // r10
  unsigned int v15; // r9d
  __int64 v16; // rax
  unsigned int v17; // r9d
  __int64 v18; // rcx
  __int64 v19; // rax
  unsigned int v20; // r9d
  __int64 v21; // rax
  __int64 v22; // rax
  UNICODE_STRING *v24; // rax
  __int16 v25; // [rsp+30h] [rbp-F8h] BYREF
  UNICODE_STRING v26; // [rsp+38h] [rbp-F0h] BYREF
  ACCESS_MASK v27; // [rsp+48h] [rbp-E0h] BYREF
  NTSTATUS v28; // [rsp+50h] [rbp-D8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-D0h] BYREF
  UNICODE_STRING *ObjectName; // [rsp+68h] [rbp-C0h]
  __int64 v31; // [rsp+70h] [rbp-B8h] BYREF
  UNICODE_STRING v32; // [rsp+78h] [rbp-B0h]
  struct _EVENT_DATA_DESCRIPTOR UserData[6]; // [rsp+90h] [rbp-98h] BYREF

  v26 = 0LL;
  DestinationString = 0LL;
  HIDWORD(v31) = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&v26, 0LL);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)ObjectAttributes & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v9 = 0x7FFFFFFF0000LL;
    ObjectName = ObjectAttributes->ObjectName;
    if ( ObjectName )
      DestinationString = *ObjectName;
    v26 = *LinkTarget;
    if ( (unsigned __int64)LinkHandle < 0x7FFFFFFF0000LL )
      v9 = (__int64)LinkHandle;
    *(_QWORD *)v9 = *(_QWORD *)v9;
    v10 = v26;
  }
  else
  {
    v10 = *LinkTarget;
    v26 = *LinkTarget;
    v24 = ObjectAttributes->ObjectName;
    if ( v24 )
      DestinationString = *v24;
  }
  if ( (v10.MaximumLength & 1) != 0 )
  {
    epi16 = v10.MaximumLength & 0xFFFE;
    v26.MaximumLength = v10.MaximumLength & 0xFFFE;
    v10 = v26;
  }
  else
  {
    epi16 = _mm_extract_epi16((__m128i)v10, 1);
  }
  if ( !epi16 )
    return -1073741811;
  v12 = _mm_cvtsi128_si32((__m128i)v10);
  if ( v12 > epi16 || (_mm_cvtsi128_si32((__m128i)v10) & 1) != 0 )
    return -1073741811;
  v31 = 4LL;
  v32 = v10;
  SymbolicLink = ObCreateSymbolicLink(
                   (_DWORD)LinkHandle,
                   DesiredAccess,
                   (_DWORD)ObjectAttributes,
                   (unsigned int)&v31,
                   PreviousMode);
  v28 = SymbolicLink;
  v27 = DesiredAccess;
  v14 = EtwApiCallsProvRegHandle;
  if ( EtwApiCallsProvRegHandle )
  {
    v25 = 0;
    v15 = 0;
    if ( DestinationString.Buffer )
    {
      UserData[0].Ptr = (ULONGLONG)DestinationString.Buffer;
      UserData[0].Size = DestinationString.Length;
      UserData[0].Reserved = 0;
      v15 = 1;
    }
    v16 = v15;
    UserData[v16].Ptr = (ULONGLONG)&v25;
    *(_QWORD *)&UserData[v16].Size = 2LL;
    v17 = v15 + 1;
    if ( v26.Buffer )
    {
      v18 = v17;
      UserData[v18].Ptr = (ULONGLONG)v26.Buffer;
      UserData[v18].Size = v12;
      *(&UserData[0].Reserved + 1 * v18) = 0;
      ++v17;
    }
    v19 = v17;
    UserData[v19].Ptr = (ULONGLONG)&v25;
    *(_QWORD *)&UserData[v19].Size = 2LL;
    v20 = v17 + 1;
    v21 = v20;
    UserData[v21].Ptr = (ULONGLONG)&v27;
    *(_QWORD *)&UserData[v21].Size = 4LL;
    v22 = ++v20;
    UserData[v22].Ptr = (ULONGLONG)&v28;
    *(_QWORD *)&UserData[v22].Size = 4LL;
    EtwWrite(v14, &KERNEL_AUDIT_API_CREATESYMBOLICLINKOBJECT, 0LL, v20 + 1, UserData);
  }
  return SymbolicLink;
}
