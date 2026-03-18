/*
 * XREFs of KiReadGuestSchedulerAssistPriority @ 0x14030EBE4
 * Callers:
 *     KiNormalPriorityReadyScan @ 0x140251B60 (KiNormalPriorityReadyScan.c)
 *     KiQuantumEnd @ 0x140293C70 (KiQuantumEnd.c)
 *     KiUpdateVpBackingThreadPriorityOnReadyQueueInsertion @ 0x14030EB30 (KiUpdateVpBackingThreadPriorityOnReadyQueueInsertion.c)
 *     KiAddThreadToPrcbQueue @ 0x1403102F0 (KiAddThreadToPrcbQueue.c)
 *     KiAddThreadToReadyQueue @ 0x1403F4AB0 (KiAddThreadToReadyQueue.c)
 *     KiScanSharedReadyThreads @ 0x1404657E0 (KiScanSharedReadyThreads.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x14049E5FC (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
 *     KiUpdateVPBackingThreadPriority @ 0x1404E6D30 (KiUpdateVPBackingThreadPriority.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiReadGuestSchedulerAssistPriority(__int64 a1, _QWORD *a2)
{
  unsigned int *v3; // r8
  unsigned int v5; // r10d
  char v6; // dl
  char v7; // al
  unsigned int v8; // edi
  int v9; // ecx
  __int64 result; // rax
  __int64 v11; // [rsp+10h] [rbp+8h]

  v11 = 0LL;
  v3 = *(unsigned int **)(a1 + 968);
  if ( v3 )
  {
    v5 = *v3;
    v6 = 0;
    v7 = 1;
    if ( (*v3 & 0x20000) != 0 )
      v7 = 3;
    v8 = *v3 >> 8;
    BYTE1(v11) = v7;
    BYTE2(v11) = BYTE1(*v3);
    if ( v3[7] )
    {
      v6 = 1;
      LOBYTE(v11) = 1;
    }
    if ( v3[8] )
    {
      v6 |= 2u;
      LOBYTE(v11) = v6;
    }
    HIDWORD(v11) = v3[5];
    if ( (v5 & 0x80000) != 0 )
    {
      v6 |= 4u;
      LOBYTE(v11) = v6;
    }
    if ( *((_QWORD *)v3 + 5) != *((_QWORD *)v3 + 6) )
    {
      v6 |= 8u;
      LOBYTE(v11) = v6;
    }
    if ( (v5 & 0x200000) != 0 )
    {
      v6 |= 0x10u;
      LOBYTE(v11) = v6;
    }
    v9 = (char)v8;
    result = (unsigned int)*(char *)(a1 + 563);
    if ( (unsigned int)((char)v8 - 1) > 0x1E )
      v9 = 1;
    if ( v9 >= (int)result )
      result = (unsigned int)v9;
    if ( (int)result > KiVpThreadSystemWorkPriority )
      result = (unsigned int)KiVpThreadSystemWorkPriority;
    if ( (*v3 & 0x20000) != 0 )
    {
      result = 7LL;
    }
    else if ( (v6 || v3[5]) && (int)result < KiVpThreadSystemWorkPriority )
    {
      result = (unsigned int)KiVpThreadSystemWorkPriority;
    }
  }
  else
  {
    result = (unsigned int)*(char *)(a1 + 195);
  }
  if ( a2 )
    *a2 = v11;
  return result;
}
