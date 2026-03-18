/*
 * XREFs of NVMePendingIoCheck @ 0x1400171BC
 * Callers:
 *     NVMeQueuesReInit @ 0x14000C920 (NVMeQueuesReInit.c)
 *     NVMeControllerCompleteAllIORequests @ 0x14001C710 (NVMeControllerCompleteAllIORequests.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMePendingIoCheck(__int64 a1)
{
  unsigned int v1; // r8d
  unsigned int v2; // r9d
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 24) & 0x440000) != 0 )
  {
    v1 = 0;
LABEL_3:
    if ( v1 < *(unsigned __int16 *)(a1 + 330) )
    {
      v2 = 0;
      result = v1;
      while ( 1 )
      {
        if ( v2 >= *(unsigned __int16 *)(a1 + 328) )
        {
          ++v1;
          goto LABEL_3;
        }
        result = *(_QWORD *)(208LL * v1 + *(_QWORD *)(a1 + 936) + 32);
        if ( *(_QWORD *)(32LL * v2 + result + 16) )
          break;
        ++v2;
      }
      *(_DWORD *)(a1 + 4064) |= 0x4000u;
      result = *(unsigned int *)(a1 + 128);
      if ( (result & 0x40) != 0 )
        MEMORY[4] = -1;
    }
  }
  return result;
}
