/*
 * XREFs of KiAllocateHeteroConfigBuffer @ 0x140B579EC
 * Callers:
 *     PoInitHeteroDetection @ 0x140C2F1BC (PoInitHeteroDetection.c)
 * Callees:
 *     KeGetThreadWorkloadClassCount @ 0x1404F5194 (KeGetThreadWorkloadClassCount.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 KiAllocateHeteroConfigBuffer()
{
  unsigned int ThreadWorkloadClassCount; // eax
  __int64 v1; // rbp
  __int64 Pool2; // rax
  __int64 v3; // rsi
  __int64 result; // rax
  _DWORD *v5; // rdi
  __int64 v6; // r12
  _DWORD *v7; // rbx
  __int64 v8; // r14
  __int64 v9; // r15
  unsigned int v10; // [rsp+50h] [rbp+8h]
  __int64 v11; // [rsp+58h] [rbp+10h]

  ThreadWorkloadClassCount = KeGetThreadWorkloadClassCount();
  v1 = ThreadWorkloadClassCount;
  v10 = ThreadWorkloadClassCount;
  Pool2 = ExAllocatePool2(0x40uLL, 16368 * ThreadWorkloadClassCount + 32, 0x6548654Bu);
  v11 = Pool2;
  v3 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  if ( (_DWORD)v1 )
  {
    v5 = (_DWORD *)(Pool2 + 300);
    v6 = v1;
    do
    {
      v7 = v5 + 330;
      v8 = 7LL;
      do
      {
        v9 = 2LL;
        do
        {
          *v7 = 0;
          *(v7 - 1) = 2097153;
          memset_0(v7 + 1, 0, 0x100uLL);
          v7[924] = 0;
          v7[923] = 2097153;
          memset_0(v7 + 925, 0, 0x100uLL);
          v7[1848] = 0;
          v7[1847] = 2097153;
          memset_0(v7 + 1849, 0, 0x100uLL);
          v7[2772] = 0;
          v7[2771] = 2097153;
          memset_0(v7 + 2773, 0, 0x100uLL);
          v7 += 66;
          --v9;
        }
        while ( v9 );
        --v8;
      }
      while ( v8 );
      *(v5 - 66) = 0;
      *(v5 - 67) = 2097153;
      memset_0(v5 - 65, 0, 0x100uLL);
      *v5 = 0;
      *(v5 - 1) = 2097153;
      memset_0(v5 + 1, 0, 0x100uLL);
      v5[66] = 0;
      v5[65] = 2097153;
      memset_0(v5 + 67, 0, 0x100uLL);
      v5[132] = 0;
      v5[131] = 2097153;
      memset_0(v5 + 133, 0, 0x100uLL);
      v5[198] = 0;
      v5[197] = 2097153;
      memset_0(v5 + 199, 0, 0x100uLL);
      v5[264] = 0;
      v5[263] = 2097153;
      memset_0(v5 + 265, 0, 0x100uLL);
      v5 += 4092;
      --v6;
    }
    while ( v6 );
    v3 = v11;
    LODWORD(v1) = v10;
  }
  *(_DWORD *)(v3 + 28) = v1;
  result = 0LL;
  KiHeteroConfig = v3;
  return result;
}
