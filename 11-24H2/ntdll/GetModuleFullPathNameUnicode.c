/*
 * XREFs of GetModuleFullPathNameUnicode @ 0x18007C370
 * Callers:
 *     GetModuleFullPathName @ 0x18007C3E8 (GetModuleFullPathName.c)
 * Callees:
 *     LdrGetDllFullName @ 0x180046EC0 (LdrGetDllFullName.c)
 */

__int64 __fastcall GetModuleFullPathNameUnicode(void *a1, wchar_t *a2, unsigned int a3)
{
  unsigned int v3; // ebx
  __int64 result; // rax
  _UNICODE_STRING FullDllName; // [rsp+20h] [rbp-18h] BYREF

  v3 = a3;
  FullDllName = 0LL;
  if ( ((unsigned __int8)a1 & 3) != 0 )
    return 0LL;
  if ( a3 <= 0x7FFF )
  {
    if ( a3 )
      goto LABEL_4;
    return 0LL;
  }
  v3 = 0x7FFF;
LABEL_4:
  FullDllName.Buffer = a2;
  FullDllName.MaximumLength = 2 * v3 - 2;
  if ( LdrGetDllFullName(a1, &FullDllName) != -1073741789 )
    v3 = FullDllName.Length >> 1;
  result = v3;
  FullDllName.Buffer[FullDllName.Length >> 1] = 0;
  return result;
}
