/*
 * XREFs of ?CopyFrom@?$CComSafeArray@M$03@ATL@@QEAAJPEBUtagSAFEARRAY@@@Z @ 0x18005B360
 * Callers:
 *     ?LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18005AE08 (-LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 * Callees:
 *     ?Destroy@?$CComSafeArray@M$03@ATL@@QEAAJXZ @ 0x18005B43C (-Destroy@-$CComSafeArray@M$03@ATL@@QEAAJXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800A4D5C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

int __fastcall ATL::CComSafeArray<float,4>::CopyFrom(SAFEARRAY **ppsaOut, SAFEARRAY *psa)
{
  HRESULT Vartype; // eax
  VARTYPE v5; // cx
  int v6; // eax
  int result; // eax
  VARTYPE v8; // [rsp+38h] [rbp+10h] BYREF

  if ( !psa )
    goto LABEL_15;
  v8 = 0;
  Vartype = SafeArrayGetVartype(psa, &v8);
  if ( Vartype < 0 )
    ATL::AtlThrowImpl(Vartype);
  v5 = v8;
  if ( v8 == 13 && (psa->fFeatures & 0x440) == 0x440 )
  {
    v5 = 9;
    v8 = 9;
  }
  if ( v5 != 4 )
LABEL_15:
    ATL::AtlThrowImpl(-2147024809);
  v6 = ATL::CComSafeArray<float,4>::Destroy(ppsaOut);
  if ( v6 < 0 )
    ATL::AtlThrowImpl(v6);
  result = SafeArrayCopy(psa, ppsaOut);
  if ( result < 0 )
    ATL::AtlThrowImpl(result);
  if ( *ppsaOut )
    return SafeArrayLock(*ppsaOut);
  return result;
}
