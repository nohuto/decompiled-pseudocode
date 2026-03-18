/*
 * XREFs of ?SetIntegerProperty@CWindowNodeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x140194A80
 * Callers:
 *     <none>
 * Callees:
 *     ?SetIntegerProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1400DA7A0 (-SetIntegerProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@.c)
 */

__int64 __fastcall DirectComposition::CWindowNodeMarshaler::SetIntegerProperty(
        DirectComposition::CWindowNodeMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        unsigned __int64 a4,
        bool *a5)
{
  unsigned int v5; // r10d

  v5 = 0;
  switch ( a3 )
  {
    case ';':
      if ( *((_BYTE *)this + 464) == ((_DWORD)a4 != 0) )
        return v5;
      *((_DWORD *)this + 92) |= 0x80u;
      *((_BYTE *)this + 464) = (_DWORD)a4 != 0;
      goto LABEL_14;
    case '<':
      if ( *((_BYTE *)this + 465) == ((_DWORD)a4 != 0) )
        return v5;
      *((_DWORD *)this + 92) |= 0x100u;
      *((_BYTE *)this + 465) = (_DWORD)a4 != 0;
      goto LABEL_14;
    case '=':
      if ( *((_BYTE *)this + 466) == ((_DWORD)a4 != 0) )
        return v5;
      *((_DWORD *)this + 92) |= 0x200u;
      *((_BYTE *)this + 466) = (_DWORD)a4 != 0;
      goto LABEL_14;
    case '>':
      if ( *((_BYTE *)this + 467) == ((_DWORD)a4 != 0) )
        return v5;
      *((_DWORD *)this + 92) |= 0x400u;
      *((_BYTE *)this + 467) = (_DWORD)a4 != 0;
LABEL_14:
      *a5 = 1;
      return v5;
  }
  return (unsigned int)DirectComposition::CVisualMarshaler::SetIntegerProperty(this, a2, a3, a4, a5);
}
