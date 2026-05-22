/*
 * XREFs of ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x180074914
 * Callers:
 *     ??_GISMTracing@@UEAAPEAXI@Z @ 0x180074820 (--_GISMTracing@@UEAAPEAXI@Z.c)
 *     ?_lambda_invoker_cdecl_@_lambda_7fd51406feab050c3f0aab483d3938ea_@@CA@XZ @ 0x180074860 (-_lambda_invoker_cdecl_@_lambda_7fd51406feab050c3f0aab483d3938ea_@@CA@XZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_ffe5d831185bf77c783480ebf240a46d_@@CA@XZ @ 0x1800748C0 (-_lambda_invoker_cdecl_@_lambda_ffe5d831185bf77c783480ebf240a46d_@@CA@XZ.c)
 *     ??_ETraceLoggingProvider@wil@@MEAAPEAXI@Z @ 0x18009F730 (--_ETraceLoggingProvider@wil@@MEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::TraceLoggingProvider::~TraceLoggingProvider(wil::TraceLoggingProvider *this)
{
  __int64 v1; // rax
  REGHANDLE v2; // rcx

  *(_QWORD *)this = &wil::TraceLoggingProvider::`vftable';
  if ( *((_BYTE *)this + 16) )
  {
    v1 = *((_QWORD *)this + 1);
    v2 = *(_QWORD *)(v1 + 32);
    *(_QWORD *)(v1 + 32) = 0LL;
    *(_DWORD *)v1 = 0;
    EventUnregister(v2);
  }
}
