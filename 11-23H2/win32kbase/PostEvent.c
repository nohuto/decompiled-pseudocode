/*
 * XREFs of PostEvent @ 0x1C01E8768
 * Callers:
 *     ?SetForeground@CActivationObjectManager@@AEAAJPEAVCActivationObject@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@W4ACTIVATION_OBJECT_CONFIG_BEHAVIOR@@PEAVForegroundChangeTracker@1@@Z @ 0x1C012EAE8 (-SetForeground@CActivationObjectManager@@AEAAJPEAVCActivationObject@@W4ACTIVATIONOBJECTSTATECHAN.c)
 *     ?ZapForeground@CActivationObjectManager@@AEAAXPEAVForegroundChangeTracker@1@@Z @ 0x1C012EE4C (-ZapForeground@CActivationObjectManager@@AEAAXPEAVForegroundChangeTracker@1@@Z.c)
 *     NtMITPostWindowEventMessage @ 0x1C0141D20 (NtMITPostWindowEventMessage.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C004C624 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009CB48 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall PostEvent(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v7; // edi
  int v9; // eax
  bool v10; // bl
  _BYTE v12[24]; // [rsp+40h] [rbp-18h] BYREF

  v7 = a3;
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v12, a2, a3, a4);
  if ( qword_1C0296398 )
    v9 = qword_1C0296398(30LL, a1, a2, v7, a4, a5);
  else
    v9 = -1073741637;
  v10 = v9 != 0;
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v12);
  return v10;
}
