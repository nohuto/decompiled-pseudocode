/*
 * XREFs of HalpInterruptRemap @ 0x14053E7C4
 * Callers:
 *     HalpInterruptConnect @ 0x14053E3D8 (HalpInterruptConnect.c)
 *     HalpTimerConfigureInterrupt @ 0x140544C40 (HalpTimerConfigureInterrupt.c)
 *     HalpIommuConfigureInterrupt @ 0x14054F964 (HalpIommuConfigureInterrupt.c)
 *     HaliAddInterruptRemapping @ 0x1406FB5F0 (HaliAddInterruptRemapping.c)
 * Callees:
 *     HalpInterruptDestinationToTarget @ 0x140370DAC (HalpInterruptDestinationToTarget.c)
 *     HalpInterruptLookupController @ 0x1403726E4 (HalpInterruptLookupController.c)
 *     HalpInterruptApplyOverrides @ 0x1403732F0 (HalpInterruptApplyOverrides.c)
 *     HalpInterruptGsiToLine @ 0x1403733E0 (HalpInterruptGsiToLine.c)
 *     HalpInterruptModel @ 0x1403744A8 (HalpInterruptModel.c)
 *     HalpIommuUpdateRemappingTableEntry @ 0x1403746F4 (HalpIommuUpdateRemappingTableEntry.c)
 *     HalpInterruptFindBestRouting @ 0x1403752D0 (HalpInterruptFindBestRouting.c)
 *     HalpInterruptSetProblemEx @ 0x14037537C (HalpInterruptSetProblemEx.c)
 *     HalpInterruptRemapUpdateDeliveryMode @ 0x1404A2DE4 (HalpInterruptRemapUpdateDeliveryMode.c)
 *     HalpInterruptSetRemappedLineStateInternal @ 0x14053EC28 (HalpInterruptSetRemappedLineStateInternal.c)
 *     HalpPopulateMsiMessages @ 0x14053ECF0 (HalpPopulateMsiMessages.c)
 *     HalpIrtAllocateIndex @ 0x1406FEE94 (HalpIrtAllocateIndex.c)
 *     HalpIrtFreeIndex @ 0x1406FF2F0 (HalpIrtFreeIndex.c)
 *     HalpHvMapDeviceMsiRange @ 0x140B4E748 (HalpHvMapDeviceMsiRange.c)
 *     HalpHvMapIoApicDeviceInterrupt @ 0x140B4E878 (HalpHvMapIoApicDeviceInterrupt.c)
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
  unsigned int *v22; // rbx
  unsigned int v23; // r13d
  __int64 v24; // r15
  int v25; // eax
  int v26; // eax
  int v27; // eax
  unsigned int v28; // ecx
  __int64 v29; // rcx
  ULONG_PTR *v30; // r13
  unsigned int v31; // edx
  int v32; // eax
  int v33; // eax
  unsigned int v34; // [rsp+28h] [rbp-79h]
  int v35; // [rsp+48h] [rbp-59h] BYREF
  __int128 v36; // [rsp+50h] [rbp-51h] BYREF
  unsigned int *v37; // [rsp+60h] [rbp-41h]
  __int128 v38; // [rsp+68h] [rbp-39h] BYREF
  __int128 v39; // [rsp+78h] [rbp-29h] BYREF
  __int128 v40; // [rsp+88h] [rbp-19h]
  __int64 v41; // [rsp+98h] [rbp-9h]
  __int64 v44; // [rsp+108h] [rbp+67h]
  char v45; // [rsp+110h] [rbp+6Fh]

  v45 = a4;
  v44 = a3;
  v6 = a5;
  *(_QWORD *)&v36 = 1LL;
  v38 = 0LL;
  v7 = a2;
  v35 = -1;
  v8 = *((_BYTE *)a5 + 8);
  v9 = a5 + 10;
  v10 = a5 + 6;
  v11 = (unsigned __int64)*((unsigned __int8 *)a5 + 4) >> 4;
  v39 = 0LL;
  v12 = a1;
  *(_QWORD *)((char *)&v36 + 4) = 0LL;
  v13 = &HalpHwToSwIrqlMap;
  LODWORD(v39) = -1;
  *((_BYTE *)&HalpHwToSwIrqlMap + v11) = v8;
  v14 = -1;
  v15 = a6;
  v41 = 0LL;
  BestRouting = -1073741823;
  LODWORD(v38) = v6[3];
  DWORD2(v38) = v6[4];
  LODWORD(v41) = v6[1];
  v17 = *v6;
  v37 = v9;
  *((_QWORD *)&v36 + 1) = v10;
  HIDWORD(v38) = 16;
  DWORD1(v39) = 1;
  v40 = 0LL;
  if ( !v17 )
  {
    v28 = v6[14];
    a5 = 0LL;
    if ( (int)HalpInterruptGsiToLine(v28, &a5) >= 0 )
    {
      HalpInterruptApplyOverrides((__int64)&a5, &v38, (_DWORD *)&v38 + 2);
      if ( (_DWORD)v38 == 3 )
      {
        BYTE4(v38) = 1;
        DWORD2(v38) = 0;
        LODWORD(v38) = 2;
      }
      else if ( (_DWORD)v38 == 4 )
      {
        BYTE4(v38) = 1;
        DWORD2(v38) = 0;
        LODWORD(v38) = 1;
      }
      else
      {
        BYTE4(v38) = 0;
      }
      v30 = HalpInterruptLookupController((int)a5);
      if ( v30 )
      {
        BestRouting = HalpInterruptDestinationToTarget(v29, (__int64)&v36, (_DWORD *)&v39 + 2);
        if ( BestRouting < 0 )
        {
          v34 = 2894;
          goto LABEL_17;
        }
        BestRouting = HalpInterruptFindBestRouting((int *)&a5, v39);
        if ( BestRouting < 0 )
          return (unsigned int)BestRouting;
        HalpInterruptRemapUpdateDeliveryMode((__int64)v6, (__int64)&v38);
        if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x100) != 0 && (unsigned int)HalpInterruptModel() == 1 )
        {
          v31 = *v9;
          if ( (*v9 & 0x40000000) == 0 )
          {
            v32 = HalpIrtAllocateIndex(&v35, 1LL, a1, a2, v44, v45, v6);
            BestRouting = v32;
            if ( v32 < 0 )
            {
              HalpInterruptSetProblemEx(
                0LL,
                31,
                v32,
                (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c",
                0xB77u);
              goto LABEL_8;
            }
            v14 = v35;
            v31 = *v9 & 0xC0000000 | v35 & 0x3FFFFFFF;
            *v9 = v31;
          }
          HalpIommuUpdateRemappingTableEntry(0, v31 & 0x3FFFFFFF);
          v33 = *v9 & 0x3FFFFFFF;
          DWORD2(v39) = 7;
          LODWORD(v40) = v33;
          v10 = v6 + 6;
        }
        if ( qword_140FC1148 )
        {
          v26 = HalpHvMapIoApicDeviceInterrupt(*((unsigned int *)v30 + 64), &v38, v10);
          BestRouting = v26;
          if ( v26 < 0 )
          {
            v34 = 2965;
            goto LABEL_27;
          }
        }
        HIDWORD(v38) &= ~0x10u;
        v27 = HalpInterruptSetRemappedLineStateInternal(v30, &a5, &v38);
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
    if ( qword_140FC1148 )
    {
      v26 = HalpHvMapDeviceMsiRange(v12, v7, a3, a4, (__int64)v6, v15);
      BestRouting = v26;
      if ( v26 < 0 )
      {
        v34 = 2791;
LABEL_27:
        v21 = v26;
        v20 = 31;
        goto LABEL_18;
      }
      return 0;
    }
    v27 = HalpPopulateMsiMessages(&v36, v6, (unsigned int)v15);
LABEL_53:
    BestRouting = v27;
    if ( v27 < 0 )
      goto LABEL_9;
    return 0;
  }
  if ( (*v9 & 0x40000000) != 0 )
  {
    v14 = *v9 & 0x3FFFFFFF;
    goto LABEL_15;
  }
  v18 = HalpIrtAllocateIndex(&v35, a6, v12, v7, a3, a4, v6);
  BestRouting = v18;
  if ( v18 >= 0 )
  {
    v14 = v35;
LABEL_15:
    BestRouting = HalpInterruptDestinationToTarget((__int64)v13, (__int64)&v36, (_DWORD *)&v39 + 2);
    if ( BestRouting < 0 )
    {
      v34 = 2758;
LABEL_17:
      v20 = 19;
      v21 = 1;
LABEL_18:
      HalpInterruptSetProblemEx(0LL, v20, v21, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", v34);
      goto LABEL_9;
    }
    HalpInterruptRemapUpdateDeliveryMode((__int64)v6, (__int64)&v38);
    if ( (_DWORD)v15 )
    {
      v22 = v9;
      v23 = v14;
      v24 = v15;
      do
      {
        v25 = *(v22 - 9);
        *v22 ^= (v23 ^ *v22) & 0x3FFFFFFF;
        LODWORD(v41) = v25;
        HalpIommuUpdateRemappingTableEntry(1, v23++ & 0x3FFFFFFF);
        v22 += 22;
        --v24;
      }
      while ( v24 );
      v9 = v6 + 10;
    }
    v12 = a1;
    v7 = a2;
    LODWORD(a3) = v44;
    a4 = v45;
    goto LABEL_24;
  }
  HalpInterruptSetProblemEx(0LL, 31, v18, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 0xAB6u);
LABEL_8:
  v14 = v35;
LABEL_9:
  if ( v14 != -1 && (*v9 & 0x40000000) == 0 )
    HalpIrtFreeIndex(v14, (unsigned int)v15, *v6);
  return (unsigned int)BestRouting;
}
