/*
 * XREFs of ?GetRuntimeId@CPlaceModeButtonAcc@@UEAAJPEAPEAUtagSAFEARRAY@@@Z @ 0x18054ADE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPlaceModeButtonAcc::GetRuntimeId(CPlaceModeButtonAcc *this, struct tagSAFEARRAY **a2)
{
  HRESULT v3; // ebx
  int v4; // eax
  SAFEARRAY *Vector; // rdi
  unsigned int v6; // eax
  signed int v7; // ecx
  LONG rgIndices; // [rsp+30h] [rbp+8h] BYREF
  int v10; // [rsp+38h] [rbp+10h] BYREF
  int v11; // [rsp+3Ch] [rbp+14h]

  *a2 = 0LL;
  v3 = -2147220991;
  if ( *((_BYTE *)this + 32) )
  {
    v4 = *((_DWORD *)this + 9);
    v10 = 3;
    v11 = v4;
    Vector = SafeArrayCreateVector(3u, 0, 2u);
    if ( Vector )
    {
      v3 = 0;
      v6 = 0;
      rgIndices = 0;
      v7 = 0;
      while ( v6 < 2 )
      {
        v3 = SafeArrayPutElement(Vector, &rgIndices, &v10 + v7);
        v6 = rgIndices + 1;
        rgIndices = v6;
        v7 = v6;
        if ( v3 < 0 )
        {
          SafeArrayDestroy(Vector);
          return (unsigned int)v3;
        }
      }
      *a2 = Vector;
    }
    else
    {
      return (unsigned int)-2147024882;
    }
  }
  return (unsigned int)v3;
}
