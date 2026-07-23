/*
 * XREFs of PoGetPerfStateAndParkingInfo @ 0x140370500
 * Callers:
 *     ExpQueryProcessorInformationCounters @ 0x1409D78F0 (ExpQueryProcessorInformationCounters.c)
 *     ExpQuerySystemInformation @ 0x140ADDAE0 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140339940 (KeQueryActiveProcessorCountEx.c)
 *     PpmGetThroughputInfoCallback @ 0x14036FE50 (PpmGetThroughputInfoCallback.c)
 *     PopExecuteOnTargetProcessors @ 0x140370234 (PopExecuteOnTargetProcessors.c)
 *     KeGetProcessorIndexFromNumber @ 0x140370440 (KeGetProcessorIndexFromNumber.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall PoGetPerfStateAndParkingInfo(PPROCESSOR_NUMBER ProcNumber, __int64 a2, __int64 a3, _QWORD *a4)
{
  ULONG ProcessorIndexFromNumber; // edi
  __int64 v9; // rdi
  _DWORD *v10; // r8
  int *v11; // r11
  _DWORD *v12; // r10
  _DWORD *v13; // rcx
  unsigned int v14; // esi
  unsigned int v15; // r14d
  int v16; // eax
  unsigned int v17; // edx
  __int64 v18; // rcx
  __int64 v19; // rax
  unsigned int v20; // r10d
  unsigned int v21; // eax
  unsigned int v22; // esi
  unsigned int v23; // ecx
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // bl
  int v26; // edi
  unsigned int v27; // ecx
  unsigned int v28; // r9d
  __int64 v29; // rcx
  __int64 *v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // [rsp+20h] [rbp-158h] BYREF
  _QWORD v33[33]; // [rsp+28h] [rbp-150h] BYREF

  memset_0(v33, 0, 0x100uLL);
  *(_OWORD *)a2 = 0LL;
  *(_OWORD *)(a2 + 16) = 0LL;
  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(ProcNumber);
  if ( ProcessorIndexFromNumber >= KeQueryActiveProcessorCountEx(0xFFFFu) )
  {
    v9 = 0LL;
  }
  else
  {
    _mm_lfence();
    v9 = KiProcessorBlock[ProcessorIndexFromNumber];
  }
  v10 = *(_DWORD **)(v9 + 35248);
  v11 = (int *)(a2 + 24);
  v12 = *(_DWORD **)(v9 + 35256);
  v13 = (_DWORD *)(a2 + 4);
  if ( v10 && v12 )
  {
    v14 = v12[20];
    if ( v14 >= v10[132] )
      v14 = v10[132];
    if ( a2 != -4 )
      *v13 = v12[21];
    v15 = v10[132] * v10[112] / 0x64u;
    if ( a2 )
      *(_DWORD *)a2 = (v14 < v10[114]) + 1;
    if ( a2 != -24 )
    {
      v16 = v12[8];
      *v11 = v16;
      if ( v12[7] < 0x64u )
        *v11 = v16 | 4;
    }
  }
  else
  {
    if ( a2 != -4 )
      *v13 = *(_DWORD *)(v9 + 68);
    v15 = *(_DWORD *)(v9 + 68);
    if ( a2 )
      *(_DWORD *)a2 = 0;
    if ( a2 != -24 )
      *v11 = 0;
  }
  v17 = 100;
  if ( a2 != -8 )
  {
    v18 = *(_QWORD *)(v9 + 35248);
    v19 = *(_QWORD *)(v9 + 35256);
    if ( v18 && v19 )
    {
      if ( *(_BYTE *)(v19 + 112) )
        v20 = *(_DWORD *)(v19 + 132);
      else
        v20 = *(_DWORD *)(v19 + 80);
      v21 = *(_DWORD *)(v18 + 528);
      if ( v20 < v21 )
        v21 = v20;
    }
    else
    {
      v21 = 100;
    }
    *(_DWORD *)(a2 + 8) = v21;
  }
  if ( v10 )
  {
    v22 = v10[112];
    *(_DWORD *)(a2 + 12) = v10[136];
    v23 = v10[134];
    if ( v23 >= v10[135] )
      v23 = v10[135];
    *(_DWORD *)(a2 + 16) = v23;
    if ( v10[113] != v10[115] )
      *(_BYTE *)(a2 + 28) = 1;
    if ( v23 < 0x64 )
      *(_DWORD *)(a2 + 24) |= 1u;
    v17 = 100 * v15 / v10[112];
  }
  else
  {
    v22 = *(_DWORD *)(v9 + 68);
  }
  *(_DWORD *)(a2 + 20) = v17;
  result = *(unsigned __int8 *)(v9 + 35340);
  *(_BYTE *)(a2 + 29) = result;
  if ( a4 )
  {
    result = *(_QWORD *)(v9 + 35344);
    *a4 = result;
  }
  if ( a3 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    result = PpmGetThroughputInfoCallback((LARGE_INTEGER *)v9, a3, v22);
    v26 = result;
    if ( KiIrqlFlags )
      result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    if ( v26 < 0 )
    {
      v32 = 2097153LL;
      memset_0(v33, 0, 0x100uLL);
      v27 = *((_DWORD *)KiGlobalState + KeGetProcessorIndexFromNumber(ProcNumber));
      v28 = v27 & 0x3F;
      v29 = v27 >> 6;
      if ( (_DWORD)v29 )
      {
        if ( WORD1(v32) <= (unsigned int)v29 )
          return PopExecuteOnTargetProcessors((__int64)&v32, (__int64)PpmGetThroughputInfoCallback, a3, v22);
        LOWORD(v32) = v29 + 1;
      }
      v30 = &v33[v29];
      v31 = *v30;
      _bittestandset64(&v31, v28);
      *v30 = v31;
      return PopExecuteOnTargetProcessors((__int64)&v32, (__int64)PpmGetThroughputInfoCallback, a3, v22);
    }
  }
  return result;
}
