/*
 * XREFs of AslStringDuplicate @ 0x140829000
 * Callers:
 *     SdbpGetManifestedMergeStubAlloc @ 0x1407F15A0 (SdbpGetManifestedMergeStubAlloc.c)
 *     SdbpCheckMatchingRegistryValue @ 0x1407F347C (SdbpCheckMatchingRegistryValue.c)
 *     AslRegistryGetString @ 0x1407F9084 (AslRegistryGetString.c)
 *     AslFileMappingCreateFromImageView @ 0x1407F949C (AslFileMappingCreateFromImageView.c)
 *     AslPathToSystemPath @ 0x1407FA370 (AslPathToSystemPath.c)
 *     AslRegWildcardFindFirst @ 0x1407FB2F0 (AslRegWildcardFindFirst.c)
 *     AslpFileVerQueryBlock @ 0x1408299FC (AslpFileVerQueryBlock.c)
 *     AslFileMappingCreate @ 0x140A75D30 (AslFileMappingCreate.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x14043FDBC (RtlStringCchCopyW.c)
 *     AslLogCallPrintf @ 0x140825A60 (AslLogCallPrintf.c)
 *     AslFree @ 0x14082AD34 (AslFree.c)
 *     AslAlloc @ 0x14082B9C0 (AslAlloc.c)
 */

__int64 __fastcall AslStringDuplicate(wchar_t **a1, const wchar_t *a2)
{
  NTSTATUS v4; // ebx
  const wchar_t *v5; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rbx
  wchar_t *v9; // rax
  wchar_t *v10; // rdi

  *a1 = 0LL;
  if ( !a2 )
    goto LABEL_2;
  v5 = a2;
  v6 = 0x7FFFFFFFLL;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v6;
  }
  while ( v6 );
  v4 = v6 == 0 ? 0xC000000D : 0;
  v7 = (0x7FFFFFFF - v6) & -(__int64)(v6 != 0);
  if ( !v6 )
    goto LABEL_14;
  v8 = v7 + 1;
  if ( v7 + 1 < v7 || !is_mul_ok(v8, 2uLL) )
  {
    v4 = -1073741675;
    goto LABEL_14;
  }
  v9 = (wchar_t *)AslAlloc(a1, 2 * v8);
  v10 = v9;
  if ( !v9 )
  {
    v4 = -1073741801;
    AslLogCallPrintf(1LL);
    goto LABEL_15;
  }
  v4 = RtlStringCchCopyW(v9, v8, a2);
  if ( v4 < 0 )
  {
LABEL_14:
    AslLogCallPrintf(1LL);
    goto LABEL_15;
  }
  *a1 = v10;
LABEL_2:
  v4 = 0;
LABEL_15:
  AslFree(a1);
  return (unsigned int)v4;
}
