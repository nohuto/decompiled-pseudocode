/*
 * XREFs of ?SetFloatProperty@CProjectedShadowSceneMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x140238810
 * Callers:
 *     <none>
 * Callees:
 *     ?SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1401085A0 (-SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 */

__int64 __fastcall DirectComposition::CProjectedShadowSceneMarshaler::SetFloatProperty(
        DirectComposition::CProjectedShadowSceneMarshaler *this,
        __int64 a2,
        float a3,
        bool *a4)
{
  *a4 = 0;
  switch ( (_DWORD)a2 )
  {
    case 1:
      *((_DWORD *)this + 4) |= 0x1000u;
      *((float *)this + 26) = a3;
      break;
    case 4:
      *((_DWORD *)this + 4) |= 0x400u;
      *((float *)this + 27) = a3;
      break;
    case 5:
      *((_DWORD *)this + 4) |= 0x2000u;
      *((float *)this + 28) = a3;
      break;
    case 6:
      *((_DWORD *)this + 4) |= 0x800u;
      *((float *)this + 29) = a3;
      break;
    case 7:
      *((_DWORD *)this + 4) |= 0x4000u;
      *((float *)this + 30) = a3;
      break;
    case 8:
      *((_DWORD *)this + 4) |= 0x8000u;
      *((float *)this + 31) = a3;
      break;
    default:
      return DirectComposition::CResourceMarshaler::SetFloatProperty(this, a2, a3, a4);
  }
  *a4 = 1;
  return 0LL;
}
