/*
 * XREFs of ?UpdateAttributes@CCompositionSwapchainBuffer@@IEAA_NAEBVCFlipContentToken@@@Z @ 0x140031E38
 * Callers:
 *     ?NotifyFlipContentTokenInFrame@CCompositionSwapchainBuffer@@IEAAJPEBVCFlipContentToken@@PEA_N@Z @ 0x140031C7C (-NotifyFlipContentTokenInFrame@CCompositionSwapchainBuffer@@IEAAJPEBVCFlipContentToken@@PEA_N@Z.c)
 * Callees:
 *     ?GetRealizationAt@CCompositionBuffer@@IEBAPEAVCBufferRealization@@I@Z @ 0x140032124 (-GetRealizationAt@CCompositionBuffer@@IEBAPEAVCBufferRealization@@I@Z.c)
 *     ?HasMargins@LetterboxingMargins@PresentedContentUpdateInfo@@QEBA_NXZ @ 0x140032158 (-HasMargins@LetterboxingMargins@PresentedContentUpdateInfo@@QEBA_NXZ.c)
 */

char __fastcall CCompositionSwapchainBuffer::UpdateAttributes(
        CCompositionSwapchainBuffer *this,
        const struct CFlipContentToken *a2)
{
  int v2; // eax
  int v4; // eax
  unsigned int v5; // edx
  unsigned __int8 *v6; // rbx
  __int64 v7; // rax
  int v8; // eax
  float *v9; // rax
  __int64 v10; // rdx
  float v11; // xmm1_4
  float v12; // xmm1_4
  float v13; // xmm1_4
  float v14; // xmm1_4
  float v15; // xmm1_4
  unsigned int v16; // edi
  int HasMargins; // ecx
  CCompositionBuffer *v18; // r10
  int v19; // esi
  struct CBufferRealization *RealizationAt; // rax
  __int64 v21; // r10
  char v22; // r11
  int v23; // ecx

  v2 = *((_DWORD *)a2 + 34);
  if ( *((_DWORD *)this + 21) != v2 )
    *((_DWORD *)this + 21) = v2;
  v4 = *((_DWORD *)a2 + 35);
  if ( *((_DWORD *)this + 22) == v4 )
  {
    v5 = *((_DWORD *)this + 46);
  }
  else
  {
    v5 = *((_DWORD *)this + 46) & 0xFFFFDFFF | (v4 != 0 ? 0x2000 : 0);
    *((_DWORD *)this + 46) = v5;
    *((_DWORD *)this + 22) = *((_DWORD *)a2 + 35);
  }
  v6 = (unsigned __int8 *)a2 + 152;
  v7 = *((int *)v6 + 13);
  if ( *((_QWORD *)this + 7) != v7 )
  {
    *((_QWORD *)this + 7) = v7;
    v5 = v5 & 0xFFFFFFFE | (v7 != 0);
    *((_DWORD *)this + 46) = v5;
  }
  if ( ((*v6 ^ (unsigned __int8)(v5 >> 1)) & 1) != 0 )
    *((_DWORD *)this + 46) = v5 ^ ((unsigned __int8)v5 ^ (unsigned __int8)(2 * *v6)) & 2;
  v8 = *((_DWORD *)v6 + 12);
  if ( *((_DWORD *)this + 24) != v8 )
    *((_DWORD *)this + 24) = v8;
  if ( *((_DWORD *)this + 25) != *((_DWORD *)v6 + 1)
    || *((_DWORD *)this + 26) != *((_DWORD *)v6 + 2)
    || *((_DWORD *)this + 27) != *((_DWORD *)v6 + 3)
    || *((_DWORD *)this + 28) != *((_DWORD *)v6 + 4) )
  {
    *(_OWORD *)((char *)this + 100) = *(_OWORD *)(v6 + 4);
  }
  v9 = (float *)((char *)this + 120);
  v10 = 6LL;
  do
  {
    v11 = *(float *)((char *)v9 + v6 - (unsigned __int8 *)this - 96);
    if ( *v9 != v11 )
      *v9 = v11;
    ++v9;
    --v10;
  }
  while ( v10 );
  v12 = *((float *)v6 + 14);
  if ( *((float *)this + 36) != v12 )
    *((float *)this + 36) = v12;
  v13 = *((float *)v6 + 15);
  if ( *((float *)this + 37) != v13 )
    *((float *)this + 37) = v13;
  v14 = *((float *)v6 + 16);
  if ( *((float *)this + 38) != v14 )
    *((float *)this + 38) = v14;
  v15 = *((float *)v6 + 17);
  if ( *((float *)this + 39) != v15 )
    *((float *)this + 39) = v15;
  v16 = *((_DWORD *)this + 46);
  HasMargins = PresentedContentUpdateInfo::LetterboxingMargins::HasMargins((PresentedContentUpdateInfo::LetterboxingMargins *)(v6 + 56));
  if ( ((v16 >> 15) & 1) != HasMargins )
  {
    v16 = v16 & 0xFFFF7FFF | (HasMargins << 15);
    *((_DWORD *)v18 + 46) = v16;
  }
  v19 = *((_DWORD *)v6 + 5);
  RealizationAt = CCompositionBuffer::GetRealizationAt(v18, *((_DWORD *)v18 + 99));
  if ( RealizationAt && *((_DWORD *)RealizationAt + 6) == 4 )
    v19 = 3;
  if ( *(_DWORD *)(v21 + 48) != v19 )
  {
    *(_DWORD *)(v21 + 48) = v19;
    v22 = 1;
  }
  v23 = *v6;
  if ( (((unsigned __int8)v23 ^ (unsigned __int8)(v16 >> 15)) & 2) != 0 )
  {
    v22 = 1;
    *(_DWORD *)(v21 + 184) = v16 ^ (v16 ^ (v23 << 15)) & 0x10000;
  }
  return v22;
}
