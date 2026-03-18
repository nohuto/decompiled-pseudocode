/*
 * XREFs of ?SetFloatProperty@CSpriteShapeMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x140126CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1401085A0 (-SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 */

__int64 __fastcall DirectComposition::CSpriteShapeMarshaler::SetFloatProperty(
        DirectComposition::CSpriteShapeMarshaler *this,
        __int64 a2,
        float a3,
        bool *a4)
{
  unsigned int v4; // r8d

  v4 = 0;
  switch ( (_DWORD)a2 )
  {
    case 0xA:
      *((_DWORD *)this + 4) |= 0x800u;
      *((float *)this + 26) = a3;
      break;
    case 0xB:
      *((_DWORD *)this + 4) |= 0x1000u;
      *((float *)this + 27) = a3;
      break;
    case 0xC:
      *((_DWORD *)this + 4) |= 0x2000u;
      *((float *)this + 28) = a3;
      break;
    default:
      return (unsigned int)DirectComposition::CResourceMarshaler::SetFloatProperty(this, a2, a3, a4);
  }
  *a4 = 1;
  return v4;
}
