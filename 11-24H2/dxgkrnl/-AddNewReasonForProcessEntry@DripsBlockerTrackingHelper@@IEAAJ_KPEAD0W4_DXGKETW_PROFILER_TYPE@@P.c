/*
 * XREFs of ?AddNewReasonForProcessEntry@DripsBlockerTrackingHelper@@IEAAJ_KPEAD0W4_DXGKETW_PROFILER_TYPE@@PEAI3@Z @ 0x1402E6954
 * Callers:
 *     ?DoGetProcessEntry@DripsBlockerTrackingHelper@@IEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@PEAI4PEA_N@Z @ 0x1402E72A8 (-DoGetProcessEntry@DripsBlockerTrackingHelper@@IEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYP.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DripsBlockerTrackingHelper::AddNewReasonForProcessEntry(
        __int64 a1,
        __int64 a2,
        const void *a3,
        SIZE_T a4,
        int a5,
        unsigned int *a6,
        _DWORD *a7)
{
  unsigned int i; // ebx
  __int64 v12; // rdi
  __int64 v14; // rcx

  for ( i = 0; ; ++i )
  {
    if ( i >= 0x40 )
      return 3221226021LL;
    v12 = 4720LL * i;
    if ( *(_BYTE *)(v12 + a1 + 104) )
    {
      if ( *(_QWORD *)(v12 + a1) == a2 && RtlCompareMemory((const void *)(v12 + a1 + 8), a3, a4) == a4 )
        break;
    }
  }
  v14 = *(unsigned int *)(v12 + a1 + 44);
  if ( (unsigned int)v14 >= 0x40 )
    return 2147483674LL;
  *a6 = i;
  *a7 = v14;
  *(_DWORD *)(v12 + a1 + 44) = v14 + 1;
  *(_DWORD *)(v12 + 72 * v14 + a1 + 172) = a5;
  return 0LL;
}
