/*
 * XREFs of ?UnbindAllAnimations@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1400B906C
 * Callers:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1400803E0 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?SetBufferProperty@CRectangleClipMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1400B8CE0 (-SetBufferProperty@CRectangleClipMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPE.c)
 *     ?SetBufferProperty@CPrimitiveColorMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x140147D10 (-SetBufferProperty@CPrimitiveColorMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 *     ?SetMatrixHelper@CMatrixTransformMarshaler@DirectComposition@@QEAAXPEAVCApplicationChannel@2@PEBUD2D_MATRIX_3X2_F@@PEA_N@Z @ 0x14014A4EC (-SetMatrixHelper@CMatrixTransformMarshaler@DirectComposition@@QEAAXPEAVCApplicationChannel@2@PEB.c)
 *     ?SetBufferProperty@CAffineTransform2DEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1402308F0 (-SetBufferProperty@CAffineTransform2DEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationCha.c)
 * Callees:
 *     ?NewRemovingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z @ 0x1400B911C (-NewRemovingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z.c)
 *     ?DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1400B9284 (-DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z.c)
 */

void __fastcall DirectComposition::CApplicationChannel::UnbindAllAnimations(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CResourceMarshaler *a2)
{
  __int64 v4; // r8
  int v5; // eax
  __int64 v6; // rsi
  void *i; // rax
  _QWORD *v8; // rdx
  _QWORD *v9; // rcx

  if ( *((int *)this + 6) > 2 )
  {
    for ( i = (void *)*((_QWORD *)a2 + 5); i; i = (void *)*((_QWORD *)a2 + 5) )
      DirectComposition::CAnimationBinding::DetachAndDelete(i, this);
  }
  else
  {
    v4 = *((_QWORD *)a2 + 5);
    if ( v4 )
    {
      do
      {
        v5 = *(_DWORD *)(v4 + 8);
        v6 = *(_QWORD *)(v4 + 32);
        if ( (v5 & 2) != 0 )
        {
          v8 = (_QWORD *)((char *)this + 496);
          while ( 1 )
          {
            v9 = (_QWORD *)*v8;
            if ( !*v8 )
              break;
            if ( (struct DirectComposition::CResourceMarshaler *)v9[2] == a2 )
            {
              *v8 = *v9;
              *v9 = 0LL;
            }
            else
            {
              v8 = (_QWORD *)*v8;
            }
          }
          DirectComposition::CAnimationBinding::DetachAndDelete((PVOID)v4, this);
        }
        else if ( (v5 & 1) != 0 )
        {
          DirectComposition::CApplicationChannel::NewRemovingBinding(
            this,
            (struct DirectComposition::CAnimationBinding *)v4);
        }
        v4 = v6;
      }
      while ( v6 );
    }
  }
}
