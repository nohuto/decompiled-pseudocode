/*
 * XREFs of LdrpGetFromMUIMemCache @ 0x1402DCFC0
 * Callers:
 *     LdrpGetRcConfig @ 0x1402DC5EC (LdrpGetRcConfig.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x1402DCE08 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrResGetRCConfig @ 0x140A622BC (LdrResGetRCConfig.c)
 * Callees:
 *     LdrpInitMuiCrits @ 0x1402DCF84 (LdrpInitMuiCrits.c)
 *     KeReleaseMutant @ 0x1402DEA20 (KeReleaseMutant.c)
 *     KeReleaseMutantEx @ 0x1402DEAA0 (KeReleaseMutantEx.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x14048C12C (LdrUnloadAlternateResourceModuleEx.c)
 */

_DWORD *__fastcall LdrpGetFromMUIMemCache(unsigned __int64 DllHandle, __int16 a2, _QWORD *a3, int a4)
{
  char v4; // bl
  unsigned __int64 v8; // rdx
  _DWORD *v9; // rcx
  __int64 v10; // rax
  int v11; // edx
  _DWORD *v12; // rax
  int i; // r8d
  __int64 v14; // rcx
  _DWORD *v15; // rdx
  ULONG v16; // edx
  _DWORD *v18; // [rsp+38h] [rbp-30h]
  _DWORD *v19; // [rsp+40h] [rbp-28h]
  char v20; // [rsp+88h] [rbp+20h]

  v4 = a4;
  v19 = 0LL;
  v20 = 0;
  if ( (a4 & 0xC) == 0 || (a4 & 0xFFFFFFF3) != 0 || (a4 & 4) != 0 && !a2 )
    return 0LL;
  v8 = DllHandle & 0xFFFFFFFFFFFFFFFCuLL;
  v9 = 0LL;
  v18 = 0LL;
  if ( (DllHandle & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
  {
    if ( *(_WORD *)v8 != 23117 )
      goto LABEL_13;
    v10 = *(unsigned int *)(v8 + 60);
    v9 = (_DWORD *)(v8 + v10);
    if ( v8 + v10 < v8
      || v8 <= 0x7FFFFFFEFFFFLL && ((_DWORD *)((char *)v9 + 263) < v9 || (unsigned __int64)v9 + 263 > 0x7FFFFFFEFFFFLL) )
    {
      goto LABEL_13;
    }
    if ( *v9 != 17744 )
      goto LABEL_13;
    v11 = 0;
  }
  else
  {
    v11 = -1073741811;
  }
  v12 = 0LL;
  if ( v11 >= 0 )
    v12 = v9;
  v18 = v12;
LABEL_13:
  if ( !v18 )
    return 0LL;
  if ( a3 )
    *a3 = 0LL;
  LdrpInitMuiCrits();
  KeWaitForSingleObject(&MuiMutex, Executive, 0, 0, 0LL);
  for ( i = AlternateResourceModuleCount - 1; i >= 0; --i )
  {
    if ( *((_QWORD *)AlternateResourceModules + 8 * (__int64)i + 1) == DllHandle )
    {
      v14 = (__int64)i << 6;
      if ( *(_DWORD *)((char *)AlternateResourceModules + v14 + 24) != v18[22] )
      {
        v20 = 1;
        break;
      }
      if ( (v4 & 8) != 0 )
      {
        if ( *(_QWORD *)((char *)AlternateResourceModules + v14 + 16) )
        {
          _mm_lfence();
          v15 = (_DWORD *)*((_QWORD *)AlternateResourceModules + 8 * (__int64)i + 2);
          v19 = v15;
          if ( (unsigned __int64)v15 - 1 <= 0xFFFFFFFFFFFFFFFDuLL && *v15 != -20054323 )
          {
            v20 = 1;
            v19 = 0LL;
          }
          break;
        }
      }
      else if ( (v4 & 4) != 0 && a2 && *(_WORD *)((char *)AlternateResourceModules + v14) == a2 )
      {
        v19 = *(_DWORD **)((char *)AlternateResourceModules + v14 + 32);
        if ( a3 )
          *a3 = *(_QWORD *)((char *)AlternateResourceModules + v14 + 48);
        break;
      }
    }
  }
  KeReleaseMutantEx((ULONG_PTR)&MuiMutex);
  if ( v20 )
    LdrUnloadAlternateResourceModuleEx((PVOID)DllHandle, v16);
  return v19;
}
