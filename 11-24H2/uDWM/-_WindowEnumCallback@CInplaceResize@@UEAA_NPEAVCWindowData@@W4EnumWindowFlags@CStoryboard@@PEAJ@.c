/*
 * XREFs of ?_WindowEnumCallback@CInplaceResize@@UEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180053990
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180053BC4 (-SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?_CreateAndAddAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAPEAVCAnimationComponent@@@Z @ 0x180053BE4 (-_CreateAndAddAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAPEAVCAnimationComponen.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180053C14 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?ResizeToSnapshot@CStoryboard@@SAXPEAUHWND__@@AEBUtagRECT@@PEAU3@@Z @ 0x180098E60 (-ResizeToSnapshot@CStoryboard@@SAXPEAUHWND__@@AEBUtagRECT@@PEAU3@@Z.c)
 */

char __fastcall CInplaceResize::_WindowEnumCallback(CStoryboard *a1, __int64 a2, char a3, int *a4)
{
  int v4; // esi
  int v8; // r15d
  int v9; // ebx
  _DWORD *v10; // rdx
  int v11; // r15d
  int v12; // r9d
  int i; // ecx
  int v14; // eax
  CAnimatedTransitionVisual **v15; // rdi
  struct tagRECT v16; // xmm2
  HWND v17; // rcx
  int v18; // ebx
  int v19; // ebx
  int v20; // ebx
  int v21; // eax
  LONG v22; // edx
  __m128i v23; // xmm0
  int v24; // ecx
  int v25; // eax
  LONG v27; // edx
  int v28; // ecx
  int v29; // eax
  LONG v30; // edx
  __m128i v31; // xmm0
  int v32; // eax
  int v33; // ecx
  int v34; // eax
  LONG v35; // edx
  int v36; // ecx
  int v37; // eax
  struct tagRECT v38; // [rsp+30h] [rbp-20h] BYREF
  struct tagRECT v39; // [rsp+40h] [rbp-10h] BYREF
  CBaseObject *v40; // [rsp+98h] [rbp+48h] BYREF

  v4 = 0;
  v40 = 0LL;
  if ( (a3 & 1) == 0 )
    goto LABEL_15;
  v8 = *(_DWORD *)(a2 + 744);
  v9 = v8 & 0xFFF;
  v10 = `CInplaceResize::GetPVLTarget'::`2'::s_rgPVLTargetLookupTable;
  v11 = v8 & 0x20000000;
  v12 = -1;
  for ( i = 0; (unsigned __int64)i < 4; ++i )
  {
    if ( (*v10 & 0xFFF) == v9 )
    {
      v12 = `CInplaceResize::GetPVLTarget'::`2'::s_rgPVLTargetLookupTable[2 * i + 1];
      break;
    }
    v10 += 2;
  }
  v14 = CStoryboard::_CreateAndAddAnimationComponent(a1, (struct CWindowData *)a2, v11 != 0, v12, &v40);
  v15 = (CAnimatedTransitionVisual **)v40;
  v4 = v14;
  if ( v14 >= 0 )
  {
    v16 = *(struct tagRECT *)((char *)v40 + 88);
    v39 = v16;
    v38 = v16;
    if ( v11 )
    {
      v17 = *(HWND *)(a2 + 40);
      v38 = 0LL;
      CStoryboard::ResizeToSnapshot(v17, &v39, &v38);
      v18 = v9 - 48;
      if ( v18 )
      {
        v19 = v18 - 1;
        if ( v19 )
        {
          v20 = v19 - 1;
          if ( v20 )
          {
            if ( v20 == 1 )
            {
              v27 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v16, 8));
              v28 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v38, 8)) - _mm_cvtsi128_si32((__m128i)v38);
              v29 = 0;
              if ( v28 >= 0 )
                v29 = v28;
              v38.right = v27;
              v38.left = v27 - v29;
            }
          }
          else
          {
            v21 = _mm_cvtsi128_si32((__m128i)v38);
            v22 = _mm_cvtsi128_si32((__m128i)v16);
            v23 = _mm_srli_si128((__m128i)v38, 8);
            v38.left = v22;
            v24 = _mm_cvtsi128_si32(v23) - v21;
            v25 = 0;
            if ( v24 >= 0 )
              v25 = v24;
            v38.right = v22 + v25;
          }
          goto LABEL_12;
        }
        v30 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v16, 12));
        v31 = _mm_srli_si128((__m128i)v38, 12);
        v32 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v38, 4));
        v38.bottom = v30;
        v33 = _mm_cvtsi128_si32(v31) - v32;
        v34 = 0;
        if ( v33 >= 0 )
          v34 = v33;
        v35 = v30 - v34;
      }
      else
      {
        v35 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v16, 4));
        v36 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v38, 12)) - _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v38, 4));
        v37 = 0;
        if ( v36 >= 0 )
          v37 = v36;
        v38.bottom = v35 + v37;
      }
      v38.top = v35;
    }
LABEL_12:
    CAnimatedTransitionVisual::SetBeginRect(v15[5], &v38);
    CAnimatedTransitionVisual::SetEndRect(v15[5], &v38);
    goto LABEL_13;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v14, 0x6E9u, 0LL);
LABEL_13:
  if ( v15 )
    CBaseObject::Release((CBaseObject *)v15);
LABEL_15:
  *a4 = v4;
  return 1;
}
