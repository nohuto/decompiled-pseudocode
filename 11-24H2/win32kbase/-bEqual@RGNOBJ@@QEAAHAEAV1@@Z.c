/*
 * XREFs of ?bEqual@RGNOBJ@@QEAAHAEAV1@@Z @ 0x140066300
 * Callers:
 *     EngUpdateDeviceSurface @ 0x140174F70 (EngUpdateDeviceSurface.c)
 * Callees:
 *     ?get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x140029120 (-get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     ?get_pscnTail@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x140066AF0 (-get_pscnTail@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 *     memcmp @ 0x14023FD10 (memcmp.c)
 */

__int64 __fastcall RGNOBJ::bEqual(RGNOBJ *this, struct RGNOBJ *a2)
{
  char *SystemArgument1; // r15
  REGION_CORE *v3; // rdi
  unsigned int v4; // r14d
  REGION_CORE *v5; // rsi
  unsigned int pScan; // ebp
  struct REGION_CORE *v7; // rdx
  struct SCAN *v8; // rsi
  struct REGION_CORE *v9; // rdx
  struct SCAN *v10; // rbx
  unsigned int pscnTail; // eax
  int v12; // edi

  SystemArgument1 = (char *)WPP_MAIN_CB.Dpc.SystemArgument1;
  v3 = (REGION_CORE *)((*(_QWORD *)this + 24LL) & -(__int64)(*(_QWORD *)this != 0LL));
  v4 = 0;
  v5 = (REGION_CORE *)((*(_QWORD *)a2 + 24LL) & -(__int64)(*(_QWORD *)a2 != 0LL));
  if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(SystemArgument1 + 8, 2LL);
    v12 = (*(__int64 (__fastcall **)(REGION_CORE *, REGION_CORE *))(*(_QWORD *)SystemArgument1 + 128LL))(v3, v5);
    ExReleasePushLockSharedEx(SystemArgument1 + 8, 2LL);
    KeLeaveCriticalRegion();
    LOBYTE(v4) = v12 != 0;
  }
  else if ( *(_DWORD *)(((*(_QWORD *)this + 24LL) & -(__int64)(*(_QWORD *)this != 0LL)) + 0x18) == *(_DWORD *)(((*(_QWORD *)a2 + 24LL) & -(__int64)(*(_QWORD *)a2 != 0LL)) + 0x18) )
  {
    pScan = (unsigned int)REGION_CORE::get_pScan(v3, a2);
    v8 = REGION_CORE::get_pScan(v5, v7);
    v10 = REGION_CORE::get_pScan(v3, v9);
    pscnTail = (unsigned int)REGION_CORE::get_pscnTail(v3);
    return memcmp(v10, v8, pscnTail - pScan) == 0;
  }
  return v4;
}
