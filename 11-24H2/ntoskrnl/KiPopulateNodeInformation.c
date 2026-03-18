/*
 * XREFs of KiPopulateNodeInformation @ 0x140C28EAC
 * Callers:
 *     KiPerformGroupConfiguration @ 0x140C28DE0 (KiPerformGroupConfiguration.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     KiQueryProximityNode @ 0x1405BBA30 (KiQueryProximityNode.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     MmGetChannelInformation @ 0x140A5A0F8 (MmGetChannelInformation.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

_DWORD *__fastcall KiPopulateNodeInformation(_DWORD *a1, int *a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v4; // ax
  int *v5; // r13
  int v6; // r12d
  int v7; // esi
  unsigned __int16 v8; // bx
  _WORD *v9; // rdi
  _DWORD *v10; // r14
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int16 v13; // r8
  unsigned __int16 v14; // bx
  unsigned __int16 v15; // di
  __int64 i; // r14
  unsigned __int16 j; // bx
  int ChannelInformation; // eax
  unsigned int k; // ecx
  char v20; // r8
  PVOID v21; // rcx
  __int64 v22; // r10
  __int64 *v23; // r9
  __int64 v24; // rax
  _DWORD *result; // rax
  int v26; // [rsp+30h] [rbp-28h] BYREF
  PVOID P; // [rsp+38h] [rbp-20h] BYREF
  size_t v28[3]; // [rsp+40h] [rbp-18h] BYREF
  int v31; // [rsp+B0h] [rbp+58h] BYREF
  unsigned int v32; // [rsp+B8h] [rbp+60h] BYREF

  v4 = KeNumberNodes;
  v32 = 0;
  v5 = a2;
  v26 = 0;
  v6 = 0;
  v28[0] = 0LL;
  v7 = 0;
  v31 = 0;
  LODWORD(P) = 0;
  v8 = 0;
  if ( KeNumberNodes )
  {
    do
    {
      v9 = (_WORD *)KeNodeBlock[v8];
      guard_dispatch_icall_no_overrides(v8, &v31, a3, a4);
      v10 = v9 + 2;
      v9[4] = v31;
      v6 += v31;
      if ( KiNumaQueryProximityId )
      {
        guard_dispatch_icall_no_overrides(v8, v9 + 2, &v32, a4);
        KiQueryProximityNode(v32, (__int64)(v9 + 1), v11, v12);
        if ( *v10 == v32 )
          ++v7;
      }
      else
      {
        *v10 = 0;
        v7 = 1;
        v9[1] = *v9;
      }
      v4 = KeNumberNodes;
      ++v8;
    }
    while ( v8 < (unsigned __int16)KeNumberNodes );
    v5 = a2;
    LODWORD(P) = v6;
  }
  if ( v4 > 1u )
  {
    KeNodeDistance = (_UNKNOWN *)ExAllocatePool2(0x40uLL, 4 * v4 * (unsigned int)v4, 0x2020654BuLL);
    if ( !KeNodeDistance )
      KeBugCheckEx(0x32u, 0xFFFFFFFFC000009AuLL, 0LL, 0LL, 0LL);
  }
  v13 = KeNumberNodes;
  v14 = 0;
  if ( KeNumberNodes )
  {
    do
    {
      v15 = 0;
      for ( i = KeNodeBlock[v14]; v15 < v13; ++v15 )
      {
        guard_dispatch_icall_no_overrides(v14, v15, &v26, a4);
        v13 = KeNumberNodes;
        *((_DWORD *)KeNodeDistance + v15 + v14 * (unsigned __int16)KeNumberNodes) = v26;
        if ( v14 != v15 && v26 != 0xFFFF )
          *(_BYTE *)(i + 10) |= 4u;
      }
      ++v14;
    }
    while ( v14 < v13 );
    v6 = (int)P;
    v5 = a2;
  }
  P = 0LL;
  for ( j = 0; j < (unsigned __int16)KeNumberNodes; ++j )
  {
    if ( *(_WORD *)KeNodeBlock[j] == *(_WORD *)(KeNodeBlock[j] + 2) )
    {
      ChannelInformation = MmGetChannelInformation(0, j, &P, v28);
      if ( ChannelInformation < 0 )
        KeBugCheckEx(0x32u, ChannelInformation, 0LL, 0LL, 0LL);
      for ( k = 0; ; ++k )
      {
        v20 = 1;
        if ( k >= v28[0] / 0x28 )
          break;
        if ( *((_QWORD *)P + 5 * k + 1) )
        {
          v20 = 0;
          break;
        }
      }
      v21 = P;
      *(_BYTE *)(KeNodeBlock[j] + 10) = v20 | *(_BYTE *)(KeNodeBlock[j] + 10) & 0xFE;
      ExFreePoolWithTag(v21, 0);
      P = 0LL;
    }
  }
  if ( KeNumberNodes )
  {
    v22 = (unsigned __int16)KeNumberNodes;
    v23 = KeNodeBlock;
    do
    {
      v24 = *(unsigned __int16 *)(*v23 + 2);
      if ( *(_WORD *)*v23 != (_WORD)v24 )
        *(_BYTE *)(*v23 + 10) ^= (*(_BYTE *)(KeNodeBlock[v24] + 10) ^ *(_BYTE *)(*v23 + 10)) & 1;
      ++v23;
      --v22;
    }
    while ( v22 );
    v5 = a2;
  }
  result = a1;
  *v5 = v7;
  *a1 = v6;
  return result;
}
