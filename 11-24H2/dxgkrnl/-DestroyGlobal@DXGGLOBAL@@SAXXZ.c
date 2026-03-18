/*
 * XREFs of ?DestroyGlobal@DXGGLOBAL@@SAXXZ @ 0x1401D37FC
 * Callers:
 *     DxgkUnload @ 0x1401CBE90 (DxgkUnload.c)
 *     ?CreateGlobal@DXGGLOBAL@@SAJXZ @ 0x1401D3328 (-CreateGlobal@DXGGLOBAL@@SAJXZ.c)
 *     DriverEntry @ 0x140435078 (DriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

void DXGGLOBAL::DestroyGlobal(void)
{
  if ( *(_QWORD *)&DXGGLOBAL::m_pGlobal )
  {
    (***(void (__fastcall ****)(_QWORD, __int64))&DXGGLOBAL::m_pGlobal)(*(_QWORD *)&DXGGLOBAL::m_pGlobal, 1LL);
    *(_QWORD *)&DXGGLOBAL::m_pGlobal = 0LL;
  }
}
