/*
 * XREFs of ?NewNode@?$CAtlMap@_KV?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@V?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@@4@@ATL@@AEAAPEAVCNode@12@_KII@Z @ 0x140066280
 * Callers:
 *     ?CreateNode@?$CAtlMap@_KV?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@V?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@@4@@ATL@@AEAAPEAVCNode@12@_KII@Z @ 0x140066194 (-CreateNode@-$CAtlMap@_KV-$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@.c)
 * Callees:
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x140026274 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14005626C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?PickSize@?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@AEBAI_K@Z @ 0x140066380 (-PickSize@-$CAtlMap@_KV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@A.c)
 *     ?Rehash@?$CAtlMap@_KV?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@V?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@@4@@ATL@@QEAAXI@Z @ 0x140066420 (-Rehash@-$CAtlMap@_KV-$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V-$C.c)
 */

// Hidden C++ exception states: #try_helpers=1
__int64 __fastcall ATL::CAtlMap<unsigned __int64,wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>>>::NewNode(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4)
{
  __int64 v5; // r15
  struct ATL::CAtlPlex *v8; // rcx
  int v9; // edx
  char *i; // rcx
  __int64 v11; // rdi
  unsigned __int64 v12; // rdx
  __int64 v13; // rdx

  v5 = a3;
  if ( !*(_QWORD *)(a1 + 64) )
  {
    v8 = ATL::CAtlPlex::Create((struct ATL::CAtlPlex **)(a1 + 56), *(unsigned int *)(a1 + 52), 0x20uLL);
    if ( !v8 )
      ATL::AtlThrowImpl(-2147024882);
    v9 = *(_DWORD *)(a1 + 52) - 1;
    for ( i = (char *)v8 + 32 * (unsigned int)v9 + 8; v9 >= 0; --v9 )
    {
      *((_QWORD *)i + 2) = *(_QWORD *)(a1 + 64);
      *(_QWORD *)(a1 + 64) = i;
      i -= 32;
    }
  }
  v11 = *(_QWORD *)(a1 + 64);
  if ( !v11 )
    ATL::AtlThrowImpl(-2147467259);
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(v11 + 16);
  *(_QWORD *)v11 = a2;
  *(_QWORD *)(v11 + 8) = 0LL;
  *(_DWORD *)(v11 + 24) = a4;
  ++*(_QWORD *)(a1 + 8);
  *(_QWORD *)(v11 + 16) = *(_QWORD *)(*(_QWORD *)a1 + 8 * v5);
  *(_QWORD *)(*(_QWORD *)a1 + 8 * v5) = v11;
  v12 = *(_QWORD *)(a1 + 8);
  if ( v12 > *(_QWORD *)(a1 + 32) && !*(_DWORD *)(a1 + 48) )
  {
    v13 = (unsigned int)ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::PickSize(
                          a1,
                          v12);
    ATL::CAtlMap<unsigned __int64,wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>>>::Rehash(
      a1,
      v13);
  }
  return v11;
}
