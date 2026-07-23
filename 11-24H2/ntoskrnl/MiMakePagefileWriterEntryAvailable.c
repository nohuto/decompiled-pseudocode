/*
 * XREFs of MiMakePagefileWriterEntryAvailable @ 0x14046FFF8
 * Callers:
 *     MiWriteComplete @ 0x1402ED400 (MiWriteComplete.c)
 *     MiGatherPagefilePages @ 0x1402F9BC8 (MiGatherPagefilePages.c)
 *     MiPageFileNoFreeSpace @ 0x14046F624 (MiPageFileNoFreeSpace.c)
 *     MiModifiedPageWriter @ 0x14046F7B0 (MiModifiedPageWriter.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MiMakePagefileWriterEntryAvailable(_QWORD *a1)
{
  _QWORD *v1; // r8
  _QWORD *result; // rax

  v1 = (_QWORD *)(a1[7] + 952LL);
  if ( _bittest16((const signed __int16 *)(a1[8] + 172LL), 0xBu) )
  {
    result = (_QWORD *)*v1;
    if ( *(_QWORD **)(*v1 + 8LL) != v1 )
LABEL_3:
      __fastfail(3u);
    *a1 = result;
    a1[1] = v1;
    result[1] = a1;
    *v1 = a1;
  }
  else
  {
    result = *(_QWORD **)(a1[7] + 960LL);
    if ( (_QWORD *)*result != v1 )
      goto LABEL_3;
    *a1 = v1;
    a1[1] = result;
    *result = a1;
    v1[1] = a1;
  }
  return result;
}
