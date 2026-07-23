/*
 * XREFs of MiAdjustCachedStackList @ 0x1402AF530
 * Callers:
 *     MiAdjustCachedStacks @ 0x1402AF604 (MiAdjustCachedStacks.c)
 * Callees:
 *     MiPruneCachedStackList @ 0x1404878E8 (MiPruneCachedStackList.c)
 *     MiRemoveNonIdealCachedStacks @ 0x1406812B0 (MiRemoveNonIdealCachedStacks.c)
 */

__int64 __fastcall MiAdjustCachedStackList(__int64 a1, __int64 a2, int a3)
{
  unsigned int v5; // edi
  int v6; // ecx
  unsigned int *v7; // r8
  __int64 v8; // r9
  unsigned int v9; // edx
  __int64 v10; // r11
  __int64 result; // rax
  unsigned int v12; // ecx
  __int64 v13; // r8
  unsigned int v14; // ecx

  if ( a3 < 3 )
  {
    v5 = 0;
  }
  else
  {
    v5 = 1;
    if ( *(_BYTE *)(a2 + 44) )
    {
      MiRemoveNonIdealCachedStacks(a2);
      *(_BYTE *)(a2 + 44) = 0;
    }
  }
  v6 = *(_DWORD *)(a2 + 32);
  v7 = (unsigned int *)(a2 + 16);
  v8 = 0LL;
  if ( v6 != 3 )
    v8 = (unsigned int)(v6 + 1);
  v9 = 0;
  v10 = 4LL;
  do
  {
    result = *v7;
    v12 = 0;
    ++v7;
    if ( (int)result >= 0 )
      v12 = result;
    if ( v9 < v12 )
      v9 = v12;
    --v10;
  }
  while ( v10 );
  v13 = 5LL;
  if ( v9 >= 5 )
  {
    result = 512LL;
    v13 = v9;
    if ( v9 > 0x200 )
      v13 = 512LL;
  }
  v14 = *(_DWORD *)(a2 + 40);
  *(_DWORD *)(a2 + 40) = v13;
  *(_DWORD *)(a2 + 36) = 0;
  *(_DWORD *)(a2 + 32) = v8;
  *(_DWORD *)(a2 + 4 * v8 + 16) = 0;
  if ( v14 > (unsigned int)v13 )
    return MiPruneCachedStackList(a1, a2, v13, v5);
  return result;
}
