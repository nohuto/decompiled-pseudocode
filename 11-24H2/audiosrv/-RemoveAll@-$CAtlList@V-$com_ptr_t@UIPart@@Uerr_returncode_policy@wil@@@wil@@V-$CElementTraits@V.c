/*
 * XREFs of ?RemoveAll@?$CAtlList@V?$com_ptr_t@UIPart@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@V?$com_ptr_t@UIPart@@Uerr_returncode_policy@wil@@@wil@@@ATL@@@ATL@@QEAAXXZ @ 0x18011F230
 * Callers:
 *     ??1?$CAtlList@V?$com_ptr_t@UIPart@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@V?$com_ptr_t@UIPart@@Uerr_returncode_policy@wil@@@wil@@@ATL@@@ATL@@QEAA@XZ @ 0x18011E500 (--1-$CAtlList@V-$com_ptr_t@UIPart@@Uerr_returncode_policy@wil@@@wil@@V-$CElementTraits@V-$com_pt.c)
 *     ?FreeNode@?$CAtlList@V?$com_ptr_t@UIPart@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@V?$com_ptr_t@UIPart@@Uerr_returncode_policy@wil@@@wil@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x18011E668 (-FreeNode@-$CAtlList@V-$com_ptr_t@UIPart@@Uerr_returncode_policy@wil@@@wil@@V-$CElementTraits@V-.c)
 *     ?GetDeviceId@CKsNotificationsMonitor@@QEAAJPEAPEAG@Z @ 0x18011E6FC (-GetDeviceId@CKsNotificationsMonitor@@QEAAJPEAPEAG@Z.c)
 * Callees:
 *     ?FreeDataChain@CAtlPlex@ATL@@QEAAXXZ @ 0x18004C18C (-FreeDataChain@CAtlPlex@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800A116C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?FreeNode@?$CAtlList@V?$com_ptr_t@UIPart@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@V?$com_ptr_t@UIPart@@Uerr_returncode_policy@wil@@@wil@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x18011E668 (-FreeNode@-$CAtlList@V-$com_ptr_t@UIPart@@Uerr_returncode_policy@wil@@@wil@@V-$CElementTraits@V-.c)
 */

void __fastcall ATL::CAtlList<wil::com_ptr_t<IPart,wil::err_returncode_policy>,ATL::CElementTraits<wil::com_ptr_t<IPart,wil::err_returncode_policy>>>::RemoveAll(
        __int64 *a1)
{
  __int64 *v2; // rdx
  ATL::CAtlPlex **v3; // rcx

  while ( a1[2] )
  {
    v2 = (__int64 *)*a1;
    if ( !*a1 )
      ATL::AtlThrowImpl(-2147467259);
    *a1 = *v2;
    ATL::CAtlList<wil::com_ptr_t<IPart,wil::err_returncode_policy>,ATL::CElementTraits<wil::com_ptr_t<IPart,wil::err_returncode_policy>>>::FreeNode(
      (__int64)a1,
      v2);
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[4] = 0LL;
  v3 = (ATL::CAtlPlex **)a1[3];
  if ( v3 )
  {
    ATL::CAtlPlex::FreeDataChain(v3);
    a1[3] = 0LL;
  }
}
