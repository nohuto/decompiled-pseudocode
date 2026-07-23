/*
 * XREFs of ApiSetResolveToHost @ 0x180070C20
 * Callers:
 *     LdrpLoadDependentModuleInternal @ 0x180039CE0 (LdrpLoadDependentModuleInternal.c)
 *     LdrpPreprocessDllName @ 0x180070150 (LdrpPreprocessDllName.c)
 *     LdrpSnapKernelBaseExtensions @ 0x18008D200 (LdrpSnapKernelBaseExtensions.c)
 *     ApiSetQueryApiSetPresence @ 0x1800EA6D0 (ApiSetQueryApiSetPresence.c)
 *     ApiSetResolveToHost2 @ 0x180133650 (ApiSetResolveToHost2.c)
 * Callees:
 *     ApiSetpSearchForApiSet @ 0x1800B8390 (ApiSetpSearchForApiSet.c)
 *     ApiSetpSearchForApiSetHost @ 0x1800DB780 (ApiSetpSearchForApiSetHost.c)
 *     ApiSetpResolveHost @ 0x180133EAC (ApiSetpResolveHost.c)
 */

__int64 __fastcall ApiSetResolveToHost(__int64 a1, unsigned __int16 *a2, __int64 a3, char *a4, __int64 a5)
{
  char *v5; // r14
  __int64 v7; // rbx
  __int64 result; // rax
  char v9; // bp
  __int64 v10; // rcx
  _QWORD *v11; // rdx
  unsigned __int64 v12; // rax
  _WORD *v13; // rax
  unsigned int v14; // r8d
  __int64 v15; // rax
  __int64 v16; // rcx

  v5 = a4;
  v7 = a1;
  if ( *(_BYTE *)a1 == 7
    || *(_DWORD *)a1 == 6
    && *(_DWORD *)(a1 + 16) > 8u
    && (a1 += 28LL, *(_BYTE *)a1 == 7)
    && (*(_BYTE *)(v7 + 30) & 4) == 0 )
  {
    LOBYTE(a4) = 1;
    return ApiSetpResolveHost(a1, *((_QWORD *)a2 + 1), *a2 >> 1, (_DWORD)a4, a3, (__int64)v5, a5);
  }
  v9 = 0;
  *(_OWORD *)a5 = 0LL;
  v10 = *a2;
  if ( (unsigned int)v10 >= 8 )
  {
    v11 = (_QWORD *)*((_QWORD *)a2 + 1);
    v12 = *v11 & 0xFFFFFFDFFFDFFFDFuLL;
    if ( v12 == 0x2D004900500041LL || v12 == 0x2D005400580045LL )
    {
      v13 = (_WORD *)((char *)v11 + v10);
      v14 = v10;
      do
      {
        v14 -= 2;
        --v13;
      }
      while ( *v13 != 45 && v14 > 1 );
      if ( (unsigned __int16)v14 >> 1 )
      {
        v15 = ApiSetpSearchForApiSet(v7);
        if ( v15 )
        {
          if ( a3 && *(_DWORD *)(v15 + 20) > 1u )
          {
            v16 = ApiSetpSearchForApiSetHost(v15, *(_QWORD *)(a3 + 8), *(_WORD *)a3 >> 1, v7);
LABEL_20:
            v9 = 1;
            *(_QWORD *)(a5 + 8) = v7 + *(unsigned int *)(v16 + 12);
            *(_WORD *)(a5 + 2) = *(_WORD *)(v16 + 16);
            *(_WORD *)a5 = *(_WORD *)(v16 + 16);
            goto LABEL_21;
          }
          if ( *(_DWORD *)(v15 + 20) )
          {
            v16 = v7 + *(unsigned int *)(v15 + 16);
            goto LABEL_20;
          }
        }
      }
    }
  }
LABEL_21:
  result = 0LL;
  *v5 = v9;
  return result;
}
