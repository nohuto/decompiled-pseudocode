/*
 * XREFs of HalpIommuInitializeDmarPageTable @ 0x140565654
 * Callers:
 *     HalpIommuCreateDmarPageTable @ 0x14056537C (HalpIommuCreateDmarPageTable.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1402932D0 (MmGetPhysicalAddress.c)
 *     HalpIommuAllocateAndZeroPageTable @ 0x14039A69C (HalpIommuAllocateAndZeroPageTable.c)
 *     HalpIommuFlushPhysicalPtesFromCacheSize @ 0x14039AEE8 (HalpIommuFlushPhysicalPtesFromCacheSize.c)
 *     Feature_Test57481295__private_IsEnabledDeviceUsageNoInline @ 0x140539A0C (Feature_Test57481295__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall HalpIommuInitializeDmarPageTable(
        int a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        char *a7)
{
  __int64 result; // rax
  __int64 (__fastcall **v11)(); // rax
  unsigned int v12; // edx
  int v13; // r8d
  const char *v14; // rcx
  unsigned int v15; // eax
  void *v16; // rax
  __int64 v17; // rsi
  int v18; // r13d
  unsigned int v19; // ebp
  _DWORD *v20; // r15
  unsigned int v21; // r12d
  __int64 v22; // r14
  void *v23; // rax

  memset_0(a7, 0, 0x60uLL);
  if ( a1 )
  {
    switch ( a1 )
    {
      case 1:
        if ( (unsigned int)Feature_Test57481295__private_IsEnabledDeviceUsageNoInline() )
        {
          *((_DWORD *)a7 + 7) = 3;
          *((_QWORD *)a7 + 11) = IvtFlPhyPteInterface;
          result = 0LL;
        }
        else
        {
          result = 3221225485LL;
        }
        if ( (int)result < 0 )
          return result;
        goto LABEL_15;
      case 2:
        v11 = HsaFlPhyPteInterface;
        break;
      case 3:
        v11 = HsaSlPhyPteInterface;
        break;
      default:
        return 3221225485LL;
    }
  }
  else
  {
    v11 = IvtSlPhyPteInterface;
  }
  *((_DWORD *)a7 + 7) = 3;
  *((_QWORD *)a7 + 11) = v11;
LABEL_15:
  v12 = 0;
  *(_DWORD *)a7 = a1;
  *((_DWORD *)a7 + 6) = a3;
  v13 = 12;
  if ( a3 )
  {
    v14 = "\t";
    do
    {
      *(_DWORD *)&v14[a7 - "\t" + 36] = *(_DWORD *)v14;
      v15 = a3 - v12++;
      *(_DWORD *)&a7[4 * v15 + 56] = v13;
      v13 += *(_DWORD *)v14;
      v14 += 4;
    }
    while ( v12 < a3 );
  }
  *((_DWORD *)a7 + 8) = 0;
  v16 = HalpIommuAllocateAndZeroPageTable((__int64)a7, 0, a6);
  *((_QWORD *)a7 + 2) = v16;
  v17 = (__int64)v16;
  if ( v16 )
  {
    v18 = 0;
    v19 = a3 - a2;
    if ( a3 == a2 )
    {
LABEL_23:
      *((_QWORD *)a7 + 1) = 0LL;
      return 0LL;
    }
    v20 = a7 + 36;
    while ( 1 )
    {
      v21 = v18 + 1;
      v22 = 1 << *v20 << *((_DWORD *)a7 + 7);
      v23 = HalpIommuAllocateAndZeroPageTable((__int64)a7, v18 + 1, a6);
      *(_QWORD *)(v22 + v17) = v23;
      if ( !v23 )
        break;
      MmGetPhysicalAddress(v23);
      guard_dispatch_icall_no_overrides(v17, a3 - v18 - 1);
      HalpIommuFlushPhysicalPtesFromCacheSize(v17, (unsigned int)(1 << *((_DWORD *)a7 + 7)));
      v17 = *(_QWORD *)(v22 + v17);
      ++v20;
      ++v18;
      if ( v21 >= v19 )
        goto LABEL_23;
    }
  }
  return 3221225626LL;
}
