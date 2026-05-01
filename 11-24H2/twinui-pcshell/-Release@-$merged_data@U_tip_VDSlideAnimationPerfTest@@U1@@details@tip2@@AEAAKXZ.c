/*
 * XREFs of ?Release@?$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@tip2@@AEAAKXZ @ 0x180554880
 * Callers:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180552580 (--1-$com_ptr_t@V-$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@tip2@@Uerr_returncode_.c)
 *     ??4?$com_ptr_t@V?$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180552984 (--4-$com_ptr_t@V-$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@tip2@@Uerr_returncode_.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180559240 (-reset@-$com_ptr_t@V-$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@tip2@@Uerr_returnc.c)
 * Callees:
 *     ??1?$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@tip2@@QEAA@XZ @ 0x1805525A0 (--1-$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@tip2@@QEAA@XZ.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>::Release(
        volatile signed __int32 *pv)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement(pv + 88);
  if ( !v2 )
  {
    tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>::~merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>((__int64)pv);
    CoTaskMemFree((LPVOID)pv);
  }
  return v2;
}
