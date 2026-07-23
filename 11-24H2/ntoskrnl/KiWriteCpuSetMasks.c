/*
 * XREFs of KiWriteCpuSetMasks @ 0x1404F6AB8
 * Callers:
 *     KeSetSelectedCpuSetsThread @ 0x14048B570 (KeSetSelectedCpuSetsThread.c)
 *     KeSetCpuSetsProcess @ 0x1405BD334 (KeSetCpuSetsProcess.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

unsigned __int64 __fastcall KiWriteCpuSetMasks(unsigned __int64 *a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  unsigned __int64 result; // rax
  unsigned int v7; // r9d
  unsigned __int64 *v8; // r8
  __int64 v9; // r10
  __int64 v10; // rcx

  result = a2;
  if ( a4 < a2 )
    result = a4;
  v7 = 0;
  if ( (_DWORD)result )
  {
    v8 = a1;
    v9 = a3 - (_QWORD)a1;
    v10 = (unsigned int)result;
    v7 = result;
    do
    {
      result = *(unsigned __int64 *)((char *)v8 + v9);
      *v8++ = result;
      --v10;
    }
    while ( v10 );
  }
  if ( v7 < a2 )
    return (unsigned __int64)memset_0(&a1[v7], 0, 8LL * (a2 - v7));
  return result;
}
