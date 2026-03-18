/*
 * XREFs of ?Draw@CSnapshot@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1802B2C10
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSnapshot::Draw(
        CSnapshot *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  unsigned int v5; // edi
  __int64 v6; // rdx
  int v8; // eax

  v5 = 0;
  v6 = *((_QWORD *)this + 9);
  if ( v6 && !*((_BYTE *)this + 89) )
  {
    *((_BYTE *)this + 89) = 1;
    v8 = (*(__int64 (__fastcall **)(char *, __int64, const struct D2D_SIZE_F *, struct CDrawListCache *))(*((_QWORD *)a2 + 2) + 48LL))(
           (char *)a2 + 16,
           v6,
           a3,
           a4);
    v5 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x50u, 0LL);
    *((_BYTE *)this + 89) = 0;
  }
  return v5;
}
