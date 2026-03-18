/*
 * XREFs of ?PopLastMode@CCD_MODE_RESULT_SET@@QEAA_NAEAUD3DKMT_PATHMODALITY_MODE_RESULT@@@Z @ 0x1402EB7A4
 * Callers:
 *     DxgkEnumerateModesForPathsModality @ 0x1402EB1B0 (DxgkEnumerateModesForPathsModality.c)
 * Callees:
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODESET@@@@@@QEAAEQEBVDMMVIDPNTARGETMODESET@@@Z @ 0x14005F3A0 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U-$DoubleLinkedListElementDelete.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

char __fastcall CCD_MODE_RESULT_SET::PopLastMode(CCD_MODE_RESULT_SET *this, struct D3DKMT_PATHMODALITY_MODE_RESULT *a2)
{
  __int64 v4; // rbx
  unsigned int v5; // ecx
  __int64 v6; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rdx
  _QWORD *v10; // rcx

  if ( !*((_DWORD *)this + 12) )
    return 0;
  if ( *((CCD_MODE_RESULT_SET **)this + 2) == (CCD_MODE_RESULT_SET *)((char *)this + 16) )
  {
    v4 = 0LL;
    goto LABEL_8;
  }
  v4 = *((_QWORD *)this + 3) - 8LL;
  if ( *((_QWORD *)this + 3) == 8LL )
  {
LABEL_8:
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6130;
  }
  v5 = *((_DWORD *)this + 12) - 1;
  *((_DWORD *)this + 12) = v5;
  v6 = 112LL * (v5 % 0x32);
  *(_OWORD *)a2 = *(_OWORD *)(v6 + v4 + 24);
  *((_OWORD *)a2 + 1) = *(_OWORD *)(v6 + v4 + 40);
  *((_OWORD *)a2 + 2) = *(_OWORD *)(v6 + v4 + 56);
  *((_OWORD *)a2 + 3) = *(_OWORD *)(v6 + v4 + 72);
  *((_OWORD *)a2 + 4) = *(_OWORD *)(v6 + v4 + 88);
  *((_OWORD *)a2 + 5) = *(_OWORD *)(v6 + v4 + 104);
  *((_OWORD *)a2 + 6) = *(_OWORD *)(v6 + v4 + 120);
  if ( *((_DWORD *)this + 12) == 50 * (*((_DWORD *)this + 12) / 0x32u) )
  {
    if ( DoublyLinkedList<DMMVIDPNTARGETMODESET,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODESET>>::ContainsByReference(
           (__int64)this,
           v4) )
    {
      v8 = (_QWORD *)(v4 + 8);
      v9 = *(_QWORD *)(v4 + 8);
      if ( *(_QWORD *)(v9 + 8) != v4 + 8 || (v10 = *(_QWORD **)(v4 + 16), (_QWORD *)*v10 != v8) )
        __fastfail(3u);
      *v10 = v9;
      *(_QWORD *)(v9 + 8) = v10;
      *v8 = 0LL;
      *(_QWORD *)(v4 + 16) = 0LL;
      --*((_QWORD *)this + 4);
    }
    if ( v4 )
      (**(void (__fastcall ***)(__int64, __int64))v4)(v4, 1LL);
  }
  return 1;
}
