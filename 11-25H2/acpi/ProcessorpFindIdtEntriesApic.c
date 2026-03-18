/*
 * XREFs of ProcessorpFindIdtEntriesApic @ 0x1400C1580
 * Callers:
 *     <none>
 * Callees:
 *     IntPartFree @ 0x1400707E8 (IntPartFree.c)
 *     ProcessorpGetSecondaryInterruptAffinity @ 0x140098BE4 (ProcessorpGetSecondaryInterruptAffinity.c)
 *     ProcessorGetDeviceIdtAssignment @ 0x1400B3264 (ProcessorGetDeviceIdtAssignment.c)
 *     IrqPolicyGetDevicePolicy @ 0x1400B3440 (IrqPolicyGetDevicePolicy.c)
 *     ProcessorpSelectProcessorSetFromPartitions @ 0x1400BD3D0 (ProcessorpSelectProcessorSetFromPartitions.c)
 *     ProcessorpSelectProcessorSetFromClusters @ 0x1400BEBD8 (ProcessorpSelectProcessorSetFromClusters.c)
 *     IrqPolicyQuerySteeringEnabledForInterrupt @ 0x1400BF378 (IrqPolicyQuerySteeringEnabledForInterrupt.c)
 *     ProcessorpValidateTargetSet @ 0x1400BF678 (ProcessorpValidateTargetSet.c)
 *     IcIsInterruptTypeSecondary @ 0x1400C0568 (IcIsInterruptTypeSecondary.c)
 *     ProcessorpFindAffinitizedIdtEntries @ 0x1400C110C (ProcessorpFindAffinitizedIdtEntries.c)
 */

NTSTATUS __fastcall ProcessorpFindIdtEntriesApic(
        struct _DEVICE_OBJECT *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        char a6,
        char a7,
        int a8)
{
  __int64 v8; // rdi
  int DeviceIdtAssignment; // ebx
  __int128 v12; // xmm0
  NTSTATUS result; // eax
  unsigned __int16 v14; // r14
  char v15; // r15
  __int64 v16; // r12
  __int64 v17; // rdx
  __int64 v18; // rcx
  int SecondaryInterruptAffinity; // esi
  __int64 v20; // r8
  __int128 v21; // xmm0
  __int64 v22; // r8
  __int128 v23; // xmm0
  char v24; // al
  __int64 v25; // r8
  char v26; // al
  __int64 v27; // r8
  _BYTE v28[4]; // [rsp+58h] [rbp-49h] BYREF
  __int16 v29[2]; // [rsp+5Ch] [rbp-45h] BYREF
  unsigned int v30; // [rsp+60h] [rbp-41h] BYREF
  __int128 v31; // [rsp+68h] [rbp-39h] BYREF
  __int64 v32; // [rsp+78h] [rbp-29h] BYREF
  __int128 v33; // [rsp+80h] [rbp-21h] BYREF
  __int128 v34; // [rsp+90h] [rbp-11h]
  void *v35; // [rsp+A0h] [rbp-1h]
  char v38[8]; // [rsp+118h] [rbp+77h]

  LODWORD(v32) = 0;
  v8 = a3;
  v28[0] = 0;
  v29[0] = 0;
  v33 = 0LL;
  v30 = 0;
  v34 = 0LL;
  v31 = 0LL;
  DeviceIdtAssignment = ProcessorGetDeviceIdtAssignment(0LL, a5, a8, &v33);
  if ( DeviceIdtAssignment >= 0 )
  {
    v12 = v33;
    *(_DWORD *)(v8 + 32) = DWORD1(v34);
    v29[0] = IrqMachinePolicy;
    *(_BYTE *)(v8 + 4) = 1;
    *(_OWORD *)(v8 + 16) = v12;
    IrqPolicyGetDevicePolicy(a1, a2, (__int64)&v31, (int *)&v32, v29, (__int64)v28);
    *(_WORD *)(v8 + 6) = v29[0];
    return DeviceIdtAssignment;
  }
  if ( *(_BYTE *)(v8 + 4) )
  {
    v14 = *(_WORD *)(v8 + 6);
    v15 = *(_BYTE *)(v8 + 8);
    v31 = *(_OWORD *)(v8 + 16);
  }
  else
  {
    if ( (int)IrqPolicyGetDevicePolicy(a1, a2, (__int64)&v31, (int *)&v32, v29, (__int64)v28) >= 0 )
    {
      v14 = v29[0];
    }
    else
    {
      v14 = IrqMachinePolicy;
      v31 = 0LL;
    }
    v15 = v28[0];
  }
  v16 = 16LL;
  v38[0] = a7 & 1;
  v32 = 16LL;
  v29[0] = v14;
  if ( IcIsInterruptTypeSecondary(a5) )
  {
    SecondaryInterruptAffinity = ProcessorpGetSecondaryInterruptAffinity(v18, a4, &v31);
    if ( SecondaryInterruptAffinity < 0 )
      return SecondaryInterruptAffinity;
    v15 = 0;
    SecondaryInterruptAffinity = ProcessorpFindAffinitizedIdtEntries(
                                   (__int64)a1,
                                   (__int64 *)&v31,
                                   v20,
                                   v38[0],
                                   a4,
                                   a5,
                                   a6,
                                   a8,
                                   &v30,
                                   0LL);
LABEL_12:
    if ( SecondaryInterruptAffinity < 0 )
      return SecondaryInterruptAffinity;
    goto LABEL_13;
  }
  if ( !(_QWORD)v31 )
    goto LABEL_25;
  if ( ProcessorpValidateTargetSet((__int64)&v31) )
  {
    result = ProcessorpFindAffinitizedIdtEntries((__int64)a1, (__int64 *)&v31, v22, v38[0], a4, a5, a6, a8, &v30, 0LL);
    v17 = (unsigned int)result;
    if ( result >= 0 )
    {
      v23 = v31;
      *(_DWORD *)(v8 + 32) = v30;
      *(_OWORD *)(v8 + 16) = v23;
      *(_WORD *)(v8 + 6) = v14;
      *(_BYTE *)(v8 + 8) = v15;
      *(_BYTE *)(v8 + 4) = 1;
      return result;
    }
  }
  else
  {
    v17 = 3221225659LL;
  }
  if ( v14 != 4 )
  {
LABEL_25:
    if ( ProcessorpPreferredCpuSetActive )
      goto LABEL_36;
    SecondaryInterruptAffinity = -1073741275;
    if ( !IrqPolicyQuerySteeringEnabledForInterrupt(a5, v17, a6 & 1) || v14 != 6 )
      goto LABEL_36;
    v24 = 0;
    v30 = 0;
    v33 = 0LL;
    v35 = 0LL;
    v34 = 0LL;
    v28[0] = 0;
    while ( !v24 )
    {
      SecondaryInterruptAffinity = ProcessorpSelectProcessorSetFromPartitions(
                                     (__int64 *)6,
                                     v15,
                                     (__int64)&v31,
                                     (__int64)&v33);
      if ( SecondaryInterruptAffinity < 0 )
        break;
      SecondaryInterruptAffinity = ProcessorpFindAffinitizedIdtEntries(
                                     (__int64)a1,
                                     (__int64 *)&v31,
                                     v25,
                                     v38[0],
                                     a4,
                                     a5,
                                     a6,
                                     a8,
                                     &v30,
                                     v28);
      if ( SecondaryInterruptAffinity >= 0 )
        break;
      v24 = v28[0];
    }
    v8 = a3;
    v14 = v29[0];
    v16 = v32;
    if ( v35 )
      IntPartFree(v35);
    if ( SecondaryInterruptAffinity < 0 )
    {
LABEL_36:
      v26 = 0;
      v30 = 0;
      SecondaryInterruptAffinity = -1073741275;
      v33 = 0LL;
      v35 = 0LL;
      v34 = 0LL;
      for ( v28[0] = 0; !v26; v26 = v28[0] )
      {
        LOBYTE(v17) = v15;
        SecondaryInterruptAffinity = ProcessorpSelectProcessorSetFromClusters(
                                       v14,
                                       v17,
                                       ProcessorpPreferredCpuSetActive,
                                       (__int64)&v31,
                                       (__int64)&v33);
        if ( SecondaryInterruptAffinity < 0 )
          break;
        SecondaryInterruptAffinity = ProcessorpFindAffinitizedIdtEntries(
                                       (__int64)a1,
                                       (__int64 *)&v31,
                                       v27,
                                       v38[0],
                                       a4,
                                       a5,
                                       a6,
                                       a8,
                                       &v30,
                                       v28);
        if ( SecondaryInterruptAffinity >= 0 )
          goto LABEL_12;
      }
      return SecondaryInterruptAffinity;
    }
LABEL_13:
    v21 = v31;
    *(_DWORD *)(v8 + 32) = v30;
    *(_OWORD *)(v16 + v8) = v21;
    *(_WORD *)(v8 + 6) = v14;
    *(_BYTE *)(v8 + 8) = v15;
    *(_BYTE *)(v8 + 4) = 1;
    return SecondaryInterruptAffinity;
  }
  if ( !a2 || (*(_BYTE *)(a2 + 4) & 4) == 0 )
  {
    v14 = IrqMachinePolicy;
    v29[0] = IrqMachinePolicy;
    goto LABEL_25;
  }
  return v17;
}
