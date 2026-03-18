/*
 * XREFs of ?CanUseWarpExtension@CPrimitiveGroupDrawListGenerator@@QEBA_NXZ @ 0x18025AF4C
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@@Z @ 0x18010DE80 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache.c)
 * Callees:
 *     ??$IsTranslateAndScaleIgnoreZ@$0A@@CMILMatrix@@AEBA_NXZ @ 0x1801BDE40 (--$IsTranslateAndScaleIgnoreZ@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ??$IsPure2DUniformZ@$0A@@CMILMatrix@@AEBA_NXZ @ 0x1801BE2A0 (--$IsPure2DUniformZ@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ??0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801C37D0 (--0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?Step@Iterator@CPrimitiveBuffer@@QEAA_NXZ @ 0x1801FCE3C (-Step@Iterator@CPrimitiveBuffer@@QEAA_NXZ.c)
 *     ?GetIteratorForState@CPrimitiveGroupDrawListGenerator@@QEBA?AVIterator@CPrimitiveBuffer@@I@Z @ 0x1801FD8EC (-GetIteratorForState@CPrimitiveGroupDrawListGenerator@@QEBA-AVIterator@CPrimitiveBuffer@@I@Z.c)
 */

char __fastcall CPrimitiveGroupDrawListGenerator::CanUseWarpExtension(CPrimitiveGroupDrawListGenerator *this)
{
  __int64 v1; // rdi
  __int64 v3; // r11
  _DWORD *v4; // rcx
  int v5; // r11d
  _BYTE v7[8]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v8; // [rsp+28h] [rbp-70h]
  _BYTE v9[88]; // [rsp+40h] [rbp-58h] BYREF

  v1 = *((_QWORD *)this + 2);
  v3 = 0LL;
LABEL_2:
  if ( (unsigned int)v3 >= *(_DWORD *)(v1 + 8) )
    return 1;
  v4 = (_DWORD *)(*(_QWORD *)v1 + 144 * v3);
  if ( (v4[1] & 0xFFFFFFCC) == 0 && *v4 <= 1u && v4[11] <= 1u )
  {
    CPrimitiveGroupDrawListGenerator::GetIteratorForState((__int64)this, (__int64)v7, v3);
    while ( 1 )
    {
      CMILMatrix::CMILMatrix((CMILMatrix *)v9, (const struct D2D_MATRIX_3X2_F *)(v8 + 16));
      if ( !CMILMatrix::IsPure2DUniformZ<0>((__int64)v9) || !CMILMatrix::IsTranslateAndScaleIgnoreZ<0>((__int64)v9) )
        break;
      if ( !CPrimitiveBuffer::Iterator::Step((CPrimitiveBuffer::Iterator *)v7) )
      {
        v3 = (unsigned int)(v5 + 1);
        goto LABEL_2;
      }
    }
  }
  return 0;
}
