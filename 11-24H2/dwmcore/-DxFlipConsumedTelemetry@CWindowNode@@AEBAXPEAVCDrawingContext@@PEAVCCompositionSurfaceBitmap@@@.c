/*
 * XREFs of ?DxFlipConsumedTelemetry@CWindowNode@@AEBAXPEAVCDrawingContext@@PEAVCCompositionSurfaceBitmap@@@Z @ 0x1801EEA74
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1802375F0 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800234B0 (-IsEmpty@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x180040140 (McGenEventWrite_EventWriteTransfer.c)
 *     ?GetLastPresentCount@CCompositionSurfaceBitmap@@QEBAIXZ @ 0x1801EED50 (-GetLastPresentCount@CCompositionSurfaceBitmap@@QEBAIXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CWindowNode::DxFlipConsumedTelemetry(
        CWindowNode *this,
        struct CDrawingContext *a2,
        struct CCompositionSurfaceBitmap *a3)
{
  __int64 v5; // rcx
  int v6; // r14d
  __m128i v7; // xmm6
  __int128 *v8; // rcx
  char v9; // r8
  char v10; // al
  unsigned int LastPresentCount; // eax
  _QWORD *v12; // rcx
  unsigned int v13; // edi
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // [rsp+30h] [rbp-168h] BYREF
  int v18; // [rsp+38h] [rbp-160h] BYREF
  int v19; // [rsp+40h] [rbp-158h] BYREF
  unsigned int v20; // [rsp+48h] [rbp-150h] BYREF
  __int64 v21; // [rsp+50h] [rbp-148h] BYREF
  unsigned __int64 v22; // [rsp+58h] [rbp-140h] BYREF
  unsigned __int64 v23; // [rsp+60h] [rbp-138h] BYREF
  __int64 v24; // [rsp+68h] [rbp-130h] BYREF
  __int64 v25; // [rsp+70h] [rbp-128h] BYREF
  __int64 v26; // [rsp+88h] [rbp-110h]
  __int128 v27; // [rsp+98h] [rbp-100h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+B0h] [rbp-E8h] BYREF
  __int64 *v29; // [rsp+C0h] [rbp-D8h]
  __int64 v30; // [rsp+C8h] [rbp-D0h]
  unsigned __int64 *v31; // [rsp+D0h] [rbp-C8h]
  __int64 v32; // [rsp+D8h] [rbp-C0h]
  unsigned __int64 *v33; // [rsp+E0h] [rbp-B8h]
  __int64 v34; // [rsp+E8h] [rbp-B0h]
  int *v35; // [rsp+F0h] [rbp-A8h]
  __int64 v36; // [rsp+F8h] [rbp-A0h]
  int *v37; // [rsp+100h] [rbp-98h]
  __int64 v38; // [rsp+108h] [rbp-90h]
  int *v39; // [rsp+110h] [rbp-88h]
  __int64 v40; // [rsp+118h] [rbp-80h]
  __int64 *v41; // [rsp+120h] [rbp-78h]
  __int64 v42; // [rsp+128h] [rbp-70h]
  __int64 *v43; // [rsp+130h] [rbp-68h]
  __int64 v44; // [rsp+138h] [rbp-60h]
  unsigned int *v45; // [rsp+140h] [rbp-58h]
  __int64 v46; // [rsp+148h] [rbp-50h]
  __int128 *v47; // [rsp+150h] [rbp-48h]
  __int64 v48; // [rsp+158h] [rbp-40h]

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    if ( *((_BYTE *)a2 + 192) )
    {
      v5 = *((_QWORD *)a3 + 12);
      v6 = *((_DWORD *)a2 + 47);
      v26 = *(_QWORD *)((char *)a2 + 180);
      v7 = *(__m128i *)((char *)a2 + 164);
      v27 = 0LL;
      if ( v5 )
      {
        if ( TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEmpty((_DWORD *)(v5 + 48)) )
        {
          v10 = 0;
        }
        else
        {
          v10 = 1;
          v27 = *v8;
          *((_QWORD *)v8 + 1) = 0LL;
          *(_QWORD *)v8 = 0LL;
          v9 = Microsoft_Windows_Dwm_CoreEnableBits;
        }
        if ( v10 && (v9 & 0x20) != 0 )
        {
          LastPresentCount = CCompositionSurfaceBitmap::GetLastPresentCount(a3);
          v12 = (_QWORD *)*((_QWORD *)a3 + 12);
          v13 = LastPresentCount;
          v14 = 0LL;
          if ( v12 )
            v14 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*v12 + 64LL))(v12, *v12, 0LL);
          v15 = *((_QWORD *)a3 + 12);
          v16 = 0LL;
          if ( v15 )
            v16 = *(_QWORD *)(v15 + 40);
          v24 = v16;
          v23 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v7, 8)) | (unsigned __int64)((__int64)_mm_cvtsi128_si32(_mm_srli_si128(v7, 12)) << 32);
          v20 = v13;
          v21 = *((_QWORD *)this + 100);
          v18 = HIDWORD(v26);
          v17 = v26;
          v29 = &v21;
          v31 = &v22;
          v33 = &v23;
          v35 = &v17;
          v37 = &v18;
          v39 = &v19;
          v41 = &v24;
          v43 = &v25;
          v45 = &v20;
          v47 = &v27;
          v22 = (unsigned int)_mm_cvtsi128_si32(v7) | (unsigned __int64)((__int64)_mm_cvtsi128_si32(_mm_srli_si128(v7, 4)) << 32);
          v25 = v14;
          v19 = v6;
          v30 = 8LL;
          v32 = 8LL;
          v34 = 8LL;
          v36 = 4LL;
          v38 = 4LL;
          v40 = 4LL;
          v42 = 8LL;
          v44 = 8LL;
          v46 = 4LL;
          v48 = 16LL;
          McGenEventWrite_EventWriteTransfer(
            &Microsoft_Windows_Dwm_Core_Provider_Context,
            &Windowed_Dx_Flip_Consumed,
            v14,
            0xBu,
            &v28);
        }
      }
    }
  }
}
