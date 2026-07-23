/*
 * XREFs of PopAssociateThermalRequest @ 0x14074A358
 * Callers:
 *     PoCreateThermalRequest @ 0x14074A0D0 (PoCreateThermalRequest.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopGetDope @ 0x1403E6628 (PopGetDope.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x1405D17D4 (PopThermalUpdateTelemetryClientCount.c)
 *     PopAcquireCoolingInterface @ 0x14074A2D0 (PopAcquireCoolingInterface.c)
 *     PopRegisterCoolingExtensionProtection @ 0x14074A804 (PopRegisterCoolingExtensionProtection.c)
 *     PopDiagTraceCoolingExtension @ 0x140A2DCBC (PopDiagTraceCoolingExtension.c)
 *     PopDiagTraceThermalRequest @ 0x140A6CC64 (PopDiagTraceThermalRequest.c)
 *     PopCleanCoolingExtension @ 0x140AAC570 (PopCleanCoolingExtension.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PopAssociateThermalRequest(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v6; // rdi
  __int64 Dope; // rbp
  int v8; // ebx
  __int64 Pool2; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // rcx

  v6 = 0LL;
  Dope = PopGetDope(a2);
  if ( !Dope )
    return (unsigned int)-1073741670;
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopCoolingExtensionLock);
  if ( *(_QWORD *)(Dope + 64) )
    goto LABEL_11;
  PopReleaseRwLock(&PopCoolingExtensionLock);
  Pool2 = ExAllocatePool2(0x100uLL, 0x90uLL, 0x6C6F4350u);
  v6 = (_QWORD *)Pool2;
  if ( Pool2 )
  {
    v10 = (_QWORD *)(Pool2 + 16);
    v10[1] = v10;
    *v10 = v10;
    v6[5] = 0LL;
    v6[4] = 0LL;
    *((_BYTE *)v6 + 66) = 100;
    v6[6] = a2;
    v8 = PopAcquireCoolingInterface((__int64)v6);
    if ( v8 < 0 )
      goto LABEL_21;
    *((_BYTE *)v6 + 64) = 1;
    if ( a3 )
    {
      v8 = PopRegisterCoolingExtensionProtection(v6);
      if ( v8 < 0 )
        goto LABEL_21;
    }
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopCoolingExtensionLock);
    if ( !*(_QWORD *)(Dope + 64) )
    {
      v11 = (_QWORD *)qword_140F0B768;
      if ( *(__int64 **)qword_140F0B768 != &PopCoolingExtensionList )
        goto LABEL_14;
      *v6 = &PopCoolingExtensionList;
      v6[1] = v11;
      *v11 = v6;
      qword_140F0B768 = (__int64)v6;
      *(_QWORD *)(Dope + 64) = v6;
      PopDiagTraceCoolingExtension(v6, POP_ETW_EVENT_COOLING_EXTENSION_ADD);
      v6 = 0LL;
      goto LABEL_13;
    }
LABEL_11:
    if ( a3 )
    {
      v8 = PopRegisterCoolingExtensionProtection(*(PVOID *)(Dope + 64));
      if ( v8 < 0 )
      {
LABEL_20:
        PopReleaseRwLock(&PopCoolingExtensionLock);
        if ( !v6 )
          return (unsigned int)v8;
LABEL_21:
        PopCleanCoolingExtension(v6);
        return (unsigned int)v8;
      }
    }
LABEL_13:
    PopAcquireRwLockExclusive((unsigned __int64 *)(*(_QWORD *)(Dope + 64) + 32LL));
    v12 = *(_QWORD *)(Dope + 64);
    *(_QWORD *)(a1 + 32) = v12;
    v13 = v12 + 16;
    v14 = *(_QWORD **)(v13 + 8);
    if ( *v14 != v13 )
LABEL_14:
      __fastfail(3u);
    *(_QWORD *)(a1 + 8) = v14;
    *(_QWORD *)a1 = v13;
    *v14 = a1;
    *(_QWORD *)(v13 + 8) = a1;
    *(_BYTE *)(a1 + 18) = 1;
    PopDiagTraceThermalRequest(a1, POP_ETW_EVENT_THERMAL_REQUEST_ADD);
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 32) + 136LL) )
      PopThermalUpdateTelemetryClientCount(1);
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 32) + 128LL) )
      *(_BYTE *)(a1 + 41) = 1;
    PopReleaseRwLock((signed __int64 *)(*(_QWORD *)(Dope + 64) + 32LL));
    v8 = 0;
    goto LABEL_20;
  }
  return (unsigned int)-1073741670;
}
