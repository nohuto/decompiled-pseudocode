/*
 * XREFs of LdrpResSetFilePointer @ 0x1800A6680
 * Callers:
 *     LdrpResReadFile @ 0x1800A65C0 (LdrpResReadFile.c)
 *     LdrpResSearchResourceHandle @ 0x1800A66CC (LdrpResSearchResourceHandle.c)
 * Callees:
 *     ZwSetInformationFile @ 0x180163700 (ZwSetInformationFile.c)
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
