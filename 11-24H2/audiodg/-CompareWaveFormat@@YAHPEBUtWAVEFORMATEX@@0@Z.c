/*
 * XREFs of ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x140028784
 * Callers:
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x140010750 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x1400116C8 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 *     ?ConnectToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmix@@W4SUBMIX_CONNECT_OPTIONS@@@Z @ 0x140028310 (-ConnectToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmix@@W4SUBMIX_CONNECT_OPTIONS@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x14005B475 (memcmp_0.c)
 */

__int64 __fastcall CompareWaveFormat(const struct tWAVEFORMATEX *a1, const struct tWAVEFORMATEX *a2)
{
  unsigned int v2; // ebx
  __int16 v3; // r9
  int v4; // r10d
  __int16 v5; // r8
  __int16 v6; // r15
  __int128 v7; // xmm1
  __int64 v8; // xmm0_8
  int v9; // r14d
  __int16 v10; // r13
  int v11; // ecx
  __int128 v12; // xmm1
  __int64 v13; // xmm0_8
  int v14; // esi
  __int16 v15; // r10
  int v16; // edx
  __int16 v17; // r11
  __int64 v18; // rax
  WORD nChannels; // r10
  __int128 v21; // xmm0
  int wFormatTag; // eax
  WORD v23; // cx
  WORD wBitsPerSample; // r10
  __int128 v25; // xmm0
  int v26; // eax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  _BYTE Buf2[40]; // [rsp+20h] [rbp-60h] BYREF
  _BYTE Buf1[40]; // [rsp+48h] [rbp-38h] BYREF

  v2 = 0;
  if ( !a1 )
    return a2 == 0LL;
  if ( a2 )
  {
    v3 = -2;
    v4 = 0;
    memset(Buf1, 0, sizeof(Buf1));
    memset(Buf2, 0, sizeof(Buf2));
    if ( a1->wFormatTag == 0xFFFE )
    {
      v5 = 22;
      if ( a1->cbSize == 22 )
        goto LABEL_5;
      v27 = *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2) - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
      if ( !v27 )
        v27 = *(_QWORD *)&a1[1].wBitsPerSample - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
      if ( !v27 )
        goto LABEL_5;
      v28 = *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
      if ( !v28 )
        v28 = *(_QWORD *)&a1[1].wBitsPerSample - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
      if ( v28 )
      {
        v6 = *(_WORD *)&Buf1[16];
      }
      else
      {
LABEL_5:
        v6 = 22;
        v4 = 1;
        v7 = *(_OWORD *)&a1->cbSize;
        *(_OWORD *)Buf1 = *(_OWORD *)&a1->wFormatTag;
        v8 = *(_QWORD *)&a1[1].wBitsPerSample;
        *(_OWORD *)&Buf1[16] = v7;
        *(_WORD *)&Buf1[16] = 22;
        *(_QWORD *)&Buf1[32] = v8;
      }
      if ( !v4 )
        return v2;
      v9 = *(_DWORD *)&Buf1[20];
      v10 = *(_WORD *)Buf1;
    }
    else
    {
      if ( a1->cbSize && ((a1->wFormatTag - 1) & 0xFFFD) != 0 )
        return v2;
      nChannels = a1->nChannels;
      if ( (unsigned __int16)(nChannels - 1) > 1u || ((a1->wBitsPerSample - 8) & 0xFFE7) != 0 )
        return v2;
      v21 = *(_OWORD *)&a1->wFormatTag;
      wFormatTag = a1->wFormatTag;
      *(_WORD *)&Buf1[18] = a1->wBitsPerSample;
      v5 = 22;
      v10 = -2;
      *(_WORD *)&Buf1[16] = 22;
      *(_OWORD *)Buf1 = v21;
      v9 = 4 - (nChannels != 1);
      *(_WORD *)Buf1 = -2;
      *(GUID *)&Buf1[24] = GUID_00000000_0000_0010_8000_00aa00389b71;
      v6 = 22;
      *(_DWORD *)&Buf1[24] = wFormatTag;
    }
    v11 = 0;
    if ( a2->wFormatTag != 0xFFFE )
    {
      if ( a2->cbSize && ((a2->wFormatTag - 1) & 0xFFFD) != 0 )
        return v2;
      v23 = a2->nChannels;
      if ( (unsigned __int16)(v23 - 1) > 1u )
        return v2;
      wBitsPerSample = a2->wBitsPerSample;
      if ( ((wBitsPerSample - 8) & 0xFFE7) != 0 )
        return v2;
      v25 = *(_OWORD *)&a2->wFormatTag;
      v26 = a2->wFormatTag;
      *(_WORD *)&Buf2[16] = 22;
      *(_OWORD *)Buf2 = v25;
      *(_WORD *)Buf2 = -2;
      *(GUID *)&Buf2[24] = GUID_00000000_0000_0010_8000_00aa00389b71;
      v14 = 4 - (v23 != 1);
      *(_WORD *)&Buf2[18] = wBitsPerSample;
      *(_DWORD *)&Buf2[24] = v26;
      goto LABEL_13;
    }
    if ( a2->cbSize == 22 )
      goto LABEL_10;
    v29 = *(_QWORD *)((char *)&a2[1].nSamplesPerSec + 2) - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
    if ( !v29 )
      v29 = *(_QWORD *)&a2[1].wBitsPerSample - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
    if ( !v29 )
      goto LABEL_10;
    v30 = *(_QWORD *)((char *)&a2[1].nSamplesPerSec + 2) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
    if ( !v30 )
      v30 = *(_QWORD *)&a2[1].wBitsPerSample - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
    if ( v30 )
    {
      v5 = *(_WORD *)&Buf2[16];
    }
    else
    {
LABEL_10:
      v11 = 1;
      v12 = *(_OWORD *)&a2->cbSize;
      *(_OWORD *)Buf2 = *(_OWORD *)&a2->wFormatTag;
      v13 = *(_QWORD *)&a2[1].wBitsPerSample;
      *(_OWORD *)&Buf2[16] = v12;
      *(_WORD *)&Buf2[16] = 22;
      *(_QWORD *)&Buf2[32] = v13;
    }
    if ( v11 )
    {
      v14 = *(_DWORD *)&Buf2[20];
      v3 = *(_WORD *)Buf2;
LABEL_13:
      if ( *(_WORD *)&Buf1[2] )
      {
        v15 = *(_WORD *)&Buf2[2];
      }
      else
      {
        v15 = 0;
        *(_WORD *)&Buf2[2] = 0;
        *(_DWORD *)&Buf2[8] = 0;
        *(_WORD *)&Buf2[12] = 0;
      }
      if ( *(_DWORD *)&Buf1[4] )
      {
        v16 = *(_DWORD *)&Buf2[4];
      }
      else
      {
        v16 = 0;
        *(_QWORD *)&Buf2[4] = 0LL;
      }
      if ( *(_WORD *)&Buf1[14] )
      {
        v17 = *(_WORD *)&Buf2[14];
      }
      else
      {
        v17 = 0;
        *(_DWORD *)&Buf2[12] = 0;
      }
      *(_DWORD *)&Buf2[20] = v9 != 0 ? v14 : 0;
      if ( !v10 )
      {
        v3 = 0;
        *(_WORD *)Buf2 = 0;
      }
      if ( !v15 )
      {
        *(_WORD *)&Buf1[2] = 0;
        *(_DWORD *)&Buf1[8] = 0;
        *(_WORD *)&Buf1[12] = 0;
      }
      if ( !v16 )
        *(_QWORD *)&Buf1[4] = 0LL;
      if ( !v17 )
        *(_DWORD *)&Buf1[12] = 0;
      *(_DWORD *)&Buf1[20] = (v9 != 0 ? v14 : 0) != 0 ? v9 : 0;
      if ( !v3 )
        *(_WORD *)Buf1 = 0;
      v18 = *(_QWORD *)&Buf1[24] - *(_QWORD *)&Buf2[24];
      if ( *(_QWORD *)&Buf1[24] == *(_QWORD *)&Buf2[24] )
        v18 = *(_QWORD *)&Buf1[32] - *(_QWORD *)&Buf2[32];
      if ( !v18 && v5 == v6 && !memcmp_0(Buf1, Buf2, 0x28uLL) )
        return 1;
    }
  }
  return v2;
}
