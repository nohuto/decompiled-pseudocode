/*
 * XREFs of ndisFreeNblToNPagedPool @ 0x1400688F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ndisFreeNblToNPagedPool(_QWORD *Buffer, PLOOKASIDE_LIST_EX Lookaside)
{
  void *v3; // rcx
  _QWORD *v4; // rdi
  __int64 v5; // rbx
  KIRQL v6; // al
  __int64 v7; // r9
  _QWORD *v8; // r8

  v3 = (void *)Buffer[46];
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  v4 = Buffer - 4;
  v5 = *(Buffer - 4);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 8));
  v7 = v4[1];
  if ( *(_QWORD **)(v7 + 8) != v4 + 1 || (v8 = (_QWORD *)v4[2], (_QWORD *)*v8 != v4 + 1) )
    __fastfail(3u);
  *v8 = v7;
  *(_QWORD *)(v7 + 8) = v8;
  KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 8), v6);
  ExFreePoolWithTag(v4, 0);
}
