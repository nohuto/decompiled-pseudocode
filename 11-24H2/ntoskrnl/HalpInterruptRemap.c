/*
 * XREFs of HalpInterruptRemap @ 0x140540EC4
 * Callers:
 *     HalpInterruptConnect @ 0x140540AD8 (HalpInterruptConnect.c)
 *     HalpTimerConfigureInterrupt @ 0x140547380 (HalpTimerConfigureInterrupt.c)
 *     HalpIommuConfigureInterrupt @ 0x140552024 (HalpIommuConfigureInterrupt.c)
 *     HaliAddInterruptRemapping @ 0x1406FD9B0 (HaliAddInterruptRemapping.c)
 * Callees:
 *     HalpInterruptGsiToLine @ 0x1403B9678 (HalpInterruptGsiToLine.c)
 *     HalpInterruptApplyOverrides @ 0x1403B96C4 (HalpInterruptApplyOverrides.c)
 *     HalpInterruptLookupController @ 0x1403B9D14 (HalpInterruptLookupController.c)
 *     HalpInterruptModel @ 0x1403BAB3C (HalpInterruptModel.c)
 *     HalpInterruptDestinationToTarget @ 0x1403BAD88 (HalpInterruptDestinationToTarget.c)
 *     HalpIommuUpdateRemappingTableEntry @ 0x1403BAEFC (HalpIommuUpdateRemappingTableEntry.c)
 *     HalpInterruptFindBestRouting @ 0x1403BB29C (HalpInterruptFindBestRouting.c)
 *     HalpInterruptSetProblemEx @ 0x1403BC82C (HalpInterruptSetProblemEx.c)
 *     HalpInterruptRemapUpdateDeliveryMode @ 0x1404A8874 (HalpInterruptRemapUpdateDeliveryMode.c)
 *     HalpInterruptSetRemappedLineStateInternal @ 0x140541328 (HalpInterruptSetRemappedLineStateInternal.c)
 *     HalpPopulateMsiMessages @ 0x1405413F0 (HalpPopulateMsiMessages.c)
 *     HalpIrtAllocateIndex @ 0x140701254 (HalpIrtAllocateIndex.c)
 *     HalpIrtFreeIndex @ 0x1407016B0 (HalpIrtFreeIndex.c)
 *     HalpHvMapDeviceMsiRange @ 0x140B4C708 (HalpHvMapDeviceMsiRange.c)
 *     HalpHvMapIoApicDeviceInterrupt @ 0x140B4C838 (HalpHvMapIoApicDeviceInterrupt.c)
 */

__int64 __fastcall HalpInterruptRemap(
        unsigned int a1,
        unsigned int a2,
        __int64 a3,
        char a4,
        unsigned int *a5,
        unsigned int a6)
{
  unsigned int *v6; // rsi
  unsigned int v7; // r10d
  char v8; // al
  unsigned int *v9; // r15
  unsigned int *v10; // r14
  unsigned __int64 v11; // rdx
  unsigned int v12; // r11d
  __int128 *v13; // rcx
  unsigned int v14; // edi
  __int64 v15; // r12
  int BestRouting; // ebx
  unsigned int v17; // eax
  int v18; // eax
  int v20; // edx
  int v21; // r8d
  __int64 v22; // r9
  unsigned int *v23; // rbx
  unsigned int v24; // r13d
  __int64 v25; // r15
  int v26; // eax
  int v27; // eax
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rcx
  ULONG_PTR *v31; // r13
  __int64 v32; // r9
  unsigned int v33; // edx
  int v34; // eax
  int v35; // eax
  unsigned int v36; // [rsp+28h] [rbp-79h]
  int v37; // [rsp+48h] [rbp-59h] BYREF
  __int128 v38; // [rsp+50h] [rbp-51h] BYREF
  unsigned int *v39; // [rsp+60h] [rbp-41h]
  __int128 v40; // [rsp+68h] [rbp-39h] BYREF
  __int128 v41; // [rsp+78h] [rbp-29h] BYREF
  __int128 v42; // [rsp+88h] [rbp-19h]
  __int64 v43; // [rsp+98h] [rbp-9h]
  __int64 v46; // [rsp+108h] [rbp+67h]
  char v47; // [rsp+110h] [rbp+6Fh]

  v47 = a4;
  v46 = a3;
  v6 = a5;
  *(_QWORD *)&v38 = 1LL;
  v40 = 0LL;
  v7 = a2;
  v37 = -1;
  v8 = *((_BYTE *)a5 + 8);
  v9 = a5 + 10;
  v10 = a5 + 6;
  v11 = (unsigned __int64)*((unsigned __int8 *)a5 + 4) >> 4;
  v41 = 0LL;
  v12 = a1;
  *(_QWORD *)((char *)&v38 + 4) = 0LL;
  v13 = &HalpHwToSwIrqlMap;
  LODWORD(v41) = -1;
  *((_BYTE *)&HalpHwToSwIrqlMap + v11) = v8;
  v14 = -1;
  v15 = a6;
  v43 = 0LL;
  BestRouting = -1073741823;
  LODWORD(v40) = v6[3];
  DWORD2(v40) = v6[4];
  LODWORD(v43) = v6[1];
  v17 = *v6;
  v39 = v9;
  *((_QWORD *)&v38 + 1) = v10;
  HIDWORD(v40) = 16;
  DWORD1(v41) = 1;
  v42 = 0LL;
  if ( !v17 )
  {
    v29 = v6[14];
    a5 = 0LL;
    if ( (int)HalpInterruptGsiToLine(v29, &a5) >= 0 )
    {
      HalpInterruptApplyOverrides((__int64)&a5, &v40, (_DWORD *)&v40 + 2);
      if ( (_DWORD)v40 == 3 )
      {
        BYTE4(v40) = 1;
        DWORD2(v40) = 0;
        LODWORD(v40) = 2;
      }
      else if ( (_DWORD)v40 == 4 )
      {
        BYTE4(v40) = 1;
        DWORD2(v40) = 0;
        LODWORD(v40) = 1;
      }
      else
      {
        BYTE4(v40) = 0;
      }
      v31 = HalpInterruptLookupController((int)a5);
      if ( v31 )
      {
        BestRouting = HalpInterruptDestinationToTarget(v30, (__int64)&v38, (_DWORD *)&v41 + 2);
        if ( BestRouting < 0 )
        {
          v36 = 2894;
          goto LABEL_17;
        }
        BestRouting = HalpInterruptFindBestRouting((int *)&a5, v41);
        if ( BestRouting < 0 )
          return (unsigned int)BestRouting;
        HalpInterruptRemapUpdateDeliveryMode((__int64)v6, (__int64)&v40);
        if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x100) != 0 && (unsigned int)HalpInterruptModel() == 1 )
        {
          v33 = *v9;
          if ( (*v9 & 0x40000000) == 0 )
          {
            v34 = HalpIrtAllocateIndex(&v37, 1LL, a1, a2, v46, v47, v6);
            BestRouting = v34;
            if ( v34 < 0 )
            {
              HalpInterruptSetProblemEx(
                0LL,
                31,
                v34,
                (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c",
                0xB77u);
              goto LABEL_8;
            }
            v14 = v37;
            v33 = *v9 & 0xC0000000 | v37 & 0x3FFFFFFF;
            *v9 = v33;
          }
          HalpIommuUpdateRemappingTableEntry(0, v33 & 0x3FFFFFFF, (__int64)&v40, v32);
          v35 = *v9 & 0x3FFFFFFF;
          DWORD2(v41) = 7;
          LODWORD(v42) = v35;
          v10 = v6 + 6;
        }
        if ( qword_140FC0EE8 )
        {
          v27 = HalpHvMapIoApicDeviceInterrupt(*((unsigned int *)v31 + 64), &v40, v10);
          BestRouting = v27;
          if ( v27 < 0 )
          {
            v36 = 2965;
            goto LABEL_27;
          }
        }
        HIDWORD(v40) &= ~0x10u;
        v28 = HalpInterruptSetRemappedLineStateInternal(v31, &a5, &v40);
        goto LABEL_53;
      }
      HalpInterruptSetProblemEx(0LL, 17, 1, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 0xB3Fu);
    }
    else
    {
      HalpInterruptSetProblemEx(0LL, 18, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 0xB12u);
    }
    return (unsigned int)-1073741811;
  }
  if ( v17 != 3 )
  {
    HalpInterruptSetProblemEx(0LL, 19, 2, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 0xBAEu);
    return (unsigned int)BestRouting;
  }
  if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x100) == 0 )
  {
LABEL_24:
    if ( qword_140FC0EE8 )
    {
      v27 = HalpHvMapDeviceMsiRange(v12, v7, a3, a4, (__int64)v6, v15);
      BestRouting = v27;
      if ( v27 < 0 )
      {
        v36 = 2791;
LABEL_27:
        v21 = v27;
        v20 = 31;
        goto LABEL_18;
      }
      return 0;
    }
    v28 = HalpPopulateMsiMessages(&v38, v6, (unsigned int)v15);
LABEL_53:
    BestRouting = v28;
    if ( v28 < 0 )
      goto LABEL_9;
    return 0;
  }
  if ( (*v9 & 0x40000000) != 0 )
  {
    v14 = *v9 & 0x3FFFFFFF;
    goto LABEL_15;
  }
  v18 = HalpIrtAllocateIndex(&v37, a6, v12, v7, a3, a4, v6);
  BestRouting = v18;
  if ( v18 >= 0 )
  {
    v14 = v37;
LABEL_15:
    BestRouting = HalpInterruptDestinationToTarget((__int64)v13, (__int64)&v38, (_DWORD *)&v41 + 2);
    if ( BestRouting < 0 )
    {
      v36 = 2758;
LABEL_17:
      v20 = 19;
      v21 = 1;
LABEL_18:
      HalpInterruptSetProblemEx(0LL, v20, v21, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", v36);
      goto LABEL_9;
    }
    HalpInterruptRemapUpdateDeliveryMode((__int64)v6, (__int64)&v40);
    if ( (_DWORD)v15 )
    {
      v23 = v9;
      v24 = v14;
      v25 = v15;
      do
      {
        v26 = *(v23 - 9);
        *v23 ^= (v24 ^ *v23) & 0x3FFFFFFF;
        LODWORD(v43) = v26;
        HalpIommuUpdateRemappingTableEntry(1, v24++ & 0x3FFFFFFF, (__int64)&v40, v22);
        v23 += 22;
        --v25;
      }
      while ( v25 );
      v9 = v6 + 10;
    }
    v12 = a1;
    v7 = a2;
    LODWORD(a3) = v46;
    a4 = v47;
    goto LABEL_24;
  }
  HalpInterruptSetProblemEx(0LL, 31, v18, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 0xAB6u);
LABEL_8:
  v14 = v37;
LABEL_9:
  if ( v14 != -1 && (*v9 & 0x40000000) == 0 )
    HalpIrtFreeIndex(v14, (unsigned int)v15, *v6);
  return (unsigned int)BestRouting;
}
