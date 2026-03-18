/*
 * XREFs of DCompositionEnableHwProtectionTeardown @ 0x1402229F4
 * Callers:
 *     xxxVideoPortCalloutThread @ 0x1401B08D4 (xxxVideoPortCalloutThread.c)
 *     ?DxgkEngSetHwProtectionTeardownRecovery@@YAJPEAU_D3DKMT_SETHWPROTECTIONTEARDOWNRECOVERY@@@Z @ 0x1401CD0A0 (-DxgkEngSetHwProtectionTeardownRecovery@@YAJPEAU_D3DKMT_SETHWPROTECTIONTEARDOWNRECOVERY@@@Z.c)
 * Callees:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x14007493C (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x14007496C (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMilProtocolBlock@@PEAII@Z @ 0x140074BF0 (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMil.c)
 *     ?Unlock@CChannel@DirectComposition@@QEAAXXZ @ 0x1400750F0 (-Unlock@CChannel@DirectComposition@@QEAAXXZ.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400755B0 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?SetChannelIntegerProperty@CApplicationChannel@DirectComposition@@QEAAJI_J@Z @ 0x140113F48 (-SetChannelIntegerProperty@CApplicationChannel@DirectComposition@@QEAAJI_J@Z.c)
 */

__int64 __fastcall DCompositionEnableHwProtectionTeardown(__int64 a1)
{
  int v1; // edi
  struct DirectComposition::CConnection *DefaultConnection; // rax
  DirectComposition::CApplicationChannel **v3; // rbx
  int v4; // edi
  unsigned int v5; // edx

  v1 = a1;
  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection(a1);
  v3 = (DirectComposition::CApplicationChannel **)DefaultConnection;
  if ( DefaultConnection )
  {
    DirectComposition::CCriticalSection::AcquireExclusive(*(PERESOURCE *)(*((_QWORD *)DefaultConnection + 19) + 32LL));
    v4 = DirectComposition::CApplicationChannel::SetChannelIntegerProperty(v3[19], 1u, v1 != 0);
    if ( v4 >= 0 )
      v4 = DirectComposition::CApplicationChannel::Commit(v3[19], 0LL, 0, 0, 0LL, 0LL, 0LL, 0);
    DirectComposition::CChannel::Unlock((PERESOURCE *)v3[19]);
    DirectComposition::CConnection::Release((DirectComposition::CConnection *)v3, v5);
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)v4;
}
