/*
 * XREFs of ?SetProperty@CLinearTransferEffect@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1802A91B0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLinearTransferEffect::SetProperty(__int64 *a1, int a2, int a3, float *a4)
{
  float v4; // xmm1_4
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  __int64 v12; // rax
  float *v13; // rbx
  __int64 v14; // rax
  unsigned int v15; // ebx

  if ( a3 != 18 )
    goto LABEL_22;
  v4 = *a4;
  v5 = a2 - 4;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      v7 = v6 - 2;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          v9 = v8 - 2;
          if ( v9 )
          {
            v10 = v9 - 1;
            if ( v10 )
            {
              v11 = v10 - 2;
              if ( v11 )
              {
                if ( v11 != 1 )
                {
LABEL_22:
                  v15 = -2147024809;
                  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0xB0u, 0LL);
                  return v15;
                }
                v12 = 216LL;
              }
              else
              {
                v12 = 212LL;
              }
            }
            else
            {
              v12 = 204LL;
            }
          }
          else
          {
            v12 = 200LL;
          }
        }
        else
        {
          v12 = 192LL;
        }
      }
      else
      {
        v12 = 188LL;
      }
    }
    else
    {
      v12 = 180LL;
    }
  }
  else
  {
    v12 = 176LL;
  }
  v13 = (float *)((char *)a1 + v12);
  if ( !(__int64 *)((char *)a1 + v12) )
    goto LABEL_22;
  if ( *v13 != v4 )
  {
    v14 = *a1;
    *v13 = v4;
    (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(v14 + 80))(a1, 0LL, 0LL);
  }
  return v13 == 0LL ? 0x80070057 : 0;
}
