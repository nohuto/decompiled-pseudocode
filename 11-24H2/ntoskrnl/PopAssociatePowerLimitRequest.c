/*
 * XREFs of PopAssociatePowerLimitRequest @ 0x1407493A8
 * Callers:
 *     PoCreatePowerLimitRequest @ 0x140748E40 (PoCreatePowerLimitRequest.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopGetDope @ 0x1403E6628 (PopGetDope.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PopCleanPowerLimitExtension @ 0x1405CCE74 (PopCleanPowerLimitExtension.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x1405D17D4 (PopThermalUpdateTelemetryClientCount.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     PopAcquirePowerLimitInterface @ 0x1407492F0 (PopAcquirePowerLimitInterface.c)
 *     PopQueryPowerLimitAttributes @ 0x140749E08 (PopQueryPowerLimitAttributes.c)
 *     PopRegisterTargetDeviceProtection @ 0x140749F74 (PopRegisterTargetDeviceProtection.c)
 *     PopDiagTracePowerLimitExtension @ 0x1407554EC (PopDiagTracePowerLimitExtension.c)
 *     PopDiagTracePowerLimitRequest @ 0x140755880 (PopDiagTracePowerLimitRequest.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PopAssociatePowerLimitRequest(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rdi
  __int64 Dope; // rbp
  int PowerLimitAttributes; // ebx
  __int64 Pool2; // rax
  _QWORD *v8; // rax
  __int64 v9; // rdx
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  _QWORD *v16; // rcx
  unsigned int v17; // r9d
  __int64 i; // r10
  __int64 v19; // rdx
  __int64 v20; // r8

  v4 = 0LL;
  Dope = PopGetDope(a2);
  if ( !Dope )
    return (unsigned int)-1073741670;
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerLimitExtensionLock);
  if ( *(_QWORD *)(Dope + 72) )
    goto LABEL_11;
  PopReleaseRwLock(&PopPowerLimitExtensionLock);
  Pool2 = ExAllocatePool2(0x100uLL, 0xC8uLL, 0x6D6C5050u);
  v4 = (_QWORD *)Pool2;
  if ( Pool2 )
  {
    v8 = (_QWORD *)(Pool2 + 16);
    v8[1] = v8;
    *v8 = v8;
    v4[5] = 0LL;
    v4[4] = 0LL;
    v4[7] = a2;
    PowerLimitAttributes = PopAcquirePowerLimitInterface((__int64)v4);
    if ( PowerLimitAttributes < 0 )
      goto LABEL_21;
    PowerLimitAttributes = PopQueryPowerLimitAttributes(v4);
    if ( PowerLimitAttributes < 0 )
      goto LABEL_21;
    PowerLimitAttributes = PopRegisterTargetDeviceProtection(v4);
    if ( PowerLimitAttributes < 0 )
      goto LABEL_21;
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerLimitExtensionLock);
    if ( !*(_QWORD *)(Dope + 72) )
    {
      v10 = (_QWORD *)qword_140F0B798;
      if ( *(__int64 **)qword_140F0B798 != &PopPowerLimitExtensionList )
        goto LABEL_16;
      *v4 = &PopPowerLimitExtensionList;
      v4[1] = v10;
      *v10 = v4;
      qword_140F0B798 = (__int64)v4;
      *(_QWORD *)(Dope + 72) = v4;
      *((_BYTE *)v4 + 48) = 1;
      PopDiagTracePowerLimitExtension(v4, POP_ETW_EVENT_POWER_LIMIT_EXTENSION_ADD);
      v4 = 0LL;
    }
LABEL_11:
    PopAcquireRwLockExclusive((unsigned __int64 *)(*(_QWORD *)(Dope + 72) + 32LL));
    v11 = *(unsigned int *)(*(_QWORD *)(Dope + 72) + 72LL);
    *(_DWORD *)(a1 + 32) = v11;
    v12 = ExAllocatePool2(0x100uLL, 16 * v11, 0x6D6C5050u);
    *(_QWORD *)(a1 + 40) = v12;
    if ( !v12
      || (v13 = ExAllocatePool2(0x100uLL, 104LL * *(unsigned int *)(a1 + 32), 0x6D6C5050u),
          (*(_QWORD *)(a1 + 56) = v13) == 0LL) )
    {
      v14 = *(_QWORD *)(Dope + 72);
      PowerLimitAttributes = -1073741670;
      if ( v14 )
        PopReleaseRwLock((signed __int64 *)(v14 + 32));
      goto LABEL_20;
    }
    *(_QWORD *)(a1 + 64) = *(_QWORD *)(Dope + 72);
    v15 = *(_QWORD *)(Dope + 72) + 16LL;
    v16 = *(_QWORD **)(*(_QWORD *)(Dope + 72) + 24LL);
    if ( *v16 == v15 )
    {
      *(_QWORD *)a1 = v15;
      *(_QWORD *)(a1 + 8) = v16;
      *v16 = a1;
      *(_QWORD *)(v15 + 8) = a1;
      memmove(*(void **)(a1 + 40), *(const void **)(*(_QWORD *)(a1 + 64) + 88LL), 16LL * *(unsigned int *)(a1 + 32));
      v17 = 0;
      for ( i = MEMORY[0xFFFFF78000000008]; v17 < *(_DWORD *)(a1 + 32); *(_QWORD *)(104 * v20 + *(_QWORD *)(a1 + 56)) = i )
      {
        v19 = 2LL * v17;
        v20 = v17++;
        *(_DWORD *)(*(_QWORD *)(a1 + 40) + 8 * v19 + 8) = -1;
        *(_DWORD *)(*(_QWORD *)(a1 + 40) + 8 * v19 + 12) = -1;
      }
      *(_BYTE *)(a1 + 16) = 1;
      *(_BYTE *)(a1 + 48) = 1;
      PopThermalUpdateTelemetryClientCount(1);
      PopDiagTracePowerLimitRequest(a1, POP_ETW_EVENT_POWER_LIMIT_REQUEST_ADD);
      PopReleaseRwLock((signed __int64 *)(*(_QWORD *)(Dope + 72) + 32LL));
      PowerLimitAttributes = 0;
LABEL_20:
      PopReleaseRwLock(&PopPowerLimitExtensionLock);
      if ( !v4 )
        return (unsigned int)PowerLimitAttributes;
LABEL_21:
      PopCleanPowerLimitExtension(v4, v9);
      return (unsigned int)PowerLimitAttributes;
    }
LABEL_16:
    __fastfail(3u);
  }
  return (unsigned int)-1073741670;
}
