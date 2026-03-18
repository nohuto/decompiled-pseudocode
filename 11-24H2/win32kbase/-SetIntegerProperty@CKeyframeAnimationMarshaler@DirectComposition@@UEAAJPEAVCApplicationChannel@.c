/*
 * XREFs of ?SetIntegerProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x140196520
 * Callers:
 *     <none>
 * Callees:
 *     ?SetIntegerProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1400BC5E0 (-SetIntegerProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I.c)
 *     ?UpdatePlaybackState@CKeyframeAnimationMarshaler@DirectComposition@@IEAAJW4Enum@KeyframeAnimationPlaybackState@@@Z @ 0x1400E93A8 (-UpdatePlaybackState@CKeyframeAnimationMarshaler@DirectComposition@@IEAAJW4Enum@KeyframeAnimatio.c)
 */

__int64 __fastcall DirectComposition::CKeyframeAnimationMarshaler::SetIntegerProperty(
        DirectComposition::CKeyframeAnimationMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        unsigned __int64 a4,
        bool *a5)
{
  unsigned int updated; // ecx
  int v7; // edx

  updated = 0;
  *a5 = 0;
  if ( a3 > 0x14 )
  {
    switch ( a3 )
    {
      case 0x15u:
        if ( a4 > 4 )
          return (unsigned int)-1073741811;
        if ( *((_DWORD *)this + 72) == (_DWORD)a4 )
          return updated;
        *((_DWORD *)this + 72) = a4;
        break;
      case 0x1Au:
        *((_QWORD *)this + 27) = a4;
        return updated;
      case 0x1Bu:
        *((_QWORD *)this + 28) = a4;
        return updated;
      case 0x1Cu:
        if ( a4 > 1 )
          return (unsigned int)-1073741811;
        if ( *((_DWORD *)this + 69) == (_DWORD)a4 )
          return updated;
        *((_DWORD *)this + 69) = a4;
        break;
      case 0x21u:
        if ( a4 <= 1 )
        {
          if ( *((_DWORD *)this + 71) != a4 )
          {
            *((_DWORD *)this + 4) &= ~0x8000u;
            *((_DWORD *)this + 71) = a4;
            goto LABEL_51;
          }
          return updated;
        }
        return (unsigned int)-1073741811;
      case 0x22u:
        if ( (*((_BYTE *)this + 296) & 1) == (a4 != 0) )
          return updated;
        *((_BYTE *)this + 296) = (a4 != 0) | *((_BYTE *)this + 296) & 0xFE;
        break;
      default:
        return (unsigned int)DirectComposition::CBaseExpressionMarshaler::SetIntegerProperty(this, a2, a3, a4, a5);
    }
LABEL_50:
    *((_DWORD *)this + 4) &= ~0x800u;
    goto LABEL_51;
  }
  if ( a3 != 20 )
  {
    switch ( a3 )
    {
      case 0xAu:
        if ( *((_DWORD *)this + 58) == a4 )
          return updated;
        *((_DWORD *)this + 58) = a4;
        break;
      case 0xCu:
        if ( *((_QWORD *)this + 25) == a4 )
          return updated;
        *((_QWORD *)this + 25) = a4;
        break;
      case 0xDu:
        if ( *((_QWORD *)this + 26) == a4 )
          return updated;
        *((_QWORD *)this + 26) = a4;
        break;
      case 0x11u:
        if ( a4 > 4 )
          return (unsigned int)-1073741811;
        if ( *((_DWORD *)this + 67) == (_DWORD)a4 )
          return updated;
        *((_DWORD *)this + 67) = a4;
        break;
      case 0x12u:
        if ( a4 > 2 )
          return (unsigned int)-1073741811;
        if ( *((_DWORD *)this + 70) == (_DWORD)a4 )
          return updated;
        *((_DWORD *)this + 70) = a4;
        break;
      case 0x13u:
        if ( a4 <= 2 )
        {
          if ( *((_DWORD *)this + 68) == (_DWORD)a4 )
            return updated;
          v7 = a4;
          goto LABEL_12;
        }
        return (unsigned int)-1073741811;
      default:
        return (unsigned int)DirectComposition::CBaseExpressionMarshaler::SetIntegerProperty(this, a2, a3, a4, a5);
    }
    goto LABEL_50;
  }
  if ( *((_DWORD *)this + 73) == (_DWORD)a4 )
    return updated;
  *((_DWORD *)this + 73) = a4;
  if ( !*((_DWORD *)this + 68) )
    goto LABEL_13;
  v7 = 0;
LABEL_12:
  updated = DirectComposition::CKeyframeAnimationMarshaler::UpdatePlaybackState((__int64)this, v7);
  if ( (updated & 0x80000000) == 0 )
  {
LABEL_13:
    *((_DWORD *)this + 4) &= ~0x1000u;
LABEL_51:
    *a5 = 1;
  }
  return updated;
}
