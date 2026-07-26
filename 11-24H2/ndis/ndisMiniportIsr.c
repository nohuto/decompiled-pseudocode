/*
 * XREFs of ndisMiniportIsr @ 0x140050240
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ndisMiniportIsr(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // edi
  __int64 v5; // r12
  char v6; // r15
  int v7; // r14d
  unsigned __int8 v8; // si
  unsigned int Number; // ebp
  __int64 v10; // rax
  int v11; // r14d
  unsigned __int64 v12; // rbp
  unsigned int v13; // r12d
  __int64 v14; // r13
  __int64 v15; // r15
  int v16; // r14d
  ULONG ProcessorIndexFromNumber; // eax
  __int64 v19; // r8
  unsigned __int64 v20; // rax
  _BYTE v21[72]; // [rsp+20h] [rbp-48h] BYREF
  _PROCESSOR_NUMBER ProcNumber; // [rsp+78h] [rbp+10h] BYREF
  unsigned int v23; // [rsp+80h] [rbp+18h] BYREF

  v2 = *(_QWORD *)(a2 + 96);
  v3 = 0;
  v23 = 0;
  v21[0] = 0;
  v5 = 0LL;
  v6 = 0;
  LOWORD(v7) = 0;
  if ( !*(_DWORD *)(v2 + 48) && !*(_DWORD *)(v2 + 80) )
    goto LABEL_3;
  v5 = *(_QWORD *)(v2 + 40);
  v6 = *(_DWORD *)(v2 + 48);
  v7 = *(_DWORD *)(v2 + 80);
  if ( !v5 )
    v5 = *(_QWORD *)(v2 + 40);
  if ( (v7 & 2) != 0 )
  {
    Number = KeGetPcr()->Prcb.Number;
    *(_QWORD *)(ndisPcwOffsetToPerCpuData + v5 + ndisPcwPerCpuDataStride * Number + 312) = __rdtsc();
    v8 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, unsigned int *))(a2 + 16))(*(_QWORD *)(a2 + 8), v21, &v23);
    if ( Number == -1 )
      Number = KeGetPcr()->Prcb.Number;
    v19 = v5 + ndisPcwPerCpuDataStride * Number + ndisPcwOffsetToPerCpuData;
    v20 = __rdtsc();
    *(_QWORD *)(v19 + 112) += (((unsigned __int64)HIDWORD(v20) << 32) | (unsigned int)v20) - *(_QWORD *)(v19 + 312);
    *(_QWORD *)(v19 + 312) = 0LL;
  }
  else
  {
LABEL_3:
    v8 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, unsigned int *))(a2 + 16))(*(_QWORD *)(a2 + 8), v21, &v23);
    Number = -1;
  }
  if ( v8 && (v6 & 2) != 0 )
  {
    if ( Number == -1 )
      Number = KeGetPcr()->Prcb.Number;
    ++*(_QWORD *)(ndisPcwOffsetToPerCpuData + v5 + ndisPcwPerCpuDataStride * Number + 8);
  }
  if ( v21[0] )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 104));
    if ( KeInsertQueueDpc((PRKDPC)(a2 + 32), 0LL, 0LL) )
    {
      if ( (v7 & 0x1000) != 0 )
      {
        if ( Number == -1 )
          Number = KeGetPcr()->Prcb.Number;
        *(_QWORD *)(ndisPcwOffsetToPerCpuData + v5 + ndisPcwPerCpuDataStride * Number + 400) = __rdtsc();
      }
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)(a2 + 104));
    }
  }
  else
  {
    v10 = *(_QWORD *)(a2 + 96);
    v11 = 0;
    v12 = v23;
    v13 = -1;
    v14 = 0LL;
    if ( *(_DWORD *)(v10 + 48) || *(_DWORD *)(v10 + 80) )
    {
      v14 = *(_QWORD *)(v10 + 40);
      v11 = *(_DWORD *)(v10 + 48);
      if ( !v14 )
        v14 = *(_QWORD *)(v10 + 40);
    }
    if ( *(_BYTE *)(a2 + 193) )
      v15 = *(_QWORD *)(a2 + 224);
    else
      v15 = *(_QWORD *)(a2 + 112);
    ProcNumber = 0;
    v16 = v11 & 0x1000000;
    if ( v16 )
      v3 = KeGetPcr()->Prcb.Number;
    if ( v23 )
    {
      do
      {
        if ( (v12 & 1) != 0 )
        {
          ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
          if ( ProcessorIndexFromNumber != -1 )
          {
            if ( ProcessorIndexFromNumber != v3 && v16 )
            {
              if ( v13 == -1 )
                v13 = KeGetPcr()->Prcb.Number;
              ++*(_QWORD *)(ndisPcwOffsetToPerCpuData + v14 + ndisPcwPerCpuDataStride * v13 + 96);
            }
            _InterlockedIncrement((volatile signed __int32 *)(a2 + 104));
            if ( !KeInsertQueueDpc((PRKDPC)(v15 + ((unsigned __int64)ProcessorIndexFromNumber << 6)), 0LL, 0LL) )
              _InterlockedDecrement((volatile signed __int32 *)(a2 + 104));
          }
        }
        ++ProcNumber.Number;
        v12 >>= 1;
      }
      while ( v12 );
    }
  }
  return v8;
}
