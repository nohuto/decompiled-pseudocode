/*
 * XREFs of ?GetLastError@ThreadLocalData@details_abi@wil@@QEBA_NAEAUFailureInfo@3@IJ@Z @ 0x180032100
 * Callers:
 *     ?GetCaughtExceptionError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IPEBUDiagnosticsInfo@3@JPEAX@Z @ 0x180031098 (-GetCaughtExceptionError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IPEBUDiagnosti.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x1800394BC (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 * Callees:
 *     ?Get@ThreadLocalFailureInfo@details_abi@wil@@QEBAXAEAUFailureInfo@3@@Z @ 0x1800307B4 (-Get@ThreadLocalFailureInfo@details_abi@wil@@QEBAXAEAUFailureInfo@3@@Z.c)
 */

char __fastcall wil::details_abi::ThreadLocalData::GetLastError(
        wil::details_abi::ThreadLocalData *this,
        struct wil::FailureInfo *a2,
        unsigned int a3,
        int a4)
{
  wil::details_abi::ThreadLocalFailureInfo *v4; // r10
  struct wil::FailureInfo *v5; // rbx
  wil::details_abi::ThreadLocalFailureInfo *v7; // rcx
  wil::details_abi::ThreadLocalFailureInfo *v9; // rdx
  unsigned int v10; // eax

  v4 = (wil::details_abi::ThreadLocalFailureInfo *)*((_QWORD *)this + 3);
  v5 = a2;
  if ( v4 )
  {
    v7 = (wil::details_abi::ThreadLocalFailureInfo *)((char *)v4 + 80 * *((unsigned __int16 *)this + 17));
    if ( a3 < *((_DWORD *)v7 + 1) )
    {
      if ( !a4 )
      {
LABEL_4:
        wil::details_abi::ThreadLocalFailureInfo::Get(v7, a2);
        return 1;
      }
      v7 = 0LL;
      v9 = (wil::details_abi::ThreadLocalFailureInfo *)((char *)v4 + 80 * *((unsigned __int16 *)this + 16));
      if ( v4 != v9 )
      {
        do
        {
          if ( *((_DWORD *)v4 + 2) == a4 )
          {
            v10 = *((_DWORD *)v4 + 1);
            if ( v10 > a3 && (!v7 || v10 < *((_DWORD *)v7 + 1)) )
              v7 = v4;
          }
          v4 = (wil::details_abi::ThreadLocalFailureInfo *)((char *)v4 + 80);
        }
        while ( v4 != v9 );
        if ( v7 )
        {
          a2 = v5;
          goto LABEL_4;
        }
      }
    }
  }
  return 0;
}
