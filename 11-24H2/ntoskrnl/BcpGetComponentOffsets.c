/*
 * XREFs of BcpGetComponentOffsets @ 0x14069ACC0
 * Callers:
 *     BgpFwDisplayBugCheckScreen @ 0x14069B3E0 (BgpFwDisplayBugCheckScreen.c)
 * Callees:
 *     BcpDisplayProgress @ 0x14069A874 (BcpDisplayProgress.c)
 *     BcpSetCursorPosition @ 0x14069B148 (BcpSetCursorPosition.c)
 */

__int64 __fastcall BcpGetComponentOffsets(unsigned int *a1, _DWORD *a2, int *a3, int a4, int a5, char a6)
{
  int v7; // edi
  void *v9; // r8
  __int64 v10; // r11
  int v12; // r9d
  int v13; // r10d
  __int64 v14; // rbx
  int v15; // ecx
  int v16; // r12d
  unsigned int v17; // esi
  unsigned int v18; // ebp
  int v19; // edx
  int v20; // ecx
  __int64 v22; // [rsp+20h] [rbp-38h]

  *a1 = BcpCursor;
  v7 = 0;
  a1[1] = *(&BcpCursor + 1);
  v9 = &unk_140E0EFA0;
  v10 = a4;
  v12 = dword_140EEFD38;
  v13 = 0;
  a1[2] = dword_140EEFD38;
  v14 = 84 * v10;
  *a1 = *((_DWORD *)&unk_140E0EFA0 + 21 * v10 + 4) + *((_DWORD *)&unk_140E0EFA0 + 21 * v10 + 8);
  v15 = v12 + *((_DWORD *)&unk_140E0EFA0 + 21 * v10 + 11);
  a1[1] = v15;
  v16 = *((_DWORD *)&unk_140E0EFA0 + 21 * v10 + 11) + v15;
  a1[2] = v16;
  v22 = *(_QWORD *)a1;
  if ( a6 )
  {
    dword_140EF0270 |= 0x1000000u;
    v17 = 0;
    v18 = HIDWORD(v22);
    while ( v17 <= 0x64 )
    {
      v13 = BcpDisplayProgress(v17, v10, (__int64)v9);
      if ( v13 < 0 )
        return (unsigned int)v13;
      if ( __PAIR64__(v18, v22) < BcpProgressEnd )
      {
        v16 = dword_140EF01A8;
        LODWORD(v22) = BcpProgressEnd;
        v18 = HIDWORD(BcpProgressEnd);
      }
      BcpSetCursorPosition(*a1, a1[1], a1 + 2);
      LODWORD(v10) = a4;
      ++v17;
    }
    dword_140EF0270 &= ~0x1000000u;
  }
  v19 = *(_DWORD *)((char *)&unk_140E0EFA0 + v14 + 32) + *(_DWORD *)((char *)&unk_140E0EFA0 + v14 + 16);
  *a3 = v19;
  a3[1] = v16 + *(_DWORD *)((char *)&unk_140E0EFA0 + v14 + 52);
  if ( a5 )
    v7 = a5 + *(_DWORD *)((char *)&unk_140E0EFA0 + v14 + 56);
  *a2 = v19 + v7;
  v20 = v16 + *(_DWORD *)((char *)&unk_140E0EFA0 + v14 + 60);
  a2[1] = v20;
  a2[2] = *(_DWORD *)((char *)&unk_140E0EFA0 + v14 + 44) + v20;
  return (unsigned int)v13;
}
