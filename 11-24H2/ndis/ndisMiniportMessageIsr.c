/*
 * XREFs of ndisMiniportMessageIsr @ 0x140046520
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ndisMiniportMessageIsr(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  __int64 v6; // r12
  unsigned __int64 v7; // r13
  int v8; // r15d
  _PROCESSOR_NUMBER v9; // edx
  unsigned int Number; // esi
  unsigned __int8 v11; // r14
  __int64 v12; // r8
  unsigned __int64 v13; // rax
  __int64 v15; // rax
  int v16; // r15d
  unsigned __int64 v17; // rdi
  unsigned int v18; // r12d
  unsigned __int64 v19; // rsi
  int v20; // r15d
  __int64 v21; // r14
  ULONG ProcessorIndexFromNumber; // eax
  _PROCESSOR_NUMBER ProcNumber; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v24; // [rsp+34h] [rbp-44h] BYREF
  __int64 v25; // [rsp+38h] [rbp-40h]
  char v26; // [rsp+88h] [rbp+10h] BYREF
  unsigned __int8 v27; // [rsp+98h] [rbp+20h]

  v3 = *(_QWORD *)(a2 + 96);
  v4 = 0;
  v24 = 0;
  v26 = 0;
  v6 = 0LL;
  v7 = a3;
  LOWORD(v8) = 0;
  v9 = *(_PROCESSOR_NUMBER *)(v3 + 48);
  Number = -1;
  ProcNumber = 0;
  if ( *(_DWORD *)&v9 || *(_DWORD *)(v3 + 80) )
  {
    v6 = *(_QWORD *)(v3 + 40);
    v8 = *(_DWORD *)(v3 + 80);
    ProcNumber = v9;
    if ( !v6 )
      v6 = *(_QWORD *)(v3 + 40);
  }
  if ( (v8 & 2) != 0 )
  {
    Number = KeGetPcr()->Prcb.Number;
    *(_QWORD *)(ndisPcwOffsetToPerCpuData + v6 + ndisPcwPerCpuDataStride * Number + 312) = __rdtsc();
  }
  v27 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *, unsigned int *))(a2 + 176))(
          *(_QWORD *)(a2 + 8),
          a3,
          &v26,
          &v24);
  v11 = v27;
  if ( (v8 & 2) != 0 )
  {
    if ( Number == -1 )
      Number = KeGetPcr()->Prcb.Number;
    v12 = v6 + ndisPcwPerCpuDataStride * Number + ndisPcwOffsetToPerCpuData;
    v13 = __rdtsc();
    *(_QWORD *)(v12 + 112) += (((unsigned __int64)HIDWORD(v13) << 32) | (unsigned int)v13) - *(_QWORD *)(v12 + 312);
    *(_QWORD *)(v12 + 312) = 0LL;
  }
  if ( v11 && (ProcNumber.Group & 2) != 0 )
  {
    if ( Number == -1 )
      Number = KeGetPcr()->Prcb.Number;
    ++*(_QWORD *)(ndisPcwOffsetToPerCpuData + v6 + ndisPcwPerCpuDataStride * Number + 8);
  }
  if ( v26 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 104));
    if ( KeInsertQueueDpc(
           (PRKDPC)(*(_QWORD *)(a2 + 224)
                  + ((unsigned __int64)(ndisMaxNumberOfProcessors + (_DWORD)v7 * (ndisMaxNumberOfProcessors + 1)) << 6)),
           (PVOID)v7,
           0LL) )
    {
      if ( (v8 & 0x1000) != 0 )
      {
        if ( Number == -1 )
          Number = KeGetPcr()->Prcb.Number;
        *(_QWORD *)(ndisPcwOffsetToPerCpuData + v6 + ndisPcwPerCpuDataStride * Number + 400) = __rdtsc();
      }
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)(a2 + 104));
    }
    return v11;
  }
  v15 = *(_QWORD *)(a2 + 96);
  v16 = 0;
  v17 = v24;
  v18 = -1;
  v25 = 0LL;
  if ( *(_DWORD *)(v15 + 48) || *(_DWORD *)(v15 + 80) )
  {
    v16 = *(_DWORD *)(v15 + 48);
    v25 = *(_QWORD *)(v15 + 40);
    if ( !v25 )
      v25 = *(_QWORD *)(v15 + 40);
  }
  if ( *(_BYTE *)(a2 + 193) )
    v19 = *(_QWORD *)(a2 + 224) + ((unsigned __int64)((unsigned int)v7 * (ndisMaxNumberOfProcessors + 1)) << 6);
  else
    v19 = *(_QWORD *)(a2 + 112);
  ProcNumber = 0;
  v20 = v16 & 0x1000000;
  if ( v20 )
    v4 = KeGetPcr()->Prcb.Number;
  if ( !v24 )
    return v11;
  v21 = v25;
  do
  {
    if ( (v17 & 1) != 0 )
    {
      ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
      if ( ProcessorIndexFromNumber != -1 )
      {
        if ( ProcessorIndexFromNumber != v4 && v20 )
        {
          if ( v18 == -1 )
            v18 = KeGetPcr()->Prcb.Number;
          ++*(_QWORD *)(ndisPcwOffsetToPerCpuData + v21 + ndisPcwPerCpuDataStride * v18 + 96);
        }
        _InterlockedIncrement((volatile signed __int32 *)(a2 + 104));
        if ( !KeInsertQueueDpc((PRKDPC)(v19 + ((unsigned __int64)ProcessorIndexFromNumber << 6)), (PVOID)v7, 0LL) )
          _InterlockedDecrement((volatile signed __int32 *)(a2 + 104));
      }
    }
    ++ProcNumber.Number;
    v17 >>= 1;
  }
  while ( v17 );
  return v27;
}
