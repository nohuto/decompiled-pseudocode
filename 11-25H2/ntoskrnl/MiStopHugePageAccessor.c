/*
 * XREFs of MiStopHugePageAccessor @ 0x1404F3624
 * Callers:
 *     MiStopPageAccessor @ 0x140347A84 (MiStopPageAccessor.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402B5440 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14031F360 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiLocatePageCollisionByPfn @ 0x1404560C0 (MiLocatePageCollisionByPfn.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     MiLockHugeRangeColorHeadAtDpc @ 0x14066531C (MiLockHugeRangeColorHeadAtDpc.c)
 */

_QWORD *__fastcall MiStopHugePageAccessor(ULONG_PTR *BugCheckParameter2, int a2)
{
  volatile signed __int64 *v2; // rbp
  __int64 v4; // rbx
  _QWORD *v5; // rcx
  _QWORD *i; // rdi
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  _QWORD **v9; // rax
  _QWORD *v10; // rcx

  v2 = 0LL;
  v4 = ((__int64)BugCheckParameter2 - qword_140E2FD80) >> 3;
  if ( !a2 && (*BugCheckParameter2 & 7) - 1 <= 1 )
    v2 = (volatile signed __int64 *)MiLockHugeRangeColorHeadAtDpc(BugCheckParameter2);
  ExAcquireSpinLockSharedAtDpcLevel(&dword_140E2FBF0);
  v5 = (_QWORD *)qword_140E2FBF8;
  i = 0LL;
  while ( v5 )
  {
    i = v5;
    v5 = (_QWORD *)*v5;
  }
  if ( !i )
LABEL_18:
    KeBugCheckEx(0x1Au, 0x1502uLL, (ULONG_PTR)BugCheckParameter2, *BugCheckParameter2, v4 & 0x3FFFFF);
  v7 = v4 & 0x3FFFFF;
  while ( !MiLocatePageCollisionByPfn((__int64)i, v7) )
  {
    v9 = (_QWORD **)i[1];
    if ( v9 )
    {
      v10 = *v9;
      for ( i = (_QWORD *)i[1]; v10; v10 = (_QWORD *)*v10 )
        i = v10;
    }
    else
    {
      while ( 1 )
      {
        i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !i || (_QWORD *)*i == v8 )
          break;
        v8 = i;
      }
    }
    if ( !i )
      goto LABEL_18;
  }
  *BugCheckParameter2 &= ~0x800000000000000uLL;
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140E2FBF0);
  if ( v2 )
    _InterlockedAnd64(v2, 0xFFFFFFFFFFFFFFF7uLL);
  return i;
}
