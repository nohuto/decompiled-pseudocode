/*
 * XREFs of SeSecureBootQueryInformation @ 0x140A4D9EC
 * Callers:
 *     ExpQuerySystemInformation @ 0x140ADDAE0 (ExpQuerySystemInformation.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall SeSecureBootQueryInformation(int a1, __int64 a2, unsigned int a3, unsigned int *a4)
{
  __int64 v4; // rsi
  unsigned int v5; // ebx
  char *v6; // rdi
  unsigned int v7; // eax
  const void *v9; // r10
  unsigned int v10; // ecx
  unsigned int v11; // eax

  v4 = 0LL;
  v5 = 0;
  if ( a1 != 143 )
  {
    if ( a1 == 145 )
    {
      *a4 = 2;
      if ( a3 >= 2 )
      {
        *(_BYTE *)a2 = dword_140E67CEC & 1;
        *(_BYTE *)(a2 + 1) = (dword_140E67CEC & 8) != 0;
        return v5;
      }
      return (unsigned int)-1073741820;
    }
    if ( a1 != 171 )
    {
      if ( a1 != 179 )
        return (unsigned int)-1073741821;
      v9 = g_SecureBootActivePlatformManifest;
      if ( !g_SecureBootActivePlatformManifest )
        return (unsigned int)-1058340858;
      v10 = g_SecureBootActivePlatformManifestSize;
      v11 = g_SecureBootActivePlatformManifestSize + 4;
      *a4 = g_SecureBootActivePlatformManifestSize + 4;
      if ( a3 >= v11 )
      {
        memmove((void *)(a2 + 4), v9, v10);
        return v5;
      }
      return (unsigned int)-1073741820;
    }
  }
  v6 = (char *)qword_140E67CE0;
  if ( !qword_140E67CE0 )
    return (unsigned int)-2143092730;
  if ( a1 == 171 )
  {
    *a4 = 28;
    v4 = a2;
    v7 = *((_DWORD *)v6 + 14) + 28;
  }
  else
  {
    v7 = 24;
  }
  *a4 = v7;
  if ( a3 < v7 )
    return (unsigned int)-1073741820;
  *(_OWORD *)a2 = *(_OWORD *)(v6 + 4);
  *(_DWORD *)(a2 + 16) = *((_DWORD *)v6 + 5);
  *(_DWORD *)(a2 + 20) = *((_DWORD *)v6 + 8);
  if ( a1 == 171 )
  {
    memmove((void *)(v4 + 28), v6 + 60, *((unsigned int *)v6 + 14));
    *(_DWORD *)(v4 + 24) = *((_DWORD *)v6 + 14);
  }
  return v5;
}
