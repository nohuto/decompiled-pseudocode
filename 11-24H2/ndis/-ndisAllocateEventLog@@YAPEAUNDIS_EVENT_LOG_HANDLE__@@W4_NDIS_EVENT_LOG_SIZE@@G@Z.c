/*
 * XREFs of ?ndisAllocateEventLog@@YAPEAUNDIS_EVENT_LOG_HANDLE__@@W4_NDIS_EVENT_LOG_SIZE@@G@Z @ 0x14016D4A0
 * Callers:
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x1401771E0 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 *     DriverEntry @ 0x14018B234 (DriverEntry.c)
 * Callees:
 *     Feature_NdisTriageData__private_IsEnabledDeviceUsageNoInline @ 0x140092F58 (Feature_NdisTriageData__private_IsEnabledDeviceUsageNoInline.c)
 *     memset @ 0x1400E7500 (memset.c)
 */

__int64 __fastcall ndisAllocateEventLog(int a1, __int16 a2)
{
  int v3; // edi
  __int16 v4; // cx
  __int16 v5; // dx
  __int16 v6; // ax
  __int16 v7; // r14
  unsigned __int16 v8; // bp
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  __int16 v13; // si
  __int64 v14; // rax
  size_t v15; // r14
  __int64 Pool2; // rbx

  if ( (a2 & 0xFFF8) != 0 || !ndisDebugLoggingMode )
    return 0LL;
  if ( ndisDebugLoggingMode == 2 )
    a2 |= 2u;
  v3 = 256;
  v4 = a2 | 0x100;
  if ( (a2 & 1) == 0 )
    v4 = a2;
  v5 = v4 | 0x500;
  if ( (v4 & 2) == 0 )
    v5 = v4;
  v6 = v5 | 0x700;
  if ( (v5 & 4) == 0 )
    v6 = v5;
  v7 = v6;
  if ( (v6 & 0x200) != 0 )
  {
    v8 = 16;
  }
  else if ( (v6 & 0x400) != 0 )
  {
    v8 = 8;
  }
  else
  {
    v8 = 2;
    if ( (v6 & 0x100) != 0 )
      v8 = 4;
  }
  if ( MmIsDriverVerifying((struct _DRIVER_OBJECT *)ndisDriverObject) )
  {
    if ( a1 )
    {
      v9 = a1 - 1;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( !v10 )
          goto LABEL_30;
        if ( v10 == 1 )
        {
          v3 = 4096;
          goto LABEL_30;
        }
        goto LABEL_24;
      }
LABEL_23:
      v3 = 32;
      goto LABEL_30;
    }
LABEL_24:
    v3 = 16;
    goto LABEL_30;
  }
  if ( !a1 )
    goto LABEL_29;
  v11 = a1 - 1;
  if ( !v11 )
    goto LABEL_24;
  v12 = v11 - 1;
  if ( !v12 )
    goto LABEL_23;
  v3 = 4096;
  if ( v12 != 1 )
LABEL_29:
    v3 = 4;
LABEL_30:
  v13 = v7 | 0x1000;
  if ( (v7 & 2) == 0 )
    v13 = v7;
  v14 = v3 * (unsigned int)v8;
  v15 = (unsigned int)v14;
  Pool2 = ExAllocatePool2(64LL, v14 + 32, 1818575950LL);
  if ( !Pool2 )
    return 0LL;
  *(_QWORD *)(Pool2 + 24) = 0LL;
  *(_OWORD *)Pool2 = 0LL;
  KeInitializeSpinLock((PKSPIN_LOCK)(Pool2 + 16));
  *(_WORD *)(Pool2 + 24) = v13;
  *(_WORD *)(Pool2 + 26) = v8;
  *(_DWORD *)(Pool2 + 12) = v3;
  *(_DWORD *)(Pool2 + 8) = -1;
  if ( (unsigned int)Feature_NdisTriageData__private_IsEnabledDeviceUsageNoInline() )
    *(_DWORD *)(Pool2 + 28) = v15 + 32;
  *(_QWORD *)Pool2 = MEMORY[0xFFFFF78000000014];
  if ( (v13 & 2) != 0 )
    memset((void *)(Pool2 + 32), 0, v15);
  return Pool2;
}
