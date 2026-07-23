/*
 * XREFs of HalpQueryDebuggerInformation @ 0x140B77B70
 * Callers:
 *     HaliQuerySystemInformation @ 0x140B6CB90 (HaliQuerySystemInformation.c)
 * Callees:
 *     wcscpy_s @ 0x1405020A0 (wcscpy_s.c)
 */

__int64 __fastcall HalpQueryDebuggerInformation(_DWORD *a1, unsigned int a2, unsigned int *a3)
{
  __int64 *v4; // rdi
  int v7; // esi
  __int64 v8; // rdx
  __int64 v9; // rax
  int v10; // r8d
  char *v11; // rcx
  unsigned int v12; // eax
  unsigned int v13; // r9d
  int v14; // r8d
  unsigned int v15; // eax
  const wchar_t *v16; // r8

  *a3 = 4;
  v4 = (__int64 *)qword_140F8EF88;
  v7 = 0;
  while ( v4 != &qword_140F8EF88 )
  {
    v8 = v4[2];
    v9 = *a3;
    v10 = *(_DWORD *)(v8 + 220);
    v11 = (char *)a1 + v9;
    if ( v10 )
    {
      if ( v10 != 1 )
        return 3221225473LL;
      v13 = *(_DWORD *)(v8 + 232) + 2;
      v14 = *(_DWORD *)(v8 + 232) + 22;
      v15 = v14 + v9;
      *a3 = v15;
      if ( v15 <= a2 )
      {
        *(_DWORD *)v11 = 1;
        *((_DWORD *)v11 + 1) = v14;
        *((_DWORD *)v11 + 2) = *(_DWORD *)(v8 + 232);
        if ( *(_DWORD *)(v8 + 232) )
        {
          v16 = *(const wchar_t **)(v8 + 224);
          if ( v16 )
            wcscpy_s((wchar_t *)v11 + 6, (unsigned __int64)v13 >> 1, v16);
        }
      }
    }
    else
    {
      v12 = v9 + 20;
      *a3 = v12;
      if ( v12 <= a2 )
      {
        *(_DWORD *)v11 = 0;
        *((_DWORD *)v11 + 1) = 20;
        *((_DWORD *)v11 + 3) = *(_DWORD *)v8;
        *((_DWORD *)v11 + 4) = *(_DWORD *)(v8 + 4);
        *((_WORD *)v11 + 4) = *(_WORD *)(v8 + 8);
      }
    }
    v4 = (__int64 *)*v4;
    ++v7;
  }
  if ( !v7 )
    return 3221225473LL;
  if ( *a3 > a2 )
    return 2147483653LL;
  *a1 = DevicesList;
  return 0LL;
}
