/*
 * XREFs of _ATL::CAtlArray_APO_CONNECTION_DESCRIPTOR___ATL::CElementTraits_APO_CONNECTION_DESCRIPTOR_____::InsertAt_::_1_::catch$0 @ 0x140093CF9
 * Callers:
 *     <none>
 * Callees:
 *     ?AtlCrtErrorCheck@ATL@@YAHH@Z @ 0x14000C454 (-AtlCrtErrorCheck@ATL@@YAHH@Z.c)
 *     memmove_s @ 0x14000C4A0 (memmove_s.c)
 *     ?SetCount@?$CAtlArray@PEAUAPO_CONNECTION_DESCRIPTOR@@V?$CElementTraits@PEAUAPO_CONNECTION_DESCRIPTOR@@@ATL@@@ATL@@QEAA_N_KH@Z @ 0x1400310E8 (-SetCount@-$CAtlArray@PEAUAPO_CONNECTION_DESCRIPTOR@@V-$CElementTraits@PEAUAPO_CONNECTION_DESCRI.c)
 *     _CxxThrowException_0 @ 0x14005A1E0 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn ATL::CAtlArray_APO_CONNECTION_DESCRIPTOR___ATL::CElementTraits_APO_CONNECTION_DESCRIPTOR_____::InsertAt_::_1_::catch_0(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v3; // rbx
  errno_t v4; // eax

  v3 = (_QWORD *)a2[10];
  v4 = memmove_s(
         (void *const)(*v3 + 8LL * a2[11]),
         8LL * (a2[13] - a2[11]),
         (const void *const)(*v3 + 8 * (a2[11] + 1LL)),
         8LL * (a2[13] - a2[11]));
  ATL::AtlCrtErrorCheck(v4);
  ATL::CAtlArray<APO_CONNECTION_DESCRIPTOR *,ATL::CElementTraits<APO_CONNECTION_DESCRIPTOR *>>::SetCount(
    (__int64)v3,
    a2[13]);
  throw;
}
