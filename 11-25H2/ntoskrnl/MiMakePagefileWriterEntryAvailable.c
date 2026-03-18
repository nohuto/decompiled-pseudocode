/*
 * XREFs of MiMakePagefileWriterEntryAvailable @ 0x1403BF26C
 * Callers:
 *     MiModifiedPageWriter @ 0x1403BFEE0 (MiModifiedPageWriter.c)
 *     MiGatherPagefilePages @ 0x1403C0730 (MiGatherPagefilePages.c)
 *     MiWriteComplete @ 0x14040E620 (MiWriteComplete.c)
 *     MiPageFileNoFreeSpace @ 0x1404D09F4 (MiPageFileNoFreeSpace.c)
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
