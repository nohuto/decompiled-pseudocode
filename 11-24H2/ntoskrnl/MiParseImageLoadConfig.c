/*
 * XREFs of MiParseImageLoadConfig @ 0x1408F42B8
 * Callers:
 *     MiRelocateImage @ 0x1408F5784 (MiRelocateImage.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x1402464D0 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x14042C500 (MiDereferenceControlAreaFile.c)
 *     MiIsRetpolineEnabled @ 0x140446FE0 (MiIsRetpolineEnabled.c)
 *     MiFreeImageCfgContext @ 0x140490D54 (MiFreeImageCfgContext.c)
 *     MiIsImportOptimizationEnabled @ 0x14049F1D0 (MiIsImportOptimizationEnabled.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     MiCreateRetpolineRelocationInformation @ 0x1408F3248 (MiCreateRetpolineRelocationInformation.c)
 *     RtlInitializeImageSystemOverride @ 0x1408F3378 (RtlInitializeImageSystemOverride.c)
 *     MiCaptureRetpolineRelocationTables @ 0x1408F3470 (MiCaptureRetpolineRelocationTables.c)
 *     RtlCreateRvaList @ 0x1408F3740 (RtlCreateRvaList.c)
 *     LdrCaptureDynamicRelocationTableHeader @ 0x1408F40C4 (LdrCaptureDynamicRelocationTableHeader.c)
 *     MiFreeImageRetpolineContext @ 0x1408F4A28 (MiFreeImageRetpolineContext.c)
 *     MiCaptureImageCfgContext @ 0x1408F4A80 (MiCaptureImageCfgContext.c)
 *     MiLogRelocationRva @ 0x1408F567C (MiLogRelocationRva.c)
 *     MiFreeImageLoadConfig @ 0x1408F7410 (MiFreeImageLoadConfig.c)
 *     RtlCreateFunctionOverrideFixupInfo @ 0x1409EB0E0 (RtlCreateFunctionOverrideFixupInfo.c)
 */

__int64 __fastcall MiParseImageLoadConfig(_QWORD *a1, unsigned __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  char v8; // r12
  int RetpolineRelocationInformation; // esi
  __int64 v10; // rbx
  __int64 v11; // r9
  _DWORD *v12; // r10
  __int64 v13; // rdx
  unsigned int v14; // ebx
  __int16 v15; // ax
  unsigned int v16; // eax
  unsigned int *v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rax
  unsigned int v20; // r9d
  char v21; // cl
  __int16 v22; // r14
  unsigned int v23; // r9d
  unsigned __int64 v24; // rbx
  int v25; // eax
  int v26; // eax
  __int128 *v27; // rdx
  __int64 v28; // rax
  int v30; // [rsp+28h] [rbp-450h]
  unsigned int v31; // [rsp+54h] [rbp-424h]
  int v32; // [rsp+5Ch] [rbp-41Ch] BYREF
  _QWORD *v33; // [rsp+60h] [rbp-418h]
  unsigned __int64 v34; // [rsp+68h] [rbp-410h]
  unsigned int v35; // [rsp+70h] [rbp-408h]
  unsigned int v36; // [rsp+74h] [rbp-404h]
  unsigned int v37; // [rsp+80h] [rbp-3F8h]
  unsigned int v38; // [rsp+90h] [rbp-3E8h] BYREF
  __int64 v39; // [rsp+98h] [rbp-3E0h]
  ULONG_PTR v40; // [rsp+A0h] [rbp-3D8h]
  unsigned int v41; // [rsp+A8h] [rbp-3D0h]
  __int64 v42; // [rsp+B0h] [rbp-3C8h]
  _QWORD v43[10]; // [rsp+B8h] [rbp-3C0h] BYREF
  _QWORD *v44; // [rsp+108h] [rbp-370h]
  unsigned __int64 v45; // [rsp+110h] [rbp-368h]
  __int64 v46; // [rsp+118h] [rbp-360h]
  char v47[64]; // [rsp+120h] [rbp-358h] BYREF
  __int128 v48; // [rsp+160h] [rbp-318h] BYREF
  __int128 v49; // [rsp+170h] [rbp-308h]
  __int128 v50; // [rsp+180h] [rbp-2F8h]
  __int64 v51; // [rsp+190h] [rbp-2E8h]
  int v52; // [rsp+198h] [rbp-2E0h]
  int v53[2]; // [rsp+1A0h] [rbp-2D8h] BYREF
  ULONG_PTR v54; // [rsp+1A8h] [rbp-2D0h]
  unsigned __int64 v55; // [rsp+1B0h] [rbp-2C8h]
  __int64 v56; // [rsp+1B8h] [rbp-2C0h]
  unsigned int v57; // [rsp+1C0h] [rbp-2B8h]
  int v58; // [rsp+1C4h] [rbp-2B4h]
  __int64 v59; // [rsp+1C8h] [rbp-2B0h]
  _BYTE *v60; // [rsp+1D0h] [rbp-2A8h]
  unsigned int v61; // [rsp+1D8h] [rbp-2A0h]
  _BYTE v62[24]; // [rsp+1E0h] [rbp-298h] BYREF
  int v63; // [rsp+1F8h] [rbp-280h]
  unsigned int v64[8]; // [rsp+200h] [rbp-278h] BYREF
  _DWORD Src[8]; // [rsp+220h] [rbp-258h] BYREF
  __int64 (__fastcall *v66)(); // [rsp+240h] [rbp-238h]
  __int64 (__fastcall *v67)(); // [rsp+248h] [rbp-230h]
  __int64 v68; // [rsp+268h] [rbp-210h]
  __int64 v69; // [rsp+270h] [rbp-208h]
  _BYTE v70[336]; // [rsp+2E0h] [rbp-198h] BYREF

  v34 = a2;
  v33 = a1;
  v43[4] = a1;
  v44 = a1;
  v43[5] = a2;
  v45 = a2;
  v43[6] = a3;
  v46 = a3;
  v37 = a4;
  v41 = a4;
  v43[7] = a5;
  memset_0(v70, 0, 0x148uLL);
  v43[0] = 0LL;
  *(_DWORD *)a5 = 0;
  v8 = 0;
  v32 = 0;
  v40 = 0LL;
  v38 = 0;
  RetpolineRelocationInformation = 0;
  v10 = *a1;
  v31 = *(_DWORD *)(*(_QWORD *)(v10 + 56) + 64LL);
  v36 = v31;
  memset_0(v53, 0, 0x140uLL);
  v11 = *(_QWORD *)(v10 + 56);
  v42 = v11;
  v43[1] = v11;
  v39 = *(_QWORD *)a3;
  v43[2] = v39;
  v12 = (_DWORD *)(a3 + 96);
  v43[9] = a3 + 96;
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
    v35 = v16;
    if ( (unsigned int)v13 + v16 > (unsigned int)v13 && (unsigned int)v13 + v16 <= *(_DWORD *)(a3 + 16) )
    {
      v17 = (unsigned int *)(v34 + v13);
      v43[8] = v17;
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
          if ( *v12 + v14 > *v12 && *v12 + v14 <= *(_DWORD *)(a3 + 16) )
          {
            memmove(v70, v17, v14);
            v40 = MiReferenceControlAreaFile((__int64)v33);
            MiLogRelocationRva(*(unsigned int *)(a3 + 96), v14, v40, v33);
            *(_QWORD *)v53 = v44;
            v54 = v40;
            v55 = v45;
            v56 = v39;
            v57 = v41;
            v58 = 0;
            v59 = v46;
            v60 = v70;
            v61 = v14;
            RetpolineRelocationInformation = MiCaptureImageCfgContext(
                                               (_DWORD)v33,
                                               v40,
                                               v34,
                                               v39,
                                               a4,
                                               a3,
                                               (__int64)v70,
                                               v14,
                                               (__int64)&v38,
                                               (__int64)v62);
            if ( RetpolineRelocationInformation >= 0 )
            {
              v18 = *(_DWORD *)a5 | v38;
              *(_DWORD *)a5 = v18;
              v19 = v42;
              *(_WORD *)(a5 + 4) = *(_WORD *)(v42 + 48) == 452;
              *(_WORD *)(a5 + 6) = *(_WORD *)(v19 + 48);
              v20 = 0;
              if ( (v18 & 1) != 0 )
              {
                Src[0] = 1;
                v66 = MiImageCfgRvaIteratorFirst;
                v67 = MiImageCfgRvaIteratorNext;
                v20 = 1;
                if ( (v18 & 8) != 0 )
                {
                  Src[1] = 4;
                  v68 = 0LL;
                  v69 = 0LL;
                  v20 = 2;
                }
              }
              else
              {
                v66 = 0LL;
                Src[0] = 0;
              }
              Src[4] = v20;
              if ( !v20
                || (RetpolineRelocationInformation = RtlCreateRvaList(
                                                       (int)v53,
                                                       v18,
                                                       452LL,
                                                       v20,
                                                       Src,
                                                       v30,
                                                       (__int64 **)(a5 + 8)),
                    RetpolineRelocationInformation >= 0) )
              {
                if ( MiIsRetpolineEnabled() || MiIsImportOptimizationEnabled() )
                {
                  v8 = 0;
                  if ( *(_WORD *)(a3 + 48) == 523 )
                    v8 = v21;
                }
                v22 = *(_WORD *)(a3 + 48);
                if ( v8 || v22 == 523 )
                {
                  v23 = v14;
                  v24 = v34;
                  v25 = LdrCaptureDynamicRelocationTableHeader(v34, a4, (__int64)v70, v23, v39, v22, &v32, v43);
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
                  v24 = v34;
                }
                if ( v8 && v32 )
                {
                  v26 = MiCaptureRetpolineRelocationTables(v24, a4, v31, v32, v43, v30, v64);
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
                                                       (__int64)v64,
                                                       v63,
                                                       a4,
                                                       (_QWORD *)(a5 + 16));
                    if ( RetpolineRelocationInformation < 0 )
                      goto LABEL_37;
                  }
                }
                if ( v22 == 523 && v32 )
                {
                  v48 = 0LL;
                  v49 = 0LL;
                  v50 = 0LL;
                  v51 = 0LL;
                  v52 = 0;
                  v27 = 0LL;
                  if ( (*(_DWORD *)(*(_QWORD *)(*v33 + 56LL) + 76LL) & 0x40) != 0 )
                  {
                    v28 = RtlInitializeImageSystemOverride((__int64)v47, a4, (*(_DWORD *)a5 >> 3) & 1);
                    v48 = *(_OWORD *)v28;
                    v49 = *(_OWORD *)(v28 + 16);
                    v50 = *(_OWORD *)(v28 + 32);
                    v51 = *(_QWORD *)(v28 + 48);
                    v52 = *(_DWORD *)(v28 + 56);
                    v27 = &v48;
                  }
                  RetpolineRelocationInformation = RtlCreateFunctionOverrideFixupInfo(
                                                     v24,
                                                     a4,
                                                     v32,
                                                     (unsigned int)v43,
                                                     v31,
                                                     (__int64)&unk_140E2D9C0,
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
    MiFreeImageLoadConfig(a5);
  if ( v40 )
    MiDereferenceControlAreaFile((__int64)v33, v40);
  MiFreeImageCfgContext((__int64)v62);
  MiFreeImageRetpolineContext(v64);
  return (unsigned int)RetpolineRelocationInformation;
}
