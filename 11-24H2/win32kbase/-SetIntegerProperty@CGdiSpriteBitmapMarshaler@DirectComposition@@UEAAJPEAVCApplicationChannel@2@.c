/*
 * XREFs of ?SetIntegerProperty@CGdiSpriteBitmapMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x140113E70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CGdiSpriteBitmapMarshaler::SetIntegerProperty(
        DirectComposition::CGdiSpriteBitmapMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 a4,
        bool *a5)
{
  unsigned int v5; // edx
  int v6; // r8d
  int v8; // r8d

  v5 = 0;
  v6 = a3 - 1;
  if ( !v6 )
  {
    if ( *((_DWORD *)this + 20) != (_DWORD)a4 )
    {
      *((_DWORD *)this + 4) |= 0x40u;
      *((_DWORD *)this + 20) = a4;
      *a5 = 1;
    }
    return v5;
  }
  v8 = v6 - 1;
  if ( !v8 )
  {
    if ( *((_BYTE *)this + 84) == ((_DWORD)a4 != 0) )
      return v5;
    *((_DWORD *)this + 4) |= 0x80u;
    *((_BYTE *)this + 84) = (_DWORD)a4 != 0;
    goto LABEL_9;
  }
  if ( v8 != 1 )
    return (unsigned int)-1073741811;
  if ( *((_QWORD *)this + 11) != a4 )
  {
    *((_DWORD *)this + 4) |= 0x100u;
    *((_QWORD *)this + 11) = a4;
LABEL_9:
    *a5 = 1;
  }
  return v5;
}
