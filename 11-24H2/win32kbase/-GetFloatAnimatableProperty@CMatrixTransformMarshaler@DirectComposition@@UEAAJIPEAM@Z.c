/*
 * XREFs of ?GetFloatAnimatableProperty@CMatrixTransformMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x140230BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFloatAnimatableProperty@CResourceMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x14022C8F0 (-GetFloatAnimatableProperty@CResourceMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 */

__int64 __fastcall DirectComposition::CMatrixTransformMarshaler::GetFloatAnimatableProperty(
        DirectComposition::CMatrixTransformMarshaler *this,
        __int64 a2,
        float *a3)
{
  unsigned int v3; // r10d

  v3 = 0;
  if ( (unsigned int)(a2 - 1) > 5 )
    return (unsigned int)DirectComposition::CResourceMarshaler::GetFloatAnimatableProperty(this, a2, a3);
  else
    *a3 = *((float *)this + 2 * ((unsigned __int64)(unsigned int)(a2 - 1) >> 1) + (((_BYTE)a2 - 1) & 1) + 18);
  return v3;
}
