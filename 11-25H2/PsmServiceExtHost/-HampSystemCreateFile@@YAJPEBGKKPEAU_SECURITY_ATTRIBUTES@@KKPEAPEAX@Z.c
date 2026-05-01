/*
 * XREFs of ?HampSystemCreateFile@@YAJPEBGKKPEAU_SECURITY_ATTRIBUTES@@KKPEAPEAX@Z @ 0x18008FC80
 * Callers:
 *     ?HampUtilCreateTempFile@@YAJPEBGKPEAPEAXPEAG@Z @ 0x18007EE64 (-HampUtilCreateTempFile@@YAJPEBGKPEAPEAXPEAG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampSystemCreateFile(
        const unsigned __int16 *a1,
        __int64 a2,
        __int64 a3,
        struct _SECURITY_ATTRIBUTES *a4,
        unsigned int a5,
        unsigned int a6,
        void **a7)
{
  unsigned int v7; // ebx
  HANDLE FileW; // rcx

  v7 = 0;
  FileW = CreateFileW(a1, 0x40000000u, 0, 0LL, 1u, 0x80u, 0LL);
  if ( FileW == (HANDLE)-1LL )
  {
    if ( (int)GetLastError() > 0 )
      return (unsigned __int16)GetLastError() | 0xC0070000;
    else
      return GetLastError();
  }
  else
  {
    *a7 = FileW;
  }
  return v7;
}
