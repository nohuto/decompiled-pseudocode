/*
 * XREFs of ?GetPolygonNoRef@CVisual@@IEAAJPEAVCMILMatrix@@MIW4Enum@MilBitmapBorderMode@@W43MilCompositingMode@@W43MilBitmapInterpolationMode@@_N44PEAPEAVCPolygon@@@Z @ 0x180169E50
 * Callers:
 *     ?CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z @ 0x180169048 (-CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z.c)
 *     ?PreComputePostSubgraph@CBspPreComputeHelper@@QEAAJPEAVCVisual@@PEBV2@@Z @ 0x180169400 (-PreComputePostSubgraph@CBspPreComputeHelper@@QEAAJPEAVCVisual@@PEBV2@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001C330 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800BEF90 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Create@CPolygon@@SAJPEAV?$DynArray@UPoint@CPolygon@@$0A@@@PEAVCVisual@@PEAVCContent@@PEAVCMILMatrix@@MIW4Enum@MilBitmapBorderMode@@W46MilCompositingMode@@W46MilBitmapInterpolationMode@@_N7PEAUD2D_VECTOR_4F@@PEAPEAV1@@Z @ 0x180202A60 (-Create@CPolygon@@SAJPEAV-$DynArray@UPoint@CPolygon@@$0A@@@PEAVCVisual@@PEAVCContent@@PEAVCMILMa.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::GetPolygonNoRef(
        __int64 a1,
        int a2,
        float a3,
        int a4,
        int a5,
        int a6,
        int a7,
        char a8,
        char a9,
        char a10,
        _QWORD *a11)
{
  unsigned int v13; // edi
  __int64 v14; // r14
  int v15; // eax
  int v16; // r9d
  unsigned int v17; // r8d
  __int64 v18; // rcx
  __int64 v19; // rdx
  unsigned int v20; // r9d
  __int64 v21; // rcx
  __int64 v22; // rdx
  unsigned int v23; // r8d
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  unsigned int v28; // eax
  int v30; // ebx
  unsigned int v31; // eax
  int v32; // ebx
  unsigned int v33; // eax
  unsigned int v34; // eax
  unsigned int v35; // eax
  int v36; // eax
  unsigned int v37; // [rsp+20h] [rbp-E0h]
  __int128 v38; // [rsp+70h] [rbp-90h]
  __int128 v39; // [rsp+70h] [rbp-90h]
  __int128 v40; // [rsp+70h] [rbp-90h]
  __int128 v41; // [rsp+70h] [rbp-90h]
  __int64 v43; // [rsp+88h] [rbp-78h] BYREF
  __int128 v44; // [rsp+90h] [rbp-70h] BYREF
  __int128 v45; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v46; // [rsp+B0h] [rbp-50h] BYREF
  int v47; // [rsp+C0h] [rbp-40h]
  _QWORD v48[2]; // [rsp+D0h] [rbp-30h] BYREF
  int v49; // [rsp+E0h] [rbp-20h]
  __int64 v50; // [rsp+E4h] [rbp-1Ch]
  _BYTE v51[80]; // [rsp+F0h] [rbp-10h] BYREF

  v13 = 0;
  v14 = 0LL;
  v43 = 0LL;
  if ( !*(_QWORD *)(a1 + 256) && !a10 )
    goto LABEL_36;
  v47 = 1;
  v48[0] = v51;
  v48[1] = v51;
  v49 = 4;
  v50 = 4LL;
  v45 = 0LL;
  v44 = _xmm;
  if ( a10 )
  {
    v45 = *(_OWORD *)(a1 + 176);
  }
  else
  {
    v15 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a1 + 232LL))(a1, &v45);
    v13 = v15;
    if ( v15 < 0 )
    {
      v16 = v15;
      v37 = 5883;
LABEL_5:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, v37, 0LL);
      DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v48);
      return v13;
    }
  }
  (*(void (__fastcall **)(__int64, __int128 *, __int128 *))(*(_QWORD *)a1 + 320LL))(a1, &v45, &v45);
  *((_QWORD *)&v38 + 1) = 0x3F80000000000000LL;
  *(_QWORD *)&v38 = v45;
  v17 = HIDWORD(v50) + 1;
  v46 = v38;
  if ( (unsigned int)(HIDWORD(v50) + 1) < HIDWORD(v50) )
  {
    v30 = -2147024362;
    v13 = -2147024362;
    v31 = 181;
  }
  else
  {
    if ( v17 <= (unsigned int)v50 )
    {
      v18 = v48[0];
      v19 = 5LL * HIDWORD(v50);
      *(_OWORD *)(v48[0] + 4 * v19) = v38;
      *(_DWORD *)(v18 + 4 * v19 + 16) = v47;
      HIDWORD(v50) = v17;
      goto LABEL_10;
    }
    v36 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v48, 20, 1, &v46);
    v13 = v36;
    if ( v36 >= 0 )
    {
      v17 = HIDWORD(v50);
LABEL_10:
      v20 = v17 + 1;
      *((_QWORD *)&v39 + 1) = 0x3F80000000000000LL;
      *(_QWORD *)&v39 = __PAIR64__(DWORD1(v45), DWORD2(v45));
      v46 = v39;
      if ( v17 + 1 < v17 )
      {
        v32 = -2147024362;
        v34 = 181;
        v13 = -2147024362;
      }
      else
      {
        if ( v20 <= (unsigned int)v50 )
        {
          v21 = v48[0];
          v22 = 5LL * v17;
          *(_OWORD *)(v48[0] + 4 * v22) = v39;
          *(_DWORD *)(v21 + 4 * v22 + 16) = v47;
          HIDWORD(v50) = v17 + 1;
          goto LABEL_13;
        }
        v32 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v48, 20, 1, &v46);
        v13 = v32;
        if ( v32 >= 0 )
        {
          v20 = HIDWORD(v50);
LABEL_13:
          v23 = v20 + 1;
          *((_QWORD *)&v40 + 1) = 0x3F80000000000000LL;
          *(_QWORD *)&v40 = *((_QWORD *)&v45 + 1);
          v46 = v40;
          if ( v20 + 1 < v20 )
          {
            v32 = -2147024362;
            v33 = 181;
            v13 = -2147024362;
          }
          else
          {
            if ( v23 <= (unsigned int)v50 )
            {
              v24 = v48[0];
              v25 = 5LL * v20;
              *(_OWORD *)(v48[0] + 4 * v25) = v40;
              *(_DWORD *)(v24 + 4 * v25 + 16) = v47;
              HIDWORD(v50) = v20 + 1;
LABEL_16:
              *((_QWORD *)&v41 + 1) = 0x3F80000000000000LL;
              *(_QWORD *)&v41 = __PAIR64__(HIDWORD(v45), v45);
              v46 = v41;
              if ( v23 + 1 < v23 )
              {
                v32 = -2147024362;
                v35 = 181;
                v13 = -2147024362;
              }
              else
              {
                if ( v23 + 1 <= (unsigned int)v50 )
                {
                  v26 = v48[0];
                  v27 = 5LL * v23;
                  *(_OWORD *)(v48[0] + 4 * v27) = v41;
                  *(_DWORD *)(v26 + 4 * v27 + 16) = v47;
                  HIDWORD(v50) = v23 + 1;
LABEL_19:
                  v13 = CPolygon::Create(
                          (unsigned int)v48,
                          a1,
                          *(_QWORD *)(a1 + 256),
                          a2,
                          LODWORD(a3),
                          a4,
                          a5,
                          a6,
                          a7,
                          a8,
                          a9,
                          (__int64)&v44,
                          (__int64)&v43);
                  if ( (v13 & 0x80000000) == 0 )
                  {
                    DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v48);
                    v14 = v43;
LABEL_36:
                    *a11 = v14;
                    return v13;
                  }
                  v14 = v43;
                  v28 = 5915;
                  goto LABEL_21;
                }
                v32 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v48, 20, 1, &v46);
                v13 = v32;
                if ( v32 >= 0 )
                  goto LABEL_19;
                v35 = 192;
              }
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v32, v35, 0LL);
              v37 = 5900;
LABEL_30:
              v16 = v32;
              goto LABEL_5;
            }
            v32 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v48, 20, 1, &v46);
            v13 = v32;
            if ( v32 >= 0 )
            {
              v23 = HIDWORD(v50);
              goto LABEL_16;
            }
            v33 = 192;
          }
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v32, v33, 0LL);
          v37 = 5898;
          goto LABEL_30;
        }
        v34 = 192;
      }
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v32, v34, 0LL);
      v37 = 5896;
      goto LABEL_30;
    }
    v30 = v36;
    v31 = 192;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v30, v31, 0LL);
  v28 = 5894;
LABEL_21:
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, v28, 0LL);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v48);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
  return v13;
}
