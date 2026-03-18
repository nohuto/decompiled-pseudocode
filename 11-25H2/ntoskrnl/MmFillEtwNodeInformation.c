/*
 * XREFs of MmFillEtwNodeInformation @ 0x1403BE054
 * Callers:
 *     EtwpLogMemNodeInfo @ 0x1403BDD4C (EtwpLogMemNodeInfo.c)
 * Callees:
 *     MiGetPartitionNodeInformation @ 0x140392848 (MiGetPartitionNodeInformation.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall MmFillEtwNodeInformation(_QWORD **a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  _QWORD *v4; // rbp
  unsigned int v8; // ebx
  _QWORD *v10; // rdi
  unsigned __int64 v11[10]; // [rsp+20h] [rbp-58h] BYREF

  v4 = *a1;
  memset_0(v11, 0, 0x48uLL);
  if ( a3 > (unsigned __int16)KeNumberNodes )
    a3 = (unsigned __int16)KeNumberNodes;
  v8 = 0;
  if ( a3 )
  {
    v10 = (_QWORD *)(a2 + 20);
    do
    {
      MiGetPartitionNodeInformation(v4, v8++, v11);
      *(v10 - 2) = v11[0];
      *v10 = v11[2];
      *(v10 - 1) = v11[1];
      v10[2] = v11[4];
      v10[1] = v11[3];
      v10[4] = v11[6];
      v10[3] = v11[5];
      v10[6] = v11[8];
      v10[5] = v11[7];
      *((_DWORD *)v10 - 5) = v8;
      v10 = (_QWORD *)((char *)v10 + 76);
    }
    while ( v8 < a3 );
  }
  *a4 = *(unsigned __int16 *)v4;
  return v8;
}
