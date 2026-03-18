/*
 * XREFs of ClassUnlock @ 0x14007E328
 * Callers:
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x14007E01C (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 *     xxxRecreateSmallIcons @ 0x14021F460 (xxxRecreateSmallIcons.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x14007E370 (-ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z.c)
 */

struct tagCLS *__fastcall ClassUnlock(struct tagCLS *a1, _QWORD *a2)
{
  *((_QWORD *)PtiCurrent((__int64)a1, (__int64)a2) + 48) = *a2;
  return ClassUnlockWorker(a1);
}
