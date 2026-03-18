/*
 * XREFs of LogDiagSDC @ 0x1400E51A0
 * Callers:
 *     DrvSetDisplayConfig @ 0x140137640 (DrvSetDisplayConfig.c)
 *     xxxUserSetDisplayConfig @ 0x1401636C0 (xxxUserSetDisplayConfig.c)
 *     NtUserSetDisplayConfig @ 0x140170CE0 (NtUserSetDisplayConfig.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     PALLOCMEM @ 0x14008F85C (PALLOCMEM.c)
 *     DrvDxgkWriteDiagEntry @ 0x1400E5440 (DrvDxgkWriteDiagEntry.c)
 *     DrvDxgkLogCodePointPacket @ 0x1400E5480 (DrvDxgkLogCodePointPacket.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memcmp @ 0x14023FD10 (memcmp.c)
 */

void __fastcall LogDiagSDC(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        unsigned int a6,
        __int64 a7,
        char a8,
        _DWORD *a9)
{
  __int64 v10; // rsi
  unsigned int v13; // ebx
  __int64 v14; // rax
  __int64 v15; // rdi
  int v16; // ecx
  int v17; // ebx
  __int64 v18; // rcx
  __int64 v19; // r8
  _QWORD *v20; // rdx
  __int64 v21; // rax
  __int128 Buf1; // [rsp+20h] [rbp-48h] BYREF

  v10 = a1;
  v13 = 200 * a1 + 88;
  v14 = PALLOCMEM(v13, 0x73726447u);
  v15 = v14;
  if ( v14 )
  {
    *(_DWORD *)(v14 + 40) = 0;
    *(_QWORD *)(v14 + 32) = 0LL;
    *(_DWORD *)v14 = 47;
    *(_DWORD *)(v14 + 4) = v13;
    *(_QWORD *)(v14 + 8) = 0LL;
    *(_OWORD *)(v14 + 16) = 0LL;
    *(_DWORD *)(v14 + 60) = a5;
    *(_DWORD *)(v14 + 64) = a6;
    *(_DWORD *)(v14 + 52) = v10;
    *(_DWORD *)(v14 + 68) = a4;
    *(_DWORD *)(v14 + 72) = a3;
    v16 = (a2 == 0) | (a8 != 0 ? 8 : 0) | 2;
    *(_DWORD *)(v14 + 48) = v16;
    if ( a9 )
    {
      v17 = v16 | (16 * (*a9 & 3));
      *(_DWORD *)(v14 + 48) = v17;
      Buf1 = 0LL;
      *(_DWORD *)(v14 + 48) = (memcmp(&Buf1, a9 + 1, 0x10uLL) == 0 ? 0x40 : 0) | v17;
    }
    *(_QWORD *)(v15 + 80) = a7;
    *(_DWORD *)(v15 + 76) = 200;
    if ( a2 && (_DWORD)v10 )
    {
      v18 = v15 + 104;
      v19 = v10;
      v20 = (_QWORD *)(a2 + 16);
      do
      {
        *(_QWORD *)(v18 - 16) = *(v20 - 2);
        *(_QWORD *)(v18 - 8) = *(v20 - 1);
        v21 = *v20;
        v20 += 27;
        *(_QWORD *)v18 = v21;
        *(_DWORD *)(v18 + 8) = *((_DWORD *)v20 - 52);
        *(_DWORD *)(v18 + 12) = *((_DWORD *)v20 - 51);
        *(_OWORD *)(v18 + 16) = *(_OWORD *)(v20 - 25);
        *(_OWORD *)(v18 + 32) = *(_OWORD *)(v20 - 23);
        *(_OWORD *)(v18 + 48) = *(_OWORD *)(v20 - 21);
        *(_DWORD *)(v18 + 64) = *((_DWORD *)v20 - 38);
        *(_DWORD *)(v18 + 68) = *((_DWORD *)v20 - 37);
        *(_QWORD *)(v18 + 72) = *(v20 - 18);
        *(_DWORD *)(v18 + 80) = *((_DWORD *)v20 - 34);
        *(_BYTE *)(v18 + 84) = *((_BYTE *)v20 - 132);
        *(_BYTE *)(v18 + 85) = *((_BYTE *)v20 - 131);
        *(_DWORD *)(v18 + 88) = *((_DWORD *)v20 - 32);
        *(_DWORD *)(v18 + 92) = *((_DWORD *)v20 - 31);
        *(_DWORD *)(v18 + 96) = *((_DWORD *)v20 - 30);
        *(_QWORD *)(v18 + 100) = *(_QWORD *)((char *)v20 - 116);
        *(_QWORD *)(v18 + 108) = *(_QWORD *)((char *)v20 - 108);
        *(_QWORD *)(v18 + 116) = *(_QWORD *)((char *)v20 - 100);
        *(_OWORD *)(v18 + 124) = *(_OWORD *)((char *)v20 - 92);
        *(_DWORD *)(v18 + 140) = *((_DWORD *)v20 - 19);
        *(_DWORD *)(v18 + 144) = *((_DWORD *)v20 - 18);
        *(_DWORD *)(v18 + 148) = *((_DWORD *)v20 - 17);
        *(_QWORD *)(v18 + 152) = *(v20 - 8);
        *(_QWORD *)(v18 + 160) = *(v20 - 7);
        *(_DWORD *)(v18 + 168) = *((_DWORD *)v20 - 12);
        *(_QWORD *)(v18 + 172) = *(_QWORD *)((char *)v20 - 36);
        *(_DWORD *)(v18 + 180) = *((_DWORD *)v20 - 5);
        v18 += 200LL;
        --v19;
      }
      while ( v19 );
    }
    DrvDxgkWriteDiagEntry(v15);
    GreDeleteFastMutex((char *)v15);
  }
  else
  {
    WdLogSingleEntry1(6LL, v13);
    WdLogGlobalForLineNumber = 15011;
    DrvDxgkLogCodePointPacket(3LL, a3, a4, a6);
  }
}
