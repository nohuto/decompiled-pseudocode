/*
 * XREFs of ?SetProperty@CTableTransferEffect@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1802A7AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTableTransferEffect::SetProperty(__int64 *a1, unsigned int a2, int a3, float *a4)
{
  float v5; // xmm1_4
  __int64 v6; // rcx
  float *v7; // rbx
  __int64 v8; // rax
  unsigned int v9; // ebx

  if ( a3 == 18
    && (v5 = *a4, (a2 & 0xF) == 0xD)
    && (v6 = a2 >> 6, (unsigned int)v6 < LODWORD(a1[5 * ((a2 >> 4) & 3) + 26]))
    && (v7 = (float *)(a1[5 * ((a2 >> 4) & 3) + 23] + 4 * v6)) != 0LL )
  {
    if ( *v7 != v5 )
    {
      v8 = *a1;
      *v7 = v5;
      (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(v8 + 80))(a1, 0LL, 0LL);
    }
    return v7 == 0LL ? 0x80070057 : 0;
  }
  else
  {
    v9 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x8Fu, 0LL);
  }
  return v9;
}
