/*
 * XREFs of ACPIBuildProcessRunMethodPhaseRecurse @ 0x140017990
 * Callers:
 *     <none>
 * Callees:
 *     ACPIExtListEnumNext @ 0x1400172C4 (ACPIExtListEnumNext.c)
 *     ACPIExtListTestElement @ 0x140017BF0 (ACPIExtListTestElement.c)
 *     ACPIBuildCompleteMustSucceed @ 0x14001E380 (ACPIBuildCompleteMustSucceed.c)
 *     WPP_RECORDER_SF_Lqss @ 0x14001E4C0 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIExtListStartEnum @ 0x14003D65C (ACPIExtListStartEnum.c)
 *     memset @ 0x140070F40 (memset.c)
 */

__int64 __fastcall ACPIBuildProcessRunMethodPhaseRecurse(__int64 a1)
{
  int v1; // eax
  char v2; // bl
  _QWORD *v3; // rsi
  int v5; // edi
  char *i; // rax
  char *v7; // r14
  const char *v8; // rax
  const char *v9; // rdx
  __int64 v10; // rcx
  int v12; // r15d
  int v13; // r12d
  PVOID v14; // rax
  __int64 v15; // rdi
  __int64 *v16; // rax
  __int64 v17; // [rsp+40h] [rbp-68h]
  _QWORD v18[3]; // [rsp+50h] [rbp-58h] BYREF
  __int128 v19; // [rsp+68h] [rbp-40h]
  __int64 v20; // [rsp+78h] [rbp-30h]
  int v21; // [rsp+80h] [rbp-28h]
  int v22; // [rsp+84h] [rbp-24h]

  v1 = *(_DWORD *)(a1 + 84);
  v2 = 0;
  v3 = *(_QWORD **)(a1 + 40);
  *(_DWORD *)(a1 + 32) = 0;
  v5 = 0;
  v19 = 0LL;
  v22 = 0;
  if ( (v1 & 4) != 0 )
  {
    v18[1] = 0LL;
    v18[0] = v3 + 100;
    v20 = 816LL;
    v18[2] = &AcpiDeviceTreeLock;
    v21 = 2;
    for ( i = (char *)ACPIExtListStartEnum(v18); ; i = ACPIExtListEnumNext((__int64)v18) )
    {
      v7 = i;
      if ( !(unsigned __int8)ACPIExtListTestElement(v18, v5 >= 0) )
        break;
      v12 = *(_DWORD *)(a1 + 84);
      v13 = *(_DWORD *)(a1 + 80);
      v14 = ExAllocateFromNPagedLookasideList(&BuildRequestLookAsideList);
      v15 = (__int64)v14;
      if ( v14 )
      {
        if ( *((_DWORD *)v7 + 183) )
        {
          _InterlockedIncrement((volatile signed __int32 *)v7 + 183);
          memset(v14, 0, 0x88uLL);
          *(_DWORD *)(v15 + 16) = 1599293264;
          *(_QWORD *)(v15 + 128) = &AcpiBuildRunMethodList;
          *(_DWORD *)(v15 + 24) = 3;
          *(_QWORD *)(v15 + 40) = v7;
          *(_DWORD *)(v15 + 80) = v13;
          *(_DWORD *)(v15 + 84) = v12;
          *(_DWORD *)(v15 + 20) = 4108;
          KeAcquireSpinLockAtDpcLevel(&AcpiBuildQueueLock);
          v16 = (__int64 *)qword_14008B398;
          if ( *(__int64 **)qword_14008B398 != &AcpiBuildQueueList )
            __fastfail(3u);
          *(_QWORD *)v15 = &AcpiBuildQueueList;
          *(_QWORD *)(v15 + 8) = v16;
          *v16 = v15;
          qword_14008B398 = v15;
          KeReleaseSpinLockFromDpcLevel(&AcpiBuildQueueLock);
          v5 = 259;
        }
        else
        {
          ExFreeToNPagedLookasideList(&BuildRequestLookAsideList, v14);
          v5 = -1073741130;
        }
      }
      else
      {
        v5 = -1073741670;
      }
    }
  }
  v8 = byte_140075488;
  v9 = byte_140075488;
  if ( v3 )
  {
    v10 = v3[1];
    v2 = (char)v3;
    if ( (v10 & 0x200000000000LL) != 0 )
    {
      v8 = (const char *)v3[76];
      if ( (v10 & 0x400000000000LL) != 0 )
        v9 = (const char *)v3[77];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v17 = (__int64)v9;
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_Lqss(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v9,
      6,
      65,
      (__int64)&WPP_a066bce47e7f3a3d1099cda73e5d7dd3_Traceguids,
      v5,
      v2,
      (__int64)v8,
      v17);
  }
  ACPIBuildCompleteMustSucceed(0LL);
  return (unsigned int)v5;
}
