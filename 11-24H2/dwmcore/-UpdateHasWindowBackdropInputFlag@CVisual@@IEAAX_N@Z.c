/*
 * XREFs of ?UpdateHasWindowBackdropInputFlag@CVisual@@IEAAX_N@Z @ 0x1801DB9E0
 * Callers:
 *     ?UpdateBackdropBlurFlagForTreeEffect@CLayerVisual@@AEAAXXZ @ 0x1801D8DE0 (-UpdateBackdropBlurFlagForTreeEffect@CLayerVisual@@AEAAXXZ.c)
 * Callees:
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18000AAA0 (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ?LogBrushEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@0@Z @ 0x18024F55C (-LogBrushEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@0@Z.c)
 */

void __fastcall CVisual::UpdateHasWindowBackdropInputFlag(CVisual *this, unsigned __int8 a2)
{
  int v3; // esi
  char v4; // al
  char v5; // cl
  char v6; // al
  __int64 v7; // rcx
  __int64 v8; // rdx
  DwmDbg::DbgString *v9; // rbx
  DwmDbg::DbgString *v10; // rax
  char *v11; // [rsp+30h] [rbp+8h] BYREF
  char *v12; // [rsp+40h] [rbp+18h] BYREF

  v3 = a2;
  if ( a2 != ((*((_BYTE *)this + 107) & 4) != 0) )
  {
    if ( dword_1803F8D50 )
    {
      v9 = DwmDbg::DbgString::DbgString(&v11, "m_fHasWindowBackdropInput=%d", a2);
      v10 = DwmDbg::DbgString::DbgString(&v12, "Visual-HasWindowBackdropInputFlagChanged");
      DwmDbg::Backdrops::LogBrushEtwEvent(v10, this, v9);
    }
    v4 = *((_BYTE *)this + 107);
    v5 = v4 | 4;
    v6 = v4 & 0xFB;
    if ( !(_BYTE)v3 )
      v5 = v6;
    *((_BYTE *)this + 107) = v5;
    v7 = *((_QWORD *)this + 11);
    if ( v7 && (*((_BYTE *)this + 106) & 0x40) != 0 )
    {
      v8 = *((_QWORD *)this + 11);
      do
      {
        *(_DWORD *)(v7 + 268) += 2 * v3 - 1;
        if ( (*(_BYTE *)(v7 + 106) & 0x40) == 0 )
          break;
        v7 = *(_QWORD *)(v7 + 88);
        if ( v8 )
        {
          v8 = *(_QWORD *)(v8 + 88);
          if ( v8 )
            v8 = *(_QWORD *)(v8 + 88);
        }
      }
      while ( v7 != v8 );
    }
  }
}
