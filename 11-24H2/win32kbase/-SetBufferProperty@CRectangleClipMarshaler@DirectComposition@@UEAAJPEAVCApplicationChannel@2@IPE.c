/*
 * XREFs of ?SetBufferProperty@CRectangleClipMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1400B8CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnbindAllAnimations@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1400B906C (-UnbindAllAnimations@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z.c)
 */

__int64 __fastcall DirectComposition::CRectangleClipMarshaler::SetBufferProperty(
        DirectComposition::CRectangleClipMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        const __m128i *a4,
        unsigned __int64 a5,
        bool *a6)
{
  bool v6; // di
  unsigned int v9; // esi
  int v10; // r8d
  float v11; // xmm1_4
  char v12; // r11
  float v13; // xmm1_4
  char v14; // r10
  float v15; // xmm1_4
  char v16; // r9
  float v17; // xmm2_4
  char v18; // r8
  char v19; // dl
  unsigned int *v20; // rcx
  unsigned int *v21; // rbx
  int v23; // r8d
  int v24; // r8d
  __int64 v25; // xmm0_8
  __int64 v26; // xmm0_8
  __int64 v27; // xmm0_8
  __m128 v28; // [rsp+20h] [rbp-18h]

  v6 = 0;
  v9 = 0;
  v10 = a3 - 17;
  if ( v10 )
  {
    v23 = v10 - 1;
    if ( v23 )
    {
      v24 = v23 - 1;
      if ( v24 )
      {
        if ( v24 != 1 || a5 != 8 || !*((_BYTE *)this + 145) )
          return (unsigned int)-1073741811;
        v26 = a4->m128i_i64[0];
        *((_DWORD *)this + 4) &= ~0x800u;
        *((_QWORD *)this + 14) = v26;
      }
      else
      {
        if ( a5 != 8 || !*((_BYTE *)this + 145) )
          return (unsigned int)-1073741811;
        v25 = a4->m128i_i64[0];
        *((_DWORD *)this + 4) &= ~0x4000u;
        *((_QWORD *)this + 13) = v25;
      }
    }
    else
    {
      if ( a5 != 8 || !*((_BYTE *)this + 145) )
        return (unsigned int)-1073741811;
      v27 = a4->m128i_i64[0];
      *((_DWORD *)this + 4) &= ~0x1000u;
      *((_QWORD *)this + 12) = v27;
    }
    *a6 = 1;
    return v9;
  }
  if ( a5 != 16 || *((_BYTE *)this + 145) )
    return (unsigned int)-1073741811;
  v28 = (__m128)_mm_loadu_si128(a4);
  v11 = fminf(2097152.0, fmaxf(_mm_shuffle_ps(v28, v28, 85).m128_f32[0], -2097152.0));
  if ( *((float *)this + 25) == v11 )
  {
    v12 = 0;
  }
  else
  {
    *((float *)this + 25) = v11;
    v12 = 1;
  }
  v13 = fminf(2097152.0, fmaxf(v28.m128_f32[0], -2097152.0));
  if ( *((float *)this + 24) == v13 )
  {
    v14 = 0;
  }
  else
  {
    *((float *)this + 24) = v13;
    v14 = 1;
  }
  v15 = fminf(2097152.0, fmaxf(v28.m128_f32[3], -2097152.0));
  if ( *((float *)this + 27) == v15 )
  {
    v16 = 0;
  }
  else
  {
    *((float *)this + 27) = v15;
    v16 = 1;
  }
  v17 = fminf(2097152.0, fmaxf(v28.m128_f32[2], -2097152.0));
  if ( *((float *)this + 26) == v17 )
  {
    v18 = 0;
  }
  else
  {
    *((float *)this + 26) = v17;
    v18 = 1;
  }
  if ( *((float *)this + 28) == 0.0 )
  {
    if ( *((float *)this + 29) == 0.0 )
    {
      if ( *((float *)this + 30) == 0.0 )
      {
        if ( *((float *)this + 31) == 0.0 )
        {
          if ( *((float *)this + 32) == 0.0 )
          {
            if ( *((float *)this + 33) == 0.0 )
            {
              if ( *((float *)this + 34) == 0.0 )
              {
                if ( *((float *)this + 35) == 0.0 )
                {
                  v19 = 0;
                  goto LABEL_21;
                }
                *((_DWORD *)this + 35) = 0;
              }
              else
              {
                *((_DWORD *)this + 34) = 0;
              }
            }
            else
            {
              *((_DWORD *)this + 33) = 0;
            }
          }
          else
          {
            *((_DWORD *)this + 32) = 0;
          }
        }
        else
        {
          *((_DWORD *)this + 31) = 0;
        }
      }
      else
      {
        *((_DWORD *)this + 30) = 0;
      }
    }
    else
    {
      *((_DWORD *)this + 29) = 0;
    }
  }
  else
  {
    *((_DWORD *)this + 28) = 0;
  }
  v19 = 1;
LABEL_21:
  if ( *((_QWORD *)this + 5) )
  {
    DirectComposition::CApplicationChannel::UnbindAllAnimations(a2, this);
    v19 = 1;
    v12 = 1;
    v14 = 1;
    v16 = 1;
    v18 = 1;
  }
  else if ( !v12 )
  {
    v20 = (unsigned int *)((char *)this + 16);
    goto LABEL_24;
  }
  v20 = (unsigned int *)((char *)this + 16);
  *((_DWORD *)this + 4) &= ~0x2000u;
LABEL_24:
  if ( v14 )
  {
    *v20 &= ~0x1000u;
    v21 = (unsigned int *)((char *)this + 16);
  }
  else
  {
    v21 = v20;
  }
  if ( v16 )
    *v20 &= ~0x8000u;
  else
    v21 = v20;
  if ( v18 )
    *v21 = *v20 & 0xFFFFBFFF;
  if ( v19 )
    *v21 &= ~0x800u;
  if ( *a6 || v12 || v14 || v16 || v18 || v19 )
    v6 = 1;
  *a6 = v6;
  return v9;
}
