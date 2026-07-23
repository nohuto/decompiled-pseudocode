/*
 * XREFs of HalpDmaInitMemory @ 0x140C128E8
 * Callers:
 *     HalpDmaInitDiscard @ 0x140C11FD4 (HalpDmaInitDiscard.c)
 * Callees:
 *     HalpAllocPhysicalMemoryEx @ 0x140C69568 (HalpAllocPhysicalMemoryEx.c)
 */

__int64 __fastcall HalpDmaInitMemory(int a1)
{
  unsigned int v2; // edx
  unsigned int v3; // ebx
  unsigned int v4; // ebp
  unsigned int v5; // edi
  __int64 v6; // rax
  unsigned int v7; // ecx
  unsigned int v8; // edi
  __int64 result; // rax
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF

  HalpDmaAdapterListLock = 0LL;
  qword_140FC33C8 = (__int64)&HalpDmaAdapterList;
  HalpDmaAdapterList = (__int64)&HalpDmaAdapterList;
  LOWORD(HalpNewAdapter.Header.Lock) = 1;
  HalpNewAdapter.Header.Size = 6;
  HalpNewAdapter.Header.SignalState = 1;
  HalpNewAdapter.Header.WaitListHead.Blink = &HalpNewAdapter.Header.WaitListHead;
  HalpNewAdapter.Header.WaitListHead.Flink = &HalpNewAdapter.Header.WaitListHead;
  v10 = 0x1000000LL;
  qword_140FC2F90 = HalpAllocPhysicalMemoryEx(a1, (unsigned int)&v10, 16, 0x10000, 0LL);
  dword_140FC2F88 = qword_140FC2F90 != 0 ? 0x10000 : 0;
  qword_140FC3190 = HalpAllocPhysicalMemoryEx(a1, (unsigned int)&v10, 16, 0x10000, 0LL);
  v2 = 32;
  dword_140FC3188 = qword_140FC3190 != 0 ? 0x10000 : 0;
  v3 = (unsigned __int64)HalpMaximumPhysicalMemoryAddress < 0x100000000LL ? 0x10000 : 196608;
  v4 = v3 >> 12;
  do
  {
    v5 = v2;
    v10 = (1LL << v2) - 1;
    v6 = HalpAllocPhysicalMemoryEx(a1, (unsigned int)&v10, v4, 0x10000, 0LL);
    v2 = v5;
    if ( v6 )
      break;
    v2 = v5 + 1;
  }
  while ( v5 + 1 <= 0x20 );
  qword_140FC3090 = v6;
  dword_140FC3088 = v6 != 0 ? v3 : 0;
  if ( v2 < 0x40 )
    qword_140FC3050 = (1LL << v2) - 1;
  else
    qword_140FC3050 = -1LL;
  v7 = 32;
  while ( 1 )
  {
    v8 = v7;
    v10 = (1LL << v7) - 1;
    result = HalpAllocPhysicalMemoryEx(a1, (unsigned int)&v10, v4, 0x10000, 0LL);
    v7 = v8;
    if ( result )
      break;
    v7 = v8 + 1;
    if ( v8 + 1 > 0x20 )
    {
      v3 = 0;
      break;
    }
  }
  qword_140FC3290 = result;
  dword_140FC3288 = v3;
  if ( v7 < 0x40 )
  {
    result = (1LL << v7) - 1;
    qword_140FC3250 = result;
  }
  else
  {
    qword_140FC3250 = -1LL;
  }
  return result;
}
