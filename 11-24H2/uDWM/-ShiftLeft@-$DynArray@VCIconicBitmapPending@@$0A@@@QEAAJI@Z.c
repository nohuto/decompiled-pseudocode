/*
 * XREFs of ?ShiftLeft@?$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z @ 0x1800092E0
 * Callers:
 *     ?ProcessTick@CIconicBitmapRegistry@@QEAAJXZ @ 0x1800091CC (-ProcessTick@CIconicBitmapRegistry@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memmove_0 @ 0x1800F6384 (memmove_0.c)
 */

__int64 __fastcall DynArray<CIconicBitmapPending,0>::ShiftLeft(__int64 a1, unsigned int a2)
{
  unsigned int v2; // edi
  unsigned int v5; // ebx
  unsigned int v6; // ebx

  v2 = 0;
  if ( a2 )
  {
    v5 = *(_DWORD *)(a1 + 24);
    if ( a2 > v5 )
    {
      v2 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x234u, 0LL);
    }
    else
    {
      v6 = v5 - a2;
      if ( v6 )
        memmove_0(*(void **)a1, (const void *)(*(_QWORD *)a1 + 16LL * a2), 16LL * v6);
      *(_DWORD *)(a1 + 24) = v6;
    }
  }
  return v2;
}
