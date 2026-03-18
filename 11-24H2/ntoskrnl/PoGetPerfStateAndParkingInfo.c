/*
 * XREFs of PoGetPerfStateAndParkingInfo @ 0x140434F50
 * Callers:
 *     ExpQueryProcessorInformationCounters @ 0x1409DDD20 (ExpQueryProcessorInformationCounters.c)
 *     ExpQuerySystemInformation @ 0x140ADC240 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1402105E0 (KeQueryActiveProcessorCountEx.c)
 *     PopExecuteOnTargetProcessors @ 0x1403529A4 (PopExecuteOnTargetProcessors.c)
 *     KeGetProcessorIndexFromNumber @ 0x140352BB0 (KeGetProcessorIndexFromNumber.c)
 *     PpmGetThroughputInfoCallback @ 0x1404352D0 (PpmGetThroughputInfoCallback.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall PoGetPerfStateAndParkingInfo(PPROCESSOR_NUMBER ProcNumber, __int64 a2, __int64 a3, _QWORD *a4)
{
  ULONG ProcessorIndexFromNumber; // edi
  __int64 v9; // rdi
  _DWORD *v10; // r8
  int *v11; // r11
  _DWORD *v12; // r10
  unsigned int *v13; // r9
  _DWORD *v14; // rcx
  unsigned int v15; // esi
  unsigned int v16; // r14d
  int v17; // eax
  unsigned int v18; // edx
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned int v21; // r10d
  unsigned int v22; // eax
  unsigned int v23; // esi
  unsigned int v24; // ecx
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // bl
  int v27; // edi
  unsigned int v28; // ecx
  unsigned int v29; // r9d
  __int64 v30; // rcx
  __int64 *v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // [rsp+20h] [rbp-158h] BYREF
  _QWORD v34[33]; // [rsp+28h] [rbp-150h] BYREF

  memset_0(v34, 0, 0x100uLL);
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
  v13 = (unsigned int *)(a2 + 8);
  v14 = (_DWORD *)(a2 + 4);
  if ( v10 && v12 )
  {
    v15 = v12[20];
    if ( v15 >= v10[132] )
      v15 = v10[132];
    if ( a2 != -4 )
      *v14 = v12[21];
    v16 = v10[132] * v10[112] / 0x64u;
    if ( a2 )
      *(_DWORD *)a2 = (v15 < v10[114]) + 1;
    if ( a2 != -24 )
    {
      v17 = v12[8];
      *v11 = v17;
      if ( v12[7] < 0x64u )
        *v11 = v17 | 4;
    }
  }
  else
  {
    if ( a2 != -4 )
      *v14 = *(_DWORD *)(v9 + 68);
    v16 = *(_DWORD *)(v9 + 68);
    if ( a2 )
      *(_DWORD *)a2 = 0;
    if ( a2 != -24 )
      *v11 = 0;
  }
  v18 = 100;
  if ( a2 != -8 )
  {
    v19 = *(_QWORD *)(v9 + 35248);
    v20 = *(_QWORD *)(v9 + 35256);
    if ( v19 && v20 )
    {
      if ( *(_BYTE *)(v20 + 112) )
        v21 = *(_DWORD *)(v20 + 132);
      else
        v21 = *(_DWORD *)(v20 + 80);
      v22 = *(_DWORD *)(v19 + 528);
      if ( v21 < v22 )
        v22 = v21;
    }
    else
    {
      v22 = 100;
    }
    *v13 = v22;
  }
  if ( v10 )
  {
    v23 = v10[112];
    *(_DWORD *)(a2 + 12) = v10[136];
    v24 = v10[134];
    if ( v24 >= v10[135] )
      v24 = v10[135];
    *(_DWORD *)(a2 + 16) = v24;
    if ( v10[113] != v10[115] )
      *(_BYTE *)(a2 + 28) = 1;
    if ( v24 < 0x64 )
      *(_DWORD *)(a2 + 24) |= 1u;
    v18 = 100 * v16 / v10[112];
  }
  else
  {
    v23 = *(_DWORD *)(v9 + 68);
  }
  *(_DWORD *)(a2 + 20) = v18;
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
    result = PpmGetThroughputInfoCallback(v9, a3, v23, v13);
    v27 = result;
    if ( KiIrqlFlags )
      result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    if ( v27 < 0 )
    {
      v33 = 2097153LL;
      memset_0(v34, 0, 0x100uLL);
      v28 = *((_DWORD *)KiGlobalState + KeGetProcessorIndexFromNumber(ProcNumber));
      v29 = v28 & 0x3F;
      v30 = v28 >> 6;
      if ( (_DWORD)v30 )
      {
        if ( WORD1(v33) <= (unsigned int)v30 )
          return PopExecuteOnTargetProcessors((__int64)&v33, (__int64)PpmGetThroughputInfoCallback, a3, v23);
        LOWORD(v33) = v30 + 1;
      }
      v31 = &v34[v30];
      v32 = *v31;
      _bittestandset64(&v32, v29);
      *v31 = v32;
      return PopExecuteOnTargetProcessors((__int64)&v33, (__int64)PpmGetThroughputInfoCallback, a3, v23);
    }
  }
  return result;
}
