/*
 * XREFs of AslFileMappingCreateFromImageView @ 0x1407F949C
 * Callers:
 *     SdbGetDatabaseMatch @ 0x140A75B28 (SdbGetDatabaseMatch.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140825A60 (AslLogCallPrintf.c)
 *     AslStringDuplicate @ 0x140829000 (AslStringDuplicate.c)
 *     AslFileMappingDelete @ 0x14082ADE8 (AslFileMappingDelete.c)
 *     AslAlloc @ 0x14082B9C0 (AslAlloc.c)
 *     AslpFileMappingGetFileKind @ 0x140A8C0CC (AslpFileMappingGetFileKind.c)
 */

__int64 __fastcall AslFileMappingCreateFromImageView(__int64 *a1, _WORD *a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rax
  __int64 v9; // rbx
  int v10; // edi
  _DWORD *v11; // rdi

  if ( !a2 || !*a2 || !a1 || !a3 )
    return 3221225485LL;
  *a1 = 0LL;
  v8 = AslAlloc(a1, 88LL);
  v9 = v8;
  if ( v8 )
  {
    v10 = AslStringDuplicate(v8, a2);
    if ( v10 >= 0 )
    {
      *(_DWORD *)(v9 + 80) = 1;
      *(_QWORD *)(v9 + 48) = 0LL;
      v11 = (_DWORD *)(v9 + 64);
      *(_QWORD *)(v9 + 56) = 0x1000000LL;
      *(_QWORD *)(v9 + 8) = 0LL;
      *(_QWORD *)(v9 + 16) = 0LL;
      *(_QWORD *)(v9 + 24) = a4;
      *(_QWORD *)(v9 + 32) = a3;
      *(_QWORD *)(v9 + 40) = a4;
      if ( a4 )
      {
        if ( (int)AslpFileMappingGetFileKind(v9 + 8, v9 + 64) < 0 )
        {
          AslLogCallPrintf(
            1,
            (unsigned int)"AslFileMappingCreateFromImageView",
            352,
            (unsigned int)"AslpFileMappingGetFileKind failed %S [%x]");
          *v11 = 3;
        }
      }
      else
      {
        *v11 = 1;
      }
      *a1 = v9;
      return 0;
    }
    else
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"AslFileMappingCreateFromImageView",
        319,
        (unsigned int)"AslStringDuplicate failed [%x]");
      AslFileMappingDelete(v9);
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v10;
}
