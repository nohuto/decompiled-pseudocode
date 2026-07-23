/*
 * XREFs of IopMarkApcRoutineIfAsynchronousIo32 @ 0x1404032C0
 * Callers:
 *     BuildQueryDirectoryIrp @ 0x1408C22B0 (BuildQueryDirectoryIrp.c)
 *     IopReadFileScatter @ 0x140A8AFD8 (IopReadFileScatter.c)
 *     IopWriteFileGather @ 0x140A920EC (IopWriteFileGather.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopMarkApcRoutineIfAsynchronousIo32(unsigned int **a1, __int64 *a2, char a3)
{
  unsigned int *v4; // rcx
  __int64 result; // rax
  __int16 v6; // r11
  unsigned int *v7; // rcx
  __int64 v8; // r10

  v4 = *a1;
  result = (__int64)KeGetCurrentThread()->ApcState.Process;
  if ( *(_QWORD *)(result + 784) )
  {
    v6 = *(_WORD *)(result + 1772);
    result = 332LL;
    if ( v6 == 332 || (result = 452LL, v6 == 452) )
    {
      if ( !a3 )
      {
        v7 = (unsigned int *)*v4;
        v8 = *a2 | 1;
        result = *v7;
        *v7 = result;
        *a1 = v7;
        *a2 = v8;
      }
    }
  }
  return result;
}
