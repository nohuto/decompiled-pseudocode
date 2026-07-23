/*
 * XREFs of MiDeleteThreadContext @ 0x140690714
 * Callers:
 *     MiZeroNodeConductorWait @ 0x1406911A8 (MiZeroNodeConductorWait.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     MiRemoveConductorListZeroThread @ 0x1408000A0 (MiRemoveConductorListZeroThread.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteThreadContext(__int64 a1, void *a2)
{
  _QWORD *v3; // rbx
  __int64 v5; // rbp
  KIRQL v6; // r9
  _QWORD *i; // r8
  _QWORD *v8; // rcx
  _QWORD *v9; // rax

  v3 = 0LL;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16LL) + 57216LL * *(unsigned int *)(a1 + 56);
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v5 + 15280));
  for ( i = *(_QWORD **)(a1 + 112); i != (_QWORD *)(a1 + 112); i = (_QWORD *)*i )
  {
    v8 = (_QWORD *)*i;
    v3 = i - 52;
    if ( (void *)*(i - 11) == a2 )
    {
      if ( (_QWORD *)v8[1] != i || (v9 = (_QWORD *)i[1], (_QWORD *)*v9 != i) )
        __fastfail(3u);
      *v9 = v8;
      v8[1] = v9;
      break;
    }
  }
  MiReleaseSpinLockExclusive((_DWORD *)(v5 + 15280), v6);
  MiRemoveConductorListZeroThread(a1, a2);
  ObfDereferenceObjectWithTag(a2, 0x655A6D4Du);
  ExFreePoolWithTag(v3, 0);
}
