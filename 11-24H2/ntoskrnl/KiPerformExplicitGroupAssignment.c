/*
 * XREFs of KiPerformExplicitGroupAssignment @ 0x140C28BEC
 * Callers:
 *     KiPerformGroupConfiguration @ 0x140C28DE0 (KiPerformGroupConfiguration.c)
 * Callees:
 *     KiQueryProximityNode @ 0x1405BBA30 (KiQueryProximityNode.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

char __fastcall KiPerformExplicitGroupAssignment(_DWORD *a1, int a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  _DWORD *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int16 v10; // ax
  __int64 v11; // rdx
  int v12; // eax
  int *v13; // rdi
  __int64 i; // rcx
  unsigned __int16 j; // cx
  char v16; // al
  __int64 v17; // r8
  unsigned int v18; // edi
  unsigned int v19; // eax
  _DWORD *v20; // rcx
  __int64 v21; // rdx
  _BYTE *v22; // rcx
  _WORD v24[8]; // [rsp+20h] [rbp-B8h] BYREF
  _DWORD v25[32]; // [rsp+30h] [rbp-A8h] BYREF

  v4 = a2;
  v24[0] = 0;
  v5 = a1;
  if ( !a1 || a2 != *a1 )
    return 0;
  if ( KiSubNodeCount )
  {
    v6 = (unsigned __int16)KiSubNodeCount;
    v7 = KiSubNodeConfigBlock + 5;
    do
    {
      *(_BYTE *)v7 &= ~1u;
      *(_WORD *)(v7 + 1) = -1;
      v7 += 24LL;
      --v6;
    }
    while ( v6 );
  }
  v8 = 32LL;
  while ( v4 )
  {
    --v4;
    if ( (unsigned int)KiQueryProximityNode((unsigned int)v5[1], (__int64)v24, a3, a4) )
      return 0;
    v5 += 2;
    if ( *v5 >= 0x20u && *v5 != 0xFFFF )
      return 0;
    if ( KiSubNodeCount )
    {
      a3 = (unsigned __int16)KiSubNodeCount;
      v9 = KiSubNodeConfigBlock + 5;
      do
      {
        if ( *(_WORD *)(KeNodeBlock[*(unsigned __int16 *)(v9 - 3)] + 2) == v24[0] )
        {
          v10 = *(_WORD *)v5;
          *(_BYTE *)v9 |= 1u;
          *(_WORD *)(v9 + 1) = v10;
        }
        v9 += 24LL;
        --a3;
      }
      while ( a3 );
    }
  }
  v11 = KiSubNodeConfigBlock;
  if ( *(_WORD *)(KiSubNodeConfigBlock + 6) == 0xFFFF )
    return 0;
  v12 = KiMaximumGroupSize;
  v13 = v25;
  for ( i = 32LL; i; --i )
    *v13++ = v12;
  for ( j = 0; j < (unsigned __int16)KiSubNodeCount; ++j )
  {
    v16 = *(_BYTE *)(v11 + 24LL * j + 5);
    if ( (v16 & 1) == 0 )
      return 0;
    v17 = *(unsigned __int16 *)(v11 + 24LL * j + 6);
    if ( (_WORD)v17 == 0xFFFF )
    {
      *(_BYTE *)(v11 + 24LL * j + 5) = v16 & 0xFE;
    }
    else
    {
      v18 = *(unsigned __int8 *)(v11 + 24LL * j + 4);
      v19 = v25[v17];
      if ( v19 < v18 )
        return 0;
      v25[v17] = v19 - v18;
    }
  }
  KiMaximumGroups = 0;
  v20 = v25;
  do
  {
    if ( *v20 < (unsigned int)KiMaximumGroupSize )
      ++KiMaximumGroups;
    ++v20;
    --v8;
  }
  while ( v8 );
  v21 = (unsigned __int16)KeNumberNodes;
  if ( KeNumberNodes )
  {
    v22 = (_BYTE *)(KiSubNodeConfigBlock + 5);
    do
    {
      *v22 |= 4u;
      v22 += 24;
      --v21;
    }
    while ( v21 );
  }
  return 1;
}
