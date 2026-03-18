/*
 * XREFs of ??1?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1400B4D18
 * Callers:
 *     _GetClassInfoEx @ 0x140046494 (_GetClassInfoEx.c)
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 *     xxxSetClassData @ 0x14007D32C (xxxSetClassData.c)
 *     InternalRegisterClassEx @ 0x1400B54C0 (InternalRegisterClassEx.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ @ 0x1400B4D30 (--1-$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ.c)
 */

__int64 __fastcall SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>(__int64 a1)
{
  return SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(a1);
}
