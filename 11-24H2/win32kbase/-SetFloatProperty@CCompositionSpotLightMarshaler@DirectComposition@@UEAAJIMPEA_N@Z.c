/*
 * XREFs of ?SetFloatProperty@CCompositionSpotLightMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x140128410
 * Callers:
 *     ?SetFloatProperty@?$CSharedResourceMarshaler@VCCompositionSpotLightMarshaler@DirectComposition@@$01@DirectComposition@@UEAAJIMPEA_N@Z @ 0x14022D5D0 (-SetFloatProperty@-$CSharedResourceMarshaler@VCCompositionSpotLightMarshaler@DirectComposition@@.c)
 * Callees:
 *     ?SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1401085A0 (-SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 */

__int64 __fastcall DirectComposition::CCompositionSpotLightMarshaler::SetFloatProperty(
        DirectComposition::CCompositionSpotLightMarshaler *this,
        __int64 a2,
        float a3,
        bool *a4)
{
  unsigned int v4; // r8d

  v4 = 0;
  *a4 = 0;
  if ( (unsigned int)a2 > 0xB )
  {
    switch ( (_DWORD)a2 )
    {
      case 0xD:
        if ( *((float *)this + 37) == a3 )
          return v4;
        break;
      case 0xE:
        if ( *((float *)this + 37) == a3 )
          return v4;
        a3 = a3 * 0.017453292;
        break;
      case 0x10:
        if ( *((float *)this + 47) == a3 )
          return v4;
        *((_DWORD *)this + 4) |= 0x80000u;
        *((float *)this + 47) = a3;
        goto LABEL_9;
      case 0x11:
        if ( *((float *)this + 48) == a3 )
          return v4;
        *((_DWORD *)this + 4) |= 0x100000u;
        *((float *)this + 48) = a3;
        goto LABEL_9;
      case 0x12:
        if ( *((float *)this + 49) == a3 )
          return v4;
        *((_DWORD *)this + 4) |= 0x200000u;
        *((float *)this + 49) = a3;
        goto LABEL_9;
      default:
        return (unsigned int)DirectComposition::CResourceMarshaler::SetFloatProperty(this, a2, a3, a4);
    }
    *((_DWORD *)this + 4) |= 0x20000u;
    *((float *)this + 37) = a3;
    goto LABEL_9;
  }
  switch ( (_DWORD)a2 )
  {
    case 0xB:
      if ( *((float *)this + 46) == a3 )
        return v4;
      *((_DWORD *)this + 4) |= 0x8000u;
      *((float *)this + 46) = a3;
      goto LABEL_9;
    case 3:
      if ( *((float *)this + 24) == a3 )
        return v4;
      *((_DWORD *)this + 4) |= 0x100u;
      *((float *)this + 24) = a3;
      goto LABEL_9;
    case 4:
      if ( *((float *)this + 25) == a3 )
        return v4;
      *((_DWORD *)this + 4) |= 0x200u;
      *((float *)this + 25) = a3;
      goto LABEL_9;
    case 5:
      if ( *((float *)this + 26) == a3 )
        return v4;
      *((_DWORD *)this + 4) |= 0x400u;
      *((float *)this + 26) = a3;
      goto LABEL_9;
  }
  if ( (_DWORD)a2 != 8 )
  {
    if ( (_DWORD)a2 == 9 )
    {
      if ( *((float *)this + 36) == a3 )
        return v4;
      a3 = a3 * 0.017453292;
      goto LABEL_8;
    }
    return (unsigned int)DirectComposition::CResourceMarshaler::SetFloatProperty(this, a2, a3, a4);
  }
  if ( *((float *)this + 36) != a3 )
  {
LABEL_8:
    *((_DWORD *)this + 4) |= 0x2000u;
    *((float *)this + 36) = a3;
LABEL_9:
    *a4 = 1;
  }
  return v4;
}
