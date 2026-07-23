/*
 * XREFs of FsRtlInsertPerFileObjectContext @ 0x1403B40C0
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlAcquireAutoExpandPushLockExclusive @ 0x1403B432C (FsRtlAcquireAutoExpandPushLockExclusive.c)
 *     FsRtlReleaseAutoExpandPushLockExclusive @ 0x1403B44A4 (FsRtlReleaseAutoExpandPushLockExclusive.c)
 *     IoGetFileObjectFilterContext @ 0x1403B45C0 (IoGetFileObjectFilterContext.c)
 *     IopAllocateFileObjectExtension @ 0x1403B4640 (IopAllocateFileObjectExtension.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall FsRtlInsertPerFileObjectContext(PFILE_OBJECT FileObject, PFSRTL_PER_FILEOBJECT_CONTEXT Ptr)
{
  _QWORD *FileObjectExtension; // rax
  struct _LIST_ENTRY *v5; // rdi
  _QWORD *Pool2; // rax
  PVOID v7; // rcx
  _QWORD *v8; // rax
  __int64 *v9; // rdx
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *v11; // rax
  NTSTATUS result; // eax
  PVOID P; // [rsp+30h] [rbp+8h] BYREF
  char v14; // [rsp+40h] [rbp+18h] BYREF

  if ( !FileObject )
    return -1073741811;
  if ( FileObject->FileObjectExtension || (result = IopAllocateFileObjectExtension(FileObject, &v14, 0LL), result >= 0) )
  {
    FileObjectExtension = FileObject->FileObjectExtension;
    if ( FileObjectExtension )
      v5 = (struct _LIST_ENTRY *)FileObjectExtension[4];
    else
      v5 = 0LL;
    if ( v5 )
      goto LABEL_11;
    Pool2 = (_QWORD *)ExAllocatePool2(0x42uLL, 0x20uLL, 0x58434F46u);
    P = Pool2;
    v7 = Pool2;
    if ( !Pool2 )
      return -1073741670;
    Pool2[1] = 0LL;
    *Pool2 = 0LL;
    v8 = Pool2 + 2;
    v8[1] = v8;
    *v8 = v8;
    v9 = (__int64 *)FileObject->FileObjectExtension;
    if ( v9 && v9 != &qword_1400145A0 )
    {
      if ( !_InterlockedCompareExchange64(v9 + 4, (signed __int64)v7, 0LL) )
      {
        v5 = (struct _LIST_ENTRY *)P;
LABEL_11:
        FsRtlAcquireAutoExpandPushLockExclusive(v5);
        Flink = v5[1].Flink;
        v11 = v5 + 1;
        if ( Flink->Blink != &v5[1] )
          __fastfail(3u);
        Ptr->Links.Flink = Flink;
        Ptr->Links.Blink = v11;
        Flink->Blink = &Ptr->Links;
        v11->Flink = &Ptr->Links;
        FsRtlReleaseAutoExpandPushLockExclusive((ULONG_PTR)v5);
        return 0;
      }
      v7 = P;
    }
    ExFreePoolWithTag(v7, 0);
    IoGetFileObjectFilterContext(FileObject, &P, 0LL);
    v5 = (struct _LIST_ENTRY *)P;
    if ( !P )
      return -1073741823;
    goto LABEL_11;
  }
  return result;
}
