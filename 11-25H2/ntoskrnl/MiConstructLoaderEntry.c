/*
 * XREFs of MiConstructLoaderEntry @ 0x140A8E4EC
 * Callers:
 *     MmLoadSystemImageEx @ 0x1409B0468 (MmLoadSystemImageEx.c)
 *     MiInitializeLoadedModuleList @ 0x140C49F8C (MiInitializeLoadedModuleList.c)
 * Callees:
 *     MiChargeResident @ 0x14022CAE0 (MiChargeResident.c)
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     MiManageSubsectionView @ 0x1403200E0 (MiManageSubsectionView.c)
 *     MiSectionControlArea @ 0x1403B4FE0 (MiSectionControlArea.c)
 *     MiReferenceControlAreaFile @ 0x14042F960 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x140432C40 (MiDereferenceControlAreaFile.c)
 *     RtlImageNtHeader @ 0x14043DFA0 (RtlImageNtHeader.c)
 *     IoIsDeviceEjectable @ 0x1404920B4 (IoIsDeviceEjectable.c)
 *     MiGetExtendedLoaderBitmap @ 0x1404F8A74 (MiGetExtendedLoaderBitmap.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     MiBackSingleImageWithPagefile @ 0x1407D7C78 (MiBackSingleImageWithPagefile.c)
 *     MiLockdownSections @ 0x140A8EA10 (MiLockdownSections.c)
 *     MiCaptureImageExceptionValues @ 0x140A8EB18 (MiCaptureImageExceptionValues.c)
 *     MiInitializeImageSectionLocks @ 0x140A9C1AC (MiInitializeImageSectionLocks.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiConstructLoaderEntry(__int64 a1, const void **a2, const void **a3, int a4, __int64 *a5)
{
  ULONG_PTR v8; // rdx
  void *v9; // r15
  _WORD *Pool; // rax
  _WORD *v11; // r14
  PIMAGE_NT_HEADERS v12; // rsi
  unsigned __int64 NumberOfSections; // r9
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
  PVOID v32; // rax
  PVOID v33; // rt1
  __int16 v34; // ax
  char *v35; // r14
  unsigned __int64 v36; // r14
  unsigned __int8 v37; // cl
  int v38; // edx
  ULONG_PTR v39; // rax
  __int64 v40; // rdx
  signed __int64 v41; // r8
  __int64 v42; // [rsp+20h] [rbp-108h]
  __int128 v43; // [rsp+28h] [rbp-100h]
  __int64 v44; // [rsp+38h] [rbp-F0h]
  unsigned __int64 v45; // [rsp+40h] [rbp-E8h]
  unsigned __int64 v46; // [rsp+50h] [rbp-D8h] BYREF
  char v47[208]; // [rsp+58h] [rbp-D0h] BYREF
  int v48; // [rsp+140h] [rbp+18h]

  v42 = 0LL;
  v8 = *(unsigned __int16 *)a3 + 2LL;
  *a5 = 0LL;
  DWORD1(v43) = 0;
  v9 = 0LL;
  Pool = (_WORD *)MiAllocatePool(0x100uLL, v8, 1413770573);
  *((_QWORD *)&v43 + 1) = Pool;
  v11 = Pool;
  if ( !Pool )
    goto LABEL_13;
  LOWORD(v43) = *(_WORD *)a3;
  WORD1(v43) = *(_WORD *)a3;
  memmove(Pool, a3[1], *(unsigned __int16 *)a3);
  v11[(unsigned __int64)*(unsigned __int16 *)a3 >> 1] = 0;
  v45 = *(_QWORD *)(a1 + 48);
  v12 = RtlImageNtHeader((PVOID)v45);
  NumberOfSections = v12->FileHeader.NumberOfSections;
  v48 = v12->FileHeader.NumberOfSections;
  if ( 0xFFFFFFFFFFFFFFFFuLL / NumberOfSections < 0xC )
  {
    v14 = -1073741520;
LABEL_14:
    if ( v11 )
      ExFreePoolWithTag(v11, 0);
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
    return v14;
  }
  v15 = (v12->OptionalHeader.SizeOfImage >> 12) + ((v12->OptionalHeader.SizeOfImage & 0xFFF) != 0);
  v16 = -((v15 & 0x3F) != 0);
  v15 >>= 6;
  v17 = -v16;
  v44 = 8 * (v15 + v17 + 2);
  v18 = v44 + 304;
  if ( !(8 * (v15 + v17 + 2)) )
    goto LABEL_5;
  v19 = (*(unsigned __int16 *)a2 + 9LL) & 0xFFFFFFFFFFFFFFF8uLL;
  v20 = v18 + v19;
  if ( v18 + v19 <= v18 )
    goto LABEL_5;
  if ( (_DWORD)NumberOfSections )
  {
    if ( v20 + 12 * NumberOfSections > v20 )
    {
      v20 += 12 * NumberOfSections;
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
        v42 = (unsigned int)((*(_DWORD *)(v24 + 8) >> 12) + v26),
        !(unsigned int)MiChargeResident(&MiSystemPartition, (unsigned int)v42, v25)) )
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
    v34 = 1;
    if ( (*(_DWORD *)(v22 + 104) & 0x4000000) != 0 )
    {
      v32 = *(PVOID *)(v22 + 48);
      v33 = *(PVOID *)&KeNumberProcessorsGroup0[9];
      if ( v32 != v33 && v32 != PsHalImageBase )
        v34 = 0;
    }
    *(_WORD *)(v22 + 108) = v34;
    *(_QWORD *)(v22 + 136) = 1LL;
  }
  v35 = (char *)(v44 + MiGetExtendedLoaderBitmap(v22));
  *(_QWORD *)(v22 + 192) = v42;
  if ( v48 )
  {
    *(_DWORD *)(v22 + 296) = v48;
    *(_QWORD *)(v22 + 200) = &v35[v19];
    MiInitializeImageSectionLocks();
  }
  if ( v12->OptionalHeader.MajorOperatingSystemVersion >= 5u && v12->OptionalHeader.MajorImageVersion >= 5u )
    *(_DWORD *)(v22 + 104) |= 0x8000000u;
  if ( (v12->OptionalHeader.DllCharacteristics & 0x80) != 0 )
    *(_DWORD *)(v22 + 104) |= 0x20u;
  if ( (a4 & 8) != 0 )
    *(_DWORD *)(v22 + 104) |= 0x4000000u;
  *(_QWORD *)(v22 + 96) = v35;
  *(_WORD *)(v22 + 88) = *(_WORD *)a2;
  *(_WORD *)(v22 + 90) = *(_WORD *)a2;
  memmove(v35, a2[1], *(unsigned __int16 *)a2);
  *(_WORD *)(*(_QWORD *)(v22 + 96) + 2 * ((unsigned __int64)*(unsigned __int16 *)a2 >> 1)) = 0;
  *(_QWORD *)(v22 + 40) = 0LL;
  *(_QWORD *)(v22 + 56) = v45 + v12->OptionalHeader.AddressOfEntryPoint;
  *(_DWORD *)(v22 + 120) = v12->OptionalHeader.CheckSum;
  if ( v23 )
  {
    memset_0(v47, 0, 0x90uLL);
    v36 = MiSectionControlArea(v23);
    v37 = *(_BYTE *)(*(_QWORD *)v36 + 15LL);
    v46 = v36;
    *(_WORD *)(v22 + 110) = (16 * ((v37 >> 4) & 7)) | *(_WORD *)(v22 + 110) & 0xFF80 | v37 & 0xF;
    *(_QWORD *)(v22 + 176) = v45 | 3;
    MiManageSubsectionView((__int64 *)&v46, (_QWORD *)(v22 + 160), 3);
  }
  else
  {
    v36 = 0LL;
  }
  *(_DWORD *)(v22 + 152) = v12->OptionalHeader.SizeOfImage;
  *(_DWORD *)(v22 + 156) = v12->FileHeader.TimeDateStamp;
  MiCaptureImageExceptionValues(v22);
  MiLockdownSections(v22);
  if ( (dword_140FC41E4 & 1) != 0 || (a4 & 2) != 0 )
    *(_DWORD *)(v22 + 184) |= 8u;
  v38 = *(_DWORD *)(v22 + 184);
  if ( (v38 & 4) != 0 || (a4 & 0x20) != 0 )
  {
    v38 |= 0x2000u;
    *(_DWORD *)(v22 + 184) = v38;
  }
  *(_OWORD *)(v22 + 72) = v43;
  if ( (v38 & 4) != 0 )
    goto LABEL_54;
  if ( v23 )
  {
    v39 = MiReferenceControlAreaFile(v36);
    if ( IoIsDeviceEjectable(*(_QWORD *)(v39 + 8)) || (*(_DWORD *)(v40 + 52) & 0x11) != 0 )
      v31 = 0;
    MiDereferenceControlAreaFile(v36, v41);
    if ( !v31 )
LABEL_54:
      MiBackSingleImageWithPagefile(v22);
  }
  *a5 = v22;
  return 0LL;
}
