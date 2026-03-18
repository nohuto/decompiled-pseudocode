/*
 * XREFs of isInputVirtualizationEnabled @ 0x1C004FF0C
 * Callers:
 *     AllocQueue @ 0x1C004FB20 (AllocQueue.c)
 *     isChildPartition @ 0x1C004FE70 (isChildPartition.c)
 *     isRootPartition @ 0x1C004FEE8 (isRootPartition.c)
 *     ?PreUninitialize@CMouseSensor@@EEAAXXZ @ 0x1C0080710 (-PreUninitialize@CMouseSensor@@EEAAXXZ.c)
 *     ?PreUninitialize@CKeyboardSensor@@EEAAXXZ @ 0x1C0080AE0 (-PreUninitialize@CKeyboardSensor@@EEAAXXZ.c)
 *     CleanupLogonProcess @ 0x1C00B1D00 (CleanupLogonProcess.c)
 *     InputUnInitialize @ 0x1C00B72FC (InputUnInitialize.c)
 *     ?PreUninitialize@CHidInput@@EEAAXXZ @ 0x1C00B91A0 (-PreUninitialize@CHidInput@@EEAAXXZ.c)
 *     _RegisterLogonProcess @ 0x1C00BE030 (_RegisterLogonProcess.c)
 *     ?PostInitialize@CKeyboardSensor@@EEAAJXZ @ 0x1C00C0C90 (-PostInitialize@CKeyboardSensor@@EEAAJXZ.c)
 *     ?PostInitialize@CHidInput@@EEAAJXZ @ 0x1C00C4910 (-PostInitialize@CHidInput@@EEAAJXZ.c)
 *     ?PostInitialize@CMouseSensor@@EEAAJXZ @ 0x1C01E52A0 (-PostInitialize@CMouseSensor@@EEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall isInputVirtualizationEnabled(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return gbInputVirtualizationEnabled
      && *(_DWORD *)SGDGetUserSessionState(a1, a2, a3, a4) == gInputVirtualizationSessionId;
}
