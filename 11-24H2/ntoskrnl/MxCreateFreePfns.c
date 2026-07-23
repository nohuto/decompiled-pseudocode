/*
 * XREFs of MxCreateFreePfns @ 0x140C546DC
 * Callers:
 *     MiCreateDescriptorPfns @ 0x140C53184 (MiCreateDescriptorPfns.c)
 *     MiCreateFreePfns @ 0x140C5339C (MiCreateFreePfns.c)
 *     MxReleaseFreeDescriptor @ 0x140C554E4 (MxReleaseFreeDescriptor.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     MiFreeEmptyBootPageTable @ 0x140C53780 (MiFreeEmptyBootPageTable.c)
 *     MxInsertFreePages @ 0x140C54EE0 (MxInsertFreePages.c)
 */

void __fastcall MxCreateFreePfns(__int64 a1)
{
  ULONG_PTR v1; // rbx
  __int64 v2; // rsi
  int v3; // edx
  unsigned int v4; // eax
  int v5; // r12d
  __int64 v6; // rdi
  ULONG_PTR v7; // rbp
  int v8; // eax
  __int64 v9; // r14
  int v10; // [rsp+60h] [rbp+8h]

  v1 = *(_QWORD *)(a1 + 32);
  v2 = *(_QWORD *)(a1 + 40);
  if ( v1 )
    goto LABEL_4;
  if ( --v2 )
  {
    v1 = 1LL;
LABEL_4:
    v3 = *(_DWORD *)(a1 + 24);
    if ( (v3 & 0x20000000) == 0 || (v4 = v3 & 0x1FFFFFFF, (v3 & 0x1FFFFFFF) == 2) || v4 == 24 )
    {
      v5 = 0;
      v4 = v3 & 0x1FFFFFFF;
    }
    else
    {
      v5 = 1;
    }
    v6 = 48 * v1 - 0x220000000000LL;
    v7 = v4;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( !v2 )
          return;
        if ( v5 )
          break;
        v9 = v2;
LABEL_20:
        MxInsertFreePages(v1);
        v1 += v9;
        v2 -= v9;
        v6 += 48 * v9;
      }
      v8 = *(_DWORD *)(v6 + 32);
      if ( (_WORD)v8 == 1 )
        break;
      if ( !(_WORD)v8 )
        goto LABEL_16;
      ++v1;
      v6 += 48LL;
      --v2;
    }
    if ( v7 == 2 || v7 == 24 )
      KeBugCheckEx(0x1Au, 0x3030319uLL, v1, v7, 0LL);
    *(_QWORD *)(*(_QWORD *)(v6 + 8) | 0x8000000000000000uLL) = CLFS_LSN_NULL_EXT;
    MiFreeEmptyBootPageTable(*(_QWORD *)(v6 + 40) & 0xFFFFFFFFFFLL);
    *(_QWORD *)(v6 + 24) &= 0xC000000000000000uLL;
    HIWORD(v10) = HIWORD(*(_DWORD *)(v6 + 32));
    LOWORD(v10) = 0;
    *(_DWORD *)(v6 + 32) = v10;
LABEL_16:
    v9 = 1LL;
    goto LABEL_20;
  }
}
