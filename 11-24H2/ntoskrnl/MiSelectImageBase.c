/*
 * XREFs of MiSelectImageBase @ 0x140AEB020
 * Callers:
 *     MiRelocateImage @ 0x140AEA57C (MiRelocateImage.c)
 *     MiRelocateImageAgain @ 0x140AEAE48 (MiRelocateImageAgain.c)
 * Callees:
 *     ExGenRandom @ 0x14040A540 (ExGenRandom.c)
 *     MiGetImageBitMapInfo @ 0x14046F440 (MiGetImageBitMapInfo.c)
 *     MiSetControlAreaSystemVa @ 0x1404A7A80 (MiSetControlAreaSystemVa.c)
 *     MiGetImageWowSubsystemIndex @ 0x140974B3C (MiGetImageWowSubsystemIndex.c)
 *     MiObtainRelocationBits @ 0x140A1A244 (MiObtainRelocationBits.c)
 *     MiSelectRelocationStartHint @ 0x140A2AD00 (MiSelectRelocationStartHint.c)
 *     MiBytesToMapSystemImage @ 0x140A55544 (MiBytesToMapSystemImage.c)
 *     MiSelectSystemImageAddress @ 0x140A55590 (MiSelectSystemImageAddress.c)
 *     MiSelectOverflowDllBase @ 0x140A81C68 (MiSelectOverflowDllBase.c)
 *     MiImageCanUseHighOverflowArea @ 0x140A81E1C (MiImageCanUseHighOverflowArea.c)
 */

__int64 __fastcall MiSelectImageBase(__int64 a1, __int64 a2, __int64 a3, char a4, __int64 *a5)
{
  __int64 v5; // rbp
  int v6; // ebx
  char v7; // r11
  int v8; // r10d
  int ImageWowSubsystemIndex; // esi
  int v11; // esi
  __int64 v12; // rcx
  __int64 v13; // r9
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  unsigned __int64 v18; // r13
  unsigned int v19; // r15d
  __int64 v20; // rdi
  unsigned __int64 v21; // r12
  __int64 v22; // rax
  __int16 v23; // r10
  unsigned __int64 started; // rax
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // [rsp+20h] [rbp-58h] BYREF
  __int64 v27; // [rsp+28h] [rbp-50h] BYREF
  _OWORD v28[4]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v29; // [rsp+80h] [rbp+8h]
  int v31; // [rsp+90h] [rbp+18h]

  v31 = a3;
  v5 = *(_QWORD *)a1;
  v6 = 0;
  v26 = 0LL;
  v7 = a4;
  v27 = 0LL;
  v8 = a3;
  if ( !_bittest16((const signed __int16 *)(a1 + 12), 0xFu) )
  {
    v12 = *(_QWORD *)(a1 + 56);
    if ( (*(_BYTE *)(v12 + 51) & 0x10) != 0 && _bittest16((const signed __int16 *)(v12 + 44), 0xDu) )
      v11 = 2;
    else
      v11 = *(_QWORD *)(a1 + 32) <= 0xFFFFFFFFuLL;
LABEL_10:
    *(_DWORD *)(v5 + 92) ^= (*(_DWORD *)(v5 + 92) ^ (v11 << 20)) & 0x300000;
    goto LABEL_11;
  }
  ImageWowSubsystemIndex = MiGetImageWowSubsystemIndex(a1);
  if ( ImageWowSubsystemIndex == -1 )
  {
    v11 = 4;
    goto LABEL_11;
  }
  v11 = ImageWowSubsystemIndex + 3;
  if ( v11 != 4 )
    goto LABEL_10;
LABEL_11:
  v13 = *(_QWORD *)(a1 + 56);
  v14 = *(unsigned int *)(a1 + 8);
  v29 = v13;
  if ( v8 )
  {
    v15 = MiBytesToMapSystemImage((unsigned int)((_DWORD)v14 << 12));
    if ( v15 )
    {
      v13 = v29;
      v14 = v15 >> 12;
      goto LABEL_19;
    }
    return 3221225503LL;
  }
  v16 = (unsigned int)dword_140E2D8F0;
  if ( dword_140E2D8F0 && (*(_DWORD *)(v13 + 76) & 0x40) != 0 )
  {
    v16 = (unsigned int)dword_140E2D8F0 >> 12;
    if ( (int)v16 + (int)v14 < (unsigned int)v14 )
      return 3221225503LL;
    v14 = (unsigned int)(v16 + v14);
  }
LABEL_19:
  LODWORD(v18) = -1;
  if ( (v7 & 1) != 0 )
  {
    LOWORD(v19) = 0;
    v20 = *(_QWORD *)(a1 + 32);
LABEL_44:
    v6 = 1;
    goto LABEL_45;
  }
  v19 = (unsigned int)(v14 + 15) >> 4;
  v21 = *(_QWORD *)(a1 + 32) - *(_QWORD *)(a2 + 40);
  if ( v8 )
  {
    v22 = MiSelectSystemImageAddress(v14);
    v20 = v22;
    if ( !v22 )
      return 3221225626LL;
    *(_WORD *)(v5 + 92) = v19;
    *(_DWORD *)(v5 + 88) = (unsigned __int64)(v22 + 0x800000000000LL) >> 16;
    MiSetControlAreaSystemVa(v5, v31);
  }
  else
  {
    v23 = 0x2000;
    if ( (*(_WORD *)(v13 + 44) & 0x2000) != 0 || (v7 & 2) != 0 )
    {
      v28[0] = 0LL;
      LOBYTE(a3) = v11 != 4;
      if ( !dword_140FC5210 || !MiImageCanUseHighOverflowArea(a1, v21) )
      {
        if ( (_BYTE)a3 )
        {
          MiGetImageBitMapInfo(v11, v28, &v27, (__int64 *)&v26);
          started = MiSelectRelocationStartHint((__int64)v28, v19, v26, 0);
          v18 = started;
          if ( started != -1LL )
            v18 = MiObtainRelocationBits((unsigned __int64 **)v28, v19, started);
          if ( v18 != -1LL )
          {
            v20 = v27 - ((v18 + (unsigned __int16)v19) << 16);
LABEL_45:
            *(_DWORD *)(v5 + 88) = v18;
            *(_WORD *)(v5 + 92) = v19;
            goto LABEL_46;
          }
          v13 = v29;
          v23 = 0x2000;
        }
      }
    }
    if ( (*(_DWORD *)(v5 + 92) & 0x800000) == 0 )
    {
      if ( v11 )
      {
        if ( ((unsigned __int16)v23 & *(_WORD *)(v13 + 44)) != 0 )
        {
          v20 = MiSelectOverflowDllBase(a1, v21);
        }
        else
        {
          v25 = (unsigned __int64)(unsigned __int8)ExGenRandom(1, v16, a3, v13) << 16;
          if ( v21 < 0x1000000 )
            v20 = v25 + 0x10000;
          else
            v20 = v21 - v25;
        }
      }
      else
      {
        v20 = ((unsigned int)ExGenRandom(1, v16, a3, v13) % (131073 - (unsigned __int64)(unsigned __int16)v19)
             + 2146828288) << 16;
      }
      goto LABEL_44;
    }
    v20 = *(_QWORD *)(a1 + 32);
    v6 = 1;
  }
LABEL_46:
  *(_DWORD *)(v5 + 92) = (v6 << 23) | *(_DWORD *)(v5 + 92) & 0xFF7FFFFF;
  *a5 = v20;
  return 0LL;
}
