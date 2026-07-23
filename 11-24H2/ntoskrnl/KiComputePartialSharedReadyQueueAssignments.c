/*
 * XREFs of KiComputePartialSharedReadyQueueAssignments @ 0x1405C5D68
 * Callers:
 *     KiComputeSharedReadyQueueAssignments @ 0x1405C5E30 (KiComputeSharedReadyQueueAssignments.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall KiComputePartialSharedReadyQueueAssignments(
        unsigned __int64 a1,
        unsigned int a2,
        unsigned __int8 *a3)
{
  unsigned int v6; // r9d
  unsigned int v7; // r10d
  unsigned int v8; // ecx
  __int64 result; // rax
  int v10; // edx
  unsigned __int8 v11; // r9
  unsigned __int8 v12; // r8
  unsigned int v13; // r11d
  _BYTE v14[64]; // [rsp+20h] [rbp-58h] BYREF

  memset_0(v14, 0, sizeof(v14));
  v6 = __popcnt(a1);
  v7 = 0;
  v8 = (v6 + a2 - 1) / a2;
  v10 = v6 % v8;
  result = v6 / v8;
  v11 = -1;
  v12 = 0;
  v13 = result;
  do
  {
    if ( _bittest64((const __int64 *)&a1, v12) )
    {
      if ( v11 == 0xFF )
      {
        v11 = v12;
        v7 = v13;
        if ( v10 )
        {
          v7 = v13 + 1;
          --v10;
        }
      }
      *a3 = v11;
      result = (unsigned __int8)++v14[v11];
      if ( (unsigned int)result >= v7 )
      {
        v11 = -1;
        v7 = 0;
      }
    }
    ++v12;
    ++a3;
  }
  while ( v12 < 0x40u );
  return result;
}
