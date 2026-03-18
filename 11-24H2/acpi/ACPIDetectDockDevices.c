/*
 * XREFs of ACPIDetectDockDevices @ 0x14003D250
 * Callers:
 *     ACPIRootIrpQueryBusRelations @ 0x1400B3F44 (ACPIRootIrpQueryBusRelations.c)
 * Callees:
 *     ACPIGet @ 0x1400157F0 (ACPIGet.c)
 *     ACPIExtListEnumNext @ 0x1400172C4 (ACPIExtListEnumNext.c)
 *     ACPIExtListTestElement @ 0x140017BF0 (ACPIExtListTestElement.c)
 *     WPP_RECORDER_SF_Lqss @ 0x14001E4C0 (WPP_RECORDER_SF_Lqss.c)
 *     WPP_RECORDER_SF_qL @ 0x14002A120 (WPP_RECORDER_SF_qL.c)
 *     ACPIExtListStartEnum @ 0x14003D65C (ACPIExtListStartEnum.c)
 *     ACPIBuildPdo @ 0x140046840 (ACPIBuildPdo.c)
 *     ACPIExtListExitEnumEarly @ 0x140056580 (ACPIExtListExitEnumEarly.c)
 *     ACPIExtListIsMemberOfRelation @ 0x140060268 (ACPIExtListIsMemberOfRelation.c)
 *     memmove @ 0x140070C40 (memmove.c)
 */

__int64 __fastcall ACPIDetectDockDevices(__int64 a1, PVOID *a2)
{
  char v2; // bl
  int v4; // r14d
  unsigned int *v5; // rsi
  unsigned int v6; // r15d
  char *i; // rax
  __int64 v8; // rdi
  bool v9; // zf
  __int64 Pool2; // rax
  _DWORD *v12; // r14
  __int64 v13; // rcx
  const char *v14; // rax
  const char *v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // edi
  char *j; // rax
  char *v19; // r13
  __int64 v20; // rcx
  __int64 v21; // rcx
  unsigned int *v22; // rsi
  unsigned int v23; // ecx
  PVOID *v24; // r12
  __int64 v25; // r13
  PVOID *v26; // r15
  NTSTATUS v27; // eax
  __int64 v28; // rdx
  void *v29; // rcx
  __int64 v30; // [rsp+30h] [rbp-39h]
  __int64 v31; // [rsp+50h] [rbp-19h] BYREF
  __int64 v32; // [rsp+58h] [rbp-11h]
  KSPIN_LOCK *v33; // [rsp+60h] [rbp-9h]
  __int128 v34; // [rsp+68h] [rbp-1h]
  __int64 v35; // [rsp+78h] [rbp+Fh]
  int v36; // [rsp+80h] [rbp+17h]
  int v37; // [rsp+84h] [rbp+1Bh]
  __int64 v38; // [rsp+D0h] [rbp+67h] BYREF
  PVOID *v39; // [rsp+D8h] [rbp+6Fh]
  unsigned int *v40; // [rsp+E0h] [rbp+77h]

  v39 = a2;
  v2 = 0;
  v37 = 0;
  v40 = 0LL;
  v4 = 0;
  v38 = 0LL;
  v5 = 0LL;
  v6 = 0;
  v34 = 0LL;
  if ( a2 && *a2 )
  {
    v6 = *(_DWORD *)*a2;
    v5 = (unsigned int *)*a2;
    v40 = (unsigned int *)*a2;
  }
  v32 = 0LL;
  v31 = a1 + 800;
  v35 = 816LL;
  v33 = &AcpiDeviceTreeLock;
  v36 = 1;
  for ( i = (char *)ACPIExtListStartEnum(&v31); ; i = ACPIExtListEnumNext((__int64)&v31) )
  {
    v8 = (__int64)i;
    if ( !ACPIExtListTestElement((__int64)&v31, v4 >= 0) )
      break;
    if ( !v8 )
    {
      ACPIExtListExitEnumEarly(&v31);
      break;
    }
    if ( _bittest64((const signed __int64 *)(v8 + 8), 0x39u) )
    {
      v38 = 0LL;
      v4 = ACPIGet(v8, 1096045407, -1878783998, 0LL, 0, 0LL, 0LL, (__int64)&v38, 0LL);
      if ( (*(_QWORD *)(v8 + 8) & 0x2000000000002LL) == 0
        || (AcpiOverrideAttributes & 0x80000) != 0 && (*(_DWORD *)(v8 + 1120) & 0x200000) != 0 )
      {
        if ( !*(_QWORD *)(v8 + 768) )
          v4 = ACPIBuildPdo(*(_QWORD *)(*(_QWORD *)(a1 + 768) + 8LL), v8, *(_QWORD *)(a1 + 768), 0LL);
        v13 = *(_QWORD *)(v8 + 768);
        if ( v13 )
        {
          if ( !(unsigned __int8)ACPIExtListIsMemberOfRelation(v13, v5) )
            ++v6;
        }
      }
    }
  }
  if ( v4 < 0 )
  {
    v14 = byte_1400753E8;
    v15 = byte_1400753E8;
    if ( v8 )
    {
      v16 = *(_QWORD *)(v8 + 8);
      v2 = v8;
      if ( (v16 & 0x200000000000LL) != 0 )
      {
        v14 = *(const char **)(v8 + 608);
        if ( (v16 & 0x400000000000LL) != 0 )
          v15 = *(const char **)(v8 + 616);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x12u,
        0xAu,
        (__int64)&WPP_588943f8ee273fe6f3e6467e1f1953a3_Traceguids,
        v4,
        v2,
        v14,
        v15);
    return (unsigned int)v4;
  }
  else
  {
    if ( v5 )
      v9 = v6 == *v5;
    else
      v9 = v6 == 0;
    if ( v9 )
      return 0LL;
    Pool2 = ExAllocatePool2(64LL, 8 * v6 + 8, 1148216129LL);
    v12 = (_DWORD *)Pool2;
    if ( Pool2 )
    {
      if ( v5 )
      {
        memmove((void *)(Pool2 + 8), v5 + 2, 8LL * *v5);
        v17 = *v5;
      }
      else
      {
        v17 = 0;
      }
      v32 = 0LL;
      v31 = a1 + 800;
      v35 = 816LL;
      v33 = &AcpiDeviceTreeLock;
      v36 = 2;
      for ( j = (char *)ACPIExtListStartEnum(&v31); ; j = ACPIExtListEnumNext((__int64)&v31) )
      {
        v19 = j;
        if ( !ACPIExtListTestElement((__int64)&v31, v6 > v17) )
          break;
        if ( v17 < v6 )
        {
          v20 = *((_QWORD *)v19 + 1);
          if ( ((v20 & 0x2000000000002LL) == 0
             || (AcpiOverrideAttributes & 0x80000) != 0 && (*((_DWORD *)v19 + 280) & 0x200000) != 0)
            && (v20 & 0x200000000000000LL) != 0
            && *((_QWORD *)v19 + 96) )
          {
            v21 = v17++;
            *(_QWORD *)&v12[2 * v21 + 2] = *((_QWORD *)v19 + 98);
          }
        }
      }
      v22 = v40;
      *v12 = v17;
      if ( v22 )
        v23 = *v22;
      else
        v23 = 0;
      v24 = v39;
      if ( v23 < v17 )
      {
        v25 = v17 - v23;
        v26 = (PVOID *)&v12[2 * v23 + 2];
        do
        {
          v27 = ObReferenceObjectByPointer(*v26, 0, 0LL, 0);
          if ( v27 < 0 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v30) = v27;
              WPP_RECORDER_SF_qL(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                2u,
                0x15u,
                0xBu,
                (__int64)&WPP_588943f8ee273fe6f3e6467e1f1953a3_Traceguids,
                *v26,
                v30);
            }
            v28 = (unsigned int)--*v12;
            v29 = *(void **)&v12[2 * v28 + 2];
            *(_QWORD *)&v12[2 * v28 + 2] = *v26;
            *v26 = v29;
          }
          ++v26;
          --v25;
        }
        while ( v25 );
        v24 = v39;
      }
      if ( v22 )
        ExFreePoolWithTag(*v24, 0);
      *v24 = v12;
      return 0LL;
    }
    return 3221225626LL;
  }
}
