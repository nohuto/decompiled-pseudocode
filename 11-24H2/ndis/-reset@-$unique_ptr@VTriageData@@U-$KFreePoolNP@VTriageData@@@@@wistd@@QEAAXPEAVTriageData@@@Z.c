/*
 * XREFs of ?reset@?$unique_ptr@VTriageData@@U?$KFreePoolNP@VTriageData@@@@@wistd@@QEAAXPEAVTriageData@@@Z @ 0x140092E1C
 * Callers:
 *     ??1?$out_param_t@V?$unique_ptr@VTriageData@@U?$KFreePoolNP@VTriageData@@@@@wistd@@@details@wil@@QEAA@XZ @ 0x14009130C (--1-$out_param_t@V-$unique_ptr@VTriageData@@U-$KFreePoolNP@VTriageData@@@@@wistd@@@details@wil@@.c)
 *     ??1_NDIS_M_DRIVER_BLOCK@@QEAA@XZ @ 0x140091330 (--1_NDIS_M_DRIVER_BLOCK@@QEAA@XZ.c)
 *     ??1_NDIS_FILTER_DRIVER_BLOCK@@QEAA@XZ @ 0x1400999E4 (--1_NDIS_FILTER_DRIVER_BLOCK@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __fastcall wistd::unique_ptr<TriageData,KFreePoolNP<TriageData>>::reset(void **a1, void *a2)
{
  void (__fastcall ***v2)(void *, _QWORD); // rbx

  v2 = (void (__fastcall ***)(void *, _QWORD))*a1;
  *a1 = a2;
  if ( v2 )
  {
    (**v2)(v2, 0LL);
    ExFreePoolWithTag(v2, 0);
  }
}
