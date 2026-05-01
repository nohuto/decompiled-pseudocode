/*
 * XREFs of ?HampSystemDeleteFile@@YAJPEBG@Z @ 0x18008FD10
 * Callers:
 *     ?HampUtilDeleteTempFile@@YAJPEBG@Z @ 0x18007EF30 (-HampUtilDeleteTempFile@@YAJPEBG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampSystemDeleteFile(const unsigned __int16 *a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !DeleteFileW(a1) )
  {
    if ( (int)GetLastError() > 0 )
      return (unsigned __int16)GetLastError() | 0xC0070000;
    else
      return GetLastError();
  }
  return v1;
}
