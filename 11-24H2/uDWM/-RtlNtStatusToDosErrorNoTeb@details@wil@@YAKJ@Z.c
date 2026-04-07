/*
 * XREFs of ?RtlNtStatusToDosErrorNoTeb@details@wil@@YAKJ@Z @ 0x18009FD40
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_GetNtDllProcedureAddress@@YAP6A_JXZPEBD@Z @ 0x1800960A0 (-wil_details_GetNtDllProcedureAddress@@YAP6A_JXZPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::details::RtlNtStatusToDosErrorNoTeb(wil::details *this)
{
  unsigned int v1; // edi
  FARPROC NtDllProcedureAddress; // rax
  unsigned int v3; // ebx

  v1 = (unsigned int)this;
  NtDllProcedureAddress = (FARPROC)`wil::details::RtlNtStatusToDosErrorNoTeb'::`2'::s_pfnRtlNtStatusToDosErrorNoTeb;
  v3 = 0;
  if ( `wil::details::RtlNtStatusToDosErrorNoTeb'::`2'::s_pfnRtlNtStatusToDosErrorNoTeb )
    return ((unsigned int (__fastcall *)(_QWORD))NtDllProcedureAddress)(v1);
  NtDllProcedureAddress = wil_details_GetNtDllProcedureAddress("RtlNtStatusToDosErrorNoTeb");
  `wil::details::RtlNtStatusToDosErrorNoTeb'::`2'::s_pfnRtlNtStatusToDosErrorNoTeb = (__int64)NtDllProcedureAddress;
  if ( NtDllProcedureAddress )
    return ((unsigned int (__fastcall *)(_QWORD))NtDllProcedureAddress)(v1);
  return v3;
}
