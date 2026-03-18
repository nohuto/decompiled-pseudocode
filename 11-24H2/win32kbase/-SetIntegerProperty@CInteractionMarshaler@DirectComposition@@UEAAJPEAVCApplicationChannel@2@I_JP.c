/*
 * XREFs of ?SetIntegerProperty@CInteractionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x14004BB50
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDefaultConfiguration@CInteractionMarshaler@DirectComposition@@QEAAJXZ @ 0x14004A558 (-SetDefaultConfiguration@CInteractionMarshaler@DirectComposition@@QEAAJXZ.c)
 */

__int64 __fastcall DirectComposition::CInteractionMarshaler::SetIntegerProperty(
        DirectComposition::CInteractionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        __int64 a4,
        bool *a5)
{
  unsigned int v5; // edi
  char v7; // cl
  unsigned int v8; // r8d
  unsigned int v9; // r8d
  unsigned int v10; // r8d
  unsigned int v11; // r8d
  unsigned int v13; // r8d
  unsigned int v14; // r8d
  unsigned int v15; // r8d
  unsigned int v16; // r8d
  char v17; // cl
  char v18; // dl

  v5 = 0;
  v7 = a4 != 0;
  if ( a3 <= 0xB )
  {
    if ( a3 == 11 )
    {
      if ( ((*((_BYTE *)this + 332) & 0x20) != 0) == v7 )
        return v5;
      v17 = 32 * v7;
      v18 = *((_BYTE *)this + 332) & 0xDF;
    }
    else
    {
      v13 = a3 - 4;
      if ( !v13 )
      {
        if ( *((_DWORD *)this + 68) != (_DWORD)a4 )
        {
          *((_DWORD *)this + 68) = a4;
          *a5 = 1;
          *((_DWORD *)this + 4) &= ~0x100u;
        }
        return v5;
      }
      v14 = v13 - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          v16 = v15 - 1;
          if ( v16 )
          {
            if ( v16 != 3 )
              return (unsigned int)-1073741811;
            if ( ((*((_BYTE *)this + 332) & 0x10) != 0) == v7 )
              return v5;
            v17 = 16 * v7;
            v18 = *((_BYTE *)this + 332) & 0xEF;
          }
          else
          {
            if ( ((*((_BYTE *)this + 332) & 8) != 0) == v7 )
              return v5;
            v17 = 8 * v7;
            v18 = *((_BYTE *)this + 332) & 0xF7;
          }
        }
        else
        {
          if ( ((*((_BYTE *)this + 332) & 4) != 0) == v7 )
            return v5;
          v17 = 4 * v7;
          v18 = *((_BYTE *)this + 332) & 0xFB;
        }
      }
      else
      {
        if ( ((*((_BYTE *)this + 332) & 2) != 0) == v7 )
          return v5;
        v17 = 2 * v7;
        v18 = *((_BYTE *)this + 332) & 0xFD;
      }
    }
    *((_BYTE *)this + 332) = v18 | v17;
    goto LABEL_8;
  }
  v8 = a3 - 13;
  if ( !v8 )
  {
    if ( ((*((_BYTE *)this + 332) & 0x40) != 0) == v7 )
      return v5;
    *((_BYTE *)this + 332) = *((_BYTE *)this + 332) & 0xBF | (v7 << 6);
    *a5 = 1;
    goto LABEL_28;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    if ( *((_BYTE *)this + 332) >> 7 == v7 )
      return v5;
    *((_BYTE *)this + 332) = *((_BYTE *)this + 332) & 0x7F | (v7 << 7);
    *a5 = 1;
LABEL_28:
    *((_DWORD *)this + 4) |= 0x800u;
    return v5;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    if ( (*((_BYTE *)this + 333) & 1) != v7 )
    {
      *((_BYTE *)this + 333) = v7 | *((_BYTE *)this + 333) & 0xFE;
      *a5 = 1;
      *((_DWORD *)this + 4) |= 0x1000u;
    }
    return v5;
  }
  v11 = v10 - 2;
  if ( v11 )
  {
    if ( v11 == 1 && a4 )
    {
      if ( (*((_BYTE *)this + 332) & 1) == v7 )
        return v5;
      *((_BYTE *)this + 332) = v7 | *((_BYTE *)this + 332) & 0xFE;
      DirectComposition::CInteractionMarshaler::SetDefaultConfiguration(this);
      goto LABEL_8;
    }
    return (unsigned int)-1073741811;
  }
  if ( *((_DWORD *)this + 82) != (_DWORD)a4 )
  {
    *((_DWORD *)this + 82) = a4;
LABEL_8:
    *a5 = 1;
    *((_DWORD *)this + 4) |= 0x200u;
  }
  return v5;
}
