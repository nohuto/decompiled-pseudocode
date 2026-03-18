/*
 * XREFs of MiGetSystemAddressForImage @ 0x140A5E524
 * Callers:
 *     MmLoadSystemImageEx @ 0x1409C87D8 (MmLoadSystemImageEx.c)
 * Callees:
 *     MiSectionControlArea @ 0x1402D4800 (MiSectionControlArea.c)
 *     MiGetPteAddress @ 0x140437550 (MiGetPteAddress.c)
 *     RtlImageNtHeader @ 0x14043E310 (RtlImageNtHeader.c)
 *     MiAddPrivateFixupEntryForSystemImage @ 0x1404B02A0 (MiAddPrivateFixupEntryForSystemImage.c)
 *     MiGetBaseLoaderPortion @ 0x1404D0508 (MiGetBaseLoaderPortion.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     MiReleasePrivilegedPtes @ 0x1407E8404 (MiReleasePrivilegedPtes.c)
 *     MiMapImageInSystemSpace @ 0x1408F5378 (MiMapImageInSystemSpace.c)
 *     MiUnmapImageInSystemSpace @ 0x1408F560C (MiUnmapImageInSystemSpace.c)
 *     MiRelocateImage @ 0x1408F5784 (MiRelocateImage.c)
 *     MiSelectSystemImageAddress @ 0x1408F8034 (MiSelectSystemImageAddress.c)
 *     MiBytesToMapSystemImage @ 0x140A5E6FC (MiBytesToMapSystemImage.c)
 *     MiReservePrivilegedPtes @ 0x140A5E748 (MiReservePrivilegedPtes.c)
 *     MiReturnSystemImageAddress @ 0x140A67CC0 (MiReturnSystemImageAddress.c)
 *     MiImageSuitableForSystem @ 0x140A94608 (MiImageSuitableForSystem.c)
 */

unsigned __int64 __fastcall MiGetSystemAddressForImage(__int64 a1, int a2)
{
  char v2; // r12
  unsigned __int64 v4; // r14
  __int64 v5; // rsi
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdi
  int v8; // r8d
  unsigned __int64 v9; // rsi
  int v10; // edx
  __int64 v11; // rax
  unsigned __int64 v13; // rax
  ULONG_PTR PteAddress; // r15
  int v15; // esi
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rcx
  int v19; // r13d
  int v20; // edx
  int v21; // eax
  int v22; // eax
  int v23; // edx
  int v24; // eax
  int v25; // [rsp+30h] [rbp-118h] BYREF
  int v26; // [rsp+34h] [rbp-114h]
  int v27; // [rsp+38h] [rbp-110h]
  int v28; // [rsp+40h] [rbp-108h]
  unsigned __int64 v29; // [rsp+48h] [rbp-100h]
  unsigned __int64 v30[10]; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v31; // [rsp+A0h] [rbp-A8h] BYREF
  int v32; // [rsp+A8h] [rbp-A0h]
  int v33; // [rsp+ACh] [rbp-9Ch]
  int v34; // [rsp+B0h] [rbp-98h]
  int v35; // [rsp+B4h] [rbp-94h]
  int v36; // [rsp+B8h] [rbp-90h]
  int v37; // [rsp+BCh] [rbp-8Ch]
  __int64 v38; // [rsp+C0h] [rbp-88h]
  __int64 v39; // [rsp+C8h] [rbp-80h]
  __int16 v40; // [rsp+D0h] [rbp-78h]
  __int16 v41; // [rsp+D2h] [rbp-76h]
  __int16 v42; // [rsp+D4h] [rbp-74h]
  __int16 v43; // [rsp+D6h] [rbp-72h]
  __int16 v44; // [rsp+D8h] [rbp-70h]
  __int16 v45; // [rsp+DAh] [rbp-6Eh]
  __int16 v46; // [rsp+DCh] [rbp-6Ch]
  int v47; // [rsp+E0h] [rbp-68h]
  int v48; // [rsp+E4h] [rbp-64h]
  int v49; // [rsp+E8h] [rbp-60h]
  int v50; // [rsp+ECh] [rbp-5Ch]
  __int64 v51; // [rsp+F0h] [rbp-58h]
  __int64 v52; // [rsp+F8h] [rbp-50h]
  __int64 v53; // [rsp+100h] [rbp-48h]
  __int64 v54; // [rsp+108h] [rbp-40h]

  v2 = a2;
  v28 = a2;
  memset_0(&v31, 0, 0x70uLL);
  memset_0(v30, 0, sizeof(v30));
  v4 = MiSectionControlArea(*(_QWORD *)(a1 + 112));
  v29 = v4;
  v5 = *(_QWORD *)v4;
  v6 = MiBytesToMapSystemImage((unsigned int)(*(_DWORD *)(*(_QWORD *)v4 + 8LL) << 12));
  if ( !v6 )
    return 0LL;
  v7 = v6 >> 12;
  v27 = v6 >> 12;
  if ( !*(_QWORD *)((*(_QWORD *)(v4 + 96) & 0xFFFFFFFFFFFFFFF8uLL) + 32) )
  {
    v8 = 0;
    v25 = 0;
    goto LABEL_12;
  }
  v8 = 1;
  v25 = 1;
  if ( (*(_DWORD *)(v4 + 56) & 0x20000000) == 0 )
    goto LABEL_12;
  v9 = *(_QWORD *)(v5 + 32);
  if ( !v9 )
    goto LABEL_12;
  if ( (*(_BYTE *)(MiGetBaseLoaderPortion(a1) + 184) & 4) != 0 )
    v10 = 1;
  if ( v10 == 1 || (v2 & 2) != 0 )
  {
LABEL_12:
    if ( v8 )
      goto LABEL_13;
    v15 = MiMapImageInSystemSpace((__int64 *)v4, 3, (__int64)v30);
    if ( v15 < 0 )
      return 0LL;
    v16 = v30[0];
    v26 = 0;
    v17 = RtlImageNtHeader(v30[0]);
    v18 = v17;
    v19 = *(_DWORD *)(v16 + 60);
    v26 = v19;
    v40 = *(_WORD *)(v17 + 24);
    v32 = *(_DWORD *)(v17 + 60);
    v33 = *(_DWORD *)(v17 + 56);
    v34 = *(_DWORD *)(v17 + 80);
    if ( v40 == 523 )
    {
      v20 = *(_DWORD *)(v17 + 128);
      v35 = v20;
      v31 = *(_QWORD *)(v17 + 48);
      v36 = *(_DWORD *)(v17 + 84);
      v37 = *(_DWORD *)(v17 + 40);
      v38 = *(_QWORD *)(v17 + 96);
      v39 = *(_QWORD *)(v17 + 104);
      v41 = *(_WORD *)(v17 + 92);
      v42 = *(_WORD *)(v17 + 72);
      v43 = *(_WORD *)(v17 + 74);
      v44 = *(_WORD *)(v17 + 64);
      v45 = *(_WORD *)(v17 + 66);
      v46 = *(_WORD *)(v17 + 94);
      v47 = *(_DWORD *)(v17 + 88);
      v48 = *(_DWORD *)(v17 + 28);
      v54 = 0LL;
      if ( *(_DWORD *)(v17 + 132) > 6u )
      {
        v21 = *(_DWORD *)(v17 + 184);
        if ( v21 )
        {
          LODWORD(v54) = v21;
          HIDWORD(v54) = *(_DWORD *)(v18 + 188);
        }
      }
      if ( *(_DWORD *)(v18 + 132) > 0xCu )
      {
        v49 = *(_DWORD *)(v18 + 232);
        v50 = *(_DWORD *)(v18 + 236);
      }
      if ( *(_DWORD *)(v18 + 132) <= 0xEu )
      {
        v51 = 0LL;
      }
      else
      {
        v51 = *(_QWORD *)(v18 + 248);
        if ( *(_DWORD *)(v18 + 248) && *(_DWORD *)(v18 + 252) )
          v35 = v20 | 1;
      }
      if ( *(_DWORD *)(v18 + 132) <= 5u )
        v52 = 0LL;
      else
        v52 = *(_QWORD *)(v18 + 176);
      if ( *(_DWORD *)(v18 + 132) > 0xAu )
      {
        LODWORD(v53) = *(_DWORD *)(v18 + 216);
        v22 = *(_DWORD *)(v18 + 220);
LABEL_52:
        HIDWORD(v53) = v22;
LABEL_54:
        MiUnmapImageInSystemSpace(v30);
        if ( (int)MiRelocateImage(*(_QWORD *)v4, (__int64)&v31, v19, 1, -1LL, 1) < 0 )
          return 0LL;
        MiImageSuitableForSystem(v4, &v25);
        if ( !v25 && (*(_BYTE *)(v4 + 62) & 0xC) == 0 )
          return 0LL;
LABEL_13:
        v13 = MiSelectSystemImageAddress((unsigned int)v7);
        v9 = v13;
        if ( !v13 )
          return 0LL;
        PteAddress = MiGetPteAddress(v13);
        if ( (int)MiReservePrivilegedPtes(v4, PteAddress, (unsigned int)v7, v2 & 0x20) >= 0 )
        {
          if ( (unsigned int)MiAddPrivateFixupEntryForSystemImage(v4, v9) )
            return v9;
          MiReleasePrivilegedPtes(PteAddress, (unsigned int)v7);
        }
        MiReturnSystemImageAddress(v9, (unsigned int)((_DWORD)v7 << 12));
        return 0LL;
      }
    }
    else
    {
      v23 = *(_DWORD *)(v17 + 112);
      v35 = v23;
      v31 = *(unsigned int *)(v17 + 52);
      v36 = *(_DWORD *)(v17 + 84);
      v37 = *(_DWORD *)(v17 + 40);
      v38 = *(unsigned int *)(v17 + 96);
      v39 = *(unsigned int *)(v17 + 100);
      v41 = *(_WORD *)(v17 + 92);
      v42 = *(_WORD *)(v17 + 72);
      v43 = *(_WORD *)(v17 + 74);
      v44 = *(_WORD *)(v17 + 64);
      v45 = *(_WORD *)(v17 + 66);
      v46 = *(_WORD *)(v17 + 94);
      v47 = *(_DWORD *)(v17 + 88);
      v48 = *(_DWORD *)(v17 + 28);
      v54 = 0LL;
      if ( *(_DWORD *)(v17 + 116) > 6u )
      {
        v24 = *(_DWORD *)(v17 + 168);
        if ( v24 )
        {
          LODWORD(v54) = v24;
          HIDWORD(v54) = *(_DWORD *)(v18 + 172);
        }
      }
      if ( *(_DWORD *)(v18 + 116) > 0xCu )
      {
        v49 = *(_DWORD *)(v18 + 216);
        v50 = *(_DWORD *)(v18 + 220);
      }
      if ( *(_DWORD *)(v18 + 116) <= 0xEu )
      {
        v51 = 0LL;
      }
      else
      {
        v51 = *(_QWORD *)(v18 + 232);
        if ( *(_DWORD *)(v18 + 232) && *(_DWORD *)(v18 + 236) )
          v35 = v23 | 1;
      }
      if ( *(_DWORD *)(v18 + 116) <= 5u )
        v52 = 0LL;
      else
        v52 = *(_QWORD *)(v18 + 160);
      if ( *(_DWORD *)(v18 + 116) > 0xAu )
      {
        LODWORD(v53) = *(_DWORD *)(v18 + 200);
        v22 = *(_DWORD *)(v18 + 204);
        goto LABEL_52;
      }
    }
    v53 = 0LL;
    goto LABEL_54;
  }
  v11 = MiGetPteAddress(v9);
  if ( (int)MiReservePrivilegedPtes(v4, v11, (unsigned int)v7, v2 & 0x20) < 0 )
    return 0LL;
  return v9;
}
