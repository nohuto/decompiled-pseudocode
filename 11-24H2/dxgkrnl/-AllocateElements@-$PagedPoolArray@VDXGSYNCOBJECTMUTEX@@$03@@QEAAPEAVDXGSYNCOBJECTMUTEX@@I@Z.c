/*
 * XREFs of ?AllocateElements@?$PagedPoolArray@VDXGSYNCOBJECTMUTEX@@$03@@QEAAPEAVDXGSYNCOBJECTMUTEX@@I@Z @ 0x14035B294
 * Callers:
 *     ?SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAEPEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1402C3A40 (-SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEP.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x140033510 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 */

__int64 __fastcall PagedPoolArray<DXGSYNCOBJECTMUTEX,4>::AllocateElements(__int64 *a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 result; // rax
  __int64 v7; // rax
  bool v8; // cf
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rbx

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
        v5 = *a1;
        *(_QWORD *)(v4 + v5) = 0LL;
        *(_BYTE *)(v4 + v5 + 8) = 0;
        v4 += 16LL;
        --a2;
      }
      while ( a2 );
    }
LABEL_5:
    result = *a1;
    *((_DWORD *)a1 + 18) = v2;
    return result;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)a2 >= 0x10 )
  {
    v7 = 16LL * (unsigned int)a2;
    if ( !is_mul_ok((unsigned int)a2, 0x10uLL) )
      v7 = -1LL;
    v8 = __CFADD__(v7, 8LL);
    v9 = v7 + 8;
    if ( v8 )
      v9 = -1LL;
    v10 = operator new[](v9, 0x4B677844u, 256LL);
    v11 = 0LL;
    if ( v10 )
    {
      v11 = v10 + 8;
      *(_QWORD *)v10 = v2;
      `vector constructor iterator'(
        (char *)(v10 + 8),
        16LL,
        v2,
        (void (__fastcall *)(char *))DXGSYNCOBJECTMUTEX::DXGSYNCOBJECTMUTEX);
    }
    *a1 = v11;
    goto LABEL_5;
  }
  return 0LL;
}
