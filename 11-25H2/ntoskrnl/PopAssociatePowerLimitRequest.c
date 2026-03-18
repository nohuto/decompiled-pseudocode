/*
 * XREFs of PopAssociatePowerLimitRequest @ 0x14073EFA8
 * Callers:
 *     PoCreatePowerLimitRequest @ 0x14073EA40 (PoCreatePowerLimitRequest.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PopGetDope @ 0x1404C0F1C (PopGetDope.c)
 *     PopCleanPowerLimitExtension @ 0x1405CB0A4 (PopCleanPowerLimitExtension.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x1405CF604 (PopThermalUpdateTelemetryClientCount.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     PopAcquirePowerLimitInterface @ 0x14073EEF0 (PopAcquirePowerLimitInterface.c)
 *     PopQueryPowerLimitAttributes @ 0x14073FA08 (PopQueryPowerLimitAttributes.c)
 *     PopRegisterTargetDeviceProtection @ 0x14073FB74 (PopRegisterTargetDeviceProtection.c)
 *     PopDiagTracePowerLimitExtension @ 0x14074AFB8 (PopDiagTracePowerLimitExtension.c)
 *     PopDiagTracePowerLimitRequest @ 0x14074B34C (PopDiagTracePowerLimitRequest.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PopAssociatePowerLimitRequest(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rdi
  __int64 Dope; // rbp
  int PowerLimitAttributes; // ebx
  __int64 Pool2; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  _QWORD *v14; // rcx
  unsigned int v15; // r9d
  __int64 i; // r10
  __int64 v17; // rdx
  __int64 v18; // r8

  v4 = 0LL;
  Dope = PopGetDope(a2);
  if ( !Dope )
    return (unsigned int)-1073741670;
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerLimitExtensionLock);
  if ( *(_QWORD *)(Dope + 72) )
    goto LABEL_11;
  PopReleaseRwLock(&PopPowerLimitExtensionLock);
  Pool2 = ExAllocatePool2(0x100uLL);
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
      v9 = (_QWORD *)qword_140F0A8A8;
      if ( *(__int64 **)qword_140F0A8A8 != &PopPowerLimitExtensionList )
        goto LABEL_16;
      *v4 = &PopPowerLimitExtensionList;
      v4[1] = v9;
      *v9 = v4;
      qword_140F0A8A8 = (__int64)v4;
      *(_QWORD *)(Dope + 72) = v4;
      *((_BYTE *)v4 + 48) = 1;
      PopDiagTracePowerLimitExtension(v4, POP_ETW_EVENT_POWER_LIMIT_EXTENSION_ADD);
      v4 = 0LL;
    }
LABEL_11:
    PopAcquireRwLockExclusive((unsigned __int64 *)(*(_QWORD *)(Dope + 72) + 32LL));
    *(_DWORD *)(a1 + 32) = *(_DWORD *)(*(_QWORD *)(Dope + 72) + 72LL);
    v10 = ExAllocatePool2(0x100uLL);
    *(_QWORD *)(a1 + 40) = v10;
    if ( !v10 || (v11 = ExAllocatePool2(0x100uLL), (*(_QWORD *)(a1 + 56) = v11) == 0LL) )
    {
      v12 = *(_QWORD *)(Dope + 72);
      PowerLimitAttributes = -1073741670;
      if ( v12 )
        PopReleaseRwLock((signed __int64 *)(v12 + 32));
      goto LABEL_20;
    }
    *(_QWORD *)(a1 + 64) = *(_QWORD *)(Dope + 72);
    v13 = *(_QWORD *)(Dope + 72) + 16LL;
    v14 = *(_QWORD **)(*(_QWORD *)(Dope + 72) + 24LL);
    if ( *v14 == v13 )
    {
      *(_QWORD *)a1 = v13;
      *(_QWORD *)(a1 + 8) = v14;
      *v14 = a1;
      *(_QWORD *)(v13 + 8) = a1;
      memmove(*(void **)(a1 + 40), *(const void **)(*(_QWORD *)(a1 + 64) + 88LL), 16LL * *(unsigned int *)(a1 + 32));
      v15 = 0;
      for ( i = MEMORY[0xFFFFF78000000008]; v15 < *(_DWORD *)(a1 + 32); *(_QWORD *)(104 * v18 + *(_QWORD *)(a1 + 56)) = i )
      {
        v17 = 2LL * v15;
        v18 = v15++;
        *(_DWORD *)(*(_QWORD *)(a1 + 40) + 8 * v17 + 8) = -1;
        *(_DWORD *)(*(_QWORD *)(a1 + 40) + 8 * v17 + 12) = -1;
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
      PopCleanPowerLimitExtension(v4);
      return (unsigned int)PowerLimitAttributes;
    }
LABEL_16:
    __fastfail(3u);
  }
  return (unsigned int)-1073741670;
}
