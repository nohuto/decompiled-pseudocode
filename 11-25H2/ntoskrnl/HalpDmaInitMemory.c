/*
 * XREFs of HalpDmaInitMemory @ 0x140BFF824
 * Callers:
 *     HalpDmaInitDiscard @ 0x140BFEFD4 (HalpDmaInitDiscard.c)
 * Callees:
 *     HalpDmaCvmSetPageShareability @ 0x1406F41CC (HalpDmaCvmSetPageShareability.c)
 *     HalpAllocPhysicalMemoryEx @ 0x140C55764 (HalpAllocPhysicalMemoryEx.c)
 */

__int64 __fastcall HalpDmaInitMemory(int a1)
{
  __int64 v2; // rax
  int v3; // ebx
  unsigned int v4; // edx
  unsigned int v5; // edi
  unsigned int v6; // r15d
  unsigned int v7; // ebx
  __int64 v8; // rax
  unsigned int v9; // ebx
  __int64 result; // rax
  __int64 v11; // [rsp+68h] [rbp+38h] BYREF
  __int64 v12; // [rsp+70h] [rbp+40h] BYREF

  HalpDmaAdapterListLock = 0LL;
  qword_140FC2988 = (__int64)&HalpDmaAdapterList;
  HalpDmaAdapterList = (__int64)&HalpDmaAdapterList;
  LOWORD(HalpNewAdapter.Header.Lock) = 1;
  HalpNewAdapter.Header.Size = 6;
  HalpNewAdapter.Header.SignalState = 1;
  HalpNewAdapter.Header.WaitListHead.Blink = &HalpNewAdapter.Header.WaitListHead;
  HalpNewAdapter.Header.WaitListHead.Flink = &HalpNewAdapter.Header.WaitListHead;
  v11 = 0x1000000LL;
  v2 = HalpAllocPhysicalMemoryEx(a1, (unsigned int)&v11, 16, 0x10000, 0LL);
  v12 = v2;
  v3 = v2 != 0 ? 0x10000 : 0;
  if ( HalpDmaCvmConfiguration )
  {
    HalpDmaCvmSetPageShareability(v2, 0x10u, 1, &v12);
    v2 = v12;
  }
  qword_140FC2588 = v2;
  dword_140FC2580 = v3;
  qword_140FC2768 = HalpAllocPhysicalMemoryEx(a1, (unsigned int)&v11, 16, 0x10000, 0LL);
  v4 = 32;
  dword_140FC2760 = qword_140FC2768 != 0 ? 0x10000 : 0;
  v5 = (unsigned __int64)HalpMaximumPhysicalMemoryAddress < 0x100000000LL ? 0x10000 : 196608;
  v6 = v5 >> 12;
  do
  {
    v7 = v4;
    v11 = (1LL << v4) - 1;
    v8 = HalpAllocPhysicalMemoryEx(a1, (unsigned int)&v11, v6, 0x10000, 0LL);
    v4 = v7;
    if ( v8 )
      break;
    v4 = v7 + 1;
  }
  while ( v7 + 1 <= 0x20 );
  qword_140FC2668 = v8;
  dword_140FC2660 = v8 != 0 ? v5 : 0;
  if ( v4 < 0x40 )
    qword_140FC2630 = (1LL << v4) - 1;
  else
    qword_140FC2630 = -1LL;
  v9 = 32;
  while ( 1 )
  {
    v11 = (1LL << v9) - 1;
    result = HalpAllocPhysicalMemoryEx(a1, (unsigned int)&v11, v6, 0x10000, 0LL);
    v12 = result;
    if ( result )
      break;
    if ( ++v9 > 0x20 )
    {
      v5 = 0;
      break;
    }
  }
  if ( HalpDmaCvmConfiguration )
  {
    HalpDmaCvmSetPageShareability(result, v5 >> 12, 1, &v12);
    result = v12;
  }
  qword_140FC2848 = result;
  dword_140FC2840 = v5;
  if ( v9 < 0x40 )
  {
    result = (1LL << v9) - 1;
    qword_140FC2810 = result;
  }
  else
  {
    qword_140FC2810 = -1LL;
  }
  return result;
}
