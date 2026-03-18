/*
 * XREFs of SmmRemoveObjectFromAdapter @ 0x140010B48
 * Callers:
 *     SmmClosePhysicalObject @ 0x14001094C (SmmClosePhysicalObject.c)
 * Callees:
 *     <none>
 */

void __fastcall SmmRemoveObjectFromAdapter(__int64 a1, _QWORD *a2)
{
  volatile LONG *v2; // rdi
  KIRQL v4; // al
  __int64 v5; // r8
  _QWORD *v6; // rdx

  v2 = (volatile LONG *)(a1 + 36);
  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 36));
  v5 = *a2;
  if ( *(_QWORD **)(*a2 + 8LL) != a2 || (v6 = (_QWORD *)a2[1], (_QWORD *)*v6 != a2) )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  ExReleaseSpinLockExclusive(v2, v4);
  a2[2] = 0LL;
}
