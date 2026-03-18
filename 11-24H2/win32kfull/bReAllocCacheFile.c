/*
 * XREFs of bReAllocCacheFile @ 0x140302B78
 * Callers:
 *     EngFntCacheAllocInternal @ 0x1402687A8 (EngFntCacheAllocInternal.c)
 * Callees:
 *     vUnmapFontCacheFile @ 0x140302CD4 (vUnmapFontCacheFile.c)
 *     ?bMapFileRetainHandle@@YAHPEBGPEAUFILEVIEW@@KW4GreFileKind@@@Z @ 0x140304C50 (-bMapFileRetainHandle@@YAHPEBGPEAUFILEVIEW@@KW4GreFileKind@@@Z.c)
 */

__int64 __fastcall bReAllocCacheFile(int a1, __int64 a2)
{
  unsigned int v3; // edi
  __int64 v4; // rbx
  _DWORD *v5; // r8
  __int64 v7; // rcx
  unsigned int v8; // ebp
  int v9; // esi
  unsigned int v10; // r14d
  unsigned int v11; // r15d
  int v12; // eax
  __int64 v13; // rcx
  _QWORD *v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // edx
  int v17; // eax
  __int64 v18; // rcx

  v3 = 0;
  v4 = *(_QWORD *)(W32GetSessionState(a1, a2) + 96);
  v5 = *(_DWORD **)(v4 + 19600);
  if ( (v5[4] & 4) != 0 )
    return 0LL;
  v7 = (unsigned int)(v5[8] - v5[10]);
  v8 = *(_DWORD *)(*(_QWORD *)v5 + 24LL);
  v9 = ((v7 + a1 + 7) & 0xFFFFFFF8) + 0x2000;
  v10 = v5[6] - *(_QWORD *)v5;
  v11 = v9 + v8;
  if ( *(_QWORD *)v5 )
    vUnmapFontCacheFile();
  v12 = bMapFileRetainHandle(v7, *(_QWORD *)(v4 + 19600) + 48LL, v11);
  v14 = *(_QWORD **)(v4 + 19600);
  if ( v12 )
  {
    v3 = 1;
    *v14 = v14[7];
    *(_DWORD *)(**(_QWORD **)(v4 + 19600) + 24LL) = v11;
    *(_DWORD *)(**(_QWORD **)(v4 + 19600) + 32LL) += v9;
    v15 = *(_QWORD *)(v4 + 19600);
    v16 = *(_DWORD *)(v15 + 32) - *(_DWORD *)(v15 + 24);
    *(_QWORD *)(v15 + 24) = *(_QWORD *)v15 + v10;
    *(_QWORD *)(*(_QWORD *)(v4 + 19600) + 32LL) = *(_QWORD *)(*(_QWORD *)(v4 + 19600) + 24LL) + v16;
    *(_QWORD *)(*(_QWORD *)(v4 + 19600) + 40LL) = *(_QWORD *)(*(_QWORD *)(v4 + 19600) + 24LL)
                                                + *(unsigned int *)(**(_QWORD **)(v4 + 19600) + 28LL)
                                                + (unsigned __int64)*(unsigned int *)(**(_QWORD **)(v4 + 19600) + 32LL);
  }
  else
  {
    v17 = bMapFileRetainHandle(v13, v14 + 6, v8);
    v18 = *(_QWORD *)(v4 + 19600);
    if ( v17 )
    {
      *(_QWORD *)v18 = *(_QWORD *)(v18 + 56);
      *(_DWORD *)(*(_QWORD *)(v4 + 19600) + 20LL) = 1;
      *(_DWORD *)(*(_QWORD *)(v4 + 19600) + 16LL) |= 6u;
    }
    else
    {
      *(_DWORD *)(v18 + 16) |= 1u;
    }
  }
  return v3;
}
