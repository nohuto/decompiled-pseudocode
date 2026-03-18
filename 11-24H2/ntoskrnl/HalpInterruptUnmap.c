/*
 * XREFs of HalpInterruptUnmap @ 0x1406FDA28
 * Callers:
 *     HalpTimerUnmapInterrupt @ 0x140548A10 (HalpTimerUnmapInterrupt.c)
 *     HaliRemoveInterruptRemapping @ 0x1406FDA00 (HaliRemoveInterruptRemapping.c)
 * Callees:
 *     HalpInterruptGsiToLine @ 0x1403B9678 (HalpInterruptGsiToLine.c)
 *     HalpInterruptFindLines @ 0x1403B97B4 (HalpInterruptFindLines.c)
 *     HalpInterruptLookupController @ 0x1403B9D14 (HalpInterruptLookupController.c)
 *     HalpInterruptModel @ 0x1403BAB3C (HalpInterruptModel.c)
 *     HalpSetIrtEntry @ 0x1403BAFC0 (HalpSetIrtEntry.c)
 *     HalpInterruptSetProblemEx @ 0x1403BC82C (HalpInterruptSetProblemEx.c)
 *     HalpInterruptIsHvMsiRemappingSupported @ 0x1404A6FBC (HalpInterruptIsHvMsiRemappingSupported.c)
 *     HalpInterruptIsRemappingRequired @ 0x1404AD420 (HalpInterruptIsRemappingRequired.c)
 *     xHalUnmaskInterrupt @ 0x1404D6880 (xHalUnmaskInterrupt.c)
 *     HalpIrtFreeIndex @ 0x1407016B0 (HalpIrtFreeIndex.c)
 *     HalpHvUnmapDeviceMsiRange @ 0x140B4C910 (HalpHvUnmapDeviceMsiRange.c)
 *     HalpHvUnmapIoApicDeviceInterrupt @ 0x140B4C9B4 (HalpHvUnmapIoApicDeviceInterrupt.c)
 */

__int64 __fastcall HalpInterruptUnmap(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int *a5,
        unsigned int a6)
{
  _DWORD *v6; // r12
  unsigned int v7; // ebx
  unsigned int v8; // eax
  int v9; // eax
  int v10; // edx
  int v11; // r8d
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // r9
  _DWORD *v17; // rbx
  _DWORD *v18; // r14
  __int64 v19; // r15
  __int64 result; // rax
  __int64 v21; // rcx
  ULONG_PTR *v22; // r14
  _QWORD *Lines; // rsi
  __int64 v24; // r9
  unsigned int v25; // ecx
  unsigned int v26; // [rsp+20h] [rbp-50h]
  __int64 v27; // [rsp+30h] [rbp-40h] BYREF
  __int128 v28; // [rsp+38h] [rbp-38h] BYREF
  __int128 v29; // [rsp+48h] [rbp-28h]
  __int128 v30; // [rsp+58h] [rbp-18h]
  __int64 v31; // [rsp+68h] [rbp-8h]

  v31 = 0LL;
  v28 = 0LL;
  v6 = a5 + 1;
  v7 = a5[3];
  *((_QWORD *)&v28 + 1) = a5[4];
  v8 = a5[1];
  v29 = 0LL;
  *(_QWORD *)&v29 = 0x1FFFFFFFFLL;
  LODWORD(v31) = v8;
  v9 = *a5;
  LODWORD(v28) = v7;
  v30 = 0LL;
  if ( v9 )
  {
    if ( v9 != 3 )
    {
      v26 = 3225;
      v10 = 19;
      v11 = 2;
      return HalpInterruptSetProblemEx(
               0LL,
               v10,
               v11,
               (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c",
               v26);
    }
    if ( HalpInterruptIsHvMsiRemappingSupported() )
      HalpHvUnmapDeviceMsiRange(v13, v12, v14, v15, (__int64)a5);
    if ( HalpInterruptIsRemappingRequired() )
    {
      v17 = a5 + 10;
      if ( a6 )
      {
        v18 = a5 + 10;
        v19 = a6;
        do
        {
          LODWORD(v31) = *v6;
          HalpSetIrtEntry(1, v18, (__int64)&v28, v16);
          v18 += 22;
          v6 += 22;
          --v19;
        }
        while ( v19 );
      }
      if ( (*v17 & 0x40000000) == 0 )
        HalpIrtFreeIndex(*v17 & 0x3FFFFFFF, a6, *a5);
    }
    return xHalUnmaskInterrupt();
  }
  else
  {
    v21 = a5[14];
    v27 = 0LL;
    if ( (int)HalpInterruptGsiToLine(v21, &v27) < 0 )
    {
      v11 = 0;
      v26 = 3140;
      v10 = 18;
      return HalpInterruptSetProblemEx(
               0LL,
               v10,
               v11,
               (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c",
               v26);
    }
    if ( v7 - 3 <= 1 )
    {
      BYTE4(v28) = 1;
      DWORD2(v28) = 0;
    }
    v22 = HalpInterruptLookupController(v27);
    if ( !v22 )
    {
      v26 = 3172;
      v10 = 17;
      v11 = 1;
      return HalpInterruptSetProblemEx(
               0LL,
               v10,
               v11,
               (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c",
               v26);
    }
    Lines = HalpInterruptFindLines((unsigned int *)&v27);
    if ( Lines )
    {
      if ( HalpInterruptIsHvMsiRemappingSupported() )
      {
        *(_DWORD *)(Lines[5] + 12LL) |= 0x10u;
        HalpHvUnmapIoApicDeviceInterrupt(*((unsigned int *)v22 + 64), Lines[5]);
        *(_DWORD *)(Lines[5] + 12LL) &= ~0x10u;
      }
      if ( HalpInterruptIsRemappingRequired() )
      {
        if ( (unsigned int)HalpInterruptModel() == 1 )
        {
          LODWORD(v31) = a5[1];
          HalpSetIrtEntry(0, a5 + 10, (__int64)&v28, v24);
          v25 = a5[10];
          if ( (v25 & 0x40000000) == 0 )
            HalpIrtFreeIndex(v25 & 0x3FFFFFFF, 1LL, *a5);
        }
      }
      result = Lines[6];
      *(_BYTE *)(result + 12) = 0;
    }
    else
    {
      return HalpInterruptSetProblemEx(
               (__int64)v22,
               18,
               0,
               (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c",
               0xC6Cu);
    }
  }
  return result;
}
