/*
 * XREFs of StorReset @ 0x140040430
 * Callers:
 *     StorPortExtendedFunction @ 0x140046040 (StorPortExtendedFunction.c)
 *     RaidAdapterDeviceReset @ 0x140059DAC (RaidAdapterDeviceReset.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     StorIsIoGatewayPaused @ 0x140025B10 (StorIsIoGatewayPaused.c)
 *     StorDelayExecution @ 0x14002AE80 (StorDelayExecution.c)
 *     RaMiniportGetRaidAdapter @ 0x140036868 (RaMiniportGetRaidAdapter.c)
 *     RaCallMiniportAdapterControlSafe @ 0x14003D3C0 (RaCallMiniportAdapterControlSafe.c)
 *     RaidDriverGetName @ 0x14003E03C (RaidDriverGetName.c)
 *     McTemplateK0qjzztqdqx_EtwWriteTransfer @ 0x140071D20 (McTemplateK0qjzztqdqx_EtwWriteTransfer.c)
 *     RaidRequestDIrpForAssociatedUnits @ 0x1400787A8 (RaidRequestDIrpForAssociatedUnits.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall StorReset(__int64 a1, unsigned int a2, int a3, char a4)
{
  __int64 v4; // rbx
  __int64 v5; // r14
  unsigned int v6; // r13d
  _BYTE *v7; // r15
  LARGE_INTEGER v8; // rdi
  int v10; // r12d
  signed int v11; // esi
  _BYTE *v12; // rcx
  __int64 RaidAdapter; // rax
  unsigned __int16 v14; // dx
  __int64 v15; // rax
  LARGE_INTEGER v16; // rax
  __int64 v17; // rcx
  __int64 Pool; // rax
  int v19; // eax
  __int64 v20; // rax
  __int64 i; // r12
  bool v22; // zf
  int v23; // eax
  __int64 v24; // rcx
  unsigned int v25; // r15d
  unsigned int v26; // r13d
  LARGE_INTEGER PerformanceCounter; // rax
  signed int v28; // eax
  char *v29; // rbx
  __int64 v30; // rdx
  signed int v31; // eax
  _DWORD *v32; // rcx
  LARGE_INTEGER v33; // rbx
  _DWORD *v34; // rax
  int v35; // eax
  int v36; // edx
  unsigned int *v37; // rcx
  unsigned int v38; // eax
  unsigned int v39; // eax
  __int64 v40; // rcx
  void *v41; // r15
  unsigned __int64 v42; // r8
  unsigned __int64 v43; // r11
  unsigned __int64 v44; // rbx
  void *v45; // rdx
  _BYTE v47[4]; // [rsp+68h] [rbp-31h] BYREF
  unsigned int v48; // [rsp+6Ch] [rbp-2Dh]
  int v49; // [rsp+70h] [rbp-29h]
  char v50; // [rsp+74h] [rbp-25h]
  char v51; // [rsp+75h] [rbp-24h]
  _BYTE *v52; // [rsp+78h] [rbp-21h]
  unsigned int v53; // [rsp+80h] [rbp-19h] BYREF
  __int64 v54; // [rsp+88h] [rbp-11h]
  __int64 v55; // [rsp+90h] [rbp-9h] BYREF
  __int128 v56; // [rsp+98h] [rbp-1h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+A8h] [rbp+Fh] BYREF
  __int128 v58; // [rsp+B0h] [rbp+17h] BYREF

  v4 = 0LL;
  v48 = a2;
  PerformanceFrequency.QuadPart = 0LL;
  v5 = 0LL;
  v53 = 0;
  v6 = a2;
  v7 = 0LL;
  v49 = a3;
  v51 = 0;
  v8.QuadPart = 0LL;
  v50 = 0;
  v10 = a3;
  if ( a2 >= 3 )
  {
    v11 = -1073741822;
    goto LABEL_65;
  }
  if ( (unsigned int)(a3 - 1) > 1
    || (v12 = *(_BYTE **)(a1 - 16), (v12[248] & 1) != 0)
    || (RaidAdapter = RaMiniportGetRaidAdapter(v12), (v5 = RaidAdapter) == 0) )
  {
    v11 = -1073741811;
    goto LABEL_65;
  }
  if ( v6 == 2 && *(_DWORD *)(RaidAdapter + 392) != 5 )
    goto LABEL_9;
  v15 = *(_QWORD *)(RaidAdapter + 5376);
  if ( !v15
    || !*(_QWORD *)(v15 + 8)
    || *(_WORD *)(v15 + 2) < v14
    || *(_WORD *)v15 < 0x50u
    || !*(_QWORD *)(v15 + 56)
    || !*(_QWORD *)(v15 + 64)
    || !*(_QWORD *)(v15 + 72) )
  {
    goto LABEL_9;
  }
  if ( !StorIsIoGatewayPaused(*(_QWORD *)(v5 + 960)) )
  {
    v11 = -1073741808;
    goto LABEL_65;
  }
  if ( KeGetCurrentIrql() )
  {
    v11 = -1073741496;
    goto LABEL_65;
  }
  if ( _interlockedbittestandset((volatile signed __int32 *)(v5 + 128), 2u) )
  {
    v11 = -1073740682;
    goto LABEL_65;
  }
  v51 = 1;
  v54 = a4 & 1;
  if ( UseQPCTime )
    v16 = KeQueryPerformanceCounter(&PerformanceFrequency);
  else
    v16.QuadPart = KeQueryUnbiasedInterruptTime();
  v17 = *(_QWORD *)(v5 + 6144);
  v8 = v16;
  if ( !v17 )
  {
    Pool = RaidAllocatePool(64LL, 80LL, 1163026770LL, *(_QWORD *)(v5 + 8));
    *(_QWORD *)(v5 + 6144) = Pool;
    v17 = Pool;
    if ( !Pool )
      goto LABEL_28;
  }
  if ( v6 == 1 )
  {
    if ( (*(_DWORD *)v17 & 1) == 0 )
    {
      KeInitializeEvent((PRKEVENT)(v17 + 32), SynchronizationEvent, 0);
      KeInitializeEvent((PRKEVENT)(*(_QWORD *)(v5 + 6144) + 56LL), SynchronizationEvent, 0);
      **(_DWORD **)(v5 + 6144) |= 1u;
      v17 = *(_QWORD *)(v5 + 6144);
    }
    if ( v10 == 1 )
    {
      ++*(_DWORD *)(v17 + 24);
    }
    else if ( v10 == 2 )
    {
      ++*(_DWORD *)(v17 + 20);
    }
    *(_DWORD *)(*(_QWORD *)(v5 + 6144) + 16LL) = 0;
    *(_DWORD *)(*(_QWORD *)(v5 + 6144) + 8LL) = 0;
    *(_DWORD *)(*(_QWORD *)(v5 + 6144) + 4LL) = 0;
    *(_DWORD *)(*(_QWORD *)(v5 + 6144) + 12LL) = 0;
    **(_DWORD **)(v5 + 6144) &= ~0x20u;
    **(_DWORD **)(v5 + 6144) &= ~0x80u;
  }
  v19 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, _QWORD))(*(_QWORD *)(v5 + 5376) + 56LL))(
          *(_QWORD *)(*(_QWORD *)(v5 + 5376) + 8LL),
          &v53,
          0LL);
  v11 = v19;
  if ( v19 != -1073741789 )
  {
    if ( v19 >= 0 )
      v11 = -1073741823;
    goto LABEL_65;
  }
  if ( v53 - 1 > 0xFFF )
  {
LABEL_9:
    v11 = -1073741637;
    goto LABEL_65;
  }
  v20 = RaidAllocatePool(64LL, 24LL * v53, 1163026770LL, *(_QWORD *)(v5 + 8));
  v52 = (_BYTE *)v20;
  v7 = (_BYTE *)v20;
  if ( !v20 )
  {
LABEL_28:
    v11 = -1073741670;
    goto LABEL_65;
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, __int64))(*(_QWORD *)(v5 + 5376) + 56LL))(
          *(_QWORD *)(*(_QWORD *)(v5 + 5376) + 8LL),
          &v53,
          v20);
  if ( v11 < 0 )
    goto LABEL_65;
  for ( i = 0LL; (unsigned int)i < v53; i = (unsigned int)(i + 1) )
  {
    if ( v6 == 2 )
    {
      v22 = RtlCompareMemory(&v7[24 * i], &GUID_BUS_TYPE_PCI, 0x10uLL) == 16;
    }
    else
    {
      if ( v6 == 1 )
        goto LABEL_50;
      v22 = v6 == 0;
    }
    if ( !v22 )
      continue;
LABEL_50:
    if ( v6 == 2 )
    {
      if ( (v7[24 * i + 16] & 4) != 0 )
        goto LABEL_52;
    }
    else if ( !v6 )
    {
      if ( (v7[24 * i + 16] & 1) != 0 )
      {
LABEL_52:
        v23 = *(_DWORD *)(v5 + 6032);
        goto LABEL_60;
      }
      continue;
    }
    if ( v6 == 1 && (v7[24 * i + 16] & 2) != 0 )
    {
      v23 = *(_DWORD *)(v5 + 6036);
LABEL_60:
      v24 = *(_QWORD *)(v5 + 5376);
      *(_QWORD *)&v56 = 0LL;
      *(_QWORD *)&v58 = 0LL;
      v47[0] = 0;
      v25 = 0;
      v26 = 200 * v23;
      v11 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, __int128 *, __int128 *))(v24 + 72))(
              *(_QWORD *)(v24 + 8),
              v47,
              &v56,
              &v58);
      if ( v11 >= 0 )
      {
        if ( v47[0] )
        {
          v11 = -1073741436;
          goto LABEL_63;
        }
        if ( !v48 )
        {
          v4 = 1LL;
          goto LABEL_69;
        }
        if ( v48 == 2 )
        {
          v4 = 4LL;
          goto LABEL_69;
        }
        if ( v48 != 1 )
          goto LABEL_69;
        v29 = &v52[24 * i];
        if ( RtlCompareMemory(v29, &GUID_BUS_TYPE_ACPI, 0x10uLL) != 16
          && RtlCompareMemory(v29, &GUID_BUS_TYPE_PCI, 0x10uLL) != 16 )
        {
          v11 = -1073741637;
          goto LABEL_63;
        }
        v4 = 2LL;
        if ( !(_BYTE)v54 )
        {
          LOBYTE(v30) = 1;
          v50 = 1;
          v31 = RaidRequestDIrpForAssociatedUnits(v5, v30);
          v11 = v31;
          if ( v31 == 259 )
          {
            KeWaitForSingleObject((PVOID)(*(_QWORD *)(v5 + 6144) + 32LL), Executive, 0, 0, 0LL);
            **(_DWORD **)(v5 + 6144) |= 0x20u;
          }
          else if ( v31 != -1073741823 && v31 != -1073741436 )
          {
            v32 = *(_DWORD **)(v5 + 6144);
            if ( v32[1] && (*v32 & 0x10) != 0 )
            {
              KeWaitForSingleObject(v32 + 8, Executive, 0, 0, 0LL);
              **(_DWORD **)(v5 + 6144) |= 0x80u;
            }
            goto LABEL_63;
          }
        }
        v11 = RaCallMiniportAdapterControlSafe(v5 + 376, 27);
        if ( v11 >= 0 )
        {
LABEL_69:
          v55 = 0LL;
          if ( !(_BYTE)v54 )
          {
            *(_BYTE *)(v5 + 111) |= 0x20u;
            v55 = 1LL;
          }
          v28 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, __int64, __int64 *, _QWORD))(*(_QWORD *)(v5 + 5376) + 64LL))(
                  *(_QWORD *)(*(_QWORD *)(v5 + 5376) + 8LL),
                  &v52[24 * i],
                  v4,
                  &v55,
                  0LL);
          v11 = v28;
          if ( v28 )
          {
            if ( v28 != 259 )
              goto LABEL_63;
            if ( (_BYTE)v54 )
            {
              v11 = 0;
              goto LABEL_63;
            }
            if ( !v26 )
              goto LABEL_79;
            do
            {
              v11 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, __int128 *, __int128 *))(*(_QWORD *)(v5 + 5376) + 72LL))(
                      *(_QWORD *)(*(_QWORD *)(v5 + 5376) + 8LL),
                      v47,
                      &v56,
                      &v58);
              if ( v11 < 0 )
                break;
              if ( !v47[0] )
                break;
              StorDelayExecution(0x1388u);
              ++v25;
            }
            while ( v25 < v26 );
            if ( v25 >= v26 )
            {
LABEL_79:
              v11 = -1073741643;
              goto LABEL_63;
            }
          }
          if ( (*(_BYTE *)(v5 + 111) & 0x20) != 0 )
          {
            KeWaitForSingleObject((PVOID)(v5 + 6104), Executive, 0, 0, 0LL);
            v11 = *(_DWORD *)(v5 + 88) != 1 ? 0xC0000184 : 0;
          }
        }
      }
LABEL_63:
      v7 = v52;
      v6 = v48;
      goto LABEL_64;
    }
  }
  v11 = -1073741637;
LABEL_64:
  v10 = v49;
LABEL_65:
  if ( UseQPCTime )
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  else
    PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
  v33 = PerformanceCounter;
  if ( v7 )
    ExFreePoolWithTag(v7, 0x45526152u);
  if ( v5 )
  {
    if ( v6 == 1 )
    {
      if ( v50 )
      {
        v34 = *(_DWORD **)(v5 + 6144);
        if ( v34 )
        {
          if ( ((*v34 & 0x20) != 0 || (*v34 & 0x80u) != 0) && v10 == 1 )
          {
            v35 = RaidRequestDIrpForAssociatedUnits(v5, 0LL);
            v36 = v35;
            if ( v35 == 259 )
            {
              KeWaitForSingleObject((PVOID)(*(_QWORD *)(v5 + 6144) + 56LL), Executive, 0, 0, 0LL);
              v36 = 0;
            }
            else if ( v11 >= 0 && v35 < 0 )
            {
              v11 = -1073741436;
            }
            v37 = *(unsigned int **)(v5 + 6144);
            v38 = *v37;
            if ( v36 < 0 )
            {
              v39 = v38 | 0x40;
LABEL_121:
              *v37 = v39;
            }
            else
            {
              if ( (v38 & 0x20) != 0 )
              {
                v39 = v38 & 0xFFFFFFDF;
                goto LABEL_121;
              }
              if ( (v38 & 0x80u) != 0 )
              {
                v39 = v38 & 0xFFFFFF7F;
                goto LABEL_121;
              }
            }
          }
        }
      }
    }
    if ( StorEtwLoggingEnabled )
    {
      v40 = *(_QWORD *)(v5 + 16);
      v41 = *(void **)(v5 + 5080);
      v58 = *(_OWORD *)(v5 + 5064);
      v56 = 0LL;
      RaidDriverGetName(v40, (__int64)&v56);
      if ( v8.QuadPart && v33.QuadPart )
      {
        if ( v33.QuadPart <= 0 || v33.QuadPart >= v8.QuadPart )
          v44 = v33.QuadPart - v8.QuadPart;
        else
          v44 = v33.QuadPart - v8.QuadPart - 1;
        if ( UseQPCTime == (_BYTE)v43 )
        {
          LOBYTE(v43) = v44;
        }
        else if ( PerformanceFrequency.QuadPart && v44 )
        {
          v42 = 1000 * (v44 % PerformanceFrequency.QuadPart);
          v43 = 10000 * (v42 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart
              + 10000 * (1000 * (v44 / PerformanceFrequency.QuadPart) + v42 / PerformanceFrequency.QuadPart);
        }
      }
      if ( (byte_140171466 & 8) != 0 )
      {
        v45 = &unk_140151214;
        if ( v41 )
          v45 = v41;
        McTemplateK0qjzztqdqx_EtwWriteTransfer(
          *(unsigned __int8 *)(v5 + 104) >> 7,
          (_DWORD)v45,
          v42,
          *(_DWORD *)(v5 + 56),
          (__int64)&v58,
          *((__int64 *)&v56 + 1),
          (__int64)v45,
          *(_BYTE *)(v5 + 104) >> 7,
          v6,
          v11,
          *(_DWORD *)(v5 + 5780),
          v43);
      }
    }
    *(_BYTE *)(v5 + 111) &= ~0x20u;
    if ( v51 )
      *(_DWORD *)(v5 + 128) &= ~4u;
  }
  return (unsigned int)v11;
}
