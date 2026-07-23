/*
 * XREFs of SepMatchPackage @ 0x140323910
 * Callers:
 *     SepMaximumAccessCheck @ 0x1404E8A30 (SepMaximumAccessCheck.c)
 *     SepMaximumAccessCheckEx @ 0x1404E9F90 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheck @ 0x1404EA720 (SepNormalAccessCheck.c)
 *     SepNormalAccessCheckEx @ 0x1404EB6BC (SepNormalAccessCheckEx.c)
 * Callees:
 *     SepCanTokenMatchAllPackageSid @ 0x140323590 (SepCanTokenMatchAllPackageSid.c)
 *     memcmp @ 0x1406C0E10 (memcmp.c)
 */

int __fastcall SepMatchPackage(
        __int64 a1,
        int a2,
        _WORD *a3,
        int a4,
        _BYTE *a5,
        _DWORD *a6,
        _BYTE *a7,
        _DWORD *a8,
        _BYTE *a9)
{
  int result; // eax
  int v13; // ecx
  int v14; // ebx
  _WORD *v15; // rcx

  result = (int)a3;
  if ( *((_DWORD *)a3 + 2) == 2 && *((_BYTE *)a3 + 1) == 2 )
  {
    v13 = *((_DWORD *)a3 + 3);
    if ( v13 == 1 )
    {
      v14 = a4 & a2;
      if ( !SepCanTokenMatchAllPackageSid(a1, a1, (unsigned __int64)a3) )
      {
        *a8 |= v14;
        result = (int)a9;
        *a9 = 1;
        return result;
      }
      goto LABEL_5;
    }
    if ( v13 == 2 )
    {
LABEL_13:
      v14 = a4 & a2;
LABEL_5:
      *a6 |= v14;
      result = (int)a5;
      *a5 = 1;
    }
  }
  else
  {
    *a7 = 1;
    if ( (*(_DWORD *)(a1 + 200) & 0x4000) != 0 )
    {
      v15 = *(_WORD **)(a1 + 784);
      if ( *v15 == *a3 )
      {
        result = memcmp(v15, a3, 4 * ((unsigned __int64)(unsigned __int16)*v15 >> 8) + 8);
        if ( !result )
          goto LABEL_13;
      }
    }
  }
  return result;
}
