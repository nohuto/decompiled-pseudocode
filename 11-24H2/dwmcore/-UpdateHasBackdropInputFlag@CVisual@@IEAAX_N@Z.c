/*
 * XREFs of ?UpdateHasBackdropInputFlag@CVisual@@IEAAX_N@Z @ 0x1801D8E70
 * Callers:
 *     ?UpdateBackdropBlurFlagForTreeEffect@CLayerVisual@@AEAAXXZ @ 0x1801D8DE0 (-UpdateBackdropBlurFlagForTreeEffect@CLayerVisual@@AEAAXXZ.c)
 * Callees:
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18000AAA0 (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ?ClearAllBackdropVisualImages@CVisual@@AEAAXXZ @ 0x180033174 (-ClearAllBackdropVisualImages@CVisual@@AEAAXXZ.c)
 *     ?IsEtwEnabled@Backdrops@DwmDbg@@YA_NXZ @ 0x1800D5FB0 (-IsEtwEnabled@Backdrops@DwmDbg@@YA_NXZ.c)
 *     ?LogBrushEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@0@Z @ 0x18024F55C (-LogBrushEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@0@Z.c)
 */

void __fastcall CVisual::UpdateHasBackdropInputFlag(CVisual *this, unsigned __int8 a2)
{
  int v3; // esi
  char v4; // al
  int v5; // edi
  __int64 v6; // rax
  __int64 v7; // rcx
  DwmDbg::DbgString *v8; // rdi
  DwmDbg::DbgString *v9; // rax
  char *v10; // [rsp+30h] [rbp+8h] BYREF
  char *v11; // [rsp+40h] [rbp+18h] BYREF

  v3 = a2;
  if ( a2 != (*((_BYTE *)this + 107) & 1) )
  {
    if ( DwmDbg::Backdrops::IsEtwEnabled(this) )
    {
      v8 = DwmDbg::DbgString::DbgString(&v10, "m_fHasBackdropInput=%d", v3);
      v9 = DwmDbg::DbgString::DbgString(&v11, "Visual-HasBackdropInputFlagChanged");
      DwmDbg::Backdrops::LogBrushEtwEvent(v9, this, v8);
    }
    v4 = *((_BYTE *)this + 107);
    if ( (_BYTE)v3 )
    {
      v5 = 1;
      *((_BYTE *)this + 107) = v4 | 1;
    }
    else
    {
      *((_BYTE *)this + 107) = v4 & 0xFE;
      v5 = -1;
      CVisual::ClearAllBackdropVisualImages(this);
    }
    v6 = *((_QWORD *)this + 11);
    if ( v6 && (*((_BYTE *)this + 106) & 0x40) != 0 )
    {
      v7 = *((_QWORD *)this + 11);
      do
      {
        *(_DWORD *)(v6 + 264) += v5;
        if ( (*(_BYTE *)(v6 + 106) & 0x40) == 0 )
          break;
        v6 = *(_QWORD *)(v6 + 88);
        if ( v7 )
        {
          v7 = *(_QWORD *)(v7 + 88);
          if ( v7 )
            v7 = *(_QWORD *)(v7 + 88);
        }
      }
      while ( v6 != v7 );
    }
  }
}
