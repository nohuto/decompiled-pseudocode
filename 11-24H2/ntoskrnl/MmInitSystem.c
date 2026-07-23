/*
 * XREFs of MmInitSystem @ 0x140BE02E8
 * Callers:
 *     KiInitializeBootStructures @ 0x140B5A140 (KiInitializeBootStructures.c)
 *     InitBootProcessor @ 0x140C0CC88 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140C0E048 (Phase1InitializationDiscard.c)
 *     Phase1InitializationIoReady @ 0x140C61CC8 (Phase1InitializationIoReady.c)
 * Callees:
 *     MiInitializeStrongCode @ 0x140BE0444 (MiInitializeStrongCode.c)
 *     KeSupportedPhysicalAddressBits @ 0x140C28BC0 (KeSupportedPhysicalAddressBits.c)
 *     MiComputeNumaCosts @ 0x140C4F904 (MiComputeNumaCosts.c)
 *     MiInitSystem @ 0x140C4FDD0 (MiInitSystem.c)
 *     MiInitNucleus @ 0x140C51428 (MiInitNucleus.c)
 *     MiInitializeSystemVa @ 0x140C693AC (MiInitializeSystemVa.c)
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
  if ( !dword_140E2DC78 )
  {
    v5 = KeSupportedPhysicalAddressBits(a1, a2, a3, (unsigned int)a1);
    if ( v5 > 0x34u )
      v5 = 52;
    dword_140E2DC78 = v5;
    v6 = v5 - 12;
    if ( (unsigned __int8)(v5 - 12) > 0x26u )
      v6 = 38;
    dword_140E2DC7C = v6;
  }
  switch ( v4 )
  {
    case -1:
      stru_140EF4CA0.SizeOfBitMap = 2048;
      stru_140EF4CA0.Buffer = (unsigned int *)&unk_140EF4CB0;
      word_140EF4E12 |= 1u;
      MiInitializeStrongCode();
      if ( byte_140FCECA8 )
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
      byte_140E37654 = 1;
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
