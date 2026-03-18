/*
 * XREFs of ?SetFloatProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x14010B760
 * Callers:
 *     <none>
 * Callees:
 *     ?SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1401085A0 (-SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 */

__int64 __fastcall DirectComposition::CInteractionTrackerMarshaler::SetFloatProperty(
        DirectComposition::CInteractionTrackerMarshaler *this,
        __int64 a2,
        float a3,
        bool *a4)
{
  unsigned int v4; // r8d
  unsigned int v6; // eax

  v4 = 0;
  *a4 = 0;
  if ( (_DWORD)a2 == 30 )
  {
    if ( *((float *)this + 41) == a3 )
      return v4;
    *((_DWORD *)this + 4) &= ~0x10000u;
    *((float *)this + 41) = a3;
    goto LABEL_15;
  }
  if ( (unsigned int)a2 > 0x1E )
  {
    if ( (unsigned int)a2 <= 0x30 )
    {
      if ( (_DWORD)a2 != 48 )
      {
        if ( (_DWORD)a2 == 31 )
        {
          v6 = *((_DWORD *)this + 4) & 0xFFFDFFFF;
          *((float *)this + 42) = a3;
          *((_QWORD *)this + 11) = 0LL;
          *((_DWORD *)this + 4) = v6 | 0x80;
          *((_QWORD *)this + 12) = 0LL;
        }
        else if ( (_DWORD)a2 == 35 )
        {
          *((float *)this + 45) = a3;
        }
        else if ( (_DWORD)a2 == 36 )
        {
          *((float *)this + 46) = a3;
        }
        else
        {
          if ( (_DWORD)a2 == 45 )
          {
            *((float *)this + 19) = a3 + *((float *)this + 19);
          }
          else
          {
            if ( (_DWORD)a2 != 46 )
              return (unsigned int)DirectComposition::CResourceMarshaler::SetFloatProperty(this, a2, a3, a4);
            *((float *)this + 20) = a3 + *((float *)this + 20);
          }
          *((_DWORD *)this + 4) &= ~0x40u;
        }
        goto LABEL_15;
      }
      *((float *)this + 22) = a3 + *((float *)this + 22);
LABEL_81:
      *((_DWORD *)this + 4) &= ~0x80u;
      goto LABEL_15;
    }
    switch ( (_DWORD)a2 )
    {
      case '1':
        *((float *)this + 23) = a3;
        goto LABEL_81;
      case '2':
        *((float *)this + 24) = a3;
        goto LABEL_81;
      case '>':
        if ( a3 < 0.0 || a3 > 1.0 )
          return (unsigned int)-1073741811;
        if ( *((float *)this + 37) == a3 )
          return v4;
        *((float *)this + 37) = a3;
        break;
      case '?':
        if ( a3 < 0.0 || a3 > 1.0 )
          return (unsigned int)-1073741811;
        if ( *((float *)this + 38) == a3 )
          return v4;
        *((float *)this + 38) = a3;
        break;
      case '@':
        if ( a3 >= 0.0 && a3 <= 1.0 )
        {
          if ( *((float *)this + 47) == a3 )
            return v4;
          *((float *)this + 47) = a3;
          break;
        }
        return (unsigned int)-1073741811;
      default:
        return (unsigned int)DirectComposition::CResourceMarshaler::SetFloatProperty(this, a2, a3, a4);
    }
    *((_DWORD *)this + 4) &= ~0x800000u;
    goto LABEL_15;
  }
  if ( (unsigned int)a2 > 0xF )
  {
    if ( (_DWORD)a2 == 24 )
    {
      if ( *((float *)this + 26) == a3 )
        return v4;
      *((float *)this + 26) = a3;
    }
    else
    {
      if ( (_DWORD)a2 != 25 )
      {
        switch ( (_DWORD)a2 )
        {
          case 0x1B:
            if ( *((float *)this + 28) == a3 )
              return v4;
            *((float *)this + 28) = a3;
            break;
          case 0x1C:
            if ( *((float *)this + 29) == a3 )
              return v4;
            *((float *)this + 29) = a3;
            break;
          case 0x1D:
            if ( *((float *)this + 40) == a3 )
              return v4;
            *((_DWORD *)this + 4) &= ~0x8000u;
            *((float *)this + 40) = a3;
LABEL_15:
            *a4 = 1;
            return v4;
          default:
            return (unsigned int)DirectComposition::CResourceMarshaler::SetFloatProperty(this, a2, a3, a4);
        }
        *((_DWORD *)this + 4) &= ~0x4000u;
        goto LABEL_15;
      }
      if ( *((float *)this + 27) == a3 )
        return v4;
      *((float *)this + 27) = a3;
    }
    *((_DWORD *)this + 4) &= ~0x2000u;
    goto LABEL_15;
  }
  switch ( (_DWORD)a2 )
  {
    case 0xF:
      *((float *)this + 34) = a3 + *((float *)this + 34);
      goto LABEL_60;
    case 4:
      if ( *((float *)this + 39) == a3 )
        return v4;
      *((float *)this + 39) = a3;
      goto LABEL_15;
    case 5:
      if ( *((float *)this + 17) == a3 )
        return v4;
      *((float *)this + 17) = a3;
      goto LABEL_15;
    case 6:
      if ( *((float *)this + 18) == a3 )
        return v4;
      *((float *)this + 18) = a3;
      goto LABEL_15;
    case 8:
      *((float *)this + 30) = a3;
      goto LABEL_11;
  }
  if ( (_DWORD)a2 != 9 )
  {
    if ( (_DWORD)a2 == 14 )
    {
      *((float *)this + 33) = a3 + *((float *)this + 33);
LABEL_60:
      *((_DWORD *)this + 4) &= ~0x100u;
      *a4 = 1;
      *((_DWORD *)this + 4) |= 0x40u;
      goto LABEL_12;
    }
    return (unsigned int)DirectComposition::CResourceMarshaler::SetFloatProperty(this, a2, a3, a4);
  }
  *((float *)this + 31) = a3;
LABEL_11:
  *((_DWORD *)this + 4) &= ~0x200u;
  *a4 = 1;
  *((_DWORD *)this + 4) |= 0x140u;
  *(_QWORD *)((char *)this + 132) = 0LL;
  *((_DWORD *)this + 35) = 0;
  *((_DWORD *)this + 52) = 0;
LABEL_12:
  *(_QWORD *)((char *)this + 76) = 0LL;
  *((_DWORD *)this + 21) = 0;
  return v4;
}
