/*
 * XREFs of KiPopulateNodeInformation @ 0x140C2AF4C
 * Callers:
 *     KiPerformGroupConfiguration @ 0x140C2AE80 (KiPerformGroupConfiguration.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     KiQueryProximityNode @ 0x1405B9060 (KiQueryProximityNode.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     MmGetChannelInformation @ 0x140A519B8 (MmGetChannelInformation.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

_DWORD *__fastcall KiPopulateNodeInformation(_DWORD *a1, int *a2)
{
  unsigned __int16 v2; // ax
  int *v3; // r13
  int v4; // r12d
  int v5; // esi
  unsigned __int16 v6; // bx
  _WORD *v7; // rdi
  _DWORD *v8; // r14
  unsigned __int16 v9; // r8
  unsigned __int16 v10; // bx
  unsigned __int16 v11; // di
  __int64 i; // r14
  unsigned __int16 j; // bx
  int ChannelInformation; // eax
  unsigned int k; // ecx
  char v16; // r8
  PVOID v17; // rcx
  __int64 v18; // r10
  __int64 *v19; // r9
  __int64 v20; // rax
  _DWORD *result; // rax
  PVOID P; // [rsp+38h] [rbp-20h] BYREF
  size_t v23[3]; // [rsp+40h] [rbp-18h] BYREF
  int v26; // [rsp+B0h] [rbp+58h] BYREF
  unsigned int v27; // [rsp+B8h] [rbp+60h]

  v2 = KeNumberNodes;
  v27 = 0;
  v3 = a2;
  v4 = 0;
  v23[0] = 0LL;
  v5 = 0;
  v26 = 0;
  LODWORD(P) = 0;
  v6 = 0;
  if ( KeNumberNodes )
  {
    do
    {
      v7 = (_WORD *)KeNodeBlock[v6];
      guard_dispatch_icall_no_overrides(v6, &v26);
      v8 = v7 + 2;
      v7[4] = v26;
      v4 += v26;
      if ( KiNumaQueryProximityId )
      {
        guard_dispatch_icall_no_overrides(v6, v7 + 2);
        KiQueryProximityNode(v27, (__int64)(v7 + 1));
        if ( *v8 == v27 )
          ++v5;
      }
      else
      {
        *v8 = 0;
        v5 = 1;
        v7[1] = *v7;
      }
      v2 = KeNumberNodes;
      ++v6;
    }
    while ( v6 < (unsigned __int16)KeNumberNodes );
    v3 = a2;
    LODWORD(P) = v4;
  }
  if ( v2 > 1u )
  {
    KeNodeDistance = (_UNKNOWN *)ExAllocatePool2(0x40uLL, 4 * v2 * (unsigned int)v2, 0x2020654BuLL);
    if ( !KeNodeDistance )
      KeBugCheckEx(0x32u, 0xFFFFFFFFC000009AuLL, 0LL, 0LL, 0LL);
  }
  v9 = KeNumberNodes;
  v10 = 0;
  if ( KeNumberNodes )
  {
    do
    {
      v11 = 0;
      for ( i = KeNodeBlock[v10]; v11 < v9; ++v11 )
      {
        guard_dispatch_icall_no_overrides(v10, v11);
        v9 = KeNumberNodes;
        *((_DWORD *)KeNodeDistance + v11 + v10 * (unsigned __int16)KeNumberNodes) = 0;
        if ( v10 != v11 )
          *(_BYTE *)(i + 10) |= 4u;
      }
      ++v10;
    }
    while ( v10 < v9 );
    v4 = (int)P;
    v3 = a2;
  }
  P = 0LL;
  for ( j = 0; j < (unsigned __int16)KeNumberNodes; ++j )
  {
    if ( *(_WORD *)KeNodeBlock[j] == *(_WORD *)(KeNodeBlock[j] + 2) )
    {
      ChannelInformation = MmGetChannelInformation(0, j, &P, v23);
      if ( ChannelInformation < 0 )
        KeBugCheckEx(0x32u, ChannelInformation, 0LL, 0LL, 0LL);
      for ( k = 0; ; ++k )
      {
        v16 = 1;
        if ( k >= v23[0] / 0x28 )
          break;
        if ( *((_QWORD *)P + 5 * k + 1) )
        {
          v16 = 0;
          break;
        }
      }
      v17 = P;
      *(_BYTE *)(KeNodeBlock[j] + 10) = v16 | *(_BYTE *)(KeNodeBlock[j] + 10) & 0xFE;
      ExFreePoolWithTag(v17, 0);
      P = 0LL;
    }
  }
  if ( KeNumberNodes )
  {
    v18 = (unsigned __int16)KeNumberNodes;
    v19 = KeNodeBlock;
    do
    {
      v20 = *(unsigned __int16 *)(*v19 + 2);
      if ( *(_WORD *)*v19 != (_WORD)v20 )
        *(_BYTE *)(*v19 + 10) ^= (*(_BYTE *)(KeNodeBlock[v20] + 10) ^ *(_BYTE *)(*v19 + 10)) & 1;
      ++v19;
      --v18;
    }
    while ( v18 );
    v3 = a2;
  }
  result = a1;
  *v3 = v5;
  *a1 = v4;
  return result;
}
