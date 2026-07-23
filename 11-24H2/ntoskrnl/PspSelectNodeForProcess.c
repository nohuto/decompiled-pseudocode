/*
 * XREFs of PspSelectNodeForProcess @ 0x140A6DD70
 * Callers:
 *     PspAllocateProcess @ 0x1409FACD0 (PspAllocateProcess.c)
 * Callees:
 *     KeIsEmptyGroupMask @ 0x14032FF20 (KeIsEmptyGroupMask.c)
 *     RtlRandomEx @ 0x14040A510 (RtlRandomEx.c)
 */

__int64 PspSelectNodeForProcess()
{
  ULONG v0; // eax
  unsigned __int16 v1; // r8
  __int64 v2; // rsi
  unsigned int i; // ebx
  unsigned __int16 v4; // di
  __int64 v5; // rbp
  ULONG Seed; // [rsp+50h] [rbp+8h] BYREF

  if ( PspIdealNodeRandomized )
    v0 = RtlRandomEx(&Seed);
  else
    v0 = _InterlockedIncrement(&PspProcessNodeAssignment);
  v1 = KeNumberNodes;
  v2 = 0LL;
  i = 0;
  v4 = v0 % (unsigned __int16)KeNumberNodes;
  while ( i < v1 )
  {
    v5 = KeNodeBlock[v4];
    if ( !(unsigned int)KeIsEmptyGroupMask((unsigned __int64 *)(v5 + 16)) && (*(_BYTE *)(v5 + 10) & 1) == 0 )
    {
LABEL_12:
      v2 = v5;
      goto LABEL_13;
    }
    v1 = KeNumberNodes;
    ++i;
    if ( ++v4 >= (unsigned __int16)KeNumberNodes )
      v4 = 0;
  }
  for ( i = 0; i < v1; ++i )
  {
    v5 = KeNodeBlock[v4];
    if ( !(unsigned int)KeIsEmptyGroupMask((unsigned __int64 *)(v5 + 16)) )
      goto LABEL_12;
    v1 = KeNumberNodes;
    if ( ++v4 >= (unsigned __int16)KeNumberNodes )
      v4 = 0;
  }
LABEL_13:
  if ( !PspIdealNodeRandomized && i )
    _InterlockedAdd(&PspProcessNodeAssignment, i);
  return v2;
}
