/*
 * XREFs of ?SetD2DEffectProperties@CTableTransferEffect@@MEAAJPEAUID2D1Effect@@@Z @ 0x1802B1320
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTableTransferEffect::SetD2DEffectProperties(CTableTransferEffect *this, struct ID2D1Effect *a2)
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
  int v15; // [rsp+40h] [rbp+8h] BYREF

  v4 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, _QWORD, int))(*(_QWORD *)a2 + 72LL))(
         a2,
         0LL,
         0LL,
         *((_QWORD *)this + 23),
         4 * *((_DWORD *)this + 52));
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x3Au, 0LL);
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, _QWORD, int))(*(_QWORD *)a2 + 72LL))(
           a2,
           2LL,
           0LL,
           *((_QWORD *)this + 28),
           4 * *((_DWORD *)this + 62));
    v5 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x40u, 0LL);
    }
    else
    {
      v7 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, _QWORD, int))(*(_QWORD *)a2 + 72LL))(
             a2,
             4LL,
             0LL,
             *((_QWORD *)this + 33),
             4 * *((_DWORD *)this + 72));
      v5 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x46u, 0LL);
      }
      else
      {
        v8 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, _QWORD, int))(*(_QWORD *)a2 + 72LL))(
               a2,
               6LL,
               0LL,
               *((_QWORD *)this + 38),
               4 * *((_DWORD *)this + 82));
        v5 = v8;
        if ( v8 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x4Cu, 0LL);
        }
        else
        {
          v15 = *((unsigned __int8 *)this + 176);
          v9 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, int *, int))(*(_QWORD *)a2 + 72LL))(
                 a2,
                 1LL,
                 0LL,
                 &v15,
                 4);
          v5 = v9;
          if ( v9 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x51u, 0LL);
          }
          else
          {
            v15 = *((unsigned __int8 *)this + 177);
            v10 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, int *, int))(*(_QWORD *)a2 + 72LL))(
                    a2,
                    3LL,
                    0LL,
                    &v15,
                    4);
            v5 = v10;
            if ( v10 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x56u, 0LL);
            }
            else
            {
              v15 = *((unsigned __int8 *)this + 178);
              v11 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, int *, int))(*(_QWORD *)a2 + 72LL))(
                      a2,
                      5LL,
                      0LL,
                      &v15,
                      4);
              v5 = v11;
              if ( v11 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x5Bu, 0LL);
              }
              else
              {
                v15 = *((unsigned __int8 *)this + 179);
                v12 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, int *, int))(*(_QWORD *)a2 + 72LL))(
                        a2,
                        7LL,
                        0LL,
                        &v15,
                        4);
                v5 = v12;
                if ( v12 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x60u, 0LL);
                }
                else
                {
                  v15 = *((unsigned __int8 *)this + 180);
                  v13 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, int *, int))(*(_QWORD *)a2 + 72LL))(
                          a2,
                          8LL,
                          0LL,
                          &v15,
                          4);
                  v5 = v13;
                  if ( v13 < 0 )
                    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x65u, 0LL);
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
