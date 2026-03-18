/*
 * XREFs of ??1?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@QEAA@XZ @ 0x180252B00
 * Callers:
 *     ?RemoveRenderTarget@CSyncLockGroup@@QEAAXPEAVIMonitorTarget@@@Z @ 0x180252A2C (-RemoveRenderTarget@CSyncLockGroup@@QEAAXPEAVIMonitorTarget@@@Z.c)
 *     ?GetGroup@CSyncLockGroup@@SAPEAV1@I@Z @ 0x18025A414 (-GetGroup@CSyncLockGroup@@SAPEAV1@I@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@@0@@Z @ 0x180272DEC (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCSyncLockGroup@@U-$default_delete@VCSyncLockGroup@.c)
 * Callees:
 *     ??R?$default_delete@VCSyncLockGroup@@@std@@QEBAXPEAVCSyncLockGroup@@@Z @ 0x180252B20 (--R-$default_delete@VCSyncLockGroup@@@std@@QEBAXPEAVCSyncLockGroup@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<CSyncLockGroup>::~unique_ptr<CSyncLockGroup>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<CSyncLockGroup>::operator()();
  return result;
}
