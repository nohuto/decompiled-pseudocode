/*
 * XREFs of ?Initialize@CHostVisualMarshaler@DirectComposition@@UEAAJXZ @ 0x140224ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CVisualMarshaler@DirectComposition@@UEAAJXZ @ 0x14004C5E0 (-Initialize@CVisualMarshaler@DirectComposition@@UEAAJXZ.c)
 */

__int64 __fastcall DirectComposition::CHostVisualMarshaler::Initialize(DirectComposition::CHostVisualMarshaler *this)
{
  __int64 result; // rax

  result = DirectComposition::CVisualMarshaler::Initialize(this);
  if ( (int)result >= 0 )
  {
    *((_DWORD *)this + 66) = 0;
    *((_DWORD *)this + 68) = 0;
    *((_DWORD *)this + 4) |= 0x8002u;
    *((_DWORD *)this + 65) = 1;
    *((_DWORD *)this + 64) = 1;
    *((_DWORD *)this + 67) = -2;
  }
  return result;
}
