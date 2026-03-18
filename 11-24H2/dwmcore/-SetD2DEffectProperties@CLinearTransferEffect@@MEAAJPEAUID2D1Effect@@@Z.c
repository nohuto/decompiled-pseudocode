/*
 * XREFs of ?SetD2DEffectProperties@CLinearTransferEffect@@MEAAJPEAUID2D1Effect@@@Z @ 0x18029F070
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLinearTransferEffect::SetD2DEffectProperties(CLinearTransferEffect *this, struct ID2D1Effect *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v19; // [rsp+50h] [rbp+8h] BYREF

  v4 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
         a2,
         0LL,
         0LL,
         (char *)this + 176,
         4);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x2Eu, 0LL);
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
           a2,
           1LL,
           0LL,
           (char *)this + 180,
           4);
    v5 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x33u, 0LL);
    }
    else
    {
      v19 = *((unsigned __int8 *)this + 184);
      v7 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, int *, int))(*(_QWORD *)a2 + 72LL))(
             a2,
             2LL,
             0LL,
             &v19,
             4);
      v5 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x38u, 0LL);
      }
      else
      {
        v8 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
               a2,
               3LL,
               0LL,
               (char *)this + 188,
               4);
        v5 = v8;
        if ( v8 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x3Du, 0LL);
        }
        else
        {
          v9 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
                 a2,
                 4LL,
                 0LL,
                 (char *)this + 192,
                 4);
          v5 = v9;
          if ( v9 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x42u, 0LL);
          }
          else
          {
            v19 = *((unsigned __int8 *)this + 196);
            v10 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, int *, int))(*(_QWORD *)a2 + 72LL))(
                    a2,
                    5LL,
                    0LL,
                    &v19,
                    4);
            v5 = v10;
            if ( v10 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x47u, 0LL);
            }
            else
            {
              v11 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
                      a2,
                      6LL,
                      0LL,
                      (char *)this + 200,
                      4);
              v5 = v11;
              if ( v11 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x4Cu, 0LL);
              }
              else
              {
                v12 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
                        a2,
                        7LL,
                        0LL,
                        (char *)this + 204,
                        4);
                v5 = v12;
                if ( v12 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x51u, 0LL);
                }
                else
                {
                  v19 = *((unsigned __int8 *)this + 208);
                  v13 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, int *, int))(*(_QWORD *)a2 + 72LL))(
                          a2,
                          8LL,
                          0LL,
                          &v19,
                          4);
                  v5 = v13;
                  if ( v13 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x56u, 0LL);
                  }
                  else
                  {
                    v14 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
                            a2,
                            9LL,
                            0LL,
                            (char *)this + 212,
                            4);
                    v5 = v14;
                    if ( v14 < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x5Bu, 0LL);
                    }
                    else
                    {
                      v15 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
                              a2,
                              10LL,
                              0LL,
                              (char *)this + 216,
                              4);
                      v5 = v15;
                      if ( v15 < 0 )
                      {
                        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x60u, 0LL);
                      }
                      else
                      {
                        v19 = *((unsigned __int8 *)this + 220);
                        v16 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, int *, int))(*(_QWORD *)a2 + 72LL))(
                                a2,
                                11LL,
                                0LL,
                                &v19,
                                4);
                        v5 = v16;
                        if ( v16 < 0 )
                        {
                          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x65u, 0LL);
                        }
                        else
                        {
                          v19 = *((unsigned __int8 *)this + 221);
                          v17 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, int *, int))(*(_QWORD *)a2 + 72LL))(
                                  a2,
                                  12LL,
                                  0LL,
                                  &v19,
                                  4);
                          v5 = v17;
                          if ( v17 < 0 )
                            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, 0x6Au, 0LL);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return v5;
}
