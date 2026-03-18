/*
 * XREFs of ?bEqual@RGNCOREOBJ@@QEBA_NAEBV1@@Z @ 0x1400661EC
 * Callers:
 *     CddEngEqualRgn @ 0x1401CF420 (CddEngEqualRgn.c)
 * Callees:
 *     ?get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x140029120 (-get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     ?get_pscnTail@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x140066AF0 (-get_pscnTail@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 *     memcmp @ 0x14023FD10 (memcmp.c)
 */

char __fastcall RGNCOREOBJ::bEqual(REGION_CORE **this, const struct RGNCOREOBJ *a2)
{
  char *SystemArgument1; // rsi
  char v3; // bp
  __int64 v4; // r14
  REGION_CORE *v5; // rdi
  unsigned int pScan; // esi
  struct REGION_CORE *v9; // rdx
  struct SCAN *v10; // rdi
  struct REGION_CORE *v11; // rdx
  struct SCAN *v12; // rbx
  unsigned int pscnTail; // eax
  int v15; // edi

  SystemArgument1 = (char *)WPP_MAIN_CB.Dpc.SystemArgument1;
  v3 = 0;
  v4 = *(_QWORD *)a2;
  v5 = *this;
  if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(SystemArgument1 + 8, 2LL);
    v15 = (*(__int64 (__fastcall **)(REGION_CORE *, __int64))(*(_QWORD *)SystemArgument1 + 128LL))(v5, v4);
    ExReleasePushLockSharedEx(SystemArgument1 + 8, 2LL);
    KeLeaveCriticalRegion();
    return v15 != 0;
  }
  else
  {
    if ( *((_DWORD *)v5 + 6) == *(_DWORD *)(v4 + 24) )
    {
      pScan = (unsigned int)REGION_CORE::get_pScan(*this, a2);
      v10 = REGION_CORE::get_pScan(*(REGION_CORE **)a2, v9);
      v12 = REGION_CORE::get_pScan(*this, v11);
      pscnTail = (unsigned int)REGION_CORE::get_pscnTail(*this);
      return memcmp(v12, v10, pscnTail - pScan) == 0;
    }
    return v3;
  }
}
