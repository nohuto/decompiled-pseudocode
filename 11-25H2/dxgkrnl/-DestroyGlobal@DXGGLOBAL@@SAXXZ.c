/*
 * XREFs of ?DestroyGlobal@DXGGLOBAL@@SAXXZ @ 0x1401CE4AC
 * Callers:
 *     DxgkUnload @ 0x1401C6C00 (DxgkUnload.c)
 *     ?CreateGlobal@DXGGLOBAL@@SAJXZ @ 0x1401CDFDC (-CreateGlobal@DXGGLOBAL@@SAJXZ.c)
 *     DriverEntry @ 0x140433078 (DriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

void DXGGLOBAL::DestroyGlobal(void)
{
  if ( *(_QWORD *)&DXGGLOBAL::m_pGlobal )
  {
    (***(void (__fastcall ****)(_QWORD, __int64))&DXGGLOBAL::m_pGlobal)(*(_QWORD *)&DXGGLOBAL::m_pGlobal, 1LL);
    *(_QWORD *)&DXGGLOBAL::m_pGlobal = 0LL;
  }
}
