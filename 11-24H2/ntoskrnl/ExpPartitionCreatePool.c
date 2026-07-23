/*
 * XREFs of ExpPartitionCreatePool @ 0x140AB4F0C
 * Callers:
 *     ExAllocatePrivateWorkerPool @ 0x1406F96B8 (ExAllocatePrivateWorkerPool.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeGetCurrentNode @ 0x1405B7F30 (KeGetCurrentNode.c)
 *     ExpPartitionCreatePoolInternal @ 0x1408F7C7C (ExpPartitionCreatePoolInternal.c)
 */

__int64 __fastcall ExpPartitionCreatePool(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  bool v6; // zf
  unsigned int v7; // ecx
  unsigned int v8; // esi
  USHORT *CurrentNode; // r14
  __int64 result; // rax
  unsigned __int16 v11; // bp
  __int64 v12; // [rsp+70h] [rbp+8h]
  signed int v13; // [rsp+80h] [rbp+18h]

  do
  {
    v6 = !_BitScanForward(&v7, *(_DWORD *)(a1 + 24));
    v13 = v7;
    if ( v6 )
      return 3221225495LL;
  }
  while ( !_interlockedbittestandreset((volatile signed __int32 *)(a1 + 24), v7) );
  v8 = v7;
  CurrentNode = (USHORT *)KeGetCurrentNode();
  if ( (_UNKNOWN *)KeNodeBlock[*CurrentNode] == (_UNKNOWN *)((char *)&KiNodeInit + 824 * *CurrentNode) )
    CurrentNode = 0LL;
  result = ExpPartitionCreatePoolInternal(a1, 1, 16, CurrentNode, v13);
  if ( (int)result >= 0 )
  {
    v11 = 0;
    if ( KeNumberNodes )
    {
      v12 = (2 * (*CurrentNode & 0x7Fu)) | 1LL;
      do
      {
        if ( v11 != *CurrentNode )
        {
          v8 = v13;
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * v11) + 8LL * v13) = v12;
          KeSetEvent((PRKEVENT)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * v11) + 16LL), 0, 0);
        }
        ++v11;
      }
      while ( v11 < (unsigned __int16)KeNumberNodes );
    }
    *a4 = v8;
    result = 0LL;
    v8 = 8;
  }
  if ( v8 != 8 )
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 24), v8);
  return result;
}
