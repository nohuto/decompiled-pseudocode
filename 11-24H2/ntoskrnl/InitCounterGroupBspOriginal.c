/*
 * XREFs of InitCounterGroupBspOriginal @ 0x140B4EDCC
 * Callers:
 *     DefaultInitializeProfilingOriginal @ 0x140B4EB50 (DefaultInitializeProfilingOriginal.c)
 * Callees:
 *     HalpMmAllocateMemory @ 0x140540604 (HalpMmAllocateMemory.c)
 */

__int64 __fastcall InitCounterGroupBspOriginal(int a1, int a2)
{
  __int64 result; // rax
  unsigned int v3; // edi
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx

  result = KiProcessorBlock[0];
  v3 = 0;
  v5 = *(_QWORD *)(KiProcessorBlock[0] + 88);
  if ( a1 )
  {
    switch ( a1 )
    {
      case 1:
        v5 += 24LL;
        break;
      case 100:
        v5 += 48LL;
        break;
      case 101:
        v5 += 72LL;
        break;
      default:
        v5 = 0LL;
        break;
    }
  }
  *(_DWORD *)v5 = a1;
  v6 = (unsigned int)(48 * a2);
  *(_DWORD *)(v5 + 4) = a2;
  *(_QWORD *)(v5 + 16) = 0LL;
  if ( (_DWORD)v6 )
  {
    result = HalpMmAllocateMemory(v6);
    *(_QWORD *)(v5 + 16) = result;
  }
  if ( *(_DWORD *)(v5 + 4) )
  {
    do
    {
      v7 = v3++;
      v8 = 3 * v7;
      result = *(_QWORD *)(v5 + 16);
      *(_DWORD *)(result + 16 * v8 + 28) = a1;
    }
    while ( v3 < *(_DWORD *)(v5 + 4) );
  }
  return result;
}
