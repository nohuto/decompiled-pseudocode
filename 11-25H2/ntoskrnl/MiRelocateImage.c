/*
 * XREFs of MiRelocateImage @ 0x140941BE8
 * Callers:
 *     MiCreateNewSection @ 0x14093EAC0 (MiCreateNewSection.c)
 *     MiGetSystemAddressForImage @ 0x140A5B2CC (MiGetSystemAddressForImage.c)
 * Callees:
 *     PsGetSessionIdEx @ 0x140246440 (PsGetSessionIdEx.c)
 *     MiOffsetToProtos @ 0x1402BBD30 (MiOffsetToProtos.c)
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     MiWalkEntireImage @ 0x14033BD50 (MiWalkEntireImage.c)
 *     MI_UNLOCK_RELOCATIONS_EXCLUSIVE @ 0x1403D7814 (MI_UNLOCK_RELOCATIONS_EXCLUSIVE.c)
 *     PsSetSystemPagePriorityThread @ 0x140450A10 (PsSetSystemPagePriorityThread.c)
 *     PsRevertToUserPagePriorityThread @ 0x14045AA10 (PsRevertToUserPagePriorityThread.c)
 *     MI_LOCK_RELOCATIONS_EXCLUSIVE @ 0x14045BEC8 (MI_LOCK_RELOCATIONS_EXCLUSIVE.c)
 *     MiLegacyImageArchitecture @ 0x140488E10 (MiLegacyImageArchitecture.c)
 *     MiSetDeleteOnClose @ 0x1404D3D60 (MiSetDeleteOnClose.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     MiSelectImageBase @ 0x1409401DC (MiSelectImageBase.c)
 *     MiUpdateImageSystemWideBitmaps @ 0x140940578 (MiUpdateImageSystemWideBitmaps.c)
 *     SeSetImageBaseAddress @ 0x140941BC0 (SeSetImageBaseAddress.c)
 *     MiScanRelocationPage @ 0x140942580 (MiScanRelocationPage.c)
 *     MiFreeRelocations @ 0x14094288C (MiFreeRelocations.c)
 *     MiFreeImageLoadConfig @ 0x140942944 (MiFreeImageLoadConfig.c)
 *     MiParseImageLoadConfig @ 0x140942E10 (MiParseImageLoadConfig.c)
 *     MiLogRelocationFaults @ 0x1409439E4 (MiLogRelocationFaults.c)
 *     MiMapImageInSystemSpace @ 0x140943ED0 (MiMapImageInSystemSpace.c)
 *     MiUnmapImageInSystemSpace @ 0x140944164 (MiUnmapImageInSystemSpace.c)
 *     MiCompressRelocations @ 0x140978630 (MiCompressRelocations.c)
 *     RtlInitializeSystemOverrideDelta @ 0x140A91470 (RtlInitializeSystemOverrideDelta.c)
 *     MiCreateFileOnlyImageFixupList @ 0x140AB4254 (MiCreateFileOnlyImageFixupList.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiRelocateImage(__int64 a1, __int64 a2, int a3, unsigned int a4, __int64 a5, int a6)
{
  unsigned int v9; // ebx
  __int64 v10; // r8
  unsigned int v11; // r12d
  __int64 v12; // rcx
  __int64 v13; // r11
  unsigned __int16 v14; // ax
  ULONG_PTR v15; // r13
  unsigned int v16; // r9d
  unsigned __int16 v17; // ax
  unsigned __int64 v18; // rdx
  __int16 v19; // r8
  unsigned int v20; // eax
  unsigned int v21; // r15d
  unsigned int v22; // r8d
  __int64 Pool; // rax
  _QWORD *v24; // r14
  unsigned __int64 v25; // rcx
  int Config; // esi
  __int64 v27; // rcx
  unsigned __int64 v28; // rcx
  __int64 v29; // rax
  _QWORD *v30; // rdx
  int v31; // ebx
  unsigned int v32; // ecx
  unsigned int v33; // esi
  __int64 v34; // r15
  __int64 v35; // rcx
  unsigned int v36; // r9d
  signed __int64 v37; // r8
  unsigned int v38; // edx
  unsigned __int64 v39; // rcx
  __int64 *i; // r8
  unsigned int v41; // edx
  unsigned __int64 v42; // rcx
  unsigned int v43; // eax
  unsigned __int64 v44; // rcx
  unsigned int v45; // eax
  unsigned __int16 v46; // dx
  _WORD *v47; // r9
  unsigned __int64 v48; // rsi
  __int64 v49; // r15
  unsigned int SessionId; // r12d
  __int64 v52; // rsi
  unsigned int v53; // [rsp+30h] [rbp-128h]
  int v54; // [rsp+30h] [rbp-128h]
  unsigned int v55; // [rsp+30h] [rbp-128h]
  unsigned int Size; // [rsp+34h] [rbp-124h]
  ULONG_PTR v58; // [rsp+40h] [rbp-118h]
  unsigned int v59; // [rsp+40h] [rbp-118h]
  unsigned int v60; // [rsp+40h] [rbp-118h]
  unsigned int v61; // [rsp+40h] [rbp-118h]
  int v62; // [rsp+48h] [rbp-110h]
  __int64 v63; // [rsp+48h] [rbp-110h]
  int v64; // [rsp+50h] [rbp-108h]
  unsigned __int64 v65; // [rsp+58h] [rbp-100h] BYREF
  unsigned int v66; // [rsp+60h] [rbp-F8h]
  struct _KTHREAD *CurrentThread; // [rsp+68h] [rbp-F0h]
  __int64 v68; // [rsp+70h] [rbp-E8h]
  __int64 v69; // [rsp+78h] [rbp-E0h] BYREF
  PVOID P; // [rsp+80h] [rbp-D8h] BYREF
  unsigned __int64 v71; // [rsp+88h] [rbp-D0h] BYREF
  __int64 v72; // [rsp+90h] [rbp-C8h]
  __int64 v73; // [rsp+A0h] [rbp-B8h]
  __int64 v74; // [rsp+A8h] [rbp-B0h]
  ULONG_PTR v75; // [rsp+B0h] [rbp-A8h]
  unsigned __int64 v76; // [rsp+B8h] [rbp-A0h]
  __int64 v77; // [rsp+C0h] [rbp-98h]
  _QWORD v78[2]; // [rsp+D0h] [rbp-88h] BYREF
  int v79; // [rsp+E0h] [rbp-78h]

  v73 = a2;
  v72 = a1;
  memset_0(v78, 0, 0x50uLL);
  v69 = 0LL;
  v9 = 2;
  P = 0LL;
  v77 = *(_QWORD *)(a1 + 56);
  if ( MiLegacyImageArchitecture(*(_WORD *)(v77 + 48)) )
  {
    v9 = 66;
    if ( (*(_BYTE *)(v10 + 44) & 1) != 0 )
      return 0LL;
    v11 = (*(_WORD *)(v10 + 46) & 0x1000) != 0 ? 0xC000007B : 0;
  }
  else
  {
    v11 = -1073741701;
  }
  v12 = *(unsigned int *)(a2 + 88);
  v53 = v12;
  LODWORD(v69) = *(_DWORD *)(a2 + 88);
  v13 = *(unsigned int *)(a2 + 92);
  Size = *(_DWORD *)(a2 + 92);
  HIDWORD(v69) = Size;
  if ( (_DWORD)v12 )
  {
    if ( !(_DWORD)v13 )
      return v11;
  }
  else
  {
    if ( (_DWORD)v13 )
      return v11;
    v9 &= ~2u;
  }
  v14 = *(_WORD *)(a1 + 12);
  if ( (v14 & 0x4000) != 0 )
    return 0LL;
  v15 = *(_QWORD *)a1;
  v75 = v15;
  v76 = *(_QWORD *)(v15 + 96) & 0xFFFFFFFFFFFFFFF8uLL;
  v16 = a3 + 48;
  v62 = a3 + 48;
  v17 = v14 >> 15;
  if ( v17 == 1 )
  {
    v16 = a3 + 52;
    v62 = a3 + 52;
  }
  if ( ((4 * (v17 ^ 1) + 3) & v16) != 0 )
    return v11;
  v18 = *(_QWORD *)(a1 + 32);
  v71 = v18;
  if ( v9 >= 0x40 && !a4 )
  {
    v19 = *(_WORD *)(v10 + 46);
    if ( (v19 & 0x40) == 0 && MmRegistryState != -1 && (v19 & 0x1000) == 0 )
      return 0LL;
  }
  v20 = *(_DWORD *)(a1 + 8);
  v21 = v20;
  if ( (v9 & 2) == 0 )
    v21 = (v16 >> 12) + 1;
  v66 = v20 << 12;
  v22 = v13 + v12;
  if ( (int)v13 + (int)v12 > v20 << 12
    || (v9 & 2) != 0 && (v22 <= (unsigned int)v12 || v18 + v12 <= v18 || v18 + v22 <= v18) )
  {
    return v11;
  }
  v58 = v13 + 104 + 8LL * v21;
  v65 = 0LL;
  v68 = 0LL;
  v64 = 0;
  CurrentThread = KeGetCurrentThread();
  Pool = MiAllocatePool(0x100uLL, v58, 1699900749);
  v24 = (_QWORD *)Pool;
  v74 = Pool;
  if ( !Pool )
    return 3221225626LL;
  v25 = Pool;
  do
    v25 += 4096LL;
  while ( v25 < Pool + v58 );
  *(_BYTE *)(Pool + 64) = 0;
  *(_DWORD *)(Pool + 56) = v21;
  *(_QWORD *)(Pool + 24) = 0LL;
  if ( (v9 & 2) == 0 )
    goto LABEL_24;
  if ( (int)MiMapImageInSystemSpace(v15, 3LL, v78) < 0 )
  {
    ExFreePoolWithTag(v24, 0);
    MiSetDeleteOnClose(v15, 0);
    return 0LL;
  }
  v52 = v78[0];
  v68 = v78[0];
  v64 = PsSetSystemPagePriorityThread((__int64)CurrentThread, 1);
  v9 |= 1u;
  Config = MiParseImageLoadConfig(v15, v52, v73, (unsigned int)(v79 << 12), v24 + 9);
  if ( Config >= 0 )
  {
LABEL_24:
    v59 = v9;
    Config = MiSelectImageBase(v72, (__int64)v24, a4, a6, &v65);
    if ( Config < 0 )
    {
      MiFreeImageLoadConfig(v24 + 9);
      ExFreePoolWithTag(v24, 0);
      if ( !a4 )
        Config = v11;
    }
    else
    {
      Config = MiUpdateImageSystemWideBitmaps(v15);
      if ( Config < 0 )
        goto LABEL_83;
      if ( (v9 & 2) != 0 )
      {
        v27 = v24[12];
        if ( v27 )
          RtlInitializeSystemOverrideDelta(v27, v65, v79 << 12, PspSystemDlls[0][4], *((_DWORD *)PspSystemDlls[0] + 3));
      }
      *((_DWORD *)v24 + 15) = v62;
      v28 = v71;
      v24[5] = v65 - v71;
      if ( a5 == -1 )
        v29 = 0LL;
      else
        v29 = a5 - v28;
      v24[6] = v29;
      v30 = v24 + 13;
      *v24 = v24 + 13;
      v63 = (__int64)&v24[v21 + 13];
      v24[4] = v63;
      v31 = v9 | 0x10;
      if ( v24[11] )
        v31 = v59 | 0x18;
      v32 = v31;
      v9 = v31 | 0x80;
      if ( !v24[12] )
        v9 = v32;
      if ( (v9 & 2) != 0 )
      {
        v33 = Size;
        memmove(&v24[v21 + 13], (const void *)(v68 + v53), Size);
        LODWORD(v34) = 0;
        if ( (v9 & 8) != 0 )
        {
          v35 = v24[11];
          if ( v35 )
          {
            LODWORD(v34) = v79 & 0xFFFFF;
            while ( (_DWORD)v34 )
            {
              v34 = (unsigned int)(v34 - 1);
              if ( *(_QWORD *)(v35 + 8 * v34 + 64) )
                goto LABEL_38;
            }
            LODWORD(v34) = 0;
          }
        }
LABEL_38:
        if ( v9 >= 0x80 && (unsigned int)v34 <= *(_DWORD *)(v24[12] + 36LL) )
          LODWORD(v34) = *(_DWORD *)(v24[12] + 36LL);
        v36 = 0;
        while ( 2 )
        {
          v37 = v63;
          while ( 1 )
          {
            if ( !v33 )
              goto LABEL_57;
            if ( v33 < 0xA )
            {
              if ( v33 != 8 )
              {
LABEL_108:
                Config = v11;
                goto LABEL_82;
              }
              Size -= 8;
LABEL_57:
              MiUnmapImageInSystemSpace(v78);
              PsRevertToUserPagePriorityThread((__int64)CurrentThread, v64);
              LOBYTE(v9) = v9 & 0xFE;
              for ( i = (__int64 *)v24[2]; i; i = (__int64 *)*i )
              {
                v41 = *((_DWORD *)i + 3);
                v42 = v24[((unsigned __int64)v41 >> 12) + 13];
                v43 = v41 >> 12;
                if ( v41 >> 12 <= (unsigned int)v34 )
                  v43 = v34;
                LODWORD(v34) = v43;
                if ( v42 > 1 )
                {
                  v44 = v42 & 0xFFFFFFFFFFFFFFFEuLL;
                  v45 = (unsigned int)(*(_DWORD *)(v44 + 4) - 8) >> 1;
                  v46 = v41 & 0xFFF;
                  v47 = (_WORD *)(v44 + 8);
                  while ( v45 )
                  {
                    if ( *v47 >= 0x1000u && (unsigned __int16)(*v47 & 0xFFF) < v46 )
                      goto LABEL_108;
                    ++v47;
                    --v45;
                  }
                }
              }
              MiLogRelocationFaults(v15, &v69, v24);
              *((_DWORD *)v24 + 14) = v34 + 1;
              if ( (v9 & 0x14) == 0x14 )
                v24 = (_QWORD *)MiCompressRelocations(v24, Size);
              v30 = v24 + 13;
              goto LABEL_70;
            }
            v38 = *(_DWORD *)(v37 + 4);
            v60 = v38;
            if ( v38 > v33 || (v38 & 1) != 0 || v38 < 8 )
              goto LABEL_108;
            v39 = *(unsigned int *)v37;
            v54 = v39;
            if ( (v39 & 0xFFF) != 0 )
              v9 &= ~0x10u;
            if ( (int)v39 + 4096 < (unsigned int)v39 || (int)v39 + 4096 > v66 || (unsigned int)v39 < v36 )
              goto LABEL_108;
            if ( v38 != 8 )
              break;
            v33 -= 8;
            v37 += 8LL;
            v63 = v37;
            v9 &= ~0x10u;
          }
          if ( (MiFlags & 0x20000) != 0 && (*(_DWORD *)(v15 + 92) & 0xC0000) != 0 )
          {
            v71 = 0LL;
            if ( (*(_DWORD *)(MiOffsetToProtos(v15, v39, &v71) + 32) & 4) != 0 )
            {
              Config = -1073741701;
              goto LABEL_82;
            }
            LODWORD(v39) = v54;
            v38 = v60;
            v37 = v63;
          }
          if ( (unsigned int)v39 >> 12 > (unsigned int)v34 )
            LODWORD(v34) = (unsigned int)v39 >> 12;
          v24[((unsigned __int64)(unsigned int)v39 >> 12) + 13] |= v37;
          v61 = (v39 & 0xFFFFF000) + 4096;
          v63 = v38 + v37;
          v55 = v33 - v38;
          Config = MiScanRelocationPage(v68, v39, (v38 - 8) >> 1, (int)v37 + 8, v15, (__int64)v24);
          if ( Config >= 0 )
          {
            v9 |= 4u;
            v33 = v55;
            v36 = v61;
            continue;
          }
          break;
        }
        if ( Config == -1073741207 )
        {
          Config = 0;
        }
        else if ( Config == -1073741701 )
        {
          Config = v11;
        }
      }
      else
      {
LABEL_70:
        v30[(unsigned __int64)*((unsigned int *)v24 + 15) >> 12] |= 1uLL;
        if ( (*(_BYTE *)(v15 + 62) & 0xC) != 4 || (Config = MiCreateFileOnlyImageFixupList(v15, v24, &P), Config >= 0) )
        {
          LOBYTE(v9) = v9 | 0x20;
          MI_LOCK_RELOCATIONS_EXCLUSIVE((__int64)CurrentThread, (__int64)v24);
          v48 = v76;
          *(_QWORD *)(v76 + 32) = v24;
          *(_QWORD *)(v72 + 32) = v65;
          v49 = v77;
          *(_QWORD *)v77 += v24[5];
          *(_DWORD *)(v15 + 92) |= 0x400000u;
          if ( (*(_DWORD *)(v15 + 56) & 0x800) != 0 )
            MiSetDeleteOnClose(v15, 0);
          if ( (MiFlags & 0x2000) == 0
            || (*(_DWORD *)(v15 + 92) & 0xC0000) == 0
            || (Config = SeSetImageBaseAddress(*(_QWORD *)(v48 + 40) & 0xFFFFFFFFFFFFFFF8uLL), Config >= 0) )
          {
            if ( a4 )
              SessionId = -1;
            else
              SessionId = PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
            if ( !a6 || (v9 & 0x88) != 0 )
            {
              if ( (*(_BYTE *)(v15 + 62) & 0xC) != 4
                || (Config = MiWalkEntireImage(v15, (__int64)P, 4u, SessionId), Config >= 0) )
              {
                Config = MiWalkEntireImage(v15, 0LL, 2u, SessionId);
              }
            }
            else
            {
              Config = 0;
            }
          }
          MI_UNLOCK_RELOCATIONS_EXCLUSIVE((__int64)CurrentThread, (__int64)v24);
          if ( Config >= 0 && !a6 )
            *(_BYTE *)(v49 + 51) |= 4u;
        }
      }
LABEL_82:
      if ( (v9 & 0x20) == 0 )
LABEL_83:
        MiFreeRelocations(v15, v24);
    }
    goto LABEL_84;
  }
  ExFreePoolWithTag(v24, 0);
LABEL_84:
  if ( (v9 & 1) != 0 )
  {
    MiUnmapImageInSystemSpace(v78);
    PsRevertToUserPagePriorityThread((__int64)CurrentThread, v64);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)Config;
}
