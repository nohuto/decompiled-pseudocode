/*
 * XREFs of ?AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x140042268
 * Callers:
 *     ??0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z @ 0x140036AF8 (--0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z.c)
 *     ?CreateSharedKeyedMutexNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1401DB56C (-CreateSharedKeyedMutexNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z.c)
 *     DxgkShareObjectsInternal @ 0x14029DC00 (DxgkShareObjectsInternal.c)
 *     ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z @ 0x1402FF39C (-Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z.c)
 *     ?CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@IPEAPEAVDXGKEYEDMUTEX@@@Z @ 0x1403C7E0C (-CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@IPEAPEAVDXGKEYEDMUTEX@@@Z.c)
 *     DxgkpAcquireKeyedMutexFromHandle @ 0x1403EBFD8 (DxgkpAcquireKeyedMutexFromHandle.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall DXGKEYEDMUTEX::AcquireReference(DXGKEYEDMUTEX *this)
{
  if ( _InterlockedIncrement64((volatile signed __int64 *)this + 3) <= 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 903;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"NewReferenceCount > 0", 903LL, 0LL, 0LL, 0LL, 0LL);
  }
}
