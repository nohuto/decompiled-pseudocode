/*
 * XREFs of ?DestroyHandle@CChannel@DirectComposition@@SAJI@Z @ 0x14006CF98
 * Callers:
 *     NtDCompositionDestroyChannel @ 0x14006CF80 (NtDCompositionDestroyChannel.c)
 *     NtDCompositionCreateChannel @ 0x14011F760 (NtDCompositionCreateChannel.c)
 * Callees:
 *     ?RemoveObject@?$CGenericTable@IVCChannel@DirectComposition@@$0HEGDEDEE@$00@DirectComposition@@QEAAPEAVCChannel@2@I@Z @ 0x14006D01C (-RemoveObject@-$CGenericTable@IVCChannel@DirectComposition@@$0HEGDEDEE@$00@DirectComposition@@QE.c)
 *     ?Current@CProcessData@DirectComposition@@SAPEAV12@XZ @ 0x14006D6A0 (-Current@CProcessData@DirectComposition@@SAPEAV12@XZ.c)
 *     ?Release@CChannel@DirectComposition@@QEAAKXZ @ 0x14006D6D4 (-Release@CChannel@DirectComposition@@QEAAKXZ.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400755B0 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 */

__int64 __fastcall DirectComposition::CChannel::DestroyHandle()
{
  struct DirectComposition::CProcessData *v0; // rax
  struct DirectComposition::CProcessData *v1; // rbx
  DirectComposition::CChannel *v2; // rdi
  unsigned int v3; // ebx

  v0 = DirectComposition::CProcessData::Current();
  v1 = v0;
  if ( v0 )
  {
    DirectComposition::CCriticalSection::AcquireExclusive(*((PERESOURCE *)v0 + 1));
    v2 = (DirectComposition::CChannel *)DirectComposition::CGenericTable<unsigned int,DirectComposition::CChannel,1952662340,1>::RemoveObject(*(PRTL_GENERIC_TABLE *)v1);
    ExReleaseResourceLite(*((PERESOURCE *)v1 + 1));
    KeLeaveCriticalRegion();
    v3 = v2 == 0LL ? 0xC0000022 : 0;
    if ( v2 )
      DirectComposition::CChannel::Release(v2);
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v3;
}
