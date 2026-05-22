/*
 * XREFs of ?GetSystemDirPath@GameInputModule@@CAJPEBGAEAV?$unique_ptr@$$BY0A@GU?$default_delete@$$BY0A@G@utl@@@utl@@PEA_K@Z @ 0x18008CD98
 * Callers:
 *     ?LoadGameInput@GameInputServerProxy@@AEAAJXZ @ 0x1800713E0 (-LoadGameInput@GameInputServerProxy@@AEAAJXZ.c)
 *     ?LoadModule@GameInputModule@@AEAAJW4ModuleKind@1@AEBUGameInputVersion@@@Z @ 0x18007155C (-LoadModule@GameInputModule@@AEAAJW4ModuleKind@1@AEBUGameInputVersion@@@Z.c)
 * Callees:
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180030A30 (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     _o_towlower_0 @ 0x18009D55C (_o_towlower_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E878 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

signed int __fastcall GameInputModule::GetSystemDirPath(__int64 a1, const struct std::nothrow_t *a2, void *a3)
{
  int v3; // ebx
  void *v5; // rcx
  UINT SystemDirectoryW; // eax
  __int64 v8; // r14
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rax
  void *v12; // rax
  _WORD *v13; // rsi
  signed int result; // eax
  const struct std::nothrow_t *v15; // rdx
  unsigned __int64 v16; // rdi
  unsigned __int64 i; // r14
  unsigned __int64 v18; // r14
  void *v19; // rcx
  void *v20; // [rsp+60h] [rbp+18h] BYREF

  v20 = a3;
  v3 = 0;
  v5 = *(void **)a2;
  *(_QWORD *)a2 = 0LL;
  if ( v5 )
    operator delete(v5, a2);
  SystemDirectoryW = GetSystemDirectoryW(0LL, 0);
  v8 = SystemDirectoryW;
  if ( SystemDirectoryW )
  {
    if ( a1 )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( *(_WORD *)(a1 + 2 * v9) );
    }
    else
    {
      v9 = 0LL;
    }
    v10 = v9 + SystemDirectoryW + 1LL;
    if ( !a1 )
      v10 = SystemDirectoryW;
    v11 = 2 * v10;
    if ( !is_mul_ok(v10, 2uLL) )
      v11 = -1LL;
    v12 = operator new[](v11, (const struct std::nothrow_t *)&std::nothrow);
    v20 = v12;
    v13 = v12;
    if ( !v12 )
      return -2147024882;
    v16 = GetSystemDirectoryW((LPWSTR)v12, v10);
    if ( v16 == v8 - 1 )
    {
      for ( i = 0LL; i < v16; ++i )
        v13[i] = o_towlower_0((unsigned __int16)v13[i]);
      if ( a1 )
      {
        v13[v16] = 92;
        v18 = 0LL;
        ++v16;
        if ( v9 )
        {
          do
            v13[v16++] = o_towlower_0(*(unsigned __int16 *)(a1 + 2 * v18++));
          while ( v18 < v9 );
        }
      }
      v13[v16] = 0;
      v19 = *(void **)a2;
      v20 = 0LL;
      *(_QWORD *)a2 = v13;
      if ( v19 )
        operator delete(v19, v15);
      goto LABEL_25;
    }
    if ( v16 )
    {
      v3 = -2147418113;
LABEL_25:
      VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(&v20, v15);
      return v3;
    }
    VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(&v20, v15);
  }
  result = GetLastError();
  if ( !result )
    return -2147418113;
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
