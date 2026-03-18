/*
 * XREFs of ReadMultiSzRegistryValueAndCompareId @ 0x14002FDAC
 * Callers:
 *     GetDynamicRegistrySettings @ 0x14002D4E0 (GetDynamicRegistrySettings.c)
 *     GetRegistrySettings @ 0x14002D764 (GetRegistrySettings.c)
 *     GetRegistrySettingsForSpecificKey @ 0x14002FAF0 (GetRegistrySettingsForSpecificKey.c)
 * Callees:
 *     CompareId @ 0x140001F10 (CompareId.c)
 *     memset @ 0x1400314C0 (memset.c)
 */

bool __fastcall ReadMultiSzRegistryValueAndCompareId(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        unsigned int *a5,
        unsigned int *a6,
        __int64 a7,
        unsigned int a8,
        __int64 a9)
{
  char v12; // al
  char v13; // bl
  __int64 RegistryBuffer; // rax
  void *v15; // rdi
  unsigned int v17; // eax
  unsigned int v18; // eax
  _BYTE *v19; // rdi
  int i; // ecx
  int v21; // eax
  _WORD *v22; // r10
  _BYTE *v23; // r9
  unsigned int v24; // ecx
  unsigned int v25; // edx
  unsigned int v26; // ecx
  unsigned int v27; // ecx

  v12 = StorPortRegistryRead(a1, a2, 1LL);
  v13 = 0;
  if ( v12 )
  {
LABEL_13:
    if ( v12 == 1 && *a6 >= 2 && *a5 >= 2 )
    {
      v19 = (_BYTE *)*a4;
      if ( *(_BYTE *)*a4 || v19[1] )
      {
        for ( i = 0; i < 2; ++i )
        {
          v21 = *a5 - i;
          v19[v21 - 1] = 0;
        }
        v22 = v19;
        v23 = v19;
        if ( v19 )
        {
          v24 = *a6;
          if ( *a6 >= 4 )
          {
            v25 = 0;
            if ( v24 >> 1 == 1 )
              goto LABEL_27;
            do
            {
              if ( !*v22 && !v22[1] )
                break;
              ++v25;
              *v23++ = *(_BYTE *)v22++;
            }
            while ( v25 < (v24 >> 1) - 1 );
            if ( v24 > v25 )
            {
LABEL_27:
              v26 = v24 - v25;
              if ( (v26 & 3) != 0 )
              {
                if ( v26 )
                  memset(v23, 0, v26);
              }
              else
              {
                v27 = v26 >> 2;
                if ( v27 )
                  memset(v23, 0, 4LL * v27);
              }
            }
          }
        }
        return CompareId(a7, a8, (unsigned __int64)v19, *a6, a9);
      }
    }
    return v13;
  }
  if ( *a6 > *a5 )
  {
    StorPortFreeRegistryBuffer(a1);
    *a5 = *a6;
    RegistryBuffer = StorPortAllocateRegistryBuffer(a1, a6);
    *a4 = RegistryBuffer;
    v15 = (void *)RegistryBuffer;
    if ( !RegistryBuffer )
      return 0;
    v17 = *a5;
    if ( *a6 < *a5 )
    {
      StorPortFreeRegistryBuffer(a1);
      *a4 = 0LL;
      return 0;
    }
    if ( (v17 & 3) != 0 )
    {
      if ( v17 )
        memset(v15, 0, *a5);
    }
    else
    {
      v18 = v17 >> 2;
      if ( v18 )
        memset(v15, 0, 4LL * v18);
    }
    v12 = StorPortRegistryRead(a1, a2, 1LL);
    goto LABEL_13;
  }
  return v13;
}
