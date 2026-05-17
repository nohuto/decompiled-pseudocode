/*
 * XREFs of LdrpResSetFilePointer @ 0x1800D2330
 * Callers:
 *     LdrpResSearchResourceHandle @ 0x1800D1ACC (LdrpResSearchResourceHandle.c)
 *     LdrpResReadFile @ 0x1800D2270 (LdrpResReadFile.c)
 * Callees:
 *     ZwSetInformationFile @ 0x180162170 (ZwSetInformationFile.c)
 */

__int64 __fastcall LdrpResSetFilePointer(__int64 a1, __int64 a2)
{
  __int128 v3; // [rsp+30h] [rbp-18h] BYREF
  __int64 v4; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0LL;
  if ( (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    return 3221225480LL;
  v4 = a2;
  return ZwSetInformationFile(a1, &v3, &v4, 8LL, 14);
}
