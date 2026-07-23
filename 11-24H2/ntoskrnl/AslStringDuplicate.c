/*
 * XREFs of AslStringDuplicate @ 0x140942210
 * Callers:
 *     SdbpGetManifestedMergeStubAlloc @ 0x140801BA0 (SdbpGetManifestedMergeStubAlloc.c)
 *     SdbpCheckMatchingRegistryValue @ 0x140803A6C (SdbpCheckMatchingRegistryValue.c)
 *     AslRegistryGetString @ 0x140809334 (AslRegistryGetString.c)
 *     AslFileMappingCreateFromImageView @ 0x14080974C (AslFileMappingCreateFromImageView.c)
 *     AslPathToSystemPath @ 0x14080A620 (AslPathToSystemPath.c)
 *     AslRegWildcardFindFirst @ 0x14080B5A0 (AslRegWildcardFindFirst.c)
 *     AslFileMappingCreate @ 0x140941554 (AslFileMappingCreate.c)
 *     AslpFileVerQueryBlock @ 0x14094329C (AslpFileVerQueryBlock.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x14043615C (RtlStringCchCopyW.c)
 *     AslFree @ 0x1409447E4 (AslFree.c)
 *     AslAlloc @ 0x140944EA4 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 */

__int64 __fastcall AslStringDuplicate(wchar_t **a1, const wchar_t *a2)
{
  const wchar_t *v4; // rax
  __int64 v5; // rdx
  NTSTATUS v6; // ebx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rbx
  wchar_t *v9; // rax
  wchar_t *v10; // rdi
  int v12; // r8d
  const char *v13; // r9

  *a1 = 0LL;
  if ( !a2 )
    goto LABEL_11;
  v4 = a2;
  v5 = 0x7FFFFFFFLL;
  do
  {
    if ( !*v4 )
      break;
    ++v4;
    --v5;
  }
  while ( v5 );
  v6 = v5 == 0 ? 0xC000000D : 0;
  v7 = (0x7FFFFFFF - v5) & -(__int64)(v5 != 0);
  if ( !v5 )
  {
    v13 = "RtlStringCchLengthW failed [%x]";
    v12 = 574;
    goto LABEL_15;
  }
  v8 = v7 + 1;
  if ( v7 + 1 < v7 )
  {
    v12 = 585;
LABEL_14:
    v13 = "SIZE_T arithmetic failed [%x]";
    v6 = -1073741675;
LABEL_15:
    AslLogCallPrintf(1, (unsigned int)"AslStringDuplicate", v12, (_DWORD)v13);
    goto LABEL_12;
  }
  if ( !is_mul_ok(v8, 2uLL) )
  {
    v12 = 591;
    goto LABEL_14;
  }
  v9 = (wchar_t *)AslAlloc(a1, 2 * v8);
  v10 = v9;
  if ( !v9 )
  {
    v6 = -1073741801;
    AslLogCallPrintf(1, (unsigned int)"AslStringDuplicate", 598, (unsigned int)"Out of memory");
    goto LABEL_12;
  }
  v6 = RtlStringCchCopyW(v9, v8, a2);
  if ( v6 < 0 )
  {
    v13 = "RtlStringCchCopyW failed [%x]";
    v12 = 608;
    goto LABEL_15;
  }
  *a1 = v10;
LABEL_11:
  v6 = 0;
LABEL_12:
  AslFree(a1);
  return (unsigned int)v6;
}
