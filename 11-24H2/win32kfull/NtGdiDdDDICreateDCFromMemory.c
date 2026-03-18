/*
 * XREFs of NtGdiDdDDICreateDCFromMemory @ 0x14025C8E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14001487C (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140015800 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001A490 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x140028C4C (--0-$SEMOBJSHARED@$00@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1400CDCC4 (--0SURFREF@@QEAA@XZ.c)
 *     ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x14016EFA0 (-vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@W4HandleLockOptions@@@Z @ 0x140171324 (--0MDCOBJA@@QEAA@PEAUHDC__@@W4HandleLockOptions@@@Z.c)
 *     ?DxEngSetPaletteState@@YAHPEAUHPALETTE__@@K_K@Z @ 0x1401A35CC (-DxEngSetPaletteState@@YAHPEAUHPALETTE__@@K_K@Z.c)
 *     ?DxEngSelectPaletteToSurface@@YAPEAUHPALETTE__@@PEAU_SURFOBJ@@PEAU1@@Z @ 0x1401A3610 (-DxEngSelectPaletteToSurface@@YAPEAUHPALETTE__@@PEAU_SURFOBJ@@PEAU1@@Z.c)
 *     ?DxEngSyncPaletteTableWithDevice@@YAHPEAUHPALETTE__@@PEAUHDEV__@@@Z @ 0x140324550 (-DxEngSyncPaletteTableWithDevice@@YAHPEAUHPALETTE__@@PEAUHDEV__@@@Z.c)
 *     Feature_Servicing_GdiMsrc99105__private_IsEnabledDeviceUsageNoInline @ 0x140325560 (Feature_Servicing_GdiMsrc99105__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140340280 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtGdiDdDDICreateDCFromMemory(ULONG64 a1)
{
  const void *v2; // rdx
  unsigned int v3; // edx
  ULONG *v4; // r13
  ULONG v5; // r12d
  _OWORD *v6; // rcx
  ULONG *v7; // rax
  __int64 v8; // rdx
  int v9; // r14d
  FLONG flGreen; // r15d
  FLONG flBlue; // esi
  unsigned __int64 v12; // rcx
  int v13; // eax
  void *v14; // rax
  void *v15; // rdi
  FLONG v16; // r9d
  ULONG v17; // r14d
  HPALETTE Palette; // rax
  HPALETTE v19; // rsi
  SIZE_T v20; // r15
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rax
  char v24; // r14
  HDC DisplayDC; // rax
  __int64 v26; // r9
  unsigned int v27; // edi
  ULONG64 v28; // r14
  void *v29; // rcx
  void *v30; // rcx
  HSURF hsurf; // [rsp+30h] [rbp-5D8h] BYREF
  SIZE_T Length; // [rsp+38h] [rbp-5D0h]
  ULONG cColors[2]; // [rsp+40h] [rbp-5C8h]
  HDC Src; // [rsp+48h] [rbp-5C0h] BYREF
  SIZEL sizl; // [rsp+50h] [rbp-5B8h] BYREF
  unsigned int v37; // [rsp+58h] [rbp-5B0h]
  __int64 v38; // [rsp+60h] [rbp-5A8h] BYREF
  volatile void *Address[2]; // [rsp+68h] [rbp-5A0h] BYREF
  LONG lWidth[4]; // [rsp+78h] [rbp-590h]
  __int128 v41; // [rsp+88h] [rbp-580h]
  __int64 v42; // [rsp+98h] [rbp-570h]
  void *v43; // [rsp+A0h] [rbp-568h]
  ULONG64 v44; // [rsp+A8h] [rbp-560h]
  _BYTE v45[32]; // [rsp+B0h] [rbp-558h] BYREF
  __int64 v46; // [rsp+D0h] [rbp-538h]
  __int64 *v47[5]; // [rsp+D8h] [rbp-530h] BYREF
  char v48[16]; // [rsp+100h] [rbp-508h] BYREF
  _BYTE v49[112]; // [rsp+110h] [rbp-4F8h] BYREF
  _BYTE v50[96]; // [rsp+180h] [rbp-488h] BYREF
  ULONG pulColors[256]; // [rsp+1E0h] [rbp-428h] BYREF

  v44 = a1;
  ThreadRestrictNewHandlesRegion::ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v50);
  Src = 0LL;
  hsurf = 0LL;
  Length = 0LL;
  *(_OWORD *)Address = 0LL;
  *(_OWORD *)lWidth = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v2 = (const void *)a1;
  if ( a1 >= MmUserProbeAddress )
    v2 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(Address, v2, 0x38uLL);
  sizl = (SIZEL)__PAIR64__(lWidth[0], HIDWORD(Address[1]));
  v3 = lWidth[0];
  if ( SHIDWORD(Address[1]) <= 0 || lWidth[0] <= 0 )
    goto LABEL_64;
  cColors[0] = 0;
  v4 = 0LL;
  switch ( LODWORD(Address[1]) )
  {
    case 0x14:
      v5 = 5;
      goto LABEL_25;
    case 0x15:
    case 0x16:
      v5 = 6;
LABEL_25:
      flGreen = 65280;
      v9 = 16711680;
      flBlue = 255;
      break;
    case 0x17:
      flBlue = 31;
      v5 = 4;
      v9 = 63488;
      flGreen = 2016;
      break;
    case 0x18:
    case 0x19:
      flBlue = 31;
      v5 = 4;
      v9 = 31744;
      flGreen = 992;
      break;
    case 0x29:
      v5 = 3;
      v6 = (_OWORD *)v41;
      if ( (_QWORD)v41 )
      {
        if ( (__int64)v41 + 1024 < (unsigned __int64)v41 || (__int64)v41 + 1024 > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        v7 = pulColors;
        v8 = 8LL;
        do
        {
          *(_OWORD *)v7 = *v6;
          *((_OWORD *)v7 + 1) = v6[1];
          *((_OWORD *)v7 + 2) = v6[2];
          *((_OWORD *)v7 + 3) = v6[3];
          *((_OWORD *)v7 + 4) = v6[4];
          *((_OWORD *)v7 + 5) = v6[5];
          *((_OWORD *)v7 + 6) = v6[6];
          v7 += 32;
          *((_OWORD *)v7 - 1) = v6[7];
          v6 += 8;
          --v8;
        }
        while ( v8 );
        v4 = pulColors;
        v3 = lWidth[0];
      }
      else
      {
        v4 = (ULONG *)&unk_140362D10;
      }
      cColors[0] = 256;
      v9 = 0;
      flGreen = 0;
      flBlue = 0;
      break;
    default:
LABEL_64:
      ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v50);
      return 3221225485LL;
  }
  v12 = v3 * (unsigned __int64)(unsigned int)lWidth[1];
  v13 = -1;
  if ( v12 <= 0xFFFFFFFF )
    v13 = v3 * lWidth[1];
  LODWORD(Length) = v13;
  v37 = v12 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v12 > 0xFFFFFFFF )
    goto LABEL_64;
  ProbeForWrite(Address[0], Length, 4u);
  v14 = (unsigned int)Feature_Servicing_GdiMsrc99105__private_IsEnabledDeviceUsageNoInline()
      ? GrepSecureVirtualMemory((void *)Address[0], Length, 4u)
      : MmSecureVirtualMemory((PVOID)Address[0], Length, 4u);
  v43 = v14;
  v15 = v14;
  if ( !v14 )
    goto LABEL_64;
  SEMOBJSHARED<1>::SEMOBJSHARED<1>((Gre::Base *)&v38);
  MDCOBJA::MDCOBJA((__int64)v47, *(__int64 *)&lWidth[2]);
  if ( !v47[0] )
  {
    if ( (unsigned int)Feature_Servicing_GdiMsrc99105__private_IsEnabledDeviceUsageNoInline() )
      GrepUnsecureVirtualMemory(v15);
    else
      MmUnsecureVirtualMemory(v15);
    XDCOBJ::vAltUnlockNoNullSet(v47);
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v38);
    goto LABEL_64;
  }
  Length = v47[0][6];
  v16 = v9;
  v17 = cColors[0];
  Palette = EngCreatePalette((unsigned int)(v5 > 3) + 1, cColors[0], v4, v16, flGreen, flBlue);
  v19 = Palette;
  *(_QWORD *)cColors = Palette;
  if ( Palette )
  {
    v20 = Length;
    if ( v17 == 256 && !v4 )
      DxEngSyncPaletteTableWithDevice(Palette, (HDEV)Length);
    hsurf = (HSURF)EngCreateBitmap(sizl, lWidth[1], v5, 1u, (PVOID)Address[0]);
    DxEngSetPaletteState(v19, v21);
    if ( hsurf )
    {
      SEMOBJSHARED<1>::SEMOBJSHARED<1>((Gre::Base *)&sizl);
      SURFREF::SURFREF((SURFREF *)v45);
      LOBYTE(v22) = 5;
      v23 = HmgShareLockCheckIgnoreStockBit(hsurf, v22);
      v46 = v23;
      if ( v23 )
      {
        v24 = 1;
        DxEngSelectPaletteToSurface((struct _SURFOBJ *)(v23 + 24), v19);
        *(_QWORD *)(v46 + 224) = v15;
        *(_DWORD *)(v46 + 112) |= 0x100000u;
        *(_DWORD *)(v46 + 112) |= 0x4000u;
        *(_DWORD *)(v46 + 112) |= 0x200u;
      }
      else
      {
        v24 = 0;
      }
      SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v45);
      GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
        *(_QWORD *)&sizl);
      if ( v24 )
      {
        DisplayDC = (HDC)GreCreateDisplayDC(v20, 1LL, 0LL);
        Src = DisplayDC;
        if ( DisplayDC )
        {
          APIDCOBJ::APIDCOBJ((APIDCOBJ *)v49, DisplayDC);
          LOBYTE(v26) = 7;
          GrepSelectBitmap(v48, v49, hsurf, v26);
          GreSetBitmapOwner(hsurf, 2147483650LL);
          APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v49);
        }
      }
    }
  }
  if ( Src )
  {
    v27 = v37;
  }
  else
  {
    if ( hsurf )
    {
      EngDeleteSurface(hsurf);
      hsurf = 0LL;
    }
    else if ( (unsigned int)Feature_Servicing_GdiMsrc99105__private_IsEnabledDeviceUsageNoInline() )
    {
      GrepUnsecureVirtualMemory(v15);
    }
    else
    {
      MmUnsecureVirtualMemory(v15);
    }
    v27 = -1073741801;
  }
  v28 = v44;
  v29 = (void *)(v44 + 40);
  if ( v44 + 40 >= MmUserProbeAddress )
    v29 = (void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v29, &Src, 8uLL);
  v30 = (void *)(v28 + 48);
  if ( v28 + 48 >= MmUserProbeAddress )
    v30 = (void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v30, &hsurf, 8uLL);
  if ( v19 )
    EngDeletePalette(v19);
  XDCOBJ::vAltUnlockNoNullSet(v47);
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v38);
  ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v50);
  return v27;
}
