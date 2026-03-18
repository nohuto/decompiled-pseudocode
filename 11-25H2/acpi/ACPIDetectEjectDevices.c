/*
 * XREFs of ACPIDetectEjectDevices @ 0x14003CD1C
 * Callers:
 *     ACPIDockIrpQueryEjectRelations @ 0x140099818 (ACPIDockIrpQueryEjectRelations.c)
 *     ACPIBusAndFilterIrpQueryEjectRelations @ 0x1400B529C (ACPIBusAndFilterIrpQueryEjectRelations.c)
 * Callees:
 *     ACPIExtListEnumNext @ 0x1400172C4 (ACPIExtListEnumNext.c)
 *     ACPIExtListTestElement @ 0x140017BF0 (ACPIExtListTestElement.c)
 *     ACPIInitReferenceDeviceExtension @ 0x140017C58 (ACPIInitReferenceDeviceExtension.c)
 *     WPP_RECORDER_SF_qL @ 0x14002A120 (WPP_RECORDER_SF_qL.c)
 *     ACPIExtListStartEnum @ 0x14003D65C (ACPIExtListStartEnum.c)
 *     ACPIBuildMissingEjectionRelations @ 0x14003D6B8 (ACPIBuildMissingEjectionRelations.c)
 *     ACPIExtListExitEnumEarly @ 0x140056580 (ACPIExtListExitEnumEarly.c)
 *     ACPIExtListIsMemberOfRelation @ 0x140060268 (ACPIExtListIsMemberOfRelation.c)
 *     memmove @ 0x140070C40 (memmove.c)
 *     ACPIDetectCouldExtensionBeInRelation @ 0x1400AFB28 (ACPIDetectCouldExtensionBeInRelation.c)
 */

__int64 __fastcall ACPIDetectEjectDevices(__int64 a1, PVOID *a2, __int64 a3)
{
  unsigned int *v3; // rdi
  unsigned int v4; // r14d
  char *i; // rax
  char *v9; // rbx
  int v10; // eax
  __int64 v11; // rcx
  PVOID *v12; // r12
  __int64 v13; // rcx
  bool v14; // zf
  __int64 Pool2; // rax
  _DWORD *v16; // rsi
  unsigned int v18; // ebx
  char *j; // rax
  char *v20; // r15
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rax
  unsigned int v27; // ecx
  __int64 v28; // rbx
  PVOID *v29; // r14
  NTSTATUS v30; // eax
  __int64 v31; // rdx
  void *v32; // rcx
  __int64 v33; // [rsp+30h] [rbp-50h]
  __int64 v34; // [rsp+40h] [rbp-40h] BYREF
  __int64 v35; // [rsp+48h] [rbp-38h]
  PKSPIN_LOCK SpinLock; // [rsp+50h] [rbp-30h]
  KIRQL NewIrql[16]; // [rsp+58h] [rbp-28h]
  __int64 v38; // [rsp+68h] [rbp-18h]
  int v39; // [rsp+70h] [rbp-10h]
  int v40; // [rsp+74h] [rbp-Ch]
  __int64 v41; // [rsp+C0h] [rbp+40h] BYREF
  PVOID *v42; // [rsp+C8h] [rbp+48h]

  v42 = a2;
  *(_OWORD *)NewIrql = 0LL;
  v40 = 0;
  v3 = 0LL;
  v41 = 0LL;
  v4 = 0;
  ACPIBuildMissingEjectionRelations();
  if ( a2 && *a2 )
  {
    v4 = *(_DWORD *)*a2;
    v3 = (unsigned int *)*a2;
  }
  v35 = 0LL;
  v34 = a1 + 832;
  v38 = 848LL;
  SpinLock = &AcpiDeviceTreeLock;
  v39 = 1;
  for ( i = (char *)ACPIExtListStartEnum(&v34); ; i = ACPIExtListEnumNext((__int64)&v34) )
  {
    v9 = i;
    if ( *(_QWORD *)&NewIrql[8] + v38 == v34 )
      break;
    if ( v39 == 1 )
    {
      ACPIInitReferenceDeviceExtension(*(__int64 *)&NewIrql[8]);
      KeReleaseSpinLock(SpinLock, NewIrql[0]);
    }
    if ( (*((_QWORD *)v9 + 1) & 0x2000000000002LL) == 0 )
    {
      if ( *((_QWORD *)v9 + 98) )
      {
        v10 = ACPIDetectCouldExtensionBeInRelation((_DWORD)v9, (_DWORD)v3, 0, 0, (__int64)&v41);
        if ( !v41 && v10 >= 0 )
        {
          v11 = *((_QWORD *)v9 + 98);
          if ( v11 )
          {
            if ( !(unsigned __int8)ACPIExtListIsMemberOfRelation(v11, v3) )
              ++v4;
          }
        }
      }
    }
  }
  v12 = v42;
  if ( v39 )
    KeReleaseSpinLock(SpinLock, NewIrql[0]);
  if ( a3 )
  {
    if ( (*(_QWORD *)(a3 + 8) & 0x2000000000002LL) == 0 )
    {
      v13 = *(_QWORD *)(a3 + 784);
      if ( v13 )
      {
        if ( !(unsigned __int8)ACPIExtListIsMemberOfRelation(v13, v3) )
          ++v4;
      }
    }
  }
  if ( v3 )
    v14 = v4 == *v3;
  else
    v14 = v4 == 0;
  if ( !v14 )
  {
    Pool2 = ExAllocatePool2(256LL, 8 * v4 + 8, 1148216129LL);
    v16 = (_DWORD *)Pool2;
    if ( !Pool2 )
      return 3221225626LL;
    if ( v3 )
    {
      memmove((void *)(Pool2 + 8), v3 + 2, 8LL * *v3);
      v18 = *v3;
    }
    else
    {
      v18 = 0;
    }
    v35 = 0LL;
    v34 = a1 + 832;
    v38 = 848LL;
    SpinLock = &AcpiDeviceTreeLock;
    v39 = 1;
    for ( j = (char *)ACPIExtListStartEnum(&v34); ; j = ACPIExtListEnumNext((__int64)&v34) )
    {
      v20 = j;
      if ( !ACPIExtListTestElement((__int64)&v34, v4 > v18) )
        break;
      if ( !v20 )
      {
        ACPIExtListExitEnumEarly(&v34);
        break;
      }
      if ( (*((_QWORD *)v20 + 1) & 0x202000000000002LL) == 0 )
      {
        v21 = *((_QWORD *)v20 + 98);
        if ( v21 )
        {
          if ( !(unsigned __int8)ACPIExtListIsMemberOfRelation(v21, v3) && v18 < v4 )
          {
            v23 = v18++;
            *(_QWORD *)&v16[2 * v23 + 2] = v22;
          }
        }
      }
    }
    if ( a3 )
    {
      if ( (*(_QWORD *)(a3 + 8) & 0x2000000000002LL) == 0 )
      {
        v24 = *(_QWORD *)(a3 + 784);
        if ( v24 )
        {
          if ( !(unsigned __int8)ACPIExtListIsMemberOfRelation(v24, v3) && v18 < v4 )
          {
            v26 = v18++;
            *(_QWORD *)&v16[2 * v26 + 2] = v25;
          }
        }
      }
    }
    *v16 = v18;
    if ( v3 )
      v27 = *v3;
    else
      v27 = 0;
    if ( v27 < v18 )
    {
      v28 = v18 - v27;
      v29 = (PVOID *)&v16[2 * v27 + 2];
      do
      {
        v30 = ObReferenceObjectByPointer(*v29, 0, 0LL, 0);
        if ( v30 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v33) = v30;
            WPP_RECORDER_SF_qL(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              0x16u,
              0xFu,
              (__int64)&WPP_588943f8ee273fe6f3e6467e1f1953a3_Traceguids,
              *v29,
              v33);
          }
          v31 = (unsigned int)--*v16;
          v32 = *(void **)&v16[2 * v31 + 2];
          *(_QWORD *)&v16[2 * v31 + 2] = *v29;
          *v29 = v32;
        }
        ++v29;
        --v28;
      }
      while ( v28 );
    }
    if ( v3 )
      ExFreePoolWithTag(*v12, 0);
    *v12 = v16;
  }
  return 0LL;
}
