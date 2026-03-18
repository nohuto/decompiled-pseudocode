/*
 * XREFs of ?AllocateElements@?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAAPEAVDXGALLOCATIONREFERENCE@@I@Z @ 0x14038A830
 * Callers:
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x140290740 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x140033640 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 */

__int64 __fastcall PagedPoolArray<DXGALLOCATIONREFERENCE,16>::AllocateElements(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rsi
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // rax
  bool v9; // cf
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdi

  v4 = (unsigned int)a2;
  if ( (unsigned int)a2 <= 0x10 )
  {
    *a1 = (__int64)(a1 + 1);
    if ( (_DWORD)a2 )
    {
      v6 = 0LL;
      a2 = (unsigned int)a2;
      do
      {
        *(_QWORD *)(v6 + *a1) = 0LL;
        v6 += 8LL;
        --a2;
      }
      while ( a2 );
    }
LABEL_5:
    result = *a1;
    *((_DWORD *)a1 + 34) = v4;
    return result;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)a2 >= 8 )
  {
    v8 = 8LL * (unsigned int)a2;
    if ( !is_mul_ok((unsigned int)a2, 8uLL) )
      v8 = -1LL;
    v9 = __CFADD__(v8, 8LL);
    v10 = v8 + 8;
    if ( v9 )
      v10 = -1LL;
    v11 = operator new[](v10, 0x4B677844u, 256LL, a4);
    v12 = 0LL;
    if ( v11 )
    {
      v12 = v11 + 8;
      *(_QWORD *)v11 = v4;
      `vector constructor iterator'(
        (char *)(v11 + 8),
        8LL,
        v4,
        (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE);
    }
    *a1 = v12;
    goto LABEL_5;
  }
  return 0LL;
}
