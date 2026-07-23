/*
 * XREFs of IopSymlinkUpdateECP @ 0x1408ABA8C
 * Callers:
 *     IopParseDevice @ 0x1408A7F20 (IopParseDevice.c)
 *     IopSymlinkRememberJunction @ 0x1408ACA10 (IopSymlinkRememberJunction.c)
 *     IopSymlinkApplyToOpenedName @ 0x1409C6EF4 (IopSymlinkApplyToOpenedName.c)
 *     IopGraftName @ 0x140A2F1E8 (IopGraftName.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1403FA370 (RtlCopyUnicodeString.c)
 *     IopSymlinkRemoveECP @ 0x140436270 (IopSymlinkRemoveECP.c)
 *     IopSymlinkGetECP @ 0x140446838 (IopSymlinkGetECP.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     FsRtlFreeExtraCreateParameter @ 0x1408AB0A0 (FsRtlFreeExtraCreateParameter.c)
 *     IopSymlinkFreeRelatedMountPointChain @ 0x1408AB168 (IopSymlinkFreeRelatedMountPointChain.c)
 *     IopSymlinkAllocateAndAddECP @ 0x1408AB7E0 (IopSymlinkAllocateAndAddECP.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopSymlinkUpdateECP(
        PIRP Irp,
        UNICODE_STRING *a2,
        unsigned __int16 a3,
        const UNICODE_STRING *a4,
        __int16 a5,
        __int16 a6)
{
  ULONG Flags; // eax
  UNICODE_STRING *v9; // rdi
  struct _ECP_LIST *UserBuffer; // rbx
  __int64 Length; // rcx
  __int16 v13; // r15
  __int16 v14; // ax
  UNICODE_STRING *v16; // rbp
  int v17; // ebx
  UNICODE_STRING *v18; // rsi
  unsigned __int16 v19; // bx
  wchar_t *Buffer; // rax
  size_t v21; // r8
  wchar_t *v22; // rdx
  UNICODE_STRING *i; // rax
  __int64 Pool2; // rax
  UNICODE_STRING *v25; // [rsp+60h] [rbp+8h] BYREF
  PVOID EcpContext; // [rsp+68h] [rbp+10h] BYREF
  PVOID v27; // [rsp+78h] [rbp+20h] BYREF

  EcpContext = a2;
  Flags = Irp->Flags;
  v25 = 0LL;
  v9 = a2;
  UserBuffer = 0LL;
  if ( (Flags & 0x80u) != 0 )
    UserBuffer = (struct _ECP_LIST *)Irp->UserBuffer;
  IopSymlinkGetECP(UserBuffer, (PVOID *)&v25);
  Length = a4->Length;
  v13 = a6;
  if ( v9[1].MaximumLength < (unsigned __int16)Length )
  {
    v16 = v25;
    v27 = 0LL;
    if ( v25 == v9 )
    {
      IopSymlinkRemoveECP(UserBuffer, &EcpContext);
      v17 = IopSymlinkAllocateAndAddECP(Irp, &v27, a4->Length);
      if ( v17 < 0 )
      {
        FsRtlFreeExtraCreateParameter(EcpContext);
        return (unsigned int)v17;
      }
      v9 = (UNICODE_STRING *)EcpContext;
      v18 = (UNICODE_STRING *)v27;
    }
    else
    {
      for ( i = (UNICODE_STRING *)v25->Buffer; i != v9; i = (UNICODE_STRING *)i->Buffer )
        v16 = i;
      Pool2 = ExAllocatePool2(0x100uLL, Length + 32, 0x69536F49u);
      v18 = (UNICODE_STRING *)Pool2;
      if ( !Pool2 )
        return 3221225626LL;
      v16->Buffer = (wchar_t *)Pool2;
    }
    v19 = a4->Length;
    Buffer = v9->Buffer;
    v21 = a4->Length;
    v22 = a4->Buffer;
    *(_DWORD *)(&v18->MaximumLength + 1) = 0;
    v18[1].Length = 0;
    v18[1].MaximumLength = v19;
    v18[1].Buffer = &v18[2].Length;
    v18->Length = a3;
    v18->MaximumLength = v13;
    v18->Buffer = Buffer;
    memmove(&v18[2], v22, v21);
    v18[1].Length += v19;
    if ( v9 == v16 )
    {
      v9->Buffer = 0LL;
      FsRtlFreeExtraCreateParameter(v9);
    }
    else
    {
      ExFreePoolWithTag(v9, 0x69536F49u);
    }
    v9 = v18;
  }
  else
  {
    RtlCopyUnicodeString(v9 + 1, a4);
  }
  v14 = a5;
  v9->MaximumLength = v13;
  *(&v9->MaximumLength + 1) = v14;
  v9->Length = a3;
  if ( (v9->MaximumLength & 1) == 0 )
    IopSymlinkFreeRelatedMountPointChain((__int64)v9);
  return 0LL;
}
