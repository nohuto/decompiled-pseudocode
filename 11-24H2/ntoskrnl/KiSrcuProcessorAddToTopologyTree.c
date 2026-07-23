/*
 * XREFs of KiSrcuProcessorAddToTopologyTree @ 0x1405BEC3C
 * Callers:
 *     KiSrcuProcessorInitialize @ 0x1404F6B18 (KiSrcuProcessorInitialize.c)
 *     KiSrcuInitializeTopology @ 0x1405BE5C8 (KiSrcuInitializeTopology.c)
 * Callees:
 *     <none>
 */

void __fastcall KiSrcuProcessorAddToTopologyTree(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  __int64 v3; // r10
  __int64 *v4; // r9
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  v2 = *(_DWORD *)(a1 + 36);
  LODWORD(v3) = (unsigned __int8)byte_140F10321[0];
  while ( (_DWORD)v3 )
  {
    v3 = (unsigned int)(v3 - 1);
    v4 = (__int64 *)(KiSrcuState[v3 + 6] + 16LL * (v2 / *((unsigned __int8 *)&KiSrcuState[4] + v3 + 2)));
    v5 = 1LL << (v2 % *((unsigned __int8 *)&KiSrcuState[4] + v3 + 2));
    v6 = *v4;
    if ( a2 )
    {
      *v4 = v5 | v6;
    }
    else
    {
      v7 = v6 & ~v5;
      *v4 = v7;
      if ( v7 )
        break;
    }
  }
  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
}
