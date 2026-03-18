/*
 * XREFs of SmmCoalesceBlocks @ 0x140092DC8
 * Callers:
 *     SmmReleaseBlock @ 0x140093238 (SmmReleaseBlock.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     SmmGetSiblingBlock @ 0x140093138 (SmmGetSiblingBlock.c)
 *     SmmRemoveBlockFromPool @ 0x1400932BC (SmmRemoveBlockFromPool.c)
 */

__int64 __fastcall SmmCoalesceBlocks(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  unsigned __int64 *v6; // r14
  __int64 v7; // r8
  __int64 v8; // rcx
  _QWORD *v9; // rax
  __int64 SiblingBlock; // rax
  _QWORD *v11; // rbx
  _DWORD *v12; // rcx
  __int64 result; // rax

  do
  {
    v6 = a3 + 4;
    SmmRemoveBlockFromPool(a1 + 24 * ((a3[4] >> 53) & 0x3FLL), a3);
    v7 = a3[4];
    if ( (v7 & 0xFFFFFFFFFFFFFuLL) >= (a2[4] & 0xFFFFFFFFFFFFFuLL) )
      v7 = a2[4];
    *v6 = ((v7 ^ (a3[4] ^ v7) & 0xFFF0000000000000uLL) + 0x20000000000000LL) ^ (((v7 ^ (a3[4] ^ v7) & 0xFFF0000000000000uLL)
                                                                               + 0x20000000000000LL) ^ v7 ^ (a3[4] ^ v7) & 0xFFF0000000000000uLL) & 0xF81FFFFFFFFFFFFFuLL;
    v8 = *a2;
    if ( *(_QWORD **)(*a2 + 8LL) != a2 )
      goto LABEL_9;
    v9 = (_QWORD *)a2[1];
    if ( (_QWORD *)*v9 != a2 )
      goto LABEL_9;
    *v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(a2);
    a2 = a3;
    SiblingBlock = SmmGetSiblingBlock(a1, a3);
    a3 = (_QWORD *)SiblingBlock;
  }
  while ( SiblingBlock && (*(_QWORD *)(SiblingBlock + 32) & 0x10000000000000LL) == 0 );
  v11 = a2 + 2;
  v12 = (_DWORD *)(a1 + 24 * ((*v6 >> 53) & 0x3F));
  result = *(_QWORD *)v12;
  if ( *(_DWORD **)(*(_QWORD *)v12 + 8LL) != v12 )
LABEL_9:
    __fastfail(3u);
  *v11 = result;
  v11[1] = v12;
  *(_QWORD *)(result + 8) = v11;
  *(_QWORD *)v12 = v11;
  ++v12[4];
  return result;
}
