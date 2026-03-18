/*
 * XREFs of ?CalcEntireInputBoundsFromInputResources@CFilterEffect@@UEAAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x180218230
 * Callers:
 *     <none>
 * Callees:
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x18000A2C0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001C330 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18001D7A0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18003DED0 (-UnionUnsafe@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800BEF90 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CFilterEffect::CalcEntireInputBoundsFromInputResources(__int64 a1, _OWORD *a2, __int64 a3)
{
  int v3; // eax
  unsigned int v5; // esi
  unsigned int v6; // r8d
  __int64 v7; // rax
  __int64 v8; // r13
  __int64 v9; // r12
  int v10; // ebx
  __int64 v11; // rbx
  __int64 v12; // rcx
  char v13; // al
  _OWORD *v14; // r15
  bool v15; // zf
  __int64 v16; // rax
  int v17; // r9d
  unsigned int v19; // eax
  __m128i v20; // xmm0
  int v21; // eax
  unsigned int v22; // edx
  int v23; // r15d
  unsigned __int64 v24; // rax
  __int128 v25; // xmm0
  __int64 v26; // rcx
  float *v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // r10
  __int64 v30; // rax
  __int64 v31; // rcx
  int v32; // r9d
  unsigned int v33; // eax
  __int128 v34; // xmm0
  int v35; // eax
  __int128 v36; // xmm0
  int v37; // eax
  unsigned int v38; // [rsp+20h] [rbp-99h]
  __int128 *v39; // [rsp+30h] [rbp-89h] BYREF
  __int128 v40; // [rsp+38h] [rbp-81h] BYREF
  int v41; // [rsp+48h] [rbp-71h]
  __int64 v42; // [rsp+4Ch] [rbp-6Dh]
  __int64 v43; // [rsp+58h] [rbp-61h]
  _OWORD *v44; // [rsp+60h] [rbp-59h]
  __int128 v45; // [rsp+68h] [rbp-51h] BYREF
  struct D2D_RECT_F v46; // [rsp+78h] [rbp-41h] BYREF
  __int64 i; // [rsp+88h] [rbp-31h]
  __int128 v48; // [rsp+90h] [rbp-29h] BYREF
  __int64 v49; // [rsp+A0h] [rbp-19h]
  int v50; // [rsp+A8h] [rbp-11h]
  _BYTE v51[20]; // [rsp+B0h] [rbp-9h] BYREF
  __int128 v52; // [rsp+C8h] [rbp+Fh] BYREF

  v3 = *(_DWORD *)(a1 + 40);
  v41 = 0;
  v43 = a3;
  v5 = 0;
  v6 = 0;
  v44 = a2;
  v42 = 0LL;
  *(_DWORD *)(a1 + 40) = v3 ^ ((unsigned __int8)v3 ^ (unsigned __int8)(v3 + 2)) & 6;
  v40 = 0LL;
  v45 = 0LL;
  if ( (((unsigned __int8)v3 ^ ((unsigned __int8)v3 ^ (unsigned __int8)(v3 + 2)) & 6) & 6) == 2 )
  {
    v7 = *(int *)(a1 + 152);
    if ( (_DWORD)v7 )
    {
      v8 = v40;
      v9 = 0LL;
      v10 = 0;
      for ( i = *(int *)(a1 + 152); ; v7 = i )
      {
        if ( v9 >= v7 )
          goto LABEL_21;
        v11 = *(_QWORD *)(*(_QWORD *)(a1 + 144) + 8 * v9);
        LODWORD(v39) = *(_DWORD *)(*(_QWORD *)(a1 + 136) + 4 * v9);
        v52 = DirectX::g_XMZero;
        v12 = *(_QWORD *)(v11 + 24);
        if ( v12 )
        {
          v13 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 64LL))(v12, 61LL);
          v14 = *(_OWORD **)(v11 + 24);
          v15 = v13 == 0;
          v16 = *(_QWORD *)v14;
          if ( v15 )
          {
            if ( !(*(unsigned __int8 (__fastcall **)(_OWORD *, __int64))(v16 + 64))(v14, 42LL) )
            {
              v10 = -2147467263;
              v38 = 573;
              goto LABEL_9;
            }
            v19 = *(_DWORD *)(v11 + 12) - *(_DWORD *)(v11 + 4);
            v46.left = 0.0;
            v46.top = 0.0;
            v20 = _mm_cvtsi32_si128(v19);
            v21 = *(_DWORD *)(v11 + 16) - *(_DWORD *)(v11 + 8);
            LODWORD(v46.right) = _mm_cvtepi32_ps(v20).m128_u32[0];
            v46.bottom = (float)v21;
            CMILMatrix::Transform2DBoundsHelper<1>(v43, &v46, (float *)&v52);
          }
          else
          {
            v10 = (*(__int64 (__fastcall **)(_OWORD *, _OWORD *, __int64))(v16 + 248))(v14, v44, v43);
            if ( v10 < 0 )
            {
              v38 = 546;
              goto LABEL_9;
            }
            v49 = 0LL;
            v50 = 0;
            v48 = 0LL;
            v36 = v14[10];
            *(_DWORD *)v51 = (_DWORD)v39;
            *(_OWORD *)&v51[4] = v36;
            v37 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v48, 20, 1, v51);
            v10 = v37;
            if ( v37 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v37, 0xC0u, 0LL);
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x226u, 0LL);
              DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v48);
              goto LABEL_11;
            }
            (*(void (__fastcall **)(_OWORD *, __int128 *, __int128 *))(*(_QWORD *)v14 + 216LL))(v14, &v48, &v52);
            DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v48);
          }
          v6 = v42;
        }
        else
        {
          v52 = *a2;
        }
        v22 = v5 + 1;
        *(_DWORD *)v51 = (_DWORD)v39;
        *(_OWORD *)&v51[4] = v52;
        if ( v5 + 1 < v5 )
          break;
        v10 = 0;
        if ( v22 <= v6 )
        {
          v30 = v5++;
          HIDWORD(v42) = v22;
          v31 = 5 * v30;
          *(_OWORD *)(v8 + 4 * v31) = *(_OWORD *)v51;
          *(_DWORD *)(v8 + 4 * v31 + 16) = *(_DWORD *)&v51[16];
        }
        else
        {
          v39 = (__int128 *)v51;
          v23 = DynArrayImpl<0>::Grow((__int64)&v40, 0x14u, 1, 0, (unsigned __int64 *)&v39);
          v10 = v23;
          if ( v23 < 0 )
          {
            v32 = v23;
            v33 = 192;
LABEL_36:
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v32, v33, 0LL);
            v17 = v23;
            v38 = 581;
            goto LABEL_10;
          }
          v24 = (unsigned __int64)v39;
          v8 = v40;
          v6 = v42;
          v25 = *v39;
          v26 = (unsigned int)(20 * HIDWORD(v42));
          v5 = ++HIDWORD(v42);
          *(_OWORD *)(v26 + v40) = v25;
          *(_DWORD *)(v26 + v8 + 16) = *(_DWORD *)(v24 + 16);
        }
        a2 = v44;
        ++v9;
      }
      v10 = -2147024362;
      v33 = 181;
      v23 = -2147024362;
      v32 = -2147024362;
      goto LABEL_36;
    }
    v34 = *a2;
    *(_DWORD *)v51 = 0;
    *(_OWORD *)&v51[4] = v34;
    v35 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v40, 20, 1, v51);
    v10 = v35;
    if ( v35 >= 0 )
    {
      v5 = HIDWORD(v42);
      v8 = v40;
LABEL_21:
      if ( v5 )
      {
        v27 = (float *)(v8 + 4);
        do
        {
          TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe((float *)&v45, v27);
          v27 = (float *)(v28 + 20);
        }
        while ( v29 != 1 );
      }
      *(_OWORD *)(a1 + 160) = v45;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v35, 0xC0u, 0LL);
      v38 = 528;
LABEL_9:
      v17 = v10;
LABEL_10:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, v38, 0LL);
    }
  }
  else
  {
    v10 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147467259, 0x209u, 0LL);
  }
LABEL_11:
  *(_DWORD *)(a1 + 40) ^= (*(_DWORD *)(a1 + 40) ^ (2 * (*(_DWORD *)(a1 + 40) >> 1) - 2)) & 6;
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v40);
  return (unsigned int)v10;
}
