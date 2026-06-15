/*
 * XREFs of ?HasAuxiliaryInputStreamOnEndpoint@CSharedStreamGroupProxy@@UEAA_NPEBG@Z @ 0x1800F27D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CSharedStreamGroupProxy::HasAuxiliaryInputStreamOnEndpoint(
        CSharedStreamGroupProxy *this,
        const unsigned __int16 *lpString2)
{
  const WCHAR *v2; // r8

  v2 = (const WCHAR *)*((_QWORD *)this + 216);
  if ( v2 )
  {
    if ( lpString2 )
      return CompareStringW(0x7Fu, 1u, v2, -1, lpString2, -1) == 2;
  }
  else if ( !lpString2 )
  {
    return 1;
  }
  return 0;
}
