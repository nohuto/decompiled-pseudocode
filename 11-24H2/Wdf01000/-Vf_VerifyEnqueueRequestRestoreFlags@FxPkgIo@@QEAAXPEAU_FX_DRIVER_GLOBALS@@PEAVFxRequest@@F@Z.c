/*
 * XREFs of ?Vf_VerifyEnqueueRequestRestoreFlags@FxPkgIo@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@F@Z @ 0x1400E3E3C
 * Callers:
 *     ?EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z @ 0x140021A60 (-EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x14002BD60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14002C4B0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 */

void __fastcall FxPkgIo::Vf_VerifyEnqueueRequestRestoreFlags(
        FxPkgIo *this,
        _FX_DRIVER_GLOBALS *Request,
        FxRequest *OrigVerifierFlags,
        __int16 FxDriverGlobals)
{
  unsigned __int8 v6; // dl
  unsigned __int8 v7; // r8
  unsigned __int8 irql; // [rsp+48h] [rbp+20h] BYREF

  irql = 0;
  FxNonPagedObject::Lock(OrigVerifierFlags, &irql, (unsigned __int8)OrigVerifierFlags);
  v6 = irql;
  OrigVerifierFlags->m_VerifierFlags = FxDriverGlobals;
  FxNonPagedObject::Unlock(OrigVerifierFlags, v6, v7);
}
