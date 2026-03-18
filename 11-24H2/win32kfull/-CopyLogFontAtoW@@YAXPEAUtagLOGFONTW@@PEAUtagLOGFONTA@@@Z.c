/*
 * XREFs of ?CopyLogFontAtoW@@YAXPEAUtagLOGFONTW@@PEAUtagLOGFONTA@@@Z @ 0x1402B8290
 * Callers:
 *     SfnIMECONTROL @ 0x1401E57B0 (SfnIMECONTROL.c)
 * Callees:
 *     MBToWCSEx @ 0x14011C96C (MBToWCSEx.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

void __fastcall CopyLogFontAtoW(struct tagLOGFONTW *a1, struct tagLOGFONTA *a2)
{
  __int128 v2; // xmm0
  __int64 v4; // rcx
  PWCH lfFaceName; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_OWORD *)&a2->lfHeight;
  lfFaceName = a1->lfFaceName;
  *(_OWORD *)&a1->lfHeight = v2;
  *(_QWORD *)&a1->lfWeight = *(_QWORD *)&a2->lfWeight;
  *(_DWORD *)&a1->lfOutPrecision = *(_DWORD *)&a2->lfOutPrecision;
  memset_0(a1->lfFaceName, 0, sizeof(a1->lfFaceName));
  MBToWCSEx(v4, a2->lfFaceName, -1, &lfFaceName, 32);
}
