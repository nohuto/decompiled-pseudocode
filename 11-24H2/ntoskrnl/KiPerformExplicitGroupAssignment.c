/*
 * XREFs of KiPerformExplicitGroupAssignment @ 0x140C2AC8C
 * Callers:
 *     KiPerformGroupConfiguration @ 0x140C2AE80 (KiPerformGroupConfiguration.c)
 * Callees:
 *     KiQueryProximityNode @ 0x1405B9060 (KiQueryProximityNode.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall KiPerformExplicitGroupAssignment(_DWORD *a1, int a2)
{
  int v2; // ebx
  _DWORD *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // r8
  __int64 v8; // rdx
  __int16 v9; // ax
  __int64 v10; // rdx
  int v11; // eax
  int *v12; // rdi
  __int64 i; // rcx
  unsigned __int16 j; // cx
  char v15; // al
  __int64 v16; // r8
  unsigned int v17; // edi
  unsigned int v18; // eax
  _DWORD *v19; // rcx
  __int64 v20; // rdx
  _BYTE *v21; // rcx
  _WORD v23[8]; // [rsp+20h] [rbp-B8h] BYREF
  _DWORD v24[32]; // [rsp+30h] [rbp-A8h] BYREF

  v2 = a2;
  v23[0] = 0;
  v3 = a1;
  if ( !a1 || a2 != *a1 )
    return 0;
  if ( KiSubNodeCount )
  {
    v4 = (unsigned __int16)KiSubNodeCount;
    v5 = KiSubNodeConfigBlock + 5;
    do
    {
      *(_BYTE *)v5 &= ~1u;
      *(_WORD *)(v5 + 1) = -1;
      v5 += 24LL;
      --v4;
    }
    while ( v4 );
  }
  v6 = 32LL;
  while ( v2 )
  {
    --v2;
    if ( (unsigned int)KiQueryProximityNode((unsigned int)v3[1], (__int64)v23) )
      return 0;
    v3 += 2;
    if ( *v3 >= 0x20u && *v3 != 0xFFFF )
      return 0;
    if ( KiSubNodeCount )
    {
      v7 = (unsigned __int16)KiSubNodeCount;
      v8 = KiSubNodeConfigBlock + 5;
      do
      {
        if ( *(_WORD *)(KeNodeBlock[*(unsigned __int16 *)(v8 - 3)] + 2) == v23[0] )
        {
          v9 = *(_WORD *)v3;
          *(_BYTE *)v8 |= 1u;
          *(_WORD *)(v8 + 1) = v9;
        }
        v8 += 24LL;
        --v7;
      }
      while ( v7 );
    }
  }
  v10 = KiSubNodeConfigBlock;
  if ( *(_WORD *)(KiSubNodeConfigBlock + 6) == 0xFFFF )
    return 0;
  v11 = KiMaximumGroupSize;
  v12 = v24;
  for ( i = 32LL; i; --i )
    *v12++ = v11;
  for ( j = 0; j < (unsigned __int16)KiSubNodeCount; ++j )
  {
    v15 = *(_BYTE *)(v10 + 24LL * j + 5);
    if ( (v15 & 1) == 0 )
      return 0;
    v16 = *(unsigned __int16 *)(v10 + 24LL * j + 6);
    if ( (_WORD)v16 == 0xFFFF )
    {
      *(_BYTE *)(v10 + 24LL * j + 5) = v15 & 0xFE;
    }
    else
    {
      v17 = *(unsigned __int8 *)(v10 + 24LL * j + 4);
      v18 = v24[v16];
      if ( v18 < v17 )
        return 0;
      v24[v16] = v18 - v17;
    }
  }
  KiMaximumGroups = 0;
  v19 = v24;
  do
  {
    if ( *v19 < (unsigned int)KiMaximumGroupSize )
      ++KiMaximumGroups;
    ++v19;
    --v6;
  }
  while ( v6 );
  v20 = (unsigned __int16)KeNumberNodes;
  if ( KeNumberNodes )
  {
    v21 = (_BYTE *)(KiSubNodeConfigBlock + 5);
    do
    {
      *v21 |= 4u;
      v21 += 24;
      --v20;
    }
    while ( v20 );
  }
  return 1;
}
