/*
 * XREFs of MiFillDbgPatches @ 0x140680BCC
 * Callers:
 *     MiDbgCopyMemory @ 0x14067F6A8 (MiDbgCopyMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiFillDbgPatches(__int64 a1, int a2, __int64 *a3, int a4)
{
  unsigned int v4; // r10d
  unsigned int *v5; // r11
  __int64 result; // rax
  int i; // r10d
  unsigned __int64 v8; // rcx

  v4 = a1 & 0xFFF;
  v5 = (unsigned int *)(a1 - (a1 & 3));
  result = (v4 + a2 - 1) >> 2;
  for ( i = (v4 >> 2) - result + 1; i; --i )
  {
    result = *a3;
    v8 = *a3 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( a4 )
    {
      if ( v8 == result )
      {
        result = *v5;
        *(_DWORD *)(v8 + 12) = result;
      }
    }
    else
    {
      result = *v5;
      *(_DWORD *)(v8 + 16) = result;
    }
    ++v5;
    ++a3;
  }
  return result;
}
