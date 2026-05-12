/*
 * XREFs of RaidUnitAdaptiveIdleTimeout @ 0x14001DAA4
 * Callers:
 *     StorPortUnitIdleCondition @ 0x14001C930 (StorPortUnitIdleCondition.c)
 *     RaidUnitIoCoalescingCallback @ 0x140078CA0 (RaidUnitIoCoalescingCallback.c)
 *     RaidUnitPowerCycleCheck @ 0x140078EE0 (RaidUnitPowerCycleCheck.c)
 *     RaidUnitPowerSettingCallback @ 0x140078F00 (RaidUnitPowerSettingCallback.c)
 *     RaUnitRegisterForIdleDetection @ 0x1401B9B4C (RaUnitRegisterForIdleDetection.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x14001DA00 (RaidUnitCheckAndAcquirePoFx.c)
 *     McTemplateK0quuuqqq_EtwWriteTransfer @ 0x140076A7C (McTemplateK0quuuqqq_EtwWriteTransfer.c)
 *     McTemplateK0quuuqqtt_EtwWriteTransfer @ 0x140076B48 (McTemplateK0quuuqqtt_EtwWriteTransfer.c)
 */

void __fastcall RaidUnitAdaptiveIdleTimeout(__int64 a1)
{
  int v2; // r8d
  __int64 v3; // rcx
  _DWORD *v4; // rsi
  unsigned int v5; // esi
  __int64 v6; // rcx
  __int64 v7; // rcx
  unsigned int v8; // ebp
  int v9; // edx
  unsigned int v10; // edi
  __int64 v11; // r9
  unsigned int v12; // ecx
  __int64 v13; // rsi
  __int64 v14; // rcx
  int v15; // edx
  __int64 v16; // rcx
  int v17; // edx
  int v18; // r8d
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdi
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // r14
  int v24; // ecx
  __int64 v25; // rsi
  __int64 v26; // rcx

  if ( RaidUnitCheckAndAcquirePoFx(a1) )
  {
    v3 = *(_QWORD *)(a1 + 1872);
    if ( (*(_DWORD *)(v3 + 32) & 0x100) != 0 )
    {
      if ( !v3 || (v4 = *(_DWORD **)(v3 + 8)) == 0LL || *v4 != 3 || (v5 = v4[5]) == 0 )
        v5 = 300000;
      v6 = *(_QWORD *)(v3 + 120);
      if ( v6 )
        ExCancelTimer(v6, 0LL);
      v7 = *(_QWORD *)(a1 + 1872);
      v8 = v5;
      if ( v5 <= *(_DWORD *)(v7 + 20) )
        v8 = *(_DWORD *)(v7 + 20);
      v9 = 0;
      v10 = v8;
      if ( (*(_DWORD *)(v7 + 32) & 0x400) != 0 )
      {
        ++*(_QWORD *)(v7 + 56);
        v20 = MEMORY[0xFFFFF78000000014] - *(_QWORD *)(a1 + 3360);
        if ( v20 > 0 )
        {
          v21 = v20 / 10000;
          v22 = v20 / 10000 % (unsigned __int64)v5;
          v23 = v20 / 10000 / (unsigned __int64)v5;
          if ( StorEtwLoggingEnabled && (byte_140171462 & 0x10) != 0 )
          {
            v24 = *(_DWORD *)(a1 + 3352);
            LOBYTE(v24) = *(_BYTE *)(a1 + 106);
            McTemplateK0quuuqqq_EtwWriteTransfer(
              v24,
              v22,
              v2,
              *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
              *(_BYTE *)(a1 + 104),
              *(_BYTE *)(a1 + 105),
              v24,
              *(_DWORD *)(a1 + 3352),
              v23,
              v5);
          }
          if ( v23 <= *(unsigned int *)(a1 + 3352) )
          {
            ++*(_QWORD *)(*(_QWORD *)(a1 + 1872) + 48LL);
            v25 = 10000 * (v21 - v5 * (*(unsigned int *)(a1 + 3352) + 1LL));
            if ( !*(_QWORD *)(*(_QWORD *)(a1 + 1872) + 120LL) )
              *(_QWORD *)(*(_QWORD *)(a1 + 1872) + 120LL) = ExAllocateTimer(RaidUnitPowerCycleCheck, a1, 0LL);
            v10 = v8;
            v9 = 1;
            v26 = *(_QWORD *)(*(_QWORD *)(a1 + 1872) + 120LL);
            if ( v26 )
            {
              ExSetTimer(v26, v25, 0LL, 0LL);
              v9 = 1;
            }
          }
          else
          {
            v10 = 100;
            v9 = 0;
          }
        }
      }
      *(_DWORD *)(*(_QWORD *)(a1 + 1872) + 32LL) = *(_DWORD *)(*(_QWORD *)(a1 + 1872) + 32LL) & 0xFFFFFDFF | (v9 << 9);
      v11 = *(_QWORD *)(a1 + 24);
      if ( (*(_BYTE *)(v11 + 110) & 0x40) == 0 )
      {
        if ( v10 == -1 )
        {
          v13 = -1LL;
        }
        else
        {
          v12 = *(_DWORD *)(*(_QWORD *)(a1 + 1872) + 24LL);
          if ( v10 >= v12 )
            v12 = v10;
          v10 = v12;
          v13 = 10000LL * v12;
        }
        v14 = *(_QWORD *)(a1 + 1872);
        v15 = *(_DWORD *)(v14 + 28);
        if ( v10 == v15 )
          goto LABEL_18;
        if ( StorEtwLoggingEnabled )
        {
          if ( (byte_140171462 & 0x10) != 0 )
            McTemplateK0quuuqqtt_EtwWriteTransfer(
              (*(_DWORD *)(v14 + 32) >> 10) & 1,
              v15,
              v2,
              *(_DWORD *)(v11 + 56),
              *(_BYTE *)(a1 + 104),
              *(_BYTE *)(a1 + 105),
              *(_BYTE *)(a1 + 106),
              v15,
              v10,
              (*(_DWORD *)(v14 + 32) & 0x400) != 0,
              (*(_DWORD *)(v14 + 32) & 0x800) != 0);
        }
        v19 = v13;
        *(_DWORD *)(*(_QWORD *)(a1 + 1872) + 28LL) = v10;
        goto LABEL_28;
      }
      v16 = *(_QWORD *)(a1 + 1872);
      v17 = *(_DWORD *)(v11 + 6024);
      v18 = *(_DWORD *)(v16 + 28);
      if ( v17 != v18 )
      {
        if ( StorEtwLoggingEnabled && (byte_140171462 & 0x10) != 0 )
          McTemplateK0quuuqqtt_EtwWriteTransfer(
            (*(_DWORD *)(v16 + 32) >> 10) & 1,
            v17,
            v18,
            *(_DWORD *)(v11 + 56),
            *(_BYTE *)(a1 + 104),
            *(_BYTE *)(a1 + 105),
            *(_BYTE *)(a1 + 106),
            v18,
            v17,
            (*(_DWORD *)(v16 + 32) & 0x400) != 0,
            (*(_DWORD *)(v16 + 32) & 0x800) != 0);
        *(_DWORD *)(*(_QWORD *)(a1 + 1872) + 28LL) = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 6024LL);
        v19 = 10000LL * *(unsigned int *)(*(_QWORD *)(a1 + 24) + 6024LL);
LABEL_28:
        PoFxSetDeviceIdleTimeout(**(_QWORD **)(a1 + 1872), v19);
      }
    }
LABEL_18:
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1864));
  }
}
