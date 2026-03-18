/*
 * XREFs of ?SetD2DEffectProperties@CTurbulenceEffect@@MEAAJPEAUID2D1Effect@@@Z @ 0x1802B1AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTurbulenceEffect::SetD2DEffectProperties(CTurbulenceEffect *this, struct ID2D1Effect *a2)
{
  __int64 (__fastcall *v4)(struct ID2D1Effect *, _QWORD, _QWORD, unsigned __int64 *, int); // rax
  int v5; // eax
  unsigned int v6; // ebx
  __int64 (__fastcall *v7)(struct ID2D1Effect *, __int64, _QWORD, unsigned __int64 *, int); // rax
  int v8; // eax
  __int64 (__fastcall *v9)(struct ID2D1Effect *, __int64, _QWORD, unsigned __int64 *, int); // rax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  unsigned __int64 v16; // [rsp+40h] [rbp+8h] BYREF

  v4 = *(__int64 (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, unsigned __int64 *, int))(*(_QWORD *)a2 + 72LL);
  v16 = _mm_unpacklo_ps((__m128)*((unsigned int *)this + 44), (__m128)*((unsigned int *)this + 45)).m128_u64[0];
  v5 = v4(a2, 0LL, 0LL, &v16, 8);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0x2Fu, 0LL);
  }
  else
  {
    v7 = *(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, unsigned __int64 *, int))(*(_QWORD *)a2 + 72LL);
    v16 = _mm_unpacklo_ps((__m128)*((unsigned int *)this + 46), (__m128)*((unsigned int *)this + 47)).m128_u64[0];
    v8 = v7(a2, 2LL, 0LL, &v16, 8);
    v6 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x34u, 0LL);
    }
    else
    {
      v9 = *(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, unsigned __int64 *, int))(*(_QWORD *)a2 + 72LL);
      v16 = _mm_unpacklo_ps((__m128)*((unsigned int *)this + 48), (__m128)*((unsigned int *)this + 49)).m128_u64[0];
      v10 = v9(a2, 1LL, 0LL, &v16, 8);
      v6 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x39u, 0LL);
      }
      else
      {
        v11 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
                a2,
                3LL,
                0LL,
                (char *)this + 200,
                4);
        v6 = v11;
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x3Eu, 0LL);
        }
        else
        {
          v12 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
                  a2,
                  4LL,
                  0LL,
                  (char *)this + 204,
                  4);
          v6 = v12;
          if ( v12 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x43u, 0LL);
          }
          else
          {
            v13 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
                    a2,
                    5LL,
                    0LL,
                    (char *)this + 208,
                    4);
            v6 = v13;
            if ( v13 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x48u, 0LL);
            }
            else
            {
              v14 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
                      a2,
                      6LL,
                      0LL,
                      (char *)this + 212,
                      4);
              v6 = v14;
              if ( v14 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x4Du, 0LL);
            }
          }
        }
      }
    }
  }
  return v6;
}
