/*
 * XREFs of NtGdiDdDDICreateDCFromMemory @ 0x1C0006FD0
 * Callers:
 *     <none>
 * Callees:
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@H@Z @ 0x1C000741C (--0MDCOBJA@@QEAA@PEAUHDC__@@H@Z.c)
 *     ?DxEngSelectPaletteToSurface@@YAPEAUHPALETTE__@@PEAU_SURFOBJ@@PEAU1@@Z @ 0x1C0007458 (-DxEngSelectPaletteToSurface@@YAPEAUHPALETTE__@@PEAU_SURFOBJ@@PEAU1@@Z.c)
 *     ?DxEngSetPaletteState@@YAHPEAUHPALETTE__@@K_K@Z @ 0x1C00074DC (-DxEngSetPaletteState@@YAHPEAUHPALETTE__@@K_K@Z.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C007E42C (--1SURFREF@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00C2C24 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00C2C70 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C013DE44 (-vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C0264500 (--0SURFREF@@QEAA@XZ.c)
 *     ?DxEngSyncPaletteTableWithDevice@@YAHPEAUHPALETTE__@@PEAUHDEV__@@@Z @ 0x1C026DC88 (-DxEngSyncPaletteTableWithDevice@@YAHPEAUHPALETTE__@@PEAUHDEV__@@@Z.c)
 */

__int64 __fastcall NtGdiDdDDICreateDCFromMemory(ULONG64 a1)
{
  __int64 v1; // r15
  HSURF v2; // rbx
  ULONG64 v3; // rax
  __int64 v4; // r8
  unsigned int v5; // r12d
  int v6; // r14d
  FLONG flBlue; // edi
  int v8; // esi
  unsigned __int64 v9; // rcx
  int v10; // eax
  HANDLE v11; // r13
  int v12; // r8d
  FLONG v13; // r9d
  ULONG *v14; // rsi
  ULONG v15; // r14d
  HPALETTE Palette; // rax
  HPALETTE v17; // rdi
  struct _SURFOBJ *LockedBitmap; // rax
  unsigned int v19; // edx
  unsigned __int64 v20; // r8
  SURFOBJ *v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rax
  char v24; // r14
  __int64 DisplayDC; // rax
  unsigned int v26; // esi
  ULONG64 v27; // r8
  _QWORD *v28; // rdx
  _QWORD *v29; // rdx
  _OWORD *v31; // rdx
  _OWORD *v32; // rax
  __int64 v33; // rcx
  ULONG *v34; // rax
  FLONG flGreen; // [rsp+20h] [rbp-4E8h]
  char v36[8]; // [rsp+30h] [rbp-4D8h] BYREF
  SIZE_T Length; // [rsp+38h] [rbp-4D0h]
  ULONG cColors; // [rsp+40h] [rbp-4C8h]
  ULONG *pulColors; // [rsp+48h] [rbp-4C0h]
  unsigned int v40; // [rsp+50h] [rbp-4B8h]
  HSURF hsurf; // [rsp+58h] [rbp-4B0h]
  struct tagSIZE v42; // [rsp+60h] [rbp-4A8h]
  __int64 v43; // [rsp+68h] [rbp-4A0h]
  volatile void *Address[2]; // [rsp+70h] [rbp-498h] BYREF
  HDC v45[2]; // [rsp+80h] [rbp-488h]
  __int128 v46; // [rsp+90h] [rbp-478h]
  __int64 v47; // [rsp+A0h] [rbp-468h]
  ULONG64 v48; // [rsp+A8h] [rbp-460h]
  _QWORD v49[4]; // [rsp+B0h] [rbp-458h] BYREF
  _BYTE v50[1024]; // [rsp+D0h] [rbp-438h] BYREF

  v48 = a1;
  v1 = 0LL;
  v43 = 0LL;
  v2 = 0LL;
  hsurf = 0LL;
  Length = 0LL;
  v3 = a1;
  if ( a1 >= MmUserProbeAddress )
    v3 = MmUserProbeAddress;
  *(_OWORD *)Address = *(_OWORD *)v3;
  *(_OWORD *)v45 = *(_OWORD *)(v3 + 16);
  v46 = *(_OWORD *)(v3 + 32);
  v47 = *(_QWORD *)(v3 + 48);
  v42 = (struct tagSIZE)__PAIR64__((unsigned int)v45[0], HIDWORD(Address[1]));
  v4 = LODWORD(v45[0]);
  if ( SHIDWORD(Address[1]) <= 0 || SLODWORD(v45[0]) <= 0 )
    return 3221225485LL;
  cColors = 0;
  pulColors = 0LL;
  switch ( LODWORD(Address[1]) )
  {
    case 0x14:
      v5 = 5;
      goto LABEL_8;
    case 0x15:
    case 0x16:
      v5 = 6;
LABEL_8:
      v6 = 65280;
      flBlue = 255;
      v8 = 16711680;
      break;
    case 0x17:
      v8 = 63488;
      flBlue = 31;
      v5 = 4;
      v6 = 2016;
      break;
    case 0x18:
    case 0x19:
      v8 = 31744;
      flBlue = 31;
      v5 = 4;
      v6 = 992;
      break;
    case 0x29:
      v5 = 3;
      v31 = (_OWORD *)v46;
      if ( (_QWORD)v46 )
      {
        if ( (__int64)v46 + 1024 < (unsigned __int64)v46 || (__int64)v46 + 1024 > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        v32 = v50;
        v33 = 8LL;
        do
        {
          *v32 = *v31;
          v32[1] = v31[1];
          v32[2] = v31[2];
          v32[3] = v31[3];
          v32[4] = v31[4];
          v32[5] = v31[5];
          v32[6] = v31[6];
          v32 += 8;
          *(v32 - 1) = v31[7];
          v31 += 8;
          --v33;
        }
        while ( v33 );
        v34 = (ULONG *)v50;
      }
      else
      {
        v34 = (ULONG *)&unk_1C0327E60;
      }
      pulColors = v34;
      cColors = 256;
      v8 = 0;
      v6 = 0;
      flBlue = 0;
      break;
    default:
      return 3221225485LL;
  }
  v9 = v4 * ((unsigned __int64)v45[0] >> 32);
  v10 = -1;
  if ( v9 <= 0xFFFFFFFF )
    v10 = v4 * HIDWORD(v45[0]);
  LODWORD(Length) = v10;
  v40 = v9 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v9 > 0xFFFFFFFF )
    return 3221225485LL;
  ProbeForWrite(Address[0], Length, 4u);
  v11 = MmSecureVirtualMemory((PVOID)Address[0], Length, 4u);
  v49[2] = v11;
  if ( !v11 )
    return 3221225485LL;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v36);
  MDCOBJA::MDCOBJA((MDCOBJA *)v49, v45[1], v12);
  if ( !v49[0] )
  {
    MmUnsecureVirtualMemory(v11);
    XDCOBJ::vAltUnlockNoNullSet((XDCOBJ *)v49);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v36);
    return 3221225485LL;
  }
  Length = *(_QWORD *)(v49[0] + 48LL);
  flGreen = v6;
  v13 = v8;
  v14 = pulColors;
  v15 = cColors;
  Palette = EngCreatePalette((unsigned int)(v5 > 3) + 1, cColors, pulColors, v13, flGreen, flBlue);
  v17 = Palette;
  pulColors = (ULONG *)Palette;
  if ( Palette )
  {
    if ( v15 == 256 && !v14 )
      DxEngSyncPaletteTableWithDevice(Palette, (HDEV)Length);
    LockedBitmap = EngCreateLockedBitmap(v42, HIDWORD(v45[0]), v5, 1u, (void *)Address[0]);
    v21 = LockedBitmap;
    if ( LockedBitmap )
      v2 = LockedBitmap->hsurf;
    else
      v2 = 0LL;
    hsurf = v2;
    DxEngSetPaletteState(v17, v19, v20);
    if ( v2 )
    {
      DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v36);
      SURFREF::SURFREF((SURFREF *)Address);
      LOBYTE(v22) = 5;
      v23 = HmgShareLockCheckIgnoreStockBit(v2, v22);
      *(_QWORD *)&v46 = v23;
      if ( v23 )
      {
        v24 = 1;
        DxEngSelectPaletteToSurface((struct _SURFOBJ *)(v23 + 24), v17);
        *(_QWORD *)(v46 + 224) = v11;
        *(_DWORD *)(v46 + 112) |= 0x100000u;
        *(_DWORD *)(v46 + 112) |= 0x4000u;
        *(_DWORD *)(v46 + 112) |= 0x200u;
      }
      else
      {
        v24 = 0;
      }
      SURFREF::~SURFREF((SURFREF *)Address);
      DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v36);
      if ( v24 )
      {
        DisplayDC = GreCreateDisplayDC(Length, 1LL);
        v1 = DisplayDC;
        v43 = DisplayDC;
        if ( DisplayDC )
        {
          hbmSelectBitmap(DisplayDC, v2, 0LL, 1LL);
          GreSetBitmapOwner(v2, 2147483650LL);
        }
      }
      EngUnlockSurface(v21);
    }
  }
  if ( v1 )
  {
    v26 = v40;
  }
  else
  {
    if ( v2 )
    {
      EngDeleteSurface(v2);
      v2 = 0LL;
      hsurf = 0LL;
    }
    else
    {
      MmUnsecureVirtualMemory(v11);
    }
    v26 = -1073741801;
  }
  v27 = v48;
  v28 = (_QWORD *)(v48 + 40);
  if ( v48 + 40 >= MmUserProbeAddress )
    v28 = (_QWORD *)MmUserProbeAddress;
  *v28 = v1;
  v29 = (_QWORD *)(v27 + 48);
  if ( v27 + 48 >= MmUserProbeAddress )
    v29 = (_QWORD *)MmUserProbeAddress;
  *v29 = v2;
  if ( v17 )
    EngDeletePalette(v17);
  XDCOBJ::vAltUnlockNoNullSet((XDCOBJ *)v49);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v36);
  return v26;
}
