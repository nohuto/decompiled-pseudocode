/*
 * XREFs of CiConfigQueryTaskFromRegistry @ 0x140010DF0
 * Callers:
 *     CiConfigInitializeFromRegistry @ 0x140011320 (CiConfigInitializeFromRegistry.c)
 * Callees:
 *     CiConfigQueryValue @ 0x140010EC0 (CiConfigQueryValue.c)
 */

__int64 __fastcall CiConfigQueryTaskFromRegistry(HANDLE KeyHandle, __int64 a2, __int64 a3)
{
  __int64 i; // rbx
  __int64 result; // rax
  char v8; // cl
  char v9; // dl

  *(_BYTE *)(a3 + 3) &= 0x8Fu;
  for ( i = 0LL; *(&CiConfigTaskValues + i); i = (unsigned int)(i + 1) )
  {
    result = CiConfigQueryValue(KeyHandle);
    if ( (int)result < 0 )
      return result;
  }
  v8 = *(_BYTE *)(a2 + 32);
  v9 = *(_BYTE *)(a3 + 3) ^ (*(_BYTE *)(a3 + 3) ^ (16 * *(_BYTE *)a2)) & 0x70;
  *(_QWORD *)(a3 + 32) = *(unsigned int *)(a2 + 16);
  *(_DWORD *)(a3 + 4) = *(_DWORD *)(a2 + 24);
  *(_BYTE *)(a3 + 1) = *(_BYTE *)(a2 + 8);
  *(_BYTE *)(a3 + 2) = *(_BYTE *)(a2 + 40);
  *(_BYTE *)(a3 + 3) = v9 ^ (v9 ^ (4 * v8)) & 4 ^ (v9 ^ (v9 ^ (4 * v8)) & 4 ^ (2 * *(_BYTE *)(a2 + 48))) & 2;
  *(_BYTE *)(a3 + 40) = *(_BYTE *)(a2 + 56);
  return 0LL;
}
