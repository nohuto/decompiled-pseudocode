/*
 * XREFs of ?Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z @ 0x14006D07C
 * Callers:
 *     NtDCompositionCreateChannel @ 0x14011F760 (NtDCompositionCreateChannel.c)
 * Callees:
 *     DirectComposition::Memory::AllocateAndClear @ 0x140017890 (DirectComposition--Memory--AllocateAndClear.c)
 *     ??0CApplicationChannel@DirectComposition@@IEAA@PEAVCConnection@1@_NI@Z @ 0x14006D1CC (--0CApplicationChannel@DirectComposition@@IEAA@PEAVCConnection@1@_NI@Z.c)
 *     ?Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z @ 0x14006D30C (-Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z.c)
 *     ?Current@CProcessData@DirectComposition@@SAPEAV12@XZ @ 0x14006D6A0 (-Current@CProcessData@DirectComposition@@SAPEAV12@XZ.c)
 *     ?Release@CChannel@DirectComposition@@QEAAKXZ @ 0x14006D6D4 (-Release@CChannel@DirectComposition@@QEAAKXZ.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x14007493C (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x14007496C (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400755B0 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::Create(unsigned int *a1, unsigned int *a2, void **a3)
{
  struct DirectComposition::CConnection *DefaultConnection; // rbp
  DirectComposition::CApplicationChannel *v7; // rax
  DirectComposition::CApplicationChannel *v8; // rax
  DirectComposition::CApplicationChannel *v9; // rsi
  signed int v10; // edi
  struct DirectComposition::CProcessData *v11; // rax
  struct DirectComposition::CProcessData *v12; // rdi
  struct _RTL_GENERIC_TABLE *v13; // rcx
  PVOID inserted; // rbx
  _DWORD Buffer[2]; // [rsp+20h] [rbp-18h] BYREF
  DirectComposition::CApplicationChannel *v17; // [rsp+28h] [rbp-10h]

  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
  if ( !DefaultConnection )
    return (unsigned int)-1073741790;
  v7 = (DirectComposition::CApplicationChannel *)DirectComposition::Memory::AllocateAndClear(0xB20uLL, 0x63614344u, 1);
  if ( !v7
    || (v8 = (DirectComposition::CApplicationChannel *)DirectComposition::CApplicationChannel::CApplicationChannel(
                                                         v7,
                                                         DefaultConnection,
                                                         1,
                                                         *a2),
        (v9 = v8) == 0LL) )
  {
    v10 = -1073741801;
    goto LABEL_8;
  }
  v10 = DirectComposition::CApplicationChannel::Initialize(v8, a2, a3);
  if ( v10 < 0 )
    goto LABEL_13;
  v11 = DirectComposition::CProcessData::Current();
  v12 = v11;
  if ( !v11 )
  {
    v10 = -1073741823;
    goto LABEL_13;
  }
  DirectComposition::CCriticalSection::AcquireExclusive(*((PERESOURCE *)v11 + 1));
  Buffer[0] = *((_DWORD *)v9 + 7);
  v13 = *(struct _RTL_GENERIC_TABLE **)v12;
  Buffer[1] = 0;
  v17 = v9;
  inserted = RtlInsertElementGenericTable(v13, Buffer, 0x10u, 0LL);
  ExReleaseResourceLite(*((PERESOURCE *)v12 + 1));
  KeLeaveCriticalRegion();
  v10 = inserted == 0LL ? 0xC0000017 : 0;
  if ( !inserted )
  {
LABEL_13:
    DirectComposition::CChannel::Release(v9);
    goto LABEL_8;
  }
  *a1 = *((_DWORD *)v9 + 7);
LABEL_8:
  DirectComposition::CConnection::Release(DefaultConnection);
  return (unsigned int)v10;
}
