/*
 * XREFs of IoGetSfioStreamIdentifier @ 0x1404733C0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 */

PVOID __stdcall IoGetSfioStreamIdentifier(PFILE_OBJECT FileObject, PVOID Signature)
{
  void *v2; // rbx
  _QWORD *FileObjectExtension; // rax
  _QWORD *v5; // rdi
  KSPIN_LOCK *p_IrpListLock; // rbp
  KIRQL v7; // dl
  _QWORD *v8; // rax

  v2 = 0LL;
  if ( !FileObject || !Signature )
    return 0LL;
  FileObjectExtension = FileObject->FileObjectExtension;
  v5 = 0LL;
  if ( FileObjectExtension )
    v5 = (_QWORD *)FileObjectExtension[5];
  if ( v5 )
  {
    p_IrpListLock = &FileObject->IrpListLock;
    v7 = KeAcquireSpinLockRaiseToDpc(&FileObject->IrpListLock);
    v8 = (_QWORD *)*v5;
    if ( !*v5 )
    {
      v5[1] = v5;
      v8 = v5;
      *v5 = v5;
    }
    while ( v8 != v5 )
    {
      if ( (PVOID)v8[3] == Signature )
      {
        v2 = (void *)v8[2];
        break;
      }
      v8 = (_QWORD *)*v8;
    }
    KeReleaseSpinLock(p_IrpListLock, v7);
  }
  return v2;
}
