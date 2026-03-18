/*
 * XREFs of ?GetPairedSurfaceInfo@DXGCOMPOSITIONSURFACEPROXY@@UEBAJAEAIAEA_K@Z @ 0x1401B5CB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGCOMPOSITIONSURFACEPROXY::GetPairedSurfaceInfo(
        DXGCOMPOSITIONSURFACEPROXY *this,
        unsigned int *a2,
        unsigned __int64 *a3)
{
  if ( !*((_BYTE *)this + 41) )
    return 3221225473LL;
  *a2 = *((_DWORD *)this + 5);
  *a3 = *((_QWORD *)this + 6);
  return 0LL;
}
