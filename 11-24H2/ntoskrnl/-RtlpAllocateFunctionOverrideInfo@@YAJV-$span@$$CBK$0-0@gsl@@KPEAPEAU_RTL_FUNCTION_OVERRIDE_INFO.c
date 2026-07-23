/*
 * XREFs of ?RtlpAllocateFunctionOverrideInfo@@YAJV?$span@$$CBK$0?0@gsl@@KPEAPEAU_RTL_FUNCTION_OVERRIDE_INFORMATION@@@Z @ 0x14094070C
 * Callers:
 *     ?RtlpCreateFunctionOverrideFixupInfo@@YAJV?$span@$$CBE$0?0@gsl@@KKPEBU_RTL_FUNCTION_OVERRIDE_CAPABILITIES@@PEAPEAU_RTL_FUNCTION_OVERRIDE_INFORMATION@@PEBU_RTL_SYSTEM_OVERRIDE_INFORMATION@@@Z @ 0x14093F818 (-RtlpCreateFunctionOverrideFixupInfo@@YAJV-$span@$$CBE$0-0@gsl@@KKPEBU_RTL_FUNCTION_OVERRIDE_CAP.c)
 * Callees:
 *     ?terminate@details@gsl@@YAXXZ @ 0x1404F6240 (-terminate@details@gsl@@YAXXZ.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall RtlpAllocateFunctionOverrideInfo(unsigned __int64 *a1, unsigned int a2, __int64 *a3)
{
  unsigned int v4; // r14d
  int v5; // ebx
  char v6; // r10
  unsigned int v7; // ebp
  int v8; // r13d
  _DWORD *v9; // r8
  int v10; // r9d
  _DWORD *i; // rcx
  char v12; // r11
  unsigned __int128 v13; // rax
  unsigned __int64 v14; // kr00_8
  unsigned int v15; // ecx
  __int64 v16; // rsi
  unsigned __int64 v17; // r8
  __int64 v18; // r15
  unsigned __int128 v19; // rax
  ULONG_PTR v20; // rdi
  unsigned int v21; // ebx
  __int64 v22; // rcx
  unsigned __int64 v23; // rax
  ULONG_PTR v24; // rbx
  __int64 Pool2; // rcx
  _QWORD *v26; // rdx
  unsigned __int64 v27; // rbx
  _QWORD *v28; // r10
  _DWORD *v29; // r9
  __int64 v30; // r8
  unsigned __int64 v31; // rax
  char v32; // al
  int v33; // eax
  _DWORD *v35; // rdi
  unsigned __int64 v36; // [rsp+20h] [rbp-48h]
  __int64 v37; // [rsp+80h] [rbp+18h]
  _DWORD *v38; // [rsp+88h] [rbp+20h]

  *a3 = 0LL;
  if ( !a2 )
    return 3221225595LL;
  v4 = 0;
  v36 = *a1;
  v5 = 0;
  v6 = 0;
  v38 = (_DWORD *)a1[1];
  v7 = 0;
  v8 = 0;
  v9 = &v38[*a1];
  v10 = 0;
  for ( i = v38; i != v9; ++i )
  {
    v12 = v6;
    if ( *i )
    {
      v5 += *i;
      ++v4;
      v32 = v6;
      v8 = v10;
      if ( !v6 )
        v32 = 1;
      v6 = v32;
      v33 = v10;
      if ( v12 )
        v33 = v7;
      v7 = v33;
    }
    ++v10;
  }
  v37 = a2;
  v14 = a2;
  v13 = a2 * (unsigned __int128)0x10uLL;
  v15 = v8 - v7 + 1;
  if ( !is_mul_ok(v14, 0x10uLL) )
    return 3221225595LL;
  v16 = v13 + 40;
  if ( (__int64)v13 + 40 < (unsigned __int64)v13 )
    return 3221225595LL;
  v17 = (unsigned int)(DWORD2(v13) + 8);
  v18 = v15;
  v19 = v15 * (unsigned __int128)(unsigned int)(DWORD2(v13) + 8);
  if ( !is_mul_ok(v15, v17) )
    return 3221225595LL;
  v20 = v19 + v16;
  if ( (__int64)v19 + v16 < (unsigned __int64)v19 )
    return 3221225595LL;
  *(_QWORD *)&v19 = (unsigned int)(DWORD2(v19) + 12) * (unsigned __int64)v4;
  v21 = v5 - v4;
  if ( !is_mul_ok((unsigned int)(DWORD2(v19) + 12), v4) )
    return 3221225595LL;
  v22 = v19 + v20;
  if ( (unsigned __int64)v19 + v20 < (unsigned __int64)v19 )
    return 3221225595LL;
  v23 = v17 * v21;
  if ( !is_mul_ok(v17, v21) )
    return 3221225595LL;
  v24 = v23 + v22;
  if ( v23 + v22 < v23 )
    return 3221225595LL;
  if ( v24 > 0xFFFFFFFF )
    return 3221225495LL;
  Pool2 = ExAllocatePool2(0x100uLL, v24, 0x6F467452u);
  if ( !Pool2 )
    return 3221225495LL;
  v26 = (_QWORD *)(Pool2 + v16);
  *(_QWORD *)Pool2 = v37;
  *(_QWORD *)(Pool2 + 24) = Pool2 + v16;
  *(_DWORD *)(Pool2 + 32) = v7;
  *(_DWORD *)(Pool2 + 36) = v8;
  if ( !(Pool2 + v16) && v18 )
    goto LABEL_22;
  if ( v24 < v20 )
    goto LABEL_22;
  v27 = v24 - v20;
  if ( v27 == -1LL )
    goto LABEL_22;
  v28 = &v26[v18];
  v29 = (_DWORD *)(v20 + Pool2);
  if ( v26 != v28 )
  {
    while ( v7 < v36 )
    {
      v30 = (unsigned int)v38[v7];
      if ( (_DWORD)v30 )
      {
        v31 = 8 * v30 + 4;
        if ( v27 < v31 )
          break;
        v27 -= v31;
        v35 = v29;
        if ( v27 == -1LL )
          break;
        *v26 = v29;
        v29 = (_DWORD *)((char *)v29 + v31);
        *v35 = v30;
      }
      ++v7;
      if ( ++v26 == v28 )
        goto LABEL_32;
    }
LABEL_22:
    gsl::details::terminate((gsl::details *)Pool2, (__int64)v26);
    __debugbreak();
  }
LABEL_32:
  *a3 = Pool2;
  return 0LL;
}
