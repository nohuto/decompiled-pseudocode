/*
 * XREFs of MiCombiningInProgress @ 0x140679C0C
 * Callers:
 *     MiCombineIdenticalPages @ 0x140A961D0 (MiCombineIdenticalPages.c)
 * Callees:
 *     MiFlushEntireTbDueToAttributeChange @ 0x14026F550 (MiFlushEntireTbDueToAttributeChange.c)
 *     RtlAvlInsertNodeEx @ 0x1402A8320 (RtlAvlInsertNodeEx.c)
 *     RtlAvlRemoveNode @ 0x1402A8F20 (RtlAvlRemoveNode.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall MiCombiningInProgress(__int64 *a1, _QWORD *a2, int a3)
{
  __int64 v3; // rbp
  bool v7; // si
  KIRQL v8; // r15
  struct _KTHREAD *CurrentThread; // rbx
  _QWORD *v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rdx
  _QWORD *v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rax

  v3 = *a1;
  v7 = 0;
  v8 = ExAcquireSpinLockExclusive(&dword_140E2FBC0);
  if ( !a3 )
  {
    v14 = *a2;
    if ( *(_QWORD **)(*a2 + 8LL) == a2 )
    {
      v15 = (_QWORD *)a2[1];
      if ( (_QWORD *)*v15 == a2 )
      {
        *v15 = v14;
        *(_QWORD *)(v14 + 8) = v15;
        RtlAvlRemoveNode((unsigned __int64 *)&qword_140E2FBC8, (__int64)(a2 + 2));
        --*((_DWORD *)a1 + 16);
        if ( dword_140E2FBC4 == 1 )
          MiFlushEntireTbDueToAttributeChange();
        --dword_140E2FBC4;
        return MiReleaseSpinLockExclusive(&dword_140E2FBC0, v8);
      }
    }
LABEL_19:
    __fastfail(3u);
  }
  ++*((_DWORD *)a1 + 16);
  ++dword_140E2FBC4;
  if ( !dword_140E2FBD8 )
  {
    dword_140E2FBD8 = 1;
    qword_140E2FBD0 = _InterlockedIncrement64(&PsNextSecurityDomain);
  }
  CurrentThread = KeGetCurrentThread();
  memset_0(a2, 0, 0x50uLL);
  v10 = (_QWORD *)(v3 + 16992);
  a2[5] = CurrentThread;
  v11 = *(_QWORD *)(v3 + 16992);
  if ( *(_QWORD *)(v11 + 8) != v3 + 16992 )
    goto LABEL_19;
  *a2 = v11;
  a2[1] = v10;
  *(_QWORD *)(v11 + 8) = a2;
  *v10 = a2;
  v12 = (_QWORD *)qword_140E2FBC8;
  if ( !qword_140E2FBC8 )
    goto LABEL_12;
  while ( (unsigned __int64)CurrentThread < v12[3] )
  {
    v13 = (_QWORD *)*v12;
    if ( !*v12 )
      goto LABEL_12;
LABEL_10:
    v12 = v13;
  }
  v13 = (_QWORD *)v12[1];
  if ( v13 )
    goto LABEL_10;
  v7 = 1;
LABEL_12:
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140E2FBC8, (unsigned __int64)v12, v7, a2 + 2);
  return MiReleaseSpinLockExclusive(&dword_140E2FBC0, v8);
}
