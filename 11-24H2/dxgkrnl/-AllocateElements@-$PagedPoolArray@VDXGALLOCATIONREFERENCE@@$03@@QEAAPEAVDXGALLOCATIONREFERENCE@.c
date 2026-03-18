/*
 * XREFs of ?AllocateElements@?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAAPEAVDXGALLOCATIONREFERENCE@@I@Z @ 0x1402F8CAC
 * Callers:
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1402C0D9C (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1402F8D90 (--0DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall PagedPoolArray<DXGALLOCATIONREFERENCE,4>::AllocateElements(__int64 *a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // rdi
  __int64 v7; // rax
  bool v8; // cf
  unsigned __int64 v9; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rbp
  DXGALLOCATIONREFERENCE *v12; // r14

  v2 = (unsigned int)a2;
  if ( (unsigned int)a2 <= 4 )
  {
    *a1 = (__int64)(a1 + 1);
    if ( (_DWORD)a2 )
    {
      v4 = 0LL;
      a2 = (unsigned int)a2;
      do
      {
        *(_QWORD *)(v4 + *a1) = 0LL;
        v4 += 8LL;
        --a2;
      }
      while ( a2 );
    }
LABEL_5:
    result = *a1;
    *((_DWORD *)a1 + 10) = v2;
    return result;
  }
  v6 = (unsigned int)a2;
  if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)a2 >= 8 )
  {
    v7 = 8LL * (unsigned int)a2;
    if ( !is_mul_ok((unsigned int)a2, 8uLL) )
      v7 = -1LL;
    v8 = __CFADD__(v7, 8LL);
    v9 = v7 + 8;
    if ( v8 )
      v9 = -1LL;
    v10 = (_QWORD *)operator new[](v9, 0x4B677844u, 256LL);
    if ( v10 )
    {
      *v10 = v2;
      v11 = v10 + 1;
      v12 = (DXGALLOCATIONREFERENCE *)(v10 + 1);
      if ( (_DWORD)v2 )
      {
        do
        {
          DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE(v12);
          v12 = (DXGALLOCATIONREFERENCE *)((char *)v12 + 8);
          --v6;
        }
        while ( v6 );
      }
    }
    else
    {
      v11 = 0LL;
    }
    *a1 = (__int64)v11;
    goto LABEL_5;
  }
  return 0LL;
}
