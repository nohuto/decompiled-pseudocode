/*
 * XREFs of MiScanPagefileSpace @ 0x1407EFD80
 * Callers:
 *     <none>
 * Callees:
 *     MiCaptureDirtyBitToPfn @ 0x140206E50 (MiCaptureDirtyBitToPfn.c)
 *     PsDereferencePartition @ 0x14022B3F0 (PsDereferencePartition.c)
 *     MiReleasePageFileInfo @ 0x1402486F0 (MiReleasePageFileInfo.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiSafeLockPage @ 0x140334630 (MiSafeLockPage.c)
 *     MiGetPagingFileOffset @ 0x140341C00 (MiGetPagingFileOffset.c)
 *     MiDereferencePageRuns @ 0x1403F89A4 (MiDereferencePageRuns.c)
 *     MiReferencePageRuns @ 0x1403F8A50 (MiReferencePageRuns.c)
 */

void __fastcall MiScanPagefileSpace(__int64 a1)
{
  __int16 v1; // bx
  int v2; // ebp
  _DWORD *v4; // r12
  ULONG_PTR v5; // r13
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r12
  char v9; // cl
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned __int64 v12; // rbx
  char v13; // r15
  char v14; // dl
  __int64 v15; // r9
  __int64 v16; // rcx
  __int16 v17; // [rsp+70h] [rbp+8h]
  int v18; // [rsp+78h] [rbp+10h]
  _DWORD *v19; // [rsp+88h] [rbp+20h]

  v1 = *(_WORD *)a1;
  v17 = *(_WORD *)a1;
  v2 = 0;
  v18 = 0;
  v4 = (_DWORD *)MiReferencePageRuns(a1, 0);
  v19 = v4;
  do
  {
    v5 = *(_QWORD *)&v4[4 * v2 + 4];
    v6 = 48 * v5 - 0x220000000000LL;
    if ( v6 < v6 + 48LL * *(_QWORD *)&v4[4 * v2 + 6] )
    {
      v7 = v6 + 16;
      v8 = v6 + 48LL * *(_QWORD *)&v4[4 * v2 + 6];
      do
      {
        if ( ((*(_QWORD *)(v7 + 24) >> 43) & 0x3FF) == v1 )
        {
          v9 = *(_BYTE *)(v7 + 18) & 7;
          if ( ((v9 - 2) & 0xFA) == 0
            && v9 != 6
            && (*(_DWORD *)v7 & 0x400LL) == 0
            && (unsigned int)MiGetPagingFileOffset(*(_QWORD *)v7)
            && (v10 & *(_QWORD *)(v7 + 24)) != v11
            && (unsigned __int16)*(_DWORD *)(v7 + 16)
            && (*(_BYTE *)(v7 + 18) & 0x28) == 0
            && (*(_BYTE *)(v7 + 19) & 0x10) == 0 )
          {
            v12 = 0LL;
            v13 = MiSafeLockPage(v5);
            if ( v13 != 17 )
            {
              v14 = *(_BYTE *)(v7 + 18) & 7;
              if ( ((v14 - 2) & 0xFA) == 0
                && v14 != 6
                && (*(_DWORD *)v7 & 0x400LL) == 0
                && (unsigned int)MiGetPagingFileOffset(*(_QWORD *)v7)
                && (*(_QWORD *)(v7 + 24) & 0xFFFFFFFFFFLL) != 0x3FFFFFFFFELL
                && (unsigned __int16)*(_DWORD *)(v7 + 16)
                && ((unsigned __int8)~(*(_BYTE *)(v7 + 19) >> 4) & ((*(_BYTE *)(v7 + 18) & 0x28) == 0)) != 0 )
              {
                v12 = MiCaptureDirtyBitToPfn(v6);
              }
              MiUnlockPage(v6, v13);
              if ( v12 )
                MiReleasePageFileInfo(a1, v12, 0LL, v15);
            }
            v1 = v17;
          }
        }
        v6 += 48LL;
        v7 += 48LL;
        ++v5;
      }
      while ( v6 < v8 );
      v2 = v18;
      v4 = v19;
    }
    v18 = ++v2;
  }
  while ( v2 != *v4 );
  MiDereferencePageRuns((__int64)v4);
  v16 = *(_QWORD *)(a1 + 184);
  *(_QWORD *)(a1 + 1032) = 0LL;
  PsDereferencePartition(v16);
}
