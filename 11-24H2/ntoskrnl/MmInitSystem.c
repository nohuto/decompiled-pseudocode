/*
 * XREFs of MmInitSystem @ 0x140BDE2E8
 * Callers:
 *     KiInitializeBootStructures @ 0x140B580C0 (KiInitializeBootStructures.c)
 *     InitBootProcessor @ 0x140C0AC88 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140C0C048 (Phase1InitializationDiscard.c)
 *     Phase1InitializationIoReady @ 0x140C5FB78 (Phase1InitializationIoReady.c)
 * Callees:
 *     MiInitializeStrongCode @ 0x140BDE444 (MiInitializeStrongCode.c)
 *     KeSupportedPhysicalAddressBits @ 0x140C26B70 (KeSupportedPhysicalAddressBits.c)
 *     MiComputeNumaCosts @ 0x140C4D768 (MiComputeNumaCosts.c)
 *     MiInitSystem @ 0x140C4DC40 (MiInitSystem.c)
 *     MiInitNucleus @ 0x140C4F298 (MiInitNucleus.c)
 *     MiInitializeSystemVa @ 0x140C67230 (MiInitializeSystemVa.c)
 */

void __fastcall MmInitSystem(__int64 a1, ULONG_PTR a2, __int64 a3)
{
  int v4; // r9d
  unsigned __int8 v5; // r8
  unsigned __int8 v6; // al
  __int64 v7; // rcx
  signed __int64 v8; // rax
  __int64 v9; // rtt
  signed __int64 v10; // r8

  v4 = a1;
  if ( !dword_140E2DB38 )
  {
    v5 = KeSupportedPhysicalAddressBits(a1, a2, a3, (unsigned int)a1);
    if ( v5 > 0x34u )
      v5 = 52;
    dword_140E2DB38 = v5;
    v6 = v5 - 12;
    if ( (unsigned __int8)(v5 - 12) > 0x26u )
      v6 = 38;
    dword_140E2DB3C = v6;
  }
  switch ( v4 )
  {
    case -1:
      dword_140EF4A80 = 2048;
      qword_140EF4A88 = (__int64)&unk_140EF4A90;
      word_140EF4BF2 |= 1u;
      MiInitializeStrongCode();
      if ( byte_140FCDC28 )
        MiFlags |= 0x800000000uLL;
      MiInitializeSystemVa(a2);
      return;
    case 0:
      MiInitNucleus(a2);
      v7 = 0LL;
LABEL_19:
      MiInitSystem(v7, a2);
      return;
    case 1:
      MiComputeNumaCosts();
      _InterlockedOr64(&MiFlags, 0x10uLL);
      MiFlags = MiFlags & 0xFFFFFFFFFFFFFFCFuLL | 0x10;
      MiInitSystem(1LL, a2);
      byte_140E37514 = 1;
      return;
    case 2:
      v9 = MiFlags;
      v8 = _InterlockedCompareExchange64(&MiFlags, MiFlags & 0xFFFFFFFFFFFFFFCFuLL | 0x20, MiFlags);
      if ( v9 != v8 )
      {
        do
        {
          v10 = v8;
          v8 = _InterlockedCompareExchange64(&MiFlags, v8 & 0xFFFFFFFFFFFFFFCFuLL | 0x20, v8);
        }
        while ( v8 != v10 );
      }
      v7 = 2LL;
      goto LABEL_19;
  }
}
