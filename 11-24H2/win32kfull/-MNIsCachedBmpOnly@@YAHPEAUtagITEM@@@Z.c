/*
 * XREFs of ?MNIsCachedBmpOnly@@YAHPEAUtagITEM@@@Z @ 0x140217D44
 * Callers:
 *     xxxDrawMenuItem @ 0x140069860 (xxxDrawMenuItem.c)
 *     ?MNDrawHilite@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x14006B83C (-MNDrawHilite@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MNIsCachedBmpOnly(struct tagITEM *a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 4LL) & 0x20000000) != 0 && !*((_QWORD *)a1 + 3) )
    return 1LL;
  return result;
}
