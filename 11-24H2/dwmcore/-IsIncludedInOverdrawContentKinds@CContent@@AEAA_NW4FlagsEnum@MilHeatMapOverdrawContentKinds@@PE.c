/*
 * XREFs of ?IsIncludedInOverdrawContentKinds@CContent@@AEAA_NW4FlagsEnum@MilHeatMapOverdrawContentKinds@@PEAVCDrawingContext@@@Z @ 0x18028CEB0
 * Callers:
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800516E0 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ @ 0x18001BF90 (-GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ.c)
 *     ?HasLighting@CLightStack@@QEBA_NXZ @ 0x1801C3640 (-HasLighting@CLightStack@@QEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CContent::IsIncludedInOverdrawContentKinds(__int64 a1, int a2, __int64 a3)
{
  char v4; // bl
  struct CVisual *CurrentVisual; // rax

  v4 = a2;
  if ( a2 != 0xFFFF
    && ((a2 & 2) == 0 || !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 64LL))(a1, 22LL))
    && ((v4 & 4) == 0 || !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 64LL))(a1, 57LL))
    && ((v4 & 8) == 0 || !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 64LL))(a1, 55LL))
    && ((v4 & 0x10) == 0 || !CLightStack::HasLighting((CLightStack *)(a3 + 424)))
    && ((v4 & 0x20) == 0 || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 264LL))(a1))
    && ((v4 & 0x40) == 0 || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 272LL))(a1)) )
  {
    if ( (v4 & 1) == 0 )
      return 0;
    if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 280LL))(a1) )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 64LL))(a1, 57LL) )
      {
        CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)a3);
        return (*(unsigned __int8 (__fastcall **)(struct CVisual *, __int64))(*(_QWORD *)CurrentVisual + 64LL))(
                 CurrentVisual,
                 93LL) != 0;
      }
      return 0;
    }
  }
  return 1;
}
