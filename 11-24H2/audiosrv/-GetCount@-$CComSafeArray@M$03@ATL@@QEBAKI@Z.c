/*
 * XREFs of ?GetCount@?$CComSafeArray@M$03@ATL@@QEBAKI@Z @ 0x1800C1C94
 * Callers:
 *     ?LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180009C2C (-LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800A116C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CComSafeArray<float,4>::GetCount(SAFEARRAY **a1)
{
  HRESULT LBound; // eax
  HRESULT UBound; // eax
  LONG v5; // [rsp+30h] [rbp+8h] BYREF
  LONG plUbound; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0;
  plUbound = 0;
  LBound = SafeArrayGetLBound(*a1, 1u, &v5);
  if ( LBound < 0 )
    ATL::AtlThrowImpl(LBound);
  UBound = SafeArrayGetUBound(*a1, 1u, &plUbound);
  if ( UBound < 0 )
    ATL::AtlThrowImpl(UBound);
  return (unsigned int)(plUbound - v5 + 1);
}
