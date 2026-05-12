/*
 * XREFs of StorPortUnitIdleCondition @ 0x14001C930
 * Callers:
 *     <none>
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x14001DA00 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidUnitAdaptiveIdleTimeout @ 0x14001DAA4 (RaidUnitAdaptiveIdleTimeout.c)
 *     RaidIsUnitControlSupported @ 0x14001DD30 (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x14001DEE0 (RaCallMiniportUnitControl.c)
 *     McTemplateK0pquuuq_EtwWriteTransfer @ 0x14005357C (McTemplateK0pquuuq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

void __fastcall StorPortUnitIdleCondition(__int64 a1, unsigned int a2)
{
  int v4; // r8d
  signed __int64 v5; // rax
  signed __int64 v6; // rtt
  int v7; // r8d
  __int64 v8; // rcx
  KIRQL v9; // si
  char v10; // al
  __int64 v11; // rdx
  char v12; // cl
  char v13; // al
  __int64 v14; // rcx
  _DWORD v15[2]; // [rsp+50h] [rbp-78h] BYREF
  __int64 v16; // [rsp+58h] [rbp-70h]
  int v17; // [rsp+60h] [rbp-68h]
  char v18; // [rsp+64h] [rbp-64h]
  __int16 v19; // [rsp+65h] [rbp-63h]
  char v20; // [rsp+67h] [rbp-61h]
  _DWORD v21[3]; // [rsp+68h] [rbp-60h] BYREF
  __int128 v22; // [rsp+74h] [rbp-54h]
  __int64 v23; // [rsp+84h] [rbp-44h]
  int v24; // [rsp+8Ch] [rbp-3Ch]
  __int16 v25; // [rsp+90h] [rbp-38h]
  __int16 v26; // [rsp+92h] [rbp-36h]
  int v27; // [rsp+94h] [rbp-34h]
  char v28; // [rsp+98h] [rbp-30h]
  char v29; // [rsp+99h] [rbp-2Fh]
  char v30; // [rsp+9Ah] [rbp-2Eh]
  int v31; // [rsp+9Bh] [rbp-2Dh]
  char v32; // [rsp+9Fh] [rbp-29h]

  if ( (unsigned __int8)RaidUnitCheckAndAcquirePoFx(a1) )
  {
    if ( StorEtwLoggingEnabled && (byte_140171462 & 0x10) != 0 )
      McTemplateK0pquuuq_EtwWriteTransfer(
        *(_QWORD *)(a1 + 24),
        (unsigned int)&EventUnitIdleConditionStart,
        v4,
        **(_QWORD **)(a1 + 1872),
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        *(_BYTE *)(a1 + 104),
        *(_BYTE *)(a1 + 105),
        *(_BYTE *)(a1 + 106),
        a2);
    *(_DWORD *)(*(_QWORD *)(a1 + 1872) + 32LL) &= ~2u;
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1872) + 32LL) & 0x100) != 0 )
    {
      RaidUnitAdaptiveIdleTimeout(a1);
      *(_QWORD *)(*(_QWORD *)(a1 + 1872) + 64LL) = MEMORY[0xFFFFF78000000014];
    }
    if ( !*(_BYTE *)(a1 + 759) )
    {
      *(_BYTE *)(a1 + 759) = 1;
      v5 = *(_QWORD *)(a1 + 808);
      if ( (v5 & 3) == 0 )
      {
        do
        {
          v6 = v5;
          v5 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 808), v5 | 2, v5);
        }
        while ( v6 != v5 && (v5 & 3) == 0 );
      }
      v23 = 0LL;
      v22 = 0LL;
      v24 = 0;
      v31 = 0;
      v32 = 0;
      if ( *(_QWORD *)(a1 + 32) && (unsigned __int8)RaidIsUnitControlSupported(a1, 31LL) )
      {
        v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)(a1 + 32) + 24LL));
        *(_DWORD *)(*(_QWORD *)(a1 + 32) + 80LL) |= 0x40u;
        v10 = *(_BYTE *)(a1 + 105);
        v11 = *(_QWORD *)(a1 + 24);
        v21[0] = 56;
        v21[1] = 56;
        v21[2] = 2;
        v25 = 1;
        v27 = 4;
        v26 = *(_WORD *)(v11 + 56);
        v12 = *(_BYTE *)(a1 + 104);
        v29 = v10;
        v13 = *(_BYTE *)(a1 + 106);
        v28 = v12;
        v30 = v13;
        if ( *(_DWORD *)v11 == 1094997074 )
        {
          v14 = v11 + 376;
        }
        else
        {
          v14 = v11 + 168;
          if ( *(_DWORD *)v11 != 1314275652 )
            v14 = 0LL;
        }
        RaCallMiniportUnitControl(v14, 31LL, v21);
        KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 32) + 24LL), v9);
      }
    }
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1872) + 32LL) & 4) != 0
      && (unsigned __int8)RaidIsUnitControlSupported(a1, 6LL)
      && (unsigned __int8)RaidIsUnitControlSupported(a1, 6LL) )
    {
      v8 = *(_QWORD *)(a1 + 24) + 376LL;
      v19 = 0;
      v20 = 0;
      v15[0] = 1;
      v15[1] = 24;
      v16 = a1 + 96;
      v17 = 0;
      v18 = 0;
      RaCallMiniportUnitControl(v8, 6LL, v15);
    }
    PoFxCompleteIdleCondition(**(_QWORD **)(a1 + 1872), a2);
    if ( StorEtwLoggingEnabled )
    {
      if ( (byte_140171462 & 0x10) != 0 )
        McTemplateK0pquuuq_EtwWriteTransfer(
          *(_QWORD *)(a1 + 24),
          (unsigned int)&EventUnitIdleConditionStop,
          v7,
          **(_QWORD **)(a1 + 1872),
          *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
          *(_BYTE *)(a1 + 104),
          *(_BYTE *)(a1 + 105),
          *(_BYTE *)(a1 + 106),
          a2);
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1864));
  }
}
