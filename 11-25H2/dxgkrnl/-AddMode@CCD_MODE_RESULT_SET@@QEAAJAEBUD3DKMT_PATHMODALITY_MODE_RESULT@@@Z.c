/*
 * XREFs of ?AddMode@CCD_MODE_RESULT_SET@@QEAAJAEBUD3DKMT_PATHMODALITY_MODE_RESULT@@@Z @ 0x1403DAD18
 * Callers:
 *     _BmlGetPathModeListForPathTargetModes @ 0x14039C56C (_BmlGetPathModeListForPathTargetModes.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODESET@@@@@@QEAAEQEBVDMMVIDPNTARGETMODESET@@@Z @ 0x14005F3A0 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U-$DoubleLinkedListElementDelete.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memset @ 0x14009FCC0 (memset.c)
 */

__int64 __fastcall CCD_MODE_RESULT_SET::AddMode(
        CCD_MODE_RESULT_SET *this,
        const struct D3DKMT_PATHMODALITY_MODE_RESULT *a2)
{
  __int64 v4; // r9
  _QWORD *v5; // rbp
  _DWORD *v6; // rdi
  _QWORD *v7; // rbx
  __int128 v8; // xmm1
  __int64 v9; // rcx
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int64 v16; // rax
  _QWORD *v17; // rcx
  _QWORD *v18; // rax

  if ( (**(unsigned __int8 (__fastcall ***)(CCD_MODE_RESULT_SET *))this)(this) )
  {
    v5 = (_QWORD *)((char *)this + 16);
    v6 = (_DWORD *)((char *)this + 48);
    if ( (_QWORD *)*v5 != v5 && *v6 != 50 * (*v6 / 0x32u) )
    {
      v7 = (_QWORD *)(*((_QWORD *)this + 3) - 8LL);
      if ( *((_QWORD *)this + 3) == 8LL )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 6108;
      }
LABEL_6:
      v8 = *((_OWORD *)a2 + 1);
      v9 = 14LL * (*v6 % 0x32u);
      *(_OWORD *)&v7[v9 + 3] = *(_OWORD *)a2;
      v10 = *((_OWORD *)a2 + 2);
      *(_OWORD *)&v7[v9 + 5] = v8;
      v11 = *((_OWORD *)a2 + 3);
      *(_OWORD *)&v7[v9 + 7] = v10;
      v12 = *((_OWORD *)a2 + 4);
      *(_OWORD *)&v7[v9 + 9] = v11;
      v13 = *((_OWORD *)a2 + 5);
      *(_OWORD *)&v7[v9 + 11] = v12;
      v14 = *((_OWORD *)a2 + 6);
      *(_OWORD *)&v7[v9 + 13] = v13;
      *(_OWORD *)&v7[v9 + 15] = v14;
      ++*v6;
      return 0LL;
    }
    v16 = operator new(0x15F8uLL, 0x4B677844u, 256LL, v4);
    v7 = (_QWORD *)v16;
    if ( v16 )
    {
      memset((void *)(v16 + 24), 0, 0x15E0uLL);
      v7[1] = 0LL;
      v7[2] = 0LL;
      *v7 = &SetElement::`vftable';
      if ( !DoublyLinkedList<DMMVIDPNTARGETMODESET,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODESET>>::ContainsByReference(
              (__int64)this,
              (__int64)v7) )
      {
        v17 = (_QWORD *)*((_QWORD *)this + 3);
        v18 = v7 + 1;
        if ( (_QWORD *)*v17 != v5 )
          __fastfail(3u);
        *v18 = v5;
        v7[2] = v17;
        *v17 = v18;
        *((_QWORD *)this + 3) = v18;
        ++*((_QWORD *)this + 4);
      }
      goto LABEL_6;
    }
  }
  return 3221225495LL;
}
