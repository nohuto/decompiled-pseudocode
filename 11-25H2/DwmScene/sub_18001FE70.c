/*
 * XREFs of sub_18001FE70 @ 0x18001FE70
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800013E0 @ 0x1800013E0 (sub_1800013E0.c)
 */

__int64 sub_18001FE70()
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedIncrement(&dword_1801C3464);
  if ( (_DWORD)result == 1 )
    return sub_1800013E0((ULONGLONG *)&dword_1801B8188);
  return result;
}
