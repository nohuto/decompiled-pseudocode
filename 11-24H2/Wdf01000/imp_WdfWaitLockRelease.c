/*
 * XREFs of imp_WdfWaitLockRelease @ 0x1400166A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qDqD @ 0x140016E4C (WPP_IFR_SF_qDqD.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830A8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall imp_WdfWaitLockRelease(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Lock)
{
  __int64 v3; // rcx
  FxWaitLock *flags; // rdi
  FxWaitLock_vtbl *v5; // rax
  unsigned __int8 v6; // dl
  unsigned int v7; // r8d
  unsigned __int16 v8; // r9
  const _GUID *v9; // [rsp+20h] [rbp-48h]
  FxWaitLock **p_pLock; // [rsp+50h] [rbp-18h] BYREF
  __int16 v11; // [rsp+58h] [rbp-10h]
  __int16 v12; // [rsp+5Ah] [rbp-Eh]
  int v13; // [rsp+5Ch] [rbp-Ch]
  FxWaitLock *pLock; // [rsp+78h] [rbp+10h] BYREF

  if ( !Lock )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1023uLL);
  LOWORD(v3) = 0;
  flags = (FxWaitLock *)(~Lock & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Lock & 1) != 0 )
  {
    v3 = LOWORD(flags->__vftable);
    flags = (FxWaitLock *)((char *)flags - v3);
  }
  if ( flags->m_Type == 4131 )
  {
    pLock = flags;
  }
  else
  {
    pLock = 0LL;
    p_pLock = &pLock;
    v12 = v3;
    v13 = 0;
    v5 = flags->__vftable;
    v11 = 4131;
    if ( v5->QueryInterface(flags, (FxQueryInterfaceParams *)&p_pLock) < 0 )
    {
      WPP_IFR_SF_qDqD(flags->m_Globals, v6, v7, v8, v9, (const void *)Lock, 0x1023u, flags, flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, Lock, 0x1023uLL);
    }
    flags = pLock;
  }
  flags->m_OwningThread = 0LL;
  KeSetEvent(&flags->m_Event.m_Event, 0, 0);
  KeLeaveCriticalRegion();
}
