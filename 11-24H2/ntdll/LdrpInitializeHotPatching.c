/*
 * XREFs of LdrpInitializeHotPatching @ 0x1800AE5C8
 * Callers:
 *     LdrpInitializeInternal @ 0x1800AE9E0 (LdrpInitializeInternal.c)
 * Callees:
 *     ZwManageHotPatch @ 0x180162380 (ZwManageHotPatch.c)
 */

struct _PEB *LdrpInitializeHotPatching()
{
  struct _PEB *result; // rax
  char v1; // bl
  int v2; // [rsp+30h] [rbp+8h] BYREF
  int v3; // [rsp+38h] [rbp+10h] BYREF
  int v4; // [rsp+3Ch] [rbp+14h]

  v2 = 0;
  result = NtCurrentPeb();
  if ( (result->ProcessParameters->Flags & 0x2000000) != 0
    || (v4 = 0,
        v1 = 1,
        v3 = 1,
        result = (struct _PEB *)ZwManageHotPatch(9LL, &v3, 8LL, &v2),
        (_DWORD)result == -1073741637)
    || (_DWORD)result == -1073741822 )
  {
    v1 = 0;
  }
  LdrpIsHotPatchingEnabled = v1;
  return result;
}
