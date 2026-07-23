/*
 * XREFs of FsRtlCheckNotifyForDeleteLite @ 0x14070B5EC
 * Callers:
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x1409FEBD0 (FsRtlNotifyFilterChangeDirectoryLite.c)
 * Callees:
 *     FsRtlNotifyCompleteIrpList @ 0x1409FF0E4 (FsRtlNotifyCompleteIrpList.c)
 */

_QWORD *__fastcall FsRtlCheckNotifyForDeleteLite(_QWORD **a1)
{
  _QWORD *i; // rbx
  _QWORD *result; // rax

  for ( i = *a1; i != a1; i = (_QWORD *)*i )
  {
    *((_WORD *)i + 20) |= 0x20u;
    result = i + 2;
    if ( (_QWORD *)*result != result )
      result = (_QWORD *)FsRtlNotifyCompleteIrpList(i - 4, 3221225558LL);
  }
  return result;
}
