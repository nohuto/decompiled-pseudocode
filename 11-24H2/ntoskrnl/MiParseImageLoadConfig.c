/*
 * XREFs of MiParseImageLoadConfig @ 0x14093D160
 * Callers:
 *     MiRelocateImage @ 0x140AEA57C (MiRelocateImage.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x14041CAA0 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x14041F2B0 (MiDereferenceControlAreaFile.c)
 *     MiIsRetpolineEnabled @ 0x14043F7B4 (MiIsRetpolineEnabled.c)
 *     MiFreeImageCfgContext @ 0x14048B394 (MiFreeImageCfgContext.c)
 *     MiIsImportOptimizationEnabled @ 0x14049A000 (MiIsImportOptimizationEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MiFreeImageLoadConfig @ 0x14093B594 (MiFreeImageLoadConfig.c)
 *     MiCreateRetpolineRelocationInformation @ 0x14093C258 (MiCreateRetpolineRelocationInformation.c)
 *     RtlInitializeImageSystemOverride @ 0x14093C4E0 (RtlInitializeImageSystemOverride.c)
 *     MiFreeImageRetpolineContext @ 0x14093D8D0 (MiFreeImageRetpolineContext.c)
 *     MiCaptureImageCfgContext @ 0x14093D928 (MiCaptureImageCfgContext.c)
 *     MiLogRelocationRva @ 0x14093E524 (MiLogRelocationRva.c)
 *     LdrCaptureDynamicRelocationTableHeader @ 0x14093E62C (LdrCaptureDynamicRelocationTableHeader.c)
 *     RtlCreateRvaList @ 0x14093E8D0 (RtlCreateRvaList.c)
 *     MiCaptureRetpolineRelocationTables @ 0x14093F254 (MiCaptureRetpolineRelocationTables.c)
 *     RtlCreateFunctionOverrideFixupInfo @ 0x14093F474 (RtlCreateFunctionOverrideFixupInfo.c)
 */

__int64 __fastcall MiParseImageLoadConfig(_QWORD *a1, void *a2, __int64 a3, unsigned int a4, __int64 a5)
{
  char v8; // r12
  int RetpolineRelocationInformation; // esi
  __int64 v10; // rbx
  __int64 v11; // r9
  unsigned int *v12; // r10
  __int64 v13; // rdx
  unsigned int v14; // ebx
  __int16 v15; // ax
  unsigned int v16; // eax
  unsigned int *v17; // rdx
  unsigned int v18; // ecx
  int v19; // edx
  __int64 v20; // rax
  int v21; // r9d
  char v22; // cl
  __int16 v23; // r14
  int v24; // ebx
  int v25; // eax
  int v26; // eax
  __int128 *v27; // rdx
  __int64 v28; // rax
  int v30; // [rsp+28h] [rbp-450h]
  int v31; // [rsp+54h] [rbp-424h]
  _DWORD v32[3]; // [rsp+5Ch] [rbp-41Ch] BYREF
  PVOID BaseOfImage; // [rsp+68h] [rbp-410h]
  unsigned int v34; // [rsp+70h] [rbp-408h]
  int v35; // [rsp+74h] [rbp-404h]
  unsigned int v36; // [rsp+80h] [rbp-3F8h]
  int v37; // [rsp+90h] [rbp-3E8h] BYREF
  __int64 v38; // [rsp+98h] [rbp-3E0h]
  ULONG_PTR v39; // [rsp+A0h] [rbp-3D8h]
  unsigned int v40; // [rsp+A8h] [rbp-3D0h]
  __int64 v41; // [rsp+B0h] [rbp-3C8h]
  __int64 v42[10]; // [rsp+B8h] [rbp-3C0h] BYREF
  _QWORD *v43; // [rsp+108h] [rbp-370h]
  void *v44; // [rsp+110h] [rbp-368h]
  __int64 v45; // [rsp+118h] [rbp-360h]
  char v46[64]; // [rsp+120h] [rbp-358h] BYREF
  __int128 v47; // [rsp+160h] [rbp-318h] BYREF
  __int128 v48; // [rsp+170h] [rbp-308h]
  __int128 v49; // [rsp+180h] [rbp-2F8h]
  __int64 v50; // [rsp+190h] [rbp-2E8h]
  int v51; // [rsp+198h] [rbp-2E0h]
  int v52[2]; // [rsp+1A0h] [rbp-2D8h] BYREF
  ULONG_PTR v53; // [rsp+1A8h] [rbp-2D0h]
  void *v54; // [rsp+1B0h] [rbp-2C8h]
  __int64 v55; // [rsp+1B8h] [rbp-2C0h]
  unsigned int v56; // [rsp+1C0h] [rbp-2B8h]
  int v57; // [rsp+1C4h] [rbp-2B4h]
  __int64 v58; // [rsp+1C8h] [rbp-2B0h]
  _BYTE *v59; // [rsp+1D0h] [rbp-2A8h]
  unsigned int v60; // [rsp+1D8h] [rbp-2A0h]
  _BYTE v61[24]; // [rsp+1E0h] [rbp-298h] BYREF
  int v62; // [rsp+1F8h] [rbp-280h]
  _BYTE v63[32]; // [rsp+200h] [rbp-278h] BYREF
  _DWORD Src[8]; // [rsp+220h] [rbp-258h] BYREF
  __int64 (__fastcall *v65)(); // [rsp+240h] [rbp-238h]
  __int64 (__fastcall *v66)(); // [rsp+248h] [rbp-230h]
  __int64 v67; // [rsp+268h] [rbp-210h]
  __int64 v68; // [rsp+270h] [rbp-208h]
  _BYTE v69[336]; // [rsp+2E0h] [rbp-198h] BYREF

  BaseOfImage = a2;
  *(_QWORD *)&v32[1] = a1;
  v42[4] = (__int64)a1;
  v43 = a1;
  v42[5] = (__int64)a2;
  v44 = a2;
  v42[6] = a3;
  v45 = a3;
  v36 = a4;
  v40 = a4;
  v42[7] = a5;
  memset_0(v69, 0, 0x148uLL);
  v42[0] = 0LL;
  *(_DWORD *)a5 = 0;
  v8 = 0;
  v32[0] = 0;
  v39 = 0LL;
  v37 = 0;
  RetpolineRelocationInformation = 0;
  v10 = *a1;
  v31 = *(_DWORD *)(*(_QWORD *)(v10 + 56) + 64LL);
  v35 = v31;
  memset_0(v52, 0, 0x140uLL);
  v11 = *(_QWORD *)(v10 + 56);
  v41 = v11;
  v42[1] = v11;
  v38 = *(_QWORD *)a3;
  v42[2] = v38;
  v12 = (unsigned int *)(a3 + 96);
  v42[9] = a3 + 96;
  v13 = *(unsigned int *)(a3 + 96);
  if ( (_DWORD)v13 )
  {
    v14 = *(_DWORD *)(a3 + 100);
    v15 = *(_WORD *)(a3 + 48);
    if ( v15 == 523 )
    {
      v16 = 148;
    }
    else
    {
      if ( v15 != 267 )
        goto LABEL_37;
      v16 = 92;
    }
    v34 = v16;
    if ( (unsigned int)v13 + v16 > (unsigned int)v13 && (unsigned int)v13 + v16 <= *(_DWORD *)(a3 + 16) )
    {
      v17 = (unsigned int *)((char *)BaseOfImage + v13);
      v42[8] = (__int64)v17;
      if ( v14 >= v16 )
        goto LABEL_7;
      if ( *(_WORD *)(v11 + 48) == 332 )
      {
        if ( v14 > 4 )
          v14 = *v17;
        if ( v14 >= v16 )
        {
LABEL_7:
          if ( v14 >= 0x148 )
            v14 = 328;
          v18 = *v12 + v14;
          if ( v18 > *v12 && v18 <= *(_DWORD *)(a3 + 16) )
          {
            memmove(v69, v17, v14);
            v39 = MiReferenceControlAreaFile(*(__int64 *)&v32[1]);
            MiLogRelocationRva(*(unsigned int *)(a3 + 96), v14, v39, *(_QWORD *)&v32[1]);
            *(_QWORD *)v52 = v43;
            v53 = v39;
            v54 = v44;
            v55 = v38;
            v56 = v40;
            v57 = 0;
            v58 = v45;
            v59 = v69;
            v60 = v14;
            RetpolineRelocationInformation = MiCaptureImageCfgContext(
                                               v32[1],
                                               v39,
                                               (_DWORD)BaseOfImage,
                                               v38,
                                               a4,
                                               a3,
                                               (__int64)v69,
                                               v14,
                                               (__int64)&v37,
                                               (__int64)v61);
            if ( RetpolineRelocationInformation >= 0 )
            {
              v19 = *(_DWORD *)a5 | v37;
              *(_DWORD *)a5 = v19;
              v20 = v41;
              *(_WORD *)(a5 + 4) = *(_WORD *)(v41 + 48) == 452;
              *(_WORD *)(a5 + 6) = *(_WORD *)(v20 + 48);
              v21 = 0;
              if ( (v19 & 1) != 0 )
              {
                Src[0] = 1;
                v65 = MiImageCfgRvaIteratorFirst;
                v66 = MiImageCfgRvaIteratorNext;
                v21 = 1;
                if ( (v19 & 8) != 0 )
                {
                  Src[1] = 4;
                  v67 = 0LL;
                  v68 = 0LL;
                  v21 = 2;
                }
              }
              else
              {
                v65 = 0LL;
                Src[0] = 0;
              }
              Src[4] = v21;
              if ( !v21
                || (RetpolineRelocationInformation = RtlCreateRvaList((int)v52, v19, 452, v21, Src, v30, a5 + 8),
                    RetpolineRelocationInformation >= 0) )
              {
                if ( MiIsRetpolineEnabled() || MiIsImportOptimizationEnabled() )
                {
                  v8 = 0;
                  if ( *(_WORD *)(a3 + 48) == 523 )
                    v8 = v22;
                }
                v23 = *(_WORD *)(a3 + 48);
                if ( v8 || v23 == 523 )
                {
                  v24 = (int)BaseOfImage;
                  v25 = LdrCaptureDynamicRelocationTableHeader(BaseOfImage, a4, v38, v23, (__int64)v32, (__int64)v42);
                  RetpolineRelocationInformation = v25;
                  if ( v25 == -1073741637 )
                  {
                    RetpolineRelocationInformation = 0;
                  }
                  else if ( v25 < 0 )
                  {
                    goto LABEL_37;
                  }
                }
                else
                {
                  v24 = (int)BaseOfImage;
                }
                if ( v8 && v32[0] )
                {
                  v26 = MiCaptureRetpolineRelocationTables(v24, a4, v31, v32[0], (__int64)v42, v30, (__int64)v63);
                  RetpolineRelocationInformation = v26;
                  if ( v26 == -1073741637 )
                  {
                    RetpolineRelocationInformation = 0;
                  }
                  else
                  {
                    if ( v26 < 0 )
                      goto LABEL_37;
                    RetpolineRelocationInformation = MiCreateRetpolineRelocationInformation(
                                                       (__int64)v63,
                                                       v62,
                                                       a4,
                                                       (__int64 *)(a5 + 16));
                    if ( RetpolineRelocationInformation < 0 )
                      goto LABEL_37;
                  }
                }
                if ( v23 == 523 && v32[0] )
                {
                  v47 = 0LL;
                  v48 = 0LL;
                  v49 = 0LL;
                  v50 = 0LL;
                  v51 = 0;
                  v27 = 0LL;
                  if ( (*(_DWORD *)(*(_QWORD *)(**(_QWORD **)&v32[1] + 56LL) + 76LL) & 0x40) != 0 )
                  {
                    v28 = RtlInitializeImageSystemOverride((__int64)v46, a4, (*(_DWORD *)a5 >> 3) & 1);
                    v47 = *(_OWORD *)v28;
                    v48 = *(_OWORD *)(v28 + 16);
                    v49 = *(_OWORD *)(v28 + 32);
                    v50 = *(_QWORD *)(v28 + 48);
                    v51 = *(_DWORD *)(v28 + 56);
                    v27 = &v47;
                  }
                  RetpolineRelocationInformation = RtlCreateFunctionOverrideFixupInfo(
                                                     v24,
                                                     a4,
                                                     v32[0],
                                                     (unsigned int)v42,
                                                     v31,
                                                     (__int64)&unk_140E2DB00,
                                                     a5 + 24,
                                                     (__int64)v27);
                }
                if ( RetpolineRelocationInformation >= 0 )
                  RetpolineRelocationInformation = 0;
              }
            }
          }
        }
      }
    }
  }
LABEL_37:
  if ( RetpolineRelocationInformation < 0 )
    MiFreeImageLoadConfig((_QWORD *)a5);
  if ( v39 )
    MiDereferenceControlAreaFile(*(__int64 *)&v32[1], v39);
  MiFreeImageCfgContext((__int64)v61);
  MiFreeImageRetpolineContext(v63);
  return (unsigned int)RetpolineRelocationInformation;
}
