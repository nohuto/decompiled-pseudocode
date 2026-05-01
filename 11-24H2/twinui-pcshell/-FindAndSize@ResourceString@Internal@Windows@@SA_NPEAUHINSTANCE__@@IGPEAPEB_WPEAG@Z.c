/*
 * XREFs of ?FindAndSize@ResourceString@Internal@Windows@@SA_NPEAUHINSTANCE__@@IGPEAPEB_WPEAG@Z @ 0x1806B24EC
 * Callers:
 *     ?InitializeResFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@HZZ @ 0x1806B424C (-InitializeResFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@Q.c)
 * Callees:
 *     <none>
 */

char __fastcall Windows::Internal::ResourceString::FindAndSize(
        HINSTANCE hModule,
        unsigned int a2,
        __int64 a3,
        const wchar_t **a4,
        unsigned __int16 *a5)
{
  char v5; // bl
  char v7; // si
  HRSRC Resource; // rax
  HGLOBAL v10; // rax
  unsigned __int16 *v11; // rcx
  unsigned int v12; // esi
  __int64 v13; // rdx
  unsigned __int16 v14; // ax
  const wchar_t *v15; // rcx

  v5 = 0;
  *a4 = 0LL;
  v7 = a2;
  if ( a5 )
    *a5 = 0;
  Resource = FindResourceExW(hModule, (LPCWSTR)6, (LPCWSTR)(unsigned __int16)((a2 >> 4) + 1), 0);
  if ( Resource )
  {
    v10 = LoadResource(hModule, Resource);
    if ( v10 )
    {
      v11 = (unsigned __int16 *)LockResource(v10);
      if ( v11 )
      {
        v12 = v7 & 0xF;
        if ( v12 )
        {
          v13 = v12;
          do
          {
            v11 += *v11 + 1;
            --v13;
          }
          while ( v13 );
        }
        v14 = *v11;
        if ( *v11 )
          v15 = v11 + 1;
        else
          v15 = &pvData;
        *a4 = v15;
        if ( a5 )
          *a5 = v14;
        return 1;
      }
    }
  }
  return v5;
}
