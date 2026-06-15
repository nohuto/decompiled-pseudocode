/*
 * XREFs of ?SetCount@?$CAtlArray@PEAUAPO_CONNECTION_DESCRIPTOR@@V?$CElementTraits@PEAUAPO_CONNECTION_DESCRIPTOR@@@ATL@@@ATL@@QEAA_N_KH@Z @ 0x1400310E8
 * Callers:
 *     ?InsertAt@?$CAtlArray@PEAUAPO_CONNECTION_DESCRIPTOR@@V?$CElementTraits@PEAUAPO_CONNECTION_DESCRIPTOR@@@ATL@@@ATL@@QEAAX_KAEBQEAUAPO_CONNECTION_DESCRIPTOR@@0@Z @ 0x140030FD8 (-InsertAt@-$CAtlArray@PEAUAPO_CONNECTION_DESCRIPTOR@@V-$CElementTraits@PEAUAPO_CONNECTION_DESCRI.c)
 *     _ATL::CAtlArray_APO_CONNECTION_DESCRIPTOR___ATL::CElementTraits_APO_CONNECTION_DESCRIPTOR_____::InsertAt_::_1_::catch$0 @ 0x140093CF9 (_ATL--CAtlArray_APO_CONNECTION_DESCRIPTOR___ATL--CElementTraits_APO_CONNECTION_DESC_ea_140093CF9.c)
 * Callees:
 *     ?CallConstructors@?$CAtlArray@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@V?$CElementTraits@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@@ATL@@@ATL@@CAXPEAPEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@_K@Z @ 0x14000C2CC (-CallConstructors@-$CAtlArray@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@V-$CElementTraits@PEAUAPO_.c)
 *     ?AtlCrtErrorCheck@ATL@@YAHH@Z @ 0x14000C454 (-AtlCrtErrorCheck@ATL@@YAHH@Z.c)
 *     memmove_s @ 0x14000C4A0 (memmove_s.c)
 */

char __fastcall ATL::CAtlArray<APO_CONNECTION_DESCRIPTOR *,ATL::CElementTraits<APO_CONNECTION_DESCRIPTOR *>>::SetCount(
        __int64 a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v5; // rdx
  size_t v6; // rbp
  void *v7; // rax
  unsigned __int64 v9; // rcx
  void *v10; // rax
  void *v11; // r14
  errno_t v12; // eax

  v2 = 0LL;
  if ( !a2 )
  {
    if ( *(_QWORD *)a1 )
    {
      free(*(void **)a1);
      *(_QWORD *)a1 = 0LL;
    }
    *(_QWORD *)(a1 + 16) = 0LL;
    goto LABEL_10;
  }
  v5 = *(_QWORD *)(a1 + 16);
  if ( a2 <= v5 )
  {
    if ( a2 <= *(_QWORD *)(a1 + 8) )
      goto LABEL_9;
    goto LABEL_8;
  }
  if ( *(_QWORD *)a1 )
  {
    v9 = *(int *)(a1 + 24);
    if ( !v9 )
    {
      v9 = v5 >> 1;
      if ( a2 - v5 > v5 >> 1 )
        v9 = a2 - v5;
    }
    v6 = a2;
    if ( a2 < v5 + v9 )
      v6 = v5 + v9;
    v10 = calloc(v6, 8uLL);
    v11 = v10;
    if ( v10 )
    {
      v12 = memmove_s(v10, 8LL * *(_QWORD *)(a1 + 8), *(const void *const *)a1, 8LL * *(_QWORD *)(a1 + 8));
      ATL::AtlCrtErrorCheck(v12);
      free(*(void **)a1);
      *(_QWORD *)a1 = v11;
LABEL_7:
      *(_QWORD *)(a1 + 16) = v6;
LABEL_8:
      ATL::CAtlArray<APO_CONNECTION_PROPERTY_V_INTERNAL *,ATL::CElementTraits<APO_CONNECTION_PROPERTY_V_INTERNAL *>>::CallConstructors();
LABEL_9:
      v2 = a2;
LABEL_10:
      *(_QWORD *)(a1 + 8) = v2;
      return 1;
    }
  }
  else
  {
    v6 = a2;
    if ( *(int *)(a1 + 24) > a2 )
      v6 = *(int *)(a1 + 24);
    v7 = calloc(v6, 8uLL);
    *(_QWORD *)a1 = v7;
    if ( v7 )
      goto LABEL_7;
  }
  return 0;
}
