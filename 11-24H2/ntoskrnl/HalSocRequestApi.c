/*
 * XREFs of HalSocRequestApi @ 0x1404A8A70
 * Callers:
 *     HalpApicSetupRegisterAccess @ 0x140554EF8 (HalpApicSetupRegisterAccess.c)
 *     HalpHvCounterUpdateCallback @ 0x14055CC10 (HalpHvCounterUpdateCallback.c)
 *     HalpHvDiscover @ 0x14055CC50 (HalpHvDiscover.c)
 *     HalpHvTimerInitialize @ 0x14055CDC0 (HalpHvTimerInitialize.c)
 *     HalpApicTimerDiscover @ 0x14055E9D0 (HalpApicTimerDiscover.c)
 *     HalpApicTimerIsInvariant @ 0x14055EBDC (HalpApicTimerIsInvariant.c)
 *     HalpTscDiscover @ 0x14055ED28 (HalpTscDiscover.c)
 *     HalpTscGetAttributes @ 0x14055EE70 (HalpTscGetAttributes.c)
 *     HalpApicGetCpuInfo @ 0x140566354 (HalpApicGetCpuInfo.c)
 *     HalpIvtLegacyProcessDrhdEntry @ 0x140574DF8 (HalpIvtLegacyProcessDrhdEntry.c)
 *     HalpIvtProcessDrhdEntry @ 0x140575658 (HalpIvtProcessDrhdEntry.c)
 *     IvtInitializeIommu @ 0x140B53BE0 (IvtInitializeIommu.c)
 *     HsaInitializeIommu @ 0x140B54D50 (HsaInitializeIommu.c)
 * Callees:
 *     HalpMmAllocateMemoryInternal @ 0x140540620 (HalpMmAllocateMemoryInternal.c)
 *     HalpHvIsFrequencyAvailable @ 0x140548444 (HalpHvIsFrequencyAvailable.c)
 *     HalpTimerIsHypervisorReferenceAvailable @ 0x14055F2DC (HalpTimerIsHypervisorReferenceAvailable.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall HalSocRequestApi(__int64 a1, __int64 a2, int a3, __int64 a4, void *a5)
{
  unsigned int v5; // ebx
  unsigned int v6; // r11d
  __int64 *v8; // r14
  char v9; // r10
  int v10; // r8d
  __int64 (__fastcall **v11)(); // rsi
  unsigned int v12; // edi
  __int64 v14; // r8
  int v15; // r8d
  __int64 v16; // r8
  _QWORD *i; // rax
  __int64 *MemoryInternal; // rax
  __int64 (__fastcall *v19)(); // [rsp+20h] [rbp-38h] BYREF
  __int128 v20; // [rsp+28h] [rbp-30h] BYREF
  __int128 v21; // [rsp+38h] [rbp-20h] BYREF

  v5 = 0;
  v19 = 0LL;
  v6 = a4;
  v8 = 0LL;
  v9 = 0;
  v21 = 0LL;
  v20 = 0LL;
  v10 = a3 - 2;
  if ( v10 )
  {
    v14 = (unsigned int)(v10 - 1);
    if ( (_DWORD)v14 )
    {
      v15 = v14 - 1;
      if ( !v15 )
      {
        v12 = 8;
        v19 = HalpSocApiAllocatePhysicalMemory;
        v11 = &v19;
        goto LABEL_4;
      }
      v16 = (unsigned int)(v15 - 1);
      if ( !(_DWORD)v16 )
      {
        v11 = (__int64 (__fastcall **)())&v21;
        v21 = xmmword_140FC1108;
        v8 = &HalpTimerHvApicCallbackList;
        v9 = 1;
        goto LABEL_3;
      }
      if ( (_DWORD)v16 != 1 )
      {
        HalpTimerLastProblem = 27;
        return (unsigned int)-1073741811;
      }
      if ( (unsigned __int8)HalpHvIsFrequencyAvailable(a1, a2, v16, a4, v19) )
      {
        *(_QWORD *)&v20 = HalpHvGetTscFrequency;
        v11 = (__int64 (__fastcall **)())&v20;
        *((_QWORD *)&v20 + 1) = HalpHvGetApicFrequency;
        goto LABEL_3;
      }
    }
    else if ( (unsigned __int8)HalpTimerIsHypervisorReferenceAvailable(a1, a2, v14, a4, v19) )
    {
      v11 = (__int64 (__fastcall **)())&HalpTimerHypervisorReferenceTime;
      HalpTimerHypervisorReferenceTime = qword_140FC1128;
      v8 = (__int64 *)&HalpTimerHvReferenceCallbackList;
      v12 = 8;
      v9 = 1;
      goto LABEL_4;
    }
    return (unsigned int)-1073741637;
  }
  v11 = &HalpTimerPcCpuApi;
LABEL_3:
  v12 = 16;
LABEL_4:
  if ( !a5 || v6 > v12 )
  {
    HalpTimerLastProblem = 28;
    return (unsigned int)-1073741811;
  }
  if ( v6 < v12 )
  {
    v5 = -1073741789;
    HalpTimerLastProblem = 28;
    return v5;
  }
  if ( v9 )
  {
    if ( a2 )
    {
      for ( i = (_QWORD *)*v8; i; i = (_QWORD *)*i )
      {
        if ( i[1] == a2 )
          goto LABEL_8;
      }
      MemoryInternal = (__int64 *)HalpMmAllocateMemoryInternal(16LL);
      if ( !MemoryInternal )
        return (unsigned int)-1073741801;
      MemoryInternal[1] = a2;
      *MemoryInternal = *v8;
      *v8 = (__int64)MemoryInternal;
      goto LABEL_8;
    }
    return (unsigned int)-1073741811;
  }
LABEL_8:
  memmove(a5, v11, v12);
  return v5;
}
