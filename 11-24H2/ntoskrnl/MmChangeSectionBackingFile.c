/*
 * XREFs of MmChangeSectionBackingFile @ 0x14044663C
 * Callers:
 *     FsRtlChangeBackingFileObject @ 0x1404465F0 (FsRtlChangeBackingFileObject.c)
 *     MiShareExistingControlArea @ 0x14098C830 (MiShareExistingControlArea.c)
 * Callees:
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14028EF60 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     MiLockSectionControlArea @ 0x1402BED40 (MiLockSectionControlArea.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     ObFastReplaceObject @ 0x14044674C (ObFastReplaceObject.c)
 */

__int64 __fastcall MmChangeSectionBackingFile(_QWORD **a1, _QWORD **a2, int a3)
{
  void *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rbx
  _QWORD *v7; // rcx
  int v8; // edx
  unsigned __int8 v10; // [rsp+40h] [rbp+18h] BYREF

  v10 = 0;
  v4 = a1;
  if ( (a3 & 0xFFFFFFFC) != 0 || a3 == 3 )
    return 3221225713LL;
  if ( !a1 || a1[5] == a2[5] )
  {
    v5 = MiLockSectionControlArea(a2[5], a3 & 1, &v10);
    v6 = v5;
    if ( !v5 )
      return 0LL;
    if ( (*(_DWORD *)(v5 + 56) & 1) == 0 )
    {
      v7 = (_QWORD *)(v5 + 64);
      if ( v4 )
      {
        if ( (void *)(*v7 & 0xFFFFFFFFFFFFFFF0uLL) != v4 )
          goto LABEL_9;
        goto LABEL_8;
      }
      v4 = (void *)(*v7 & 0xFFFFFFFFFFFFFFF0uLL);
      if ( v4 )
      {
LABEL_8:
        ObFastReplaceObject(v7, a2);
        ObfReferenceObjectWithTag(a2, 0x43536D4Du);
        ObDereferenceObjectDeferDeleteWithTag(v4, 0x43536D4Du);
      }
    }
LABEL_9:
    v8 = *(_DWORD *)(v6 + 56);
    if ( (v8 & 0x200) != 0 && ((__int64)KeGetCurrentThread()[1].Queue & 0x40) == 0 )
      *(_DWORD *)(v6 + 56) = v8 & 0xFFFFFDFF;
    MiReleaseSpinLockExclusive((_DWORD *)(v6 + 72), v10);
    return 0LL;
  }
  return 3221225712LL;
}
