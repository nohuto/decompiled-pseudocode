/*
 * XREFs of ?NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18000FA10
 * Callers:
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18000E778 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@.c)
 * Callees:
 *     ?SmoothTouchDragPath@CTouchDragVisualHelper@@SAXPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEAV2@@Z @ 0x18000FE58 (-SmoothTouchDragPath@CTouchDragVisualHelper@@SAXPEBV-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEAV2@@Z.c)
 *     ?Normalize@CTouchDragVisualHelper@@SAXPEAUD2D_VECTOR_3F@@@Z @ 0x18001057C (-Normalize@CTouchDragVisualHelper@@SAXPEAUD2D_VECTOR_3F@@@Z.c)
 *     ?Length@CTouchDragVisualHelper@@SAMPEBUD2D_VECTOR_3F@@@Z @ 0x1800105D4 (-Length@CTouchDragVisualHelper@@SAMPEBUD2D_VECTOR_3F@@@Z.c)
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x18001066C (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     ?InsertAt@?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@QEAAJAEBUTOUCH_DRAG_POINT@@I@Z @ 0x1800106CC (-InsertAt@-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@QEAAJAEBUTOUCH_DRAG_POINT@@I@Z.c)
 *     ?DotProduct@CTouchDragVisualHelper@@SAMPEBUD2D_VECTOR_3F@@0@Z @ 0x180010808 (-DotProduct@CTouchDragVisualHelper@@SAMPEBUD2D_VECTOR_3F@@0@Z.c)
 *     ?Subtract@CTouchDragVisualHelper@@SA?AUD2D_VECTOR_3F@@PEBUD2D_POINT_3F@@0@Z @ 0x180010834 (-Subtract@CTouchDragVisualHelper@@SA-AUD2D_VECTOR_3F@@PEBUD2D_POINT_3F@@0@Z.c)
 *     ?NotifyTouchDragVisualComplete@CContactManager@@QEAAJPEBVCTouchDragVisual@@@Z @ 0x1800122A0 (-NotifyTouchDragVisualComplete@CContactManager@@QEAAJPEBVCTouchDragVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Stop@CTouchDragVisual@@UEAAXXZ @ 0x18007E550 (-Stop@CTouchDragVisual@@UEAAXXZ.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x1800865C8 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 */

__int64 __fastcall CTouchDragVisual::NotifyTouchDrag(CTouchDragVisual *this, const struct tagPOINT *a2)
{
  unsigned int v4; // r12d
  DWORD TickCount; // eax
  int v6; // r8d
  unsigned int v7; // esi
  DWORD v8; // r13d
  char *v9; // r15
  __int64 v10; // rax
  char v11; // r14
  __m128i v12; // xmm0
  __m128i v13; // xmm1
  bool v14; // zf
  __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // xmm1_8
  struct D2D_VECTOR_3F *v18; // rax
  __int64 v19; // xmm2_8
  float v20; // xmm6_4
  __int128 v21; // xmm1
  int v22; // eax
  struct D2D_VECTOR_3F *v23; // rax
  FLOAT z; // ecx
  int v25; // eax
  unsigned int v26; // r14d
  __int64 v27; // r13
  float *v28; // rbx
  float v29; // xmm0_4
  __int64 v31; // rdx
  float v32; // xmm0_4
  __int64 v33; // rax
  DWORD v34; // ecx
  DWORD v35; // ecx
  CContactManager *v36; // rcx
  int v37; // eax
  __int64 v38; // rax
  __int64 v39; // xmm0_8
  D2D_VECTOR_3F v40; // [rsp+38h] [rbp-79h] BYREF
  __int128 v41; // [rsp+48h] [rbp-69h] BYREF
  struct D2D_VECTOR_3F v42; // [rsp+58h] [rbp-59h] BYREF
  __int128 v43; // [rsp+68h] [rbp-49h] BYREF
  __int64 v44; // [rsp+78h] [rbp-39h]
  int v45; // [rsp+80h] [rbp-31h]
  __int128 v46; // [rsp+88h] [rbp-29h] BYREF
  __int64 v47; // [rsp+98h] [rbp-19h]
  int v48; // [rsp+A0h] [rbp-11h]
  struct D2D_VECTOR_3F v49; // [rsp+A8h] [rbp-9h] BYREF

  v4 = 0;
  TickCount = GetTickCount();
  v7 = *((_DWORD *)this + 76);
  v8 = TickCount;
  if ( v7
    && (v9 = (char *)this + 280, v10 = *((_QWORD *)this + 35), *(float *)(v10 + 4) == (float)a2->x)
    && *(float *)(v10 + 8) == (float)a2->y )
  {
    v11 = 0;
  }
  else
  {
    v11 = 1;
    v9 = (char *)this + 280;
  }
  if ( v7 )
  {
    v34 = v8 - **(_DWORD **)v9;
    if ( *((float *)this + 66) > (float)((float)((float)((float)(*(float *)(*(_QWORD *)v9 + 8LL) - (float)a2->y)
                                                       * (float)(*(float *)(*(_QWORD *)v9 + 8LL) - (float)a2->y))
                                               + (float)((float)(*(float *)(*(_QWORD *)v9 + 4LL) - (float)a2->x)
                                                       * (float)(*(float *)(*(_QWORD *)v9 + 4LL) - (float)a2->x)))
                                       / (float)(int)(v34 * v34)) )
    {
      v35 = *((_DWORD *)this + 101) + v34;
      *((_DWORD *)this + 101) = v35;
    }
    else
    {
      *((_DWORD *)this + 101) = 0;
      v35 = 0;
    }
    if ( v35 > *((_DWORD *)this + 67) )
    {
      v36 = (CContactManager *)*((_QWORD *)this + 51);
      if ( v36 )
      {
        v37 = CContactManager::NotifyTouchDragVisualComplete(v36, this);
        v4 = v37;
        if ( v37 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v37, 0x69u, 0LL);
          goto LABEL_39;
        }
      }
      *((_DWORD *)this + 101) = 0;
    }
  }
  else if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 2) != 0 )
  {
    McGenEventWrite_EtwEventWriteTransfer(
      (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
      (unsigned int)&UdwmTouchDragVisual_BeginDraw_Info,
      v6,
      1,
      (__int64)&v49);
  }
  if ( v11 )
  {
    v12 = _mm_cvtsi32_si128(a2->x);
    v13 = _mm_cvtsi32_si128(a2->y);
    *(_QWORD *)&v42.x = 0LL;
    v42.z = 0.0;
    v14 = *((_BYTE *)this + 400) == 0;
    HIDWORD(v41) = 1056964608;
    LODWORD(v41) = v8;
    DWORD1(v41) = _mm_cvtepi32_ps(v12).m128_u32[0];
    DWORD2(v41) = _mm_cvtepi32_ps(v13).m128_u32[0];
    if ( v14 || !v7 )
    {
      DynArray<TOUCH_DRAG_POINT,0>::InsertAt(v9, &v41);
      ++v7;
    }
    else
    {
      v38 = *(_QWORD *)v9;
      v39 = *(_QWORD *)&v42.x;
      *(_OWORD *)v38 = v41;
      *(_QWORD *)(v38 + 16) = v39;
      *(_DWORD *)(v38 + 24) = 0;
    }
    *((_BYTE *)this + 400) = 0;
    if ( v7 > 1 )
    {
      v15 = *(_QWORD *)v9;
      v16 = *(_DWORD *)(*(_QWORD *)v9 + 52LL);
      v17 = *(_QWORD *)(*(_QWORD *)v9 + 44LL);
      v43 = *(_OWORD *)(*(_QWORD *)v9 + 28LL);
      v45 = v16;
      v44 = v17;
      v18 = CTouchDragVisualHelper::Subtract(
              &v49,
              (const struct D2D_POINT_3F *)((char *)&v41 + 4),
              (const struct D2D_POINT_3F *)((char *)&v43 + 4));
      v19 = *(_QWORD *)&v18->x;
      *(FLOAT *)&v18 = v18->z;
      *(_QWORD *)&v40.x = v19;
      LODWORD(v40.z) = (_DWORD)v18;
      v20 = CTouchDragVisualHelper::Length(&v40);
      if ( v7 <= 2 )
      {
        if ( v20 >= 10.0 )
        {
LABEL_15:
          v25 = CTouchVisual::RegisterGlobalTimer(this);
          v4 = v25;
          if ( v25 >= 0 )
          {
            v26 = 0;
            v27 = 0LL;
            do
            {
              v28 = *(float **)v9;
              if ( v26 )
              {
                v31 = 7LL * (v26 - 1);
                v32 = v28[v31 + 2];
                if ( v26 == v7 - 1 )
                {
                  LODWORD(v42.x) = COERCE_UNSIGNED_INT(v32 - v28[v27 + 2]) ^ _xmm;
                  v29 = v28[v31 + 1] - v28[v27 + 1];
                }
                else
                {
                  v33 = 7LL * (v26 + 1);
                  LODWORD(v42.x) = COERCE_UNSIGNED_INT(v32 - v28[v33 + 2]) ^ _xmm;
                  v29 = v28[v31 + 1] - v28[v33 + 1];
                }
              }
              else
              {
                LODWORD(v42.x) = COERCE_UNSIGNED_INT(v28[2] - v28[9]) ^ _xmm;
                v29 = v28[1] - v28[8];
              }
              v42.z = 0.0;
              v42.y = v29;
              CTouchDragVisualHelper::Normalize(&v42);
              ++v26;
              *(struct D2D_VECTOR_3F *)&v28[v27 + 4] = v42;
              v27 += 7LL;
            }
            while ( v26 < 2 );
            CTouchDragVisualHelper::SmoothTouchDragPath(v9, (char *)this + 312);
            return v4;
          }
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0xA3u, 0LL);
LABEL_39:
          CTouchDragVisual::Stop(this);
          return v4;
        }
      }
      else
      {
        v21 = *(_OWORD *)(v15 + 56);
        v22 = *(_DWORD *)(v15 + 80);
        v47 = *(_QWORD *)(v15 + 72);
        v46 = v21;
        v48 = v22;
        v23 = CTouchDragVisualHelper::Subtract(
                &v49,
                (const struct D2D_POINT_3F *)((char *)&v43 + 4),
                (const struct D2D_POINT_3F *)((char *)&v46 + 4));
        z = v23->z;
        *((_QWORD *)this + 46) = *(_QWORD *)&v23->x;
        *((FLOAT *)this + 94) = z;
        CTouchDragVisualHelper::Normalize((struct D2D_VECTOR_3F *)((char *)this + 368));
        if ( (float)((float)(CTouchDragVisualHelper::DotProduct(
                               &v40,
                               (const struct D2D_VECTOR_3F *)((char *)this + 368))
                           / v20)
                   / v20) <= 0.059999999 )
          goto LABEL_15;
      }
      *((_BYTE *)this + 400) = 1;
      goto LABEL_15;
    }
  }
  return v4;
}
