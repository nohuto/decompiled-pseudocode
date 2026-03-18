/*
 * XREFs of LdrpGetFromMUIMemCache @ 0x14044EF40
 * Callers:
 *     LdrpGetRcConfig @ 0x14044EB54 (LdrpGetRcConfig.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x14044EDC4 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrResGetRCConfig @ 0x140A68F0C (LdrResGetRCConfig.c)
 * Callees:
 *     KeReleaseMutant @ 0x140337970 (KeReleaseMutant.c)
 *     KeReleaseMutantEx @ 0x1403379F0 (KeReleaseMutantEx.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x14044E0DC (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrpInitMuiCrits @ 0x14044F178 (LdrpInitMuiCrits.c)
 */

_DWORD *__fastcall LdrpGetFromMUIMemCache(__int64 a1, __int16 a2, _QWORD *a3, int a4)
{
  char v4; // bl
  unsigned __int64 v8; // rdx
  _DWORD *v9; // rcx
  __int64 v10; // rax
  int v11; // edx
  _DWORD *v12; // rax
  _DWORD *v13; // rsi
  int i; // r8d
  __int64 v15; // rcx
  _DWORD *v16; // rdx
  _DWORD *v18; // [rsp+38h] [rbp-30h] BYREF
  _DWORD *v19; // [rsp+40h] [rbp-28h]
  char v20; // [rsp+88h] [rbp+20h]

  v4 = a4;
  v19 = 0LL;
  v20 = 0;
  if ( (a4 & 0xC) == 0 || (a4 & 0xFFFFFFF3) != 0 || (a4 & 4) != 0 && !a2 )
    return 0LL;
  v8 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
  v9 = 0LL;
  v18 = 0LL;
  if ( (a1 & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
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
  v12 = v18;
  if ( v11 >= 0 )
    v12 = v9;
  v18 = v12;
LABEL_13:
  v13 = v18;
  if ( !v18 )
    return 0LL;
  if ( a3 )
    *a3 = 0LL;
  LdrpInitMuiCrits(v9);
  KeWaitForSingleObject(&MuiMutex, Executive, 0, 0, 0LL);
  for ( i = AlternateResourceModuleCount - 1; i >= 0; --i )
  {
    if ( *((_QWORD *)AlternateResourceModules + 8 * (__int64)i + 1) == a1 )
    {
      v15 = (__int64)i << 6;
      if ( *(_DWORD *)((char *)AlternateResourceModules + v15 + 24) != v13[22] )
      {
        v20 = 1;
        break;
      }
      if ( (v4 & 8) != 0 )
      {
        if ( *(_QWORD *)((char *)AlternateResourceModules + v15 + 16) )
        {
          _mm_lfence();
          v16 = (_DWORD *)*((_QWORD *)AlternateResourceModules + 8 * (__int64)i + 2);
          v19 = v16;
          if ( (unsigned __int64)v16 - 1 <= 0xFFFFFFFFFFFFFFFDuLL && *v16 != -20054323 )
          {
            v20 = 1;
            v19 = 0LL;
          }
          break;
        }
      }
      else if ( (v4 & 4) != 0 && a2 && *(_WORD *)((char *)AlternateResourceModules + v15) == a2 )
      {
        v19 = *(_DWORD **)((char *)AlternateResourceModules + v15 + 32);
        if ( a3 )
          *a3 = *(_QWORD *)((char *)AlternateResourceModules + v15 + 48);
        break;
      }
    }
  }
  KeReleaseMutantEx((ULONG_PTR)&MuiMutex, 1u, 4, (int *)&v18);
  if ( v20 )
    LdrUnloadAlternateResourceModuleEx(a1);
  return v19;
}
