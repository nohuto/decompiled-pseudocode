/*
 * XREFs of PostEvent @ 0x1402130E8
 * Callers:
 *     ?SetForeground@CActivationObjectManager@@AEAAJPEAVCActivationObject@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@W4ACTIVATION_OBJECT_CONFIG_BEHAVIOR@@PEAVForegroundChangeTracker@1@@Z @ 0x1401A6E44 (-SetForeground@CActivationObjectManager@@AEAAJPEAVCActivationObject@@W4ACTIVATIONOBJECTSTATECHAN.c)
 *     ?ZapForeground@CActivationObjectManager@@AEAAXPEAVForegroundChangeTracker@1@@Z @ 0x1401A719C (-ZapForeground@CActivationObjectManager@@AEAAXPEAVForegroundChangeTracker@1@@Z.c)
 *     NtMITPostWindowEventMessage @ 0x1401B8950 (NtMITPostWindowEventMessage.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140060DA0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140060DC8 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     EditionPostInputEvent @ 0x140123B50 (EditionPostInputEvent.c)
 */

char __fastcall PostEvent(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  char v9; // r8
  _BYTE v11[24]; // [rsp+30h] [rbp-18h] BYREF

  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v11);
  EditionPostInputEvent(30LL, a1, a2, a3, a4, a5);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v11);
  return v9;
}
