/*
 * XREFs of MiCombiningInProgress @ 0x1406865CC
 * Callers:
 *     MiCombineIdenticalPages @ 0x140A97650 (MiCombineIdenticalPages.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x1402903E0 (RtlAvlInsertNodeEx.c)
 *     RtlAvlRemoveNode @ 0x1402911D0 (RtlAvlRemoveNode.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x14039D0A4 (MiFlushEntireTbDueToAttributeChange.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
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
  v8 = ExAcquireSpinLockExclusive(&dword_140E2FF40);
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
        RtlAvlRemoveNode((unsigned __int64 *)&qword_140E2FF48, (__int64)(a2 + 2));
        --*((_DWORD *)a1 + 16);
        if ( dword_140E2FF44 == 1 )
          MiFlushEntireTbDueToAttributeChange();
        --dword_140E2FF44;
        return MiReleaseSpinLockExclusive(&dword_140E2FF40, v8);
      }
    }
LABEL_19:
    __fastfail(3u);
  }
  ++*((_DWORD *)a1 + 16);
  ++dword_140E2FF44;
  if ( !dword_140E2FF58 )
  {
    dword_140E2FF58 = 1;
    qword_140E2FF50 = _InterlockedIncrement64(&PsNextSecurityDomain);
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
  v12 = (_QWORD *)qword_140E2FF48;
  if ( !qword_140E2FF48 )
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
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140E2FF48, (unsigned __int64)v12, v7, a2 + 2);
  return MiReleaseSpinLockExclusive(&dword_140E2FF40, v8);
}
