/*
 * XREFs of ApiSetResolveToHost @ 0x14010F9CC
 * Callers:
 *     ?ResolveApiSetHost@@YAJPEAU_Win32kApiSet@@PEAX@Z @ 0x14010F714 (-ResolveApiSetHost@@YAJPEAU_Win32kApiSet@@PEAX@Z.c)
 * Callees:
 *     ApiSetpSearchForApiSet @ 0x14013B720 (ApiSetpSearchForApiSet.c)
 *     ApiSetpResolveHost @ 0x14023BA3C (ApiSetpResolveHost.c)
 */

__int64 __fastcall ApiSetResolveToHost(__int64 a1, unsigned __int16 *a2, __int64 a3, char *a4, __int64 a5)
{
  __int64 v6; // rbx
  char v8; // di
  __int64 v9; // rcx
  _QWORD *v10; // rdx
  unsigned __int64 v11; // rax
  _WORD *v12; // rax
  unsigned int v13; // r8d
  __int64 v14; // rax
  __int64 v15; // rcx

  v6 = a1;
  if ( *(_BYTE *)a1 == 7 )
    return ApiSetpResolveHost(a1, *((_QWORD *)a2 + 1), *a2 >> 1, (_DWORD)a4);
  if ( *(_DWORD *)a1 == 6 && *(_DWORD *)(a1 + 16) > 8u )
  {
    a1 += 28LL;
    if ( *(_BYTE *)a1 == 7 && (*(_BYTE *)(v6 + 30) & 4) == 0 )
      return ApiSetpResolveHost(a1, *((_QWORD *)a2 + 1), *a2 >> 1, (_DWORD)a4);
  }
  v8 = 0;
  *(_OWORD *)a5 = 0LL;
  v9 = *a2;
  if ( (unsigned __int16)v9 >= 8u )
  {
    v10 = (_QWORD *)*((_QWORD *)a2 + 1);
    v11 = *v10 & 0xFFFFFFDFFFDFFFDFuLL;
    if ( v11 == 0x2D004900500041LL || v11 == 0x2D005400580045LL )
    {
      v12 = (_WORD *)((char *)v10 + v9);
      v13 = v9;
      do
      {
        v13 -= 2;
        --v12;
      }
      while ( *v12 != 45 && v13 > 1 );
      if ( (unsigned __int16)v13 >> 1 )
      {
        v14 = ApiSetpSearchForApiSet(v6);
        if ( v14 )
        {
          if ( *(_DWORD *)(v14 + 20) )
          {
            v15 = *(unsigned int *)(v14 + 16);
            v8 = 1;
            *(_QWORD *)(a5 + 8) = v6 + *(unsigned int *)(v15 + v6 + 12);
            *(_WORD *)(a5 + 2) = *(_WORD *)(v15 + v6 + 16);
            *(_WORD *)a5 = *(_WORD *)(v15 + v6 + 16);
          }
        }
      }
    }
  }
  *a4 = v8;
  return 0LL;
}
