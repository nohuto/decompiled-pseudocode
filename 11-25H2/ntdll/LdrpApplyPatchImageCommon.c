/*
 * XREFs of LdrpApplyPatchImageCommon @ 0x180160F58
 * Callers:
 *     LdrpApplyPatchImage @ 0x18011A970 (LdrpApplyPatchImage.c)
 * Callees:
 *     ZwManageHotPatch @ 0x180165550 (ZwManageHotPatch.c)
 */

__int64 __fastcall LdrpApplyPatchImageCommon(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  result = 3221225473LL;
  if ( !a2 )
    return ZwManageHotPatch(7LL, a1, 32LL, &v3);
  return result;
}
