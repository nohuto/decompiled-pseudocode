/*
 * XREFs of ?RemoveAll@?$CAtlList@V?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@V?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@@ATL@@@ATL@@QEAAXXZ @ 0x14002A9A8
 * Callers:
 *     ??1CSubmixImpl@@QEAA@XZ @ 0x14002A78C (--1CSubmixImpl@@QEAA@XZ.c)
 *     ?FreeNode@?$CAtlList@V?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@V?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x14002A960 (-FreeNode@-$CAtlList@V-$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@V-.c)
 * Callees:
 *     ?FreeDataChain@CAtlPlex@ATL@@QEAAXXZ @ 0x14000ED50 (-FreeDataChain@CAtlPlex@ATL@@QEAAXXZ.c)
 *     ?FreeNode@?$CAtlList@V?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@V?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x14002A960 (-FreeNode@-$CAtlList@V-$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@V-.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14005626C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall ATL::CAtlList<wil::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>,ATL::CElementTraits<wil::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>>>::RemoveAll(
        __int64 *a1)
{
  ATL::CAtlPlex **v2; // rcx
  __int64 *v3; // rdx

  while ( a1[2] )
  {
    v3 = (__int64 *)*a1;
    if ( !*a1 )
      ATL::AtlThrowImpl(-2147467259);
    *a1 = *v3;
    ATL::CAtlList<wil::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>,ATL::CElementTraits<wil::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>>>::FreeNode(
      (__int64)a1,
      v3);
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[4] = 0LL;
  v2 = (ATL::CAtlPlex **)a1[3];
  if ( v2 )
  {
    ATL::CAtlPlex::FreeDataChain(v2);
    a1[3] = 0LL;
  }
}
