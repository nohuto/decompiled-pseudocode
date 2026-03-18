/*
 * XREFs of ?SetProperty@CGaussianBlurEffect@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1802AA250
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGaussianBlurEffect::SetProperty(_QWORD *a1, int a2, int a3, float *a4)
{
  float *v4; // rbx
  float v5; // xmm1_4
  __int64 v6; // rax
  unsigned int v7; // ebx

  if ( a3 == 18 && a2 == 4 && (v4 = (float *)(a1 + 22), v5 = fmaxf(0.0, *a4), a1 != (_QWORD *)-176LL) )
  {
    if ( *v4 != v5 )
    {
      v6 = *a1;
      *v4 = v5;
      (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(v6 + 80))(a1, 0LL, 0LL);
    }
    return v4 == 0LL ? 0x80070057 : 0;
  }
  else
  {
    v7 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x4Eu, 0LL);
  }
  return v7;
}
