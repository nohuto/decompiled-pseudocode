/*
 * XREFs of ?AllocateElements@?$PagedPoolArray@VDXGSYNCOBJECTMUTEX@@$03@@QEAAPEAVDXGSYNCOBJECTMUTEX@@I@Z @ 0x14036DDDC
 * Callers:
 *     ?SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAEPEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1402B61C0 (-SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEP.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x140033640 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 */

__int64 __fastcall PagedPoolArray<DXGSYNCOBJECTMUTEX,4>::AllocateElements(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rsi
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // rax
  bool v10; // cf
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rbx

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
        v7 = *a1;
        *(_QWORD *)(v6 + v7) = 0LL;
        *(_BYTE *)(v6 + v7 + 8) = 0;
        v6 += 16LL;
        --a2;
      }
      while ( a2 );
    }
LABEL_5:
    result = *a1;
    *((_DWORD *)a1 + 18) = v4;
    return result;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)a2 >= 0x10 )
  {
    v9 = 16LL * (unsigned int)a2;
    if ( !is_mul_ok((unsigned int)a2, 0x10uLL) )
      v9 = -1LL;
    v10 = __CFADD__(v9, 8LL);
    v11 = v9 + 8;
    if ( v10 )
      v11 = -1LL;
    v12 = operator new[](v11, 0x4B677844u, 256LL, a4);
    v13 = 0LL;
    if ( v12 )
    {
      v13 = v12 + 8;
      *(_QWORD *)v12 = v4;
      `vector constructor iterator'(
        (char *)(v12 + 8),
        16LL,
        v4,
        (void (__fastcall *)(char *))DXGSYNCOBJECTMUTEX::DXGSYNCOBJECTMUTEX);
    }
    *a1 = v13;
    goto LABEL_5;
  }
  return 0LL;
}
