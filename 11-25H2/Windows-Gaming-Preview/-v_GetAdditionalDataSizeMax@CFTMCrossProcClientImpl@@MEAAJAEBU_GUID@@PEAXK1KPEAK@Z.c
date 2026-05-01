/*
 * XREFs of ?v_GetAdditionalDataSizeMax@CFTMCrossProcClientImpl@@MEAAJAEBU_GUID@@PEAXK1KPEAK@Z @ 0x180042BE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CFTMCrossProcClientImpl::v_GetAdditionalDataSizeMax(
        CFTMCrossProcClientImpl *this,
        const struct _GUID *a2,
        void *a3,
        __int64 a4,
        void *a5,
        unsigned int a6,
        unsigned int *a7)
{
  struct _RTL_CRITICAL_SECTION *v7; // rdi
  unsigned int v9; // ebx

  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 88);
  *a7 = *((_DWORD *)this + 8);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 88));
  v9 = *((_QWORD *)this + 10) == 0LL ? 0x8000FFFF : 0;
  if ( v7 )
    LeaveCriticalSection(v7);
  return v9;
}
