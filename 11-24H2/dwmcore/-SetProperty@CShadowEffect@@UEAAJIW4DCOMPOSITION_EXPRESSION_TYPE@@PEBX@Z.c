/*
 * XREFs of ?SetProperty@CShadowEffect@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1802AA4F0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CShadowEffect::SetProperty(__int64 *a1, int a2, int a3, float *a4)
{
  float v4; // xmm1_4
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  __int64 v9; // rax
  float *v10; // rbx
  __int64 v11; // rax
  unsigned int v12; // ebx

  if ( a3 != 18 )
    goto LABEL_16;
  v4 = *a4;
  v5 = a2 - 4;
  if ( v5 )
  {
    v6 = v5 - 2;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          if ( v8 != 1 )
          {
LABEL_16:
            v12 = -2147024809;
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x5Eu, 0LL);
            return v12;
          }
          v9 = 192LL;
        }
        else
        {
          v9 = 188LL;
        }
      }
      else
      {
        v9 = 184LL;
      }
    }
    else
    {
      v9 = 180LL;
    }
  }
  else
  {
    v9 = 176LL;
    v4 = fmaxf(0.0, v4);
  }
  v10 = (float *)((char *)a1 + v9);
  if ( !(__int64 *)((char *)a1 + v9) )
    goto LABEL_16;
  if ( *v10 != v4 )
  {
    v11 = *a1;
    *v10 = v4;
    (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(v11 + 80))(a1, 0LL, 0LL);
  }
  return v10 == 0LL ? 0x80070057 : 0;
}
