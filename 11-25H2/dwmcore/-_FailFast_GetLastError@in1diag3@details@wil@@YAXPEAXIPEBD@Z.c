/*
 * XREFs of ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180248868
 * Callers:
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x180098020 (-CleanTrees@CComposition@@IEAAJXZ.c)
 *     ?SetEvent@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEBAXXZ @ 0x1800ADF5C (-SetEvent@-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@w.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800C0D80 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x180229A50 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?Run@CKstBase@@AEAAKXZ @ 0x180229DF8 (-Run@CKstBase@@AEAAKXZ.c)
 *     ?ReleaseMutex@details@wil@@YAXPEAX@Z @ 0x18025FC94 (-ReleaseMutex@details@wil@@YAXPEAX@Z.c)
 * Callees:
 *     ??$ReportFailure_GetLastError@$02@details@wil@@YAKPEAXIPEBD110@Z @ 0x180248884 (--$ReportFailure_GetLastError@$02@details@wil@@YAKPEAXIPEBD110@Z.c)
 */

void __fastcall __noreturn wil::details::in1diag3::_FailFast_GetLastError(
        wil::details::in1diag3 *this,
        void *a2,
        int a3,
        const char *a4)
{
  wil::details::ReportFailure_GetLastError<3>((_DWORD)this, (_DWORD)a2, a3, (_DWORD)a4);
}
