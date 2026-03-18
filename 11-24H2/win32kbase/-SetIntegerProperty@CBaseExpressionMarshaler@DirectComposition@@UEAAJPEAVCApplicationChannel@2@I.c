/*
 * XREFs of ?SetIntegerProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1400BC5E0
 * Callers:
 *     ?SetIntegerProperty@CNaturalAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1400BC520 (-SetIntegerProperty@CNaturalAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2.c)
 *     ?SetIntegerProperty@CConditionalExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1400BC590 (-SetIntegerProperty@CConditionalExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChan.c)
 *     ?SetIntegerProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x140196440 (-SetIntegerProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPE.c)
 *     ?SetIntegerProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x140196520 (-SetIntegerProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CBaseExpressionMarshaler::SetIntegerProperty(
        DirectComposition::CBaseExpressionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 a4,
        bool *a5)
{
  unsigned int v5; // r10d
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d
  char v12; // r8
  char v13; // al
  char v14; // r8
  bool v15; // zf
  unsigned __int8 v16; // r8

  v5 = 0;
  *a5 = 0;
  if ( !a3 )
  {
    if ( (int)a4 > 52 )
    {
      if ( (_DWORD)a4 == 69 || (_DWORD)a4 == 70 || (_DWORD)a4 == 71 || (_DWORD)a4 == 104 )
        goto LABEL_17;
      v15 = (_DWORD)a4 == 265;
    }
    else
    {
      if ( (_DWORD)a4 == 52 || (_DWORD)a4 == 11 || (_DWORD)a4 == 17 || (_DWORD)a4 == 18 || (_DWORD)a4 == 35 )
        goto LABEL_17;
      v15 = (_DWORD)a4 == 42;
    }
    if ( !v15 )
      return (unsigned int)-1073741811;
LABEL_17:
    if ( *((_DWORD *)this + 16) == (_DWORD)a4 )
      return v5;
    *((_DWORD *)this + 4) &= ~0x40u;
    *((_BYTE *)this + 120) |= 2u;
    *((_DWORD *)this + 16) = a4;
    goto LABEL_11;
  }
  v6 = a3 - 1;
  if ( !v6 )
  {
    v12 = *((_BYTE *)this + 120);
    if ( (v12 & 1) == (a4 != 0) )
      return v5;
    *((_DWORD *)this + 4) &= ~0x40u;
    *((_BYTE *)this + 120) = v12 & 0xFE | (a4 != 0);
LABEL_11:
    *a5 = 1;
    return v5;
  }
  v7 = v6 - 2;
  if ( !v7 )
  {
    if ( *((_DWORD *)this + 20) == a4 )
      return v5;
    *((_DWORD *)this + 4) &= ~0x40u;
    *((_DWORD *)this + 20) = a4;
    goto LABEL_11;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    if ( *((_DWORD *)this + 24) == a4 )
      return v5;
    *((_DWORD *)this + 4) &= ~0x80u;
    *((_DWORD *)this + 24) = a4;
    goto LABEL_11;
  }
  v9 = v8 - 2;
  if ( !v9 )
  {
    if ( ((*((unsigned __int8 *)this + 120) >> 2) & 1) == (a4 != 0) )
      return v5;
    v13 = a4 != 0 ? 4 : 0;
    v14 = *((_BYTE *)this + 120) & 0xFB;
LABEL_21:
    *((_DWORD *)this + 4) &= ~0x100u;
    *((_BYTE *)this + 120) = v14 | v13;
    goto LABEL_11;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    if ( ((*((unsigned __int8 *)this + 120) >> 3) & 1) == (a4 != 0) )
      return v5;
    v13 = a4 != 0 ? 8 : 0;
    v14 = *((_BYTE *)this + 120) & 0xF7;
    goto LABEL_21;
  }
  if ( v10 != 2 )
    return (unsigned int)-1073741811;
  v16 = *((_BYTE *)this + 120);
  if ( ((v16 >> 4) & 1) != (a4 != 0) && a4 )
  {
    *((_DWORD *)this + 4) &= ~0x400u;
    *((_BYTE *)this + 120) = v16 | 0x10;
    goto LABEL_11;
  }
  return v5;
}
