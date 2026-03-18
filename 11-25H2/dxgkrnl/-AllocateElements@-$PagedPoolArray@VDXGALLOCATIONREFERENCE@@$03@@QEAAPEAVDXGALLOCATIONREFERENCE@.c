/*
 * XREFs of ?AllocateElements@?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAAPEAVDXGALLOCATIONREFERENCE@@I@Z @ 0x14032C5BC
 * Callers:
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1402B351C (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x14032C6A0 (--0DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall PagedPoolArray<DXGALLOCATIONREFERENCE,4>::AllocateElements(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rsi
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  bool v10; // cf
  unsigned __int64 v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rbp
  DXGALLOCATIONREFERENCE *v14; // r14

  v4 = (unsigned int)a2;
  if ( (unsigned int)a2 <= 4 )
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
    *((_DWORD *)a1 + 10) = v4;
    return result;
  }
  v8 = (unsigned int)a2;
  if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)a2 >= 8 )
  {
    v9 = 8LL * (unsigned int)a2;
    if ( !is_mul_ok((unsigned int)a2, 8uLL) )
      v9 = -1LL;
    v10 = __CFADD__(v9, 8LL);
    v11 = v9 + 8;
    if ( v10 )
      v11 = -1LL;
    v12 = (_QWORD *)operator new[](v11, 0x4B677844u, 256LL, a4);
    if ( v12 )
    {
      *v12 = v4;
      v13 = v12 + 1;
      v14 = (DXGALLOCATIONREFERENCE *)(v12 + 1);
      if ( (_DWORD)v4 )
      {
        do
        {
          DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE(v14);
          v14 = (DXGALLOCATIONREFERENCE *)((char *)v14 + 8);
          --v8;
        }
        while ( v8 );
      }
    }
    else
    {
      v13 = 0LL;
    }
    *a1 = (__int64)v13;
    goto LABEL_5;
  }
  return 0LL;
}
