/*
 * XREFs of MiParseImageLoadConfig @ 0x140942E10
 * Callers:
 *     MiRelocateImage @ 0x140941BE8 (MiRelocateImage.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x14042F960 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x140432C40 (MiDereferenceControlAreaFile.c)
 *     MiIsRetpolineEnabled @ 0x1404498D0 (MiIsRetpolineEnabled.c)
 *     MiFreeImageCfgContext @ 0x1404916E0 (MiFreeImageCfgContext.c)
 *     MiIsImportOptimizationEnabled @ 0x1404A0180 (MiIsImportOptimizationEnabled.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     MiFreeImageLoadConfig @ 0x140942944 (MiFreeImageLoadConfig.c)
 *     MiFreeImageRetpolineContext @ 0x140943580 (MiFreeImageRetpolineContext.c)
 *     MiCaptureImageCfgContext @ 0x1409435D8 (MiCaptureImageCfgContext.c)
 *     MiLogRelocationRva @ 0x1409441D4 (MiLogRelocationRva.c)
 *     LdrCaptureDynamicRelocationTableHeader @ 0x1409442DC (LdrCaptureDynamicRelocationTableHeader.c)
 *     RtlCreateRvaList @ 0x140944580 (RtlCreateRvaList.c)
 *     MiCaptureRetpolineRelocationTables @ 0x140944F04 (MiCaptureRetpolineRelocationTables.c)
 *     RtlCreateFunctionOverrideFixupInfo @ 0x1409F0820 (RtlCreateFunctionOverrideFixupInfo.c)
 *     MiCreateRetpolineRelocationInformation @ 0x140A5A728 (MiCreateRetpolineRelocationInformation.c)
 *     RtlInitializeImageSystemOverride @ 0x140A79C78 (RtlInitializeImageSystemOverride.c)
 */

__int64 __fastcall MiParseImageLoadConfig(_QWORD *a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
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
  unsigned int v24; // r9d
  int v25; // ebx
  int v26; // eax
  int v27; // eax
  __int128 *v28; // rdx
  __int64 v29; // rax
  int v31; // [rsp+28h] [rbp-450h]
  int v32; // [rsp+54h] [rbp-424h]
  int v33; // [rsp+5Ch] [rbp-41Ch] BYREF
  _QWORD *v34; // [rsp+60h] [rbp-418h]
  __int64 v35; // [rsp+68h] [rbp-410h]
  unsigned int v36; // [rsp+70h] [rbp-408h]
  int v37; // [rsp+74h] [rbp-404h]
  unsigned int v38; // [rsp+80h] [rbp-3F8h]
  int v39; // [rsp+90h] [rbp-3E8h] BYREF
  __int64 v40; // [rsp+98h] [rbp-3E0h]
  ULONG_PTR v41; // [rsp+A0h] [rbp-3D8h]
  unsigned int v42; // [rsp+A8h] [rbp-3D0h]
  __int64 v43; // [rsp+B0h] [rbp-3C8h]
  _QWORD v44[10]; // [rsp+B8h] [rbp-3C0h] BYREF
  _QWORD *v45; // [rsp+108h] [rbp-370h]
  __int64 v46; // [rsp+110h] [rbp-368h]
  __int64 v47; // [rsp+118h] [rbp-360h]
  char v48[64]; // [rsp+120h] [rbp-358h] BYREF
  __int128 v49; // [rsp+160h] [rbp-318h] BYREF
  __int128 v50; // [rsp+170h] [rbp-308h]
  __int128 v51; // [rsp+180h] [rbp-2F8h]
  __int64 v52; // [rsp+190h] [rbp-2E8h]
  int v53; // [rsp+198h] [rbp-2E0h]
  int v54[2]; // [rsp+1A0h] [rbp-2D8h] BYREF
  ULONG_PTR v55; // [rsp+1A8h] [rbp-2D0h]
  __int64 v56; // [rsp+1B0h] [rbp-2C8h]
  __int64 v57; // [rsp+1B8h] [rbp-2C0h]
  unsigned int v58; // [rsp+1C0h] [rbp-2B8h]
  int v59; // [rsp+1C4h] [rbp-2B4h]
  __int64 v60; // [rsp+1C8h] [rbp-2B0h]
  _BYTE *v61; // [rsp+1D0h] [rbp-2A8h]
  unsigned int v62; // [rsp+1D8h] [rbp-2A0h]
  _BYTE v63[24]; // [rsp+1E0h] [rbp-298h] BYREF
  unsigned int v64; // [rsp+1F8h] [rbp-280h]
  _BYTE v65[32]; // [rsp+200h] [rbp-278h] BYREF
  _DWORD Src[8]; // [rsp+220h] [rbp-258h] BYREF
  __int64 (__fastcall *v67)(); // [rsp+240h] [rbp-238h]
  __int64 (__fastcall *v68)(); // [rsp+248h] [rbp-230h]
  __int64 v69; // [rsp+268h] [rbp-210h]
  __int64 v70; // [rsp+270h] [rbp-208h]
  _BYTE v71[336]; // [rsp+2E0h] [rbp-198h] BYREF

  v35 = a2;
  v34 = a1;
  v44[4] = a1;
  v45 = a1;
  v44[5] = a2;
  v46 = a2;
  v44[6] = a3;
  v47 = a3;
  v38 = a4;
  v42 = a4;
  v44[7] = a5;
  memset_0(v71, 0, 0x148uLL);
  v44[0] = 0LL;
  *(_DWORD *)a5 = 0;
  v8 = 0;
  v33 = 0;
  v41 = 0LL;
  v39 = 0;
  RetpolineRelocationInformation = 0;
  v10 = *a1;
  v32 = *(_DWORD *)(*(_QWORD *)(v10 + 56) + 64LL);
  v37 = v32;
  memset_0(v54, 0, 0x140uLL);
  v11 = *(_QWORD *)(v10 + 56);
  v43 = v11;
  v44[1] = v11;
  v40 = *(_QWORD *)a3;
  v44[2] = v40;
  v12 = (unsigned int *)(a3 + 96);
  v44[9] = a3 + 96;
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
    v36 = v16;
    if ( (unsigned int)v13 + v16 > (unsigned int)v13 && (unsigned int)v13 + v16 <= *(_DWORD *)(a3 + 16) )
    {
      v17 = (unsigned int *)(v35 + v13);
      v44[8] = v17;
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
            memmove(v71, v17, v14);
            v41 = MiReferenceControlAreaFile((__int64)v34);
            MiLogRelocationRva(*(unsigned int *)(a3 + 96), v14, v41, v34);
            *(_QWORD *)v54 = v45;
            v55 = v41;
            v56 = v46;
            v57 = v40;
            v58 = v42;
            v59 = 0;
            v60 = v47;
            v61 = v71;
            v62 = v14;
            RetpolineRelocationInformation = MiCaptureImageCfgContext(
                                               (_DWORD)v34,
                                               v41,
                                               v35,
                                               v40,
                                               a4,
                                               a3,
                                               (__int64)v71,
                                               v14,
                                               (__int64)&v39,
                                               (__int64)v63);
            if ( RetpolineRelocationInformation >= 0 )
            {
              v19 = *(_DWORD *)a5 | v39;
              *(_DWORD *)a5 = v19;
              v20 = v43;
              *(_WORD *)(a5 + 4) = *(_WORD *)(v43 + 48) == 452;
              *(_WORD *)(a5 + 6) = *(_WORD *)(v20 + 48);
              v21 = 0;
              if ( (v19 & 1) != 0 )
              {
                Src[0] = 1;
                v67 = MiImageCfgRvaIteratorFirst;
                v68 = MiImageCfgRvaIteratorNext;
                v21 = 1;
                if ( (v19 & 8) != 0 )
                {
                  Src[1] = 4;
                  v69 = 0LL;
                  v70 = 0LL;
                  v21 = 2;
                }
              }
              else
              {
                v67 = 0LL;
                Src[0] = 0;
              }
              Src[4] = v21;
              if ( !v21
                || (RetpolineRelocationInformation = RtlCreateRvaList((int)v54, v19, 452, v21, Src, v31, a5 + 8),
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
                  v24 = v14;
                  v25 = v35;
                  v26 = LdrCaptureDynamicRelocationTableHeader(
                          v35,
                          a4,
                          (unsigned int)v71,
                          v24,
                          v40,
                          v23,
                          (__int64)&v33,
                          (__int64)v44);
                  RetpolineRelocationInformation = v26;
                  if ( v26 == -1073741637 )
                  {
                    RetpolineRelocationInformation = 0;
                  }
                  else if ( v26 < 0 )
                  {
                    goto LABEL_37;
                  }
                }
                else
                {
                  v25 = v35;
                }
                if ( v8 && v33 )
                {
                  v27 = MiCaptureRetpolineRelocationTables(v25, a4, v32, v33, (__int64)v44, v31, (__int64)v65);
                  RetpolineRelocationInformation = v27;
                  if ( v27 == -1073741637 )
                  {
                    RetpolineRelocationInformation = 0;
                  }
                  else
                  {
                    if ( v27 < 0 )
                      goto LABEL_37;
                    RetpolineRelocationInformation = MiCreateRetpolineRelocationInformation(v65, v64, a4, a5 + 16);
                    if ( RetpolineRelocationInformation < 0 )
                      goto LABEL_37;
                  }
                }
                if ( v23 == 523 && v33 )
                {
                  v49 = 0LL;
                  v50 = 0LL;
                  v51 = 0LL;
                  v52 = 0LL;
                  v53 = 0;
                  v28 = 0LL;
                  if ( (*(_DWORD *)(*(_QWORD *)(*v34 + 56LL) + 76LL) & 0x40) != 0 )
                  {
                    v29 = RtlInitializeImageSystemOverride(v48, a4, (*(_DWORD *)a5 >> 3) & 1);
                    v49 = *(_OWORD *)v29;
                    v50 = *(_OWORD *)(v29 + 16);
                    v51 = *(_OWORD *)(v29 + 32);
                    v52 = *(_QWORD *)(v29 + 48);
                    v53 = *(_DWORD *)(v29 + 56);
                    v28 = &v49;
                  }
                  RetpolineRelocationInformation = RtlCreateFunctionOverrideFixupInfo(
                                                     v25,
                                                     a4,
                                                     v33,
                                                     (unsigned int)v44,
                                                     v32,
                                                     (__int64)&unk_140E2D780,
                                                     a5 + 24,
                                                     (__int64)v28);
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
  if ( v41 )
    MiDereferenceControlAreaFile((__int64)v34, v41);
  MiFreeImageCfgContext((__int64)v63);
  MiFreeImageRetpolineContext(v65);
  return (unsigned int)RetpolineRelocationInformation;
}
