/*
 * XREFs of PspQueryRateControlHistory @ 0x1408DCF0C
 * Callers:
 *     PspEnforceLimitsJobPreCallback @ 0x1408DCE00 (PspEnforceLimitsJobPreCallback.c)
 *     NtQueryInformationJobObject @ 0x1409ECC70 (NtQueryInformationJobObject.c)
 * Callees:
 *     RtlClearBits @ 0x140337F60 (RtlClearBits.c)
 *     RtlNumberOfSetBits @ 0x140395F40 (RtlNumberOfSetBits.c)
 *     PspJobIoRateQueryHistory @ 0x14045D758 (PspJobIoRateQueryHistory.c)
 *     RtlCopyBitMap @ 0x1404614D0 (RtlCopyBitMap.c)
 *     KeQuerySchedulingGroupHistory @ 0x140482A3C (KeQuerySchedulingGroupHistory.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PspNetRateControlDispatch @ 0x140767EC4 (PspNetRateControlDispatch.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspQueryRateControlHistory(__int64 a1, int a2, char a3, _DWORD *a4, int a5)
{
  __int64 result; // rax
  char v7; // r12
  __int64 *v10; // rcx
  __int64 v11; // rdi
  unsigned int v12; // ecx
  unsigned int v13; // esi
  __int64 v14; // r15
  int v15; // ebx
  int v16; // eax
  void *v17; // r8
  unsigned int v18; // r13d
  unsigned int v19; // ebx
  __int64 *v20; // rdx
  unsigned int v22; // [rsp+24h] [rbp-4Ch] BYREF
  ULONG TargetBit; // [rsp+28h] [rbp-48h] BYREF
  __int64 v24; // [rsp+30h] [rbp-40h] BYREF
  _RTL_BITMAP BitMapHeader; // [rsp+38h] [rbp-38h] BYREF
  __int128 v26; // [rsp+48h] [rbp-28h] BYREF
  __int128 v27; // [rsp+58h] [rbp-18h]

  result = 0LL;
  LODWORD(BitMapHeader.Buffer) = 0;
  *(_QWORD *)&BitMapHeader.SizeOfBitMap = 0LL;
  v22 = 0;
  v7 = a3;
  TargetBit = 0;
  v24 = 0LL;
  *a4 = 0;
  v26 = 0LL;
  v27 = 0LL;
  if ( a5 == 1 )
  {
    v11 = a1 + 1592;
  }
  else
  {
    result = a1 + 1544;
    v10 = (__int64 *)(a1 + 1240);
    if ( !a5 )
      v10 = (__int64 *)result;
    v11 = *v10;
  }
  if ( v11 )
  {
    if ( a5 )
    {
      if ( a5 == 1 )
      {
        result = PspJobIoRateQueryHistory(a1, &v24, &v22, &TargetBit);
        if ( (int)result < 0 )
          return result;
      }
      else
      {
        KeQuerySchedulingGroupHistory(v11 + 128, &v24, &v22, &TargetBit);
      }
      v12 = v22;
      v13 = TargetBit;
      v14 = v24;
    }
    else
    {
      DWORD2(v26) = 1;
      *(_QWORD *)&v26 = *(_QWORD *)(v11 + 56);
      result = PspNetRateControlDispatch((__int64)&v26);
      if ( (int)result < 0 )
        return result;
      v14 = v27;
      v12 = DWORD2(v27);
      v13 = HIDWORD(v27);
    }
    v15 = a2 - 2;
    if ( v15 )
    {
      if ( v15 == 1 )
        v16 = 600000;
      else
        v16 = 10000;
    }
    else
    {
      v16 = 60000;
    }
    v17 = *(void **)(v11 + 24);
    v18 = (v12 + v16 - 1) / v12;
    v19 = (((v18 + 7) >> 3) + 7) & 0xFFFFFFF8;
    if ( v17 && *(_QWORD *)(v11 + 32) < (unsigned __int64)v19 )
    {
      ExFreePoolWithTag(v17, 0x624A7350u);
      *(_QWORD *)(v11 + 24) = 0LL;
      *(_QWORD *)(v11 + 32) = 0LL;
    }
    else if ( v17 )
    {
      if ( v13 >= 8 * v19 )
      {
        memset_0(v17, 0, v19);
      }
      else if ( v13 )
      {
        RtlCopyBitMap((PRTL_BITMAP)(v11 + 8), (PRTL_BITMAP)(v11 + 8), v13);
        RtlClearBits((PRTL_BITMAP)(v11 + 8), 0, v13);
      }
LABEL_23:
      v20 = *(__int64 **)(v11 + 24);
      BitMapHeader.SizeOfBitMap = v18;
      if ( v13 > 0x40 )
        LOBYTE(v13) = 64;
      *v20 = v14 & ((1LL << v13) - 1) | *v20 & ~((1LL << v13) - 1);
      BitMapHeader.Buffer = *(unsigned int **)(v11 + 24);
      result = 100 * RtlNumberOfSetBits(&BitMapHeader) / v18;
      if ( (unsigned int)result >= 0x3C )
      {
        *a4 = 3;
      }
      else if ( (unsigned int)result >= 0x28 )
      {
        *a4 = 2;
      }
      else if ( (unsigned int)result >= 0x14 )
      {
        *a4 = 1;
      }
      if ( v7 )
        return (__int64)memset_0(*(void **)(v11 + 24), 0, *(_QWORD *)(v11 + 32));
      return result;
    }
    result = ExAllocatePool2(0x100uLL);
    *(_QWORD *)(v11 + 24) = result;
    if ( !result )
      return result;
    *(_QWORD *)(v11 + 16) = result;
    *(_DWORD *)(v11 + 8) = 8 * v19;
    *(_QWORD *)(v11 + 32) = v19;
    v7 = a3;
    goto LABEL_23;
  }
  return result;
}
