/*
 * XREFs of MiConstructLoaderEntry @ 0x140A92FE4
 * Callers:
 *     MmLoadSystemImageEx @ 0x1409C87D8 (MmLoadSystemImageEx.c)
 *     MiInitializeLoadedModuleList @ 0x140C5B318 (MiInitializeLoadedModuleList.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x1402464D0 (MiReferenceControlAreaFile.c)
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     MiManageSubsectionView @ 0x1402BAAB0 (MiManageSubsectionView.c)
 *     MiSectionControlArea @ 0x1402D4800 (MiSectionControlArea.c)
 *     MiChargeResident @ 0x1402F5FA0 (MiChargeResident.c)
 *     MiDereferenceControlAreaFile @ 0x14042C500 (MiDereferenceControlAreaFile.c)
 *     RtlImageNtHeader @ 0x14043E310 (RtlImageNtHeader.c)
 *     IoIsDeviceEjectable @ 0x140491560 (IoIsDeviceEjectable.c)
 *     MiGetExtendedLoaderBitmap @ 0x1404FB0FC (MiGetExtendedLoaderBitmap.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     MiBackSingleImageWithPagefile @ 0x1407E7B30 (MiBackSingleImageWithPagefile.c)
 *     MiLockdownSections @ 0x140A93500 (MiLockdownSections.c)
 *     MiCaptureImageExceptionValues @ 0x140A93608 (MiCaptureImageExceptionValues.c)
 *     MiInitializeImageSectionLocks @ 0x140AA19BC (MiInitializeImageSectionLocks.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiConstructLoaderEntry(__int64 a1, const void **a2, const void **a3, int a4, __int64 *a5)
{
  ULONG_PTR v8; // rdx
  void *v9; // r15
  _WORD *Pool; // rax
  _WORD *v11; // r14
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // r9
  unsigned int v14; // ebx
  unsigned int v15; // edx
  int v16; // ecx
  int v17; // ecx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rbp
  ULONG_PTR v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // r12
  __int64 v24; // rcx
  __int64 v25; // r8
  int v26; // eax
  _OWORD *v28; // rax
  __int64 v29; // rdx
  __int128 v30; // xmm1
  int v31; // edi
  __int64 v32; // rax
  __int16 v33; // ax
  char *v34; // r14
  unsigned __int64 v35; // r14
  unsigned __int8 v36; // cl
  int v37; // edx
  ULONG_PTR v38; // rax
  signed __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // [rsp+20h] [rbp-108h]
  __int128 v42; // [rsp+28h] [rbp-100h]
  __int64 v43; // [rsp+38h] [rbp-F0h]
  unsigned __int64 v44; // [rsp+40h] [rbp-E8h]
  unsigned __int64 v45; // [rsp+50h] [rbp-D8h] BYREF
  char v46[208]; // [rsp+58h] [rbp-D0h] BYREF
  int v47; // [rsp+140h] [rbp+18h]

  v41 = 0LL;
  v8 = *(unsigned __int16 *)a3 + 2LL;
  *a5 = 0LL;
  DWORD1(v42) = 0;
  v9 = 0LL;
  Pool = (_WORD *)MiAllocatePool(0x100uLL, v8, 1413770573);
  *((_QWORD *)&v42 + 1) = Pool;
  v11 = Pool;
  if ( !Pool )
    goto LABEL_13;
  LOWORD(v42) = *(_WORD *)a3;
  WORD1(v42) = *(_WORD *)a3;
  memmove(Pool, a3[1], *(unsigned __int16 *)a3);
  v11[(unsigned __int64)*(unsigned __int16 *)a3 >> 1] = 0;
  v44 = *(_QWORD *)(a1 + 48);
  v12 = RtlImageNtHeader(v44);
  v13 = *(unsigned __int16 *)(v12 + 6);
  v47 = *(unsigned __int16 *)(v12 + 6);
  if ( 0xFFFFFFFFFFFFFFFFuLL / v13 < 0xC )
  {
    v14 = -1073741520;
LABEL_14:
    if ( v11 )
      ExFreePoolWithTag(v11, 0);
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
    return v14;
  }
  v15 = (*(_DWORD *)(v12 + 80) >> 12) + ((*(_DWORD *)(v12 + 80) & 0xFFF) != 0);
  v16 = -((v15 & 0x3F) != 0);
  v15 >>= 6;
  v17 = -v16;
  v43 = 8 * (v15 + v17 + 2);
  v18 = v43 + 304;
  if ( !(8 * (v15 + v17 + 2)) )
    goto LABEL_5;
  v19 = (*(unsigned __int16 *)a2 + 9LL) & 0xFFFFFFFFFFFFFFF8uLL;
  v20 = v18 + v19;
  if ( v18 + v19 <= v18 )
    goto LABEL_5;
  if ( (_DWORD)v13 )
  {
    if ( v20 + 12 * v13 > v20 )
    {
      v20 += 12 * v13;
      goto LABEL_10;
    }
LABEL_5:
    v14 = -1073741701;
    goto LABEL_14;
  }
LABEL_10:
  v21 = MiAllocatePool(0x40uLL, v20, 1682730317);
  v22 = v21;
  if ( !v21
    || (v23 = *(_QWORD *)(a1 + 112), v9 = (void *)v21, v23)
    && (v24 = *(_QWORD *)MiSectionControlArea(*(_QWORD *)(a1 + 112)),
        v26 = v25,
        LOBYTE(v26) = (*(_DWORD *)(v24 + 8) & 0xFFF) != 0,
        v41 = (unsigned int)((*(_DWORD *)(v24 + 8) >> 12) + v26),
        !(unsigned int)MiChargeResident(&MiSystemPartition, (unsigned int)v41, v25)) )
  {
LABEL_13:
    v14 = -1073741670;
    goto LABEL_14;
  }
  if ( (a4 & 0x10000000) != 0 )
  {
    *(_OWORD *)v22 = *(_OWORD *)a1;
    *(_OWORD *)(v22 + 16) = *(_OWORD *)(a1 + 16);
    *(_OWORD *)(v22 + 32) = *(_OWORD *)(a1 + 32);
    *(_OWORD *)(v22 + 48) = *(_OWORD *)(a1 + 48);
    *(_OWORD *)(v22 + 64) = *(_OWORD *)(a1 + 64);
    *(_OWORD *)(v22 + 80) = *(_OWORD *)(a1 + 80);
    *(_OWORD *)(v22 + 96) = *(_OWORD *)(a1 + 96);
    *(_OWORD *)(v22 + 112) = *(_OWORD *)(a1 + 112);
    *(_OWORD *)(v22 + 128) = *(_OWORD *)(a1 + 128);
    *(_OWORD *)(v22 + 144) = *(_OWORD *)(a1 + 144);
  }
  else
  {
    v28 = (_OWORD *)v22;
    v29 = 2LL;
    do
    {
      *v28 = *(_OWORD *)a1;
      v28[1] = *(_OWORD *)(a1 + 16);
      v28[2] = *(_OWORD *)(a1 + 32);
      v28[3] = *(_OWORD *)(a1 + 48);
      v28[4] = *(_OWORD *)(a1 + 64);
      v28[5] = *(_OWORD *)(a1 + 80);
      v28[6] = *(_OWORD *)(a1 + 96);
      v28 += 8;
      v30 = *(_OWORD *)(a1 + 112);
      a1 += 128LL;
      *(v28 - 1) = v30;
      --v29;
    }
    while ( v29 );
    *v28 = *(_OWORD *)a1;
    v28[1] = *(_OWORD *)(a1 + 16);
    v28[2] = *(_OWORD *)(a1 + 32);
  }
  *(_QWORD *)(v22 + 232) = 0LL;
  v31 = 1;
  *(_DWORD *)(v22 + 184) |= 1u;
  *(_QWORD *)(v22 + 264) = v22 + 256;
  *(_QWORD *)(v22 + 256) = v22 + 256;
  if ( (a4 & 0x10000000) != 0 )
  {
    *(_DWORD *)(v22 + 184) |= 0x5C000u;
    v33 = 1;
    if ( (*(_DWORD *)(v22 + 104) & 0x4000000) != 0 )
    {
      v32 = *(_QWORD *)(v22 + 48);
      if ( v32 != PsNtosImageBase && v32 != PsHalImageBase )
        v33 = 0;
    }
    *(_WORD *)(v22 + 108) = v33;
    *(_QWORD *)(v22 + 136) = 1LL;
  }
  v34 = (char *)(v43 + MiGetExtendedLoaderBitmap(v22));
  *(_QWORD *)(v22 + 192) = v41;
  if ( v47 )
  {
    *(_DWORD *)(v22 + 296) = v47;
    *(_QWORD *)(v22 + 200) = &v34[v19];
    MiInitializeImageSectionLocks();
  }
  if ( *(_WORD *)(v12 + 64) >= 5u && *(_WORD *)(v12 + 68) >= 5u )
    *(_DWORD *)(v22 + 104) |= 0x8000000u;
  if ( (*(_BYTE *)(v12 + 94) & 0x80) != 0 )
    *(_DWORD *)(v22 + 104) |= 0x20u;
  if ( (a4 & 8) != 0 )
    *(_DWORD *)(v22 + 104) |= 0x4000000u;
  *(_QWORD *)(v22 + 96) = v34;
  *(_WORD *)(v22 + 88) = *(_WORD *)a2;
  *(_WORD *)(v22 + 90) = *(_WORD *)a2;
  memmove(v34, a2[1], *(unsigned __int16 *)a2);
  *(_WORD *)(*(_QWORD *)(v22 + 96) + 2 * ((unsigned __int64)*(unsigned __int16 *)a2 >> 1)) = 0;
  *(_QWORD *)(v22 + 40) = 0LL;
  *(_QWORD *)(v22 + 56) = v44 + *(unsigned int *)(v12 + 40);
  *(_DWORD *)(v22 + 120) = *(_DWORD *)(v12 + 88);
  if ( v23 )
  {
    memset_0(v46, 0, 0x90uLL);
    v35 = MiSectionControlArea(v23);
    v36 = *(_BYTE *)(*(_QWORD *)v35 + 15LL);
    v45 = v35;
    *(_WORD *)(v22 + 110) = (16 * ((v36 >> 4) & 7)) | *(_WORD *)(v22 + 110) & 0xFF80 | v36 & 0xF;
    *(_QWORD *)(v22 + 176) = v44 | 3;
    MiManageSubsectionView((__int64 *)&v45, (_QWORD *)(v22 + 160), 3);
  }
  else
  {
    v35 = 0LL;
  }
  *(_DWORD *)(v22 + 152) = *(_DWORD *)(v12 + 80);
  *(_DWORD *)(v22 + 156) = *(_DWORD *)(v12 + 8);
  MiCaptureImageExceptionValues(v22);
  MiLockdownSections(v22);
  if ( (dword_140FC41F4 & 1) != 0 || (a4 & 2) != 0 )
    *(_DWORD *)(v22 + 184) |= 8u;
  v37 = *(_DWORD *)(v22 + 184);
  if ( (v37 & 4) != 0 || (a4 & 0x20) != 0 )
  {
    v37 |= 0x2000u;
    *(_DWORD *)(v22 + 184) = v37;
  }
  *(_OWORD *)(v22 + 72) = v42;
  if ( (v37 & 4) != 0 )
    goto LABEL_54;
  if ( v23 )
  {
    v38 = MiReferenceControlAreaFile(v35);
    if ( IoIsDeviceEjectable(*(_QWORD *)(v38 + 8)) || (*(_DWORD *)(v40 + 52) & 0x11) != 0 )
      v31 = 0;
    MiDereferenceControlAreaFile(v35, v39);
    if ( !v31 )
LABEL_54:
      MiBackSingleImageWithPagefile(v22);
  }
  *a5 = v22;
  return 0LL;
}
