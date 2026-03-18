/*
 * XREFs of PopAssociatePowerLimitRequest @ 0x14074B078
 * Callers:
 *     PoCreatePowerLimitRequest @ 0x14074AB10 (PoCreatePowerLimitRequest.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopGetDope @ 0x1403F2908 (PopGetDope.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopCleanPowerLimitExtension @ 0x1405CF754 (PopCleanPowerLimitExtension.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x1405D4014 (PopThermalUpdateTelemetryClientCount.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     PopAcquirePowerLimitInterface @ 0x14074AFC0 (PopAcquirePowerLimitInterface.c)
 *     PopQueryPowerLimitAttributes @ 0x14074BAD8 (PopQueryPowerLimitAttributes.c)
 *     PopRegisterTargetDeviceProtection @ 0x14074BC44 (PopRegisterTargetDeviceProtection.c)
 *     PopDiagTracePowerLimitExtension @ 0x14075706C (PopDiagTracePowerLimitExtension.c)
 *     PopDiagTracePowerLimitRequest @ 0x140757400 (PopDiagTracePowerLimitRequest.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PopAssociatePowerLimitRequest(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rdi
  __int64 Dope; // rbp
  int PowerLimitAttributes; // ebx
  __int64 Pool2; // rax
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  _QWORD *v17; // rcx
  unsigned int v18; // r9d
  __int64 i; // r10
  __int64 v20; // rdx
  __int64 v21; // r8

  v4 = 0LL;
  Dope = PopGetDope(a2);
  if ( !Dope )
    return (unsigned int)-1073741670;
  PopAcquireRwLockExclusive(&PopPowerLimitExtensionLock);
  if ( *(_QWORD *)(Dope + 72) )
    goto LABEL_11;
  PopReleaseRwLock((signed __int64 *)&PopPowerLimitExtensionLock);
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
    PopAcquireRwLockExclusive(&PopPowerLimitExtensionLock);
    if ( !*(_QWORD *)(Dope + 72) )
    {
      v12 = (_QWORD *)qword_140F0BC78;
      if ( *(__int64 **)qword_140F0BC78 != &PopPowerLimitExtensionList )
        goto LABEL_16;
      *v4 = &PopPowerLimitExtensionList;
      v4[1] = v12;
      *v12 = v4;
      qword_140F0BC78 = (__int64)v4;
      *(_QWORD *)(Dope + 72) = v4;
      *((_BYTE *)v4 + 48) = 1;
      PopDiagTracePowerLimitExtension(v4, POP_ETW_EVENT_POWER_LIMIT_EXTENSION_ADD);
      v4 = 0LL;
    }
LABEL_11:
    PopAcquireRwLockExclusive((unsigned __int64 *)(*(_QWORD *)(Dope + 72) + 32LL));
    *(_DWORD *)(a1 + 32) = *(_DWORD *)(*(_QWORD *)(Dope + 72) + 72LL);
    v13 = ExAllocatePool2(0x100uLL);
    *(_QWORD *)(a1 + 40) = v13;
    if ( !v13 || (v14 = ExAllocatePool2(0x100uLL), (*(_QWORD *)(a1 + 56) = v14) == 0LL) )
    {
      v15 = *(_QWORD *)(Dope + 72);
      PowerLimitAttributes = -1073741670;
      if ( v15 )
        PopReleaseRwLock((signed __int64 *)(v15 + 32));
      goto LABEL_20;
    }
    *(_QWORD *)(a1 + 64) = *(_QWORD *)(Dope + 72);
    v16 = *(_QWORD *)(Dope + 72) + 16LL;
    v17 = *(_QWORD **)(*(_QWORD *)(Dope + 72) + 24LL);
    if ( *v17 == v16 )
    {
      *(_QWORD *)a1 = v16;
      *(_QWORD *)(a1 + 8) = v17;
      *v17 = a1;
      *(_QWORD *)(v16 + 8) = a1;
      memmove(*(void **)(a1 + 40), *(const void **)(*(_QWORD *)(a1 + 64) + 88LL), 16LL * *(unsigned int *)(a1 + 32));
      v18 = 0;
      for ( i = MEMORY[0xFFFFF78000000008]; v18 < *(_DWORD *)(a1 + 32); *(_QWORD *)(104 * v21 + *(_QWORD *)(a1 + 56)) = i )
      {
        v20 = 2LL * v18;
        v21 = v18++;
        *(_DWORD *)(*(_QWORD *)(a1 + 40) + 8 * v20 + 8) = -1;
        *(_DWORD *)(*(_QWORD *)(a1 + 40) + 8 * v20 + 12) = -1;
      }
      *(_BYTE *)(a1 + 16) = 1;
      *(_BYTE *)(a1 + 48) = 1;
      PopThermalUpdateTelemetryClientCount(1);
      PopDiagTracePowerLimitRequest(a1, POP_ETW_EVENT_POWER_LIMIT_REQUEST_ADD);
      PopReleaseRwLock((signed __int64 *)(*(_QWORD *)(Dope + 72) + 32LL));
      PowerLimitAttributes = 0;
LABEL_20:
      PopReleaseRwLock((signed __int64 *)&PopPowerLimitExtensionLock);
      if ( !v4 )
        return (unsigned int)PowerLimitAttributes;
LABEL_21:
      PopCleanPowerLimitExtension(v4, v9, v10, v11);
      return (unsigned int)PowerLimitAttributes;
    }
LABEL_16:
    __fastfail(3u);
  }
  return (unsigned int)-1073741670;
}
