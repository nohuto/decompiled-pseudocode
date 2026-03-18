/*
 * XREFs of ?GetKmdProcessHandle@DXGPROCESS@@QEBAPEAXI@Z @ 0x140036E70
 * Callers:
 *     ?InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1400D79EC (-InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     VidSchiCreateDeviceInternal @ 0x1400D80E0 (VidSchiCreateDeviceInternal.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 */

void *__fastcall DXGPROCESS::GetKmdProcessHandle(DXGPROCESS *this, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax

  v3 = a2;
  v4 = ((__int64 (*)(void))DxgCoreInterface[3])();
  if ( (unsigned int)v3 >= ((unsigned int (__fastcall *)(__int64))DxgCoreInterface[5])(v4)
    || !*(_QWORD *)(*((_QWORD *)this + 6) + 8 * v3) )
  {
    return 0LL;
  }
  _mm_lfence();
  return *(void **)(*(_QWORD *)(*((_QWORD *)this + 6) + 8 * v3) + 48LL);
}
