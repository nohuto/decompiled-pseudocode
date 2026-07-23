/*
 * XREFs of MiRelocateImage @ 0x140AEA57C
 * Callers:
 *     MiCreateNewSection @ 0x14098D630 (MiCreateNewSection.c)
 *     MiGetSystemAddressForImage @ 0x140A5536C (MiGetSystemAddressForImage.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiOffsetToProtos @ 0x1402C28D0 (MiOffsetToProtos.c)
 *     PsGetSessionIdEx @ 0x14030CBE0 (PsGetSessionIdEx.c)
 *     MiWalkEntireImage @ 0x140349C00 (MiWalkEntireImage.c)
 *     PsSetSystemPagePriorityThread @ 0x140447AA0 (PsSetSystemPagePriorityThread.c)
 *     PsRevertToUserPagePriorityThread @ 0x14044F424 (PsRevertToUserPagePriorityThread.c)
 *     MI_LOCK_RELOCATIONS_EXCLUSIVE @ 0x1404505E0 (MI_LOCK_RELOCATIONS_EXCLUSIVE.c)
 *     MI_UNLOCK_RELOCATIONS_EXCLUSIVE @ 0x140455510 (MI_UNLOCK_RELOCATIONS_EXCLUSIVE.c)
 *     MiLegacyImageArchitecture @ 0x1404836E8 (MiLegacyImageArchitecture.c)
 *     MiSetDeleteOnClose @ 0x1404CCD3C (MiSetDeleteOnClose.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MiFreeRelocations @ 0x14093B4DC (MiFreeRelocations.c)
 *     MiFreeImageLoadConfig @ 0x14093B594 (MiFreeImageLoadConfig.c)
 *     MiParseImageLoadConfig @ 0x14093D160 (MiParseImageLoadConfig.c)
 *     MiLogRelocationFaults @ 0x14093DD34 (MiLogRelocationFaults.c)
 *     MiMapImageInSystemSpace @ 0x14093E220 (MiMapImageInSystemSpace.c)
 *     MiUnmapImageInSystemSpace @ 0x14093E4B4 (MiUnmapImageInSystemSpace.c)
 *     MiCompressRelocations @ 0x14094CB50 (MiCompressRelocations.c)
 *     MiUpdateImageSystemWideBitmaps @ 0x140974650 (MiUpdateImageSystemWideBitmaps.c)
 *     MiScanRelocationPage @ 0x140976FE0 (MiScanRelocationPage.c)
 *     SeSetImageBaseAddress @ 0x140A8DA70 (SeSetImageBaseAddress.c)
 *     RtlInitializeSystemOverrideDelta @ 0x140A91D9C (RtlInitializeSystemOverrideDelta.c)
 *     MiCreateFileOnlyImageFixupList @ 0x140AB2AE0 (MiCreateFileOnlyImageFixupList.c)
 *     MiSelectImageBase @ 0x140AEB020 (MiSelectImageBase.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiRelocateImage(__int64 a1, __int64 a2, int a3, int a4, __int64 a5, char a6)
{
  unsigned int v9; // ebx
  __int64 v10; // r8
  int v11; // r11d
  unsigned int v12; // ecx
  __int64 v13; // r12
  __int64 v14; // r10
  unsigned __int16 v15; // ax
  ULONG_PTR v16; // r13
  unsigned int v17; // r9d
  unsigned __int16 v18; // ax
  unsigned __int64 v19; // rdx
  __int16 v20; // r8
  unsigned int v21; // eax
  unsigned int v22; // r15d
  unsigned int v23; // r8d
  __int64 Pool; // rax
  __int64 *v25; // r14
  unsigned __int64 v27; // rcx
  void *v28; // rsi
  int Config; // esi
  int v30; // r9d
  __int64 v31; // rcx
  unsigned __int64 v32; // rcx
  __int64 v33; // rax
  _DWORD *v34; // rdx
  int v35; // ebx
  unsigned int v36; // ecx
  int v37; // esi
  __int64 v38; // r15
  __int64 v39; // rcx
  unsigned int v40; // r12d
  unsigned int v41; // r8d
  ULONG_PTR v42; // rdx
  unsigned int v43; // ecx
  unsigned __int64 v44; // rsi
  __int64 v45; // rcx
  unsigned int v46; // r8d
  unsigned __int64 v47; // rdx
  unsigned int v48; // eax
  unsigned __int64 v49; // rdx
  unsigned __int16 v50; // r8
  _WORD *v51; // r9
  unsigned int v52; // eax
  unsigned __int64 v53; // rsi
  __int64 v54; // r15
  unsigned int SessionId; // r12d
  unsigned int v56; // [rsp+30h] [rbp-118h]
  unsigned int v57; // [rsp+34h] [rbp-114h]
  unsigned int v58; // [rsp+34h] [rbp-114h]
  int v59; // [rsp+38h] [rbp-110h]
  unsigned int v60; // [rsp+38h] [rbp-110h]
  unsigned int Size; // [rsp+40h] [rbp-108h]
  int Size_4; // [rsp+44h] [rbp-104h]
  __int64 v64; // [rsp+48h] [rbp-100h] BYREF
  __int64 *v65; // [rsp+50h] [rbp-F8h]
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-F0h]
  unsigned int v67; // [rsp+60h] [rbp-E8h]
  unsigned __int64 v68; // [rsp+68h] [rbp-E0h]
  __int64 v69; // [rsp+70h] [rbp-D8h] BYREF
  PVOID P; // [rsp+78h] [rbp-D0h] BYREF
  unsigned __int64 v71; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v72; // [rsp+88h] [rbp-C0h]
  __int64 v73; // [rsp+90h] [rbp-B8h]
  __int64 v74; // [rsp+98h] [rbp-B0h]
  ULONG_PTR v75; // [rsp+A0h] [rbp-A8h]
  unsigned __int64 v76; // [rsp+A8h] [rbp-A0h]
  __int64 v77; // [rsp+B0h] [rbp-98h]
  unsigned __int64 v78[2]; // [rsp+C0h] [rbp-88h] BYREF
  int v79; // [rsp+D0h] [rbp-78h]

  v73 = a2;
  v72 = a1;
  memset_0(v78, 0, 0x50uLL);
  v69 = 0LL;
  P = 0LL;
  v9 = ((a6 & 1) << 8) + 2;
  v77 = *(_QWORD *)(a1 + 56);
  if ( MiLegacyImageArchitecture(*(_WORD *)(v77 + 48)) )
  {
    v9 |= 0x40u;
    if ( ((unsigned __int8)v11 & *(_BYTE *)(v10 + 44)) != 0 )
      return 0LL;
    v12 = (*(_WORD *)(v10 + 46) & 0x1000) != 0 ? 0xC000007B : 0;
  }
  else
  {
    v12 = -1073741701;
  }
  v56 = v12;
  v13 = *(unsigned int *)(a2 + 88);
  LODWORD(v69) = v13;
  v14 = *(unsigned int *)(a2 + 92);
  Size = *(_DWORD *)(a2 + 92);
  HIDWORD(v69) = Size;
  if ( (_DWORD)v13 )
  {
    if ( !(_DWORD)v14 )
      return v12;
  }
  else
  {
    if ( (_DWORD)v14 )
      return v12;
    v9 &= ~2u;
  }
  v15 = *(_WORD *)(a1 + 12);
  if ( (v15 & 0x4000) != 0 )
    return 0LL;
  v16 = *(_QWORD *)a1;
  v75 = v16;
  v76 = *(_QWORD *)(v16 + 96) & 0xFFFFFFFFFFFFFFF8uLL;
  v17 = a3 + 48;
  v59 = a3 + 48;
  v18 = v15 >> 15;
  if ( v18 == (_WORD)v11 )
  {
    v17 = a3 + 52;
    v59 = a3 + 52;
  }
  if ( ((4 * (v11 ^ v18) + 3) & v17) != 0 )
    return v12;
  v19 = *(_QWORD *)(a1 + 32);
  v71 = v19;
  if ( (v9 & 0x40) != 0 && !a4 )
  {
    v20 = *(_WORD *)(v10 + 46);
    if ( (v20 & 0x40) == 0 && MmRegistryState != -1 && (v20 & 0x1000) == 0 )
      return 0LL;
  }
  v21 = *(_DWORD *)(a1 + 8);
  v22 = v21;
  if ( (v9 & 2) == 0 )
    v22 = v11 + (v17 >> 12);
  v67 = v21 << 12;
  v23 = v14 + v13;
  if ( (int)v14 + (int)v13 > v21 << 12
    || (v9 & 2) != 0 && (v23 <= (unsigned int)v13 || v19 + v13 <= v19 || v19 + v23 <= v19) )
  {
    return v12;
  }
  v65 = (__int64 *)(v14 + 104 + 8LL * v22);
  v64 = 0LL;
  v68 = 0LL;
  Size_4 = 0;
  CurrentThread = KeGetCurrentThread();
  Pool = MiAllocatePool(0x100uLL, (ULONG_PTR)v65, 1699900749);
  v25 = (__int64 *)Pool;
  v74 = Pool;
  if ( !Pool )
    return 3221225626LL;
  v27 = Pool;
  do
    v27 += 4096LL;
  while ( v27 < (unsigned __int64)v65 + Pool );
  *(_BYTE *)(Pool + 64) = 0;
  *(_DWORD *)(Pool + 56) = v22;
  *(_QWORD *)(Pool + 24) = 0LL;
  if ( (v9 & 2) == 0 )
    goto LABEL_36;
  if ( (int)MiMapImageInSystemSpace((__int64 *)v16, 3, (__int64)v78) < 0 )
  {
    ExFreePoolWithTag(v25, 0);
    MiSetDeleteOnClose(v16, 0);
    return 0LL;
  }
  v28 = (void *)v78[0];
  v68 = v78[0];
  Size_4 = PsSetSystemPagePriorityThread((__int64)CurrentThread, 1);
  v9 |= 1u;
  Config = MiParseImageLoadConfig((_QWORD *)v16, v28, v73, v79 << 12, (__int64)(v25 + 9));
  if ( Config >= 0 )
  {
LABEL_36:
    v57 = v9;
    v30 = (v9 >= 0x100) | 2;
    if ( (a6 & 2) == 0 )
      v30 = v9 >= 0x100;
    Config = MiSelectImageBase(v72, (_DWORD)v25, a4, v30, (__int64)&v64);
    if ( Config < 0 )
    {
      MiFreeImageLoadConfig(v25 + 9);
      ExFreePoolWithTag(v25, 0);
      if ( !a4 )
        Config = v56;
      goto LABEL_126;
    }
    Config = MiUpdateImageSystemWideBitmaps(v16);
    if ( Config < 0 )
      goto LABEL_125;
    if ( (v9 & 2) != 0 )
    {
      v31 = v25[12];
      if ( v31 )
        RtlInitializeSystemOverrideDelta(
          v31,
          v64,
          v79 << 12,
          (__int64)PspSystemDlls[0][4],
          *((_DWORD *)PspSystemDlls[0] + 3));
    }
    *((_DWORD *)v25 + 15) = v59;
    v32 = v71;
    v25[5] = v64 - v71;
    if ( a5 == -1 )
      v33 = 0LL;
    else
      v33 = a5 - v32;
    v25[6] = v33;
    v34 = v25 + 13;
    *v25 = (__int64)(v25 + 13);
    v65 = &v25[v22 + 13];
    v25[4] = (__int64)v65;
    v35 = v9 | 0x10;
    if ( v25[11] )
      v35 = v57 | 0x18;
    v36 = v35;
    v9 = v35 | 0x80;
    if ( !v25[12] )
      v9 = v36;
    if ( (v9 & 2) != 0 )
    {
      v37 = Size;
      memmove(&v25[v22 + 13], (const void *)(v68 + (unsigned int)v13), Size);
      LODWORD(v38) = 0;
      if ( (v9 & 8) != 0 )
      {
        v39 = v25[11];
        if ( v39 )
        {
          LODWORD(v38) = v79 & 0xFFFFF;
          do
          {
            if ( !(_DWORD)v38 )
              break;
            v38 = (unsigned int)(v38 - 1);
          }
          while ( !*(_QWORD *)(v39 + 8 * v38 + 64) );
        }
      }
      if ( (v9 & 0x80u) != 0 && (unsigned int)v38 <= *(_DWORD *)(v25[12] + 36) )
        LODWORD(v38) = *(_DWORD *)(v25[12] + 36);
      v40 = Size;
      v41 = 0;
      if ( Size )
      {
        v42 = (ULONG_PTR)v65;
        while ( v40 >= 0xA )
        {
          v43 = *(_DWORD *)(v42 + 4);
          v60 = v43;
          if ( v43 > v40 || (v43 & 1) != 0 || v43 < 8 )
            goto LABEL_104;
          v44 = *(unsigned int *)v42;
          if ( (v44 & 0xFFF) != 0 )
            v9 &= ~0x10u;
          if ( (int)v44 + 4096 < (unsigned int)v44 || (int)v44 + 4096 > v67 || (unsigned int)v44 < v41 )
            goto LABEL_104;
          if ( v43 == 8 )
          {
            v40 -= 8;
            v9 &= ~0x10u;
          }
          else
          {
            if ( (MiFlags & 0x20000) != 0 && (*(_DWORD *)(v16 + 92) & 0xC0000) != 0 )
            {
              v71 = 0LL;
              if ( (*(_DWORD *)(MiOffsetToProtos(v16, v44, &v71) + 32) & 4) != 0 )
              {
                Config = -1073741701;
                goto LABEL_124;
              }
              v43 = v60;
              v42 = (ULONG_PTR)v65;
            }
            if ( (unsigned int)v44 >> 12 > (unsigned int)v38 )
              LODWORD(v38) = (unsigned int)v44 >> 12;
            v25[(v44 >> 12) + 13] |= v42;
            v58 = (v44 & 0xFFFFF000) + 4096;
            v40 -= v43;
            Config = MiScanRelocationPage(v68, v44, (v43 - 8) >> 1, (_WORD *)(v42 + 8), v16, (__int64)v25);
            if ( Config < 0 )
            {
              if ( Config == -1073741207 )
              {
                Config = 0;
              }
              else if ( Config == -1073741701 )
              {
                Config = v56;
              }
              goto LABEL_124;
            }
            v9 |= 4u;
            v43 = v60;
            v42 = (ULONG_PTR)v65;
            v41 = v58;
          }
          v42 += v43;
          v65 = (__int64 *)v42;
          if ( !v40 )
          {
            v37 = Size;
            goto LABEL_84;
          }
        }
        if ( v40 != 8 )
          goto LABEL_104;
        v37 = Size - 8;
      }
LABEL_84:
      MiUnmapImageInSystemSpace(v78);
      PsRevertToUserPagePriorityThread((__int64)CurrentThread, Size_4);
      LOWORD(v9) = v9 & 0xFFFE;
      v45 = v25[2];
      if ( v45 )
      {
        while ( 1 )
        {
          v46 = *(_DWORD *)(v45 + 12);
          v47 = v25[((unsigned __int64)v46 >> 12) + 13];
          v48 = v46 >> 12;
          if ( v46 >> 12 <= (unsigned int)v38 )
            v48 = v38;
          LODWORD(v38) = v48;
          if ( v47 > 1 )
          {
            v49 = v47 & 0xFFFFFFFFFFFFFFFEuLL;
            v50 = v46 & 0xFFF;
            v51 = (_WORD *)(v49 + 8);
            v52 = (unsigned int)(*(_DWORD *)(v49 + 4) - 8) >> 1;
            if ( v52 )
              break;
          }
LABEL_92:
          v45 = *(_QWORD *)v45;
          if ( !v45 )
            goto LABEL_93;
        }
        while ( *v51 < 0x1000u || (unsigned __int16)(*v51 & 0xFFF) >= v50 )
        {
          ++v51;
          if ( !--v52 )
            goto LABEL_92;
        }
LABEL_104:
        Config = v56;
LABEL_124:
        if ( (v9 & 0x20) != 0 )
          goto LABEL_126;
LABEL_125:
        MiFreeRelocations((_DWORD *)v16, v25);
        goto LABEL_126;
      }
LABEL_93:
      MiLogRelocationFaults(v16, (unsigned int *)&v69, (__int64)v25);
      *((_DWORD *)v25 + 14) = v38 + 1;
      if ( (v9 & 0x14) == 0x14 )
        v25 = (__int64 *)MiCompressRelocations((__int64)v25, v37);
      v34 = v25 + 13;
    }
    *(_QWORD *)&v34[2 * ((unsigned __int64)*((unsigned int *)v25 + 15) >> 12)] |= 1uLL;
    if ( (*(_BYTE *)(v16 + 62) & 0xC) != 4
      || (Config = MiCreateFileOnlyImageFixupList(v16, (__int64)v25, &P), Config >= 0) )
    {
      LOWORD(v9) = v9 | 0x20;
      MI_LOCK_RELOCATIONS_EXCLUSIVE((__int64)CurrentThread, (__int64)v25);
      v53 = v76;
      *(_QWORD *)(v76 + 32) = v25;
      *(_QWORD *)(v72 + 32) = v64;
      v54 = v77;
      *(_QWORD *)v77 += v25[5];
      *(_DWORD *)(v16 + 92) |= 0x400000u;
      if ( (*(_DWORD *)(v16 + 56) & 0x800) != 0 )
        MiSetDeleteOnClose(v16, 0);
      if ( (MiFlags & 0x2000) == 0
        || (*(_DWORD *)(v16 + 92) & 0xC0000) == 0
        || (Config = SeSetImageBaseAddress(*(_QWORD *)(v53 + 40) & 0xFFFFFFFFFFFFFFF8uLL, v64), Config >= 0) )
      {
        if ( a4 )
          SessionId = -1;
        else
          SessionId = PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
        if ( (v9 & 0x188) == 0x100 )
        {
          Config = 0;
        }
        else if ( (*(_BYTE *)(v16 + 62) & 0xC) != 4
               || (Config = MiWalkEntireImage(v16, (__int64)P, 4u, SessionId), Config >= 0) )
        {
          Config = MiWalkEntireImage(v16, 0LL, 2u, SessionId);
        }
      }
      MI_UNLOCK_RELOCATIONS_EXCLUSIVE((__int64)CurrentThread, (__int64)v25);
      if ( Config >= 0 && (v9 & 0x100) == 0 )
        *(_BYTE *)(v54 + 51) |= 4u;
    }
    goto LABEL_124;
  }
  ExFreePoolWithTag(v25, 0);
LABEL_126:
  if ( (v9 & 1) != 0 )
  {
    MiUnmapImageInSystemSpace(v78);
    PsRevertToUserPagePriorityThread((__int64)CurrentThread, Size_4);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)Config;
}
