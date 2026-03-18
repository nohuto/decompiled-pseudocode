/*
 * XREFs of NVMeAllocateAsyncEventCommandsForMFND @ 0x14001B694
 * Callers:
 *     NVMeHwAdapterControl @ 0x14000DBA0 (NVMeHwAdapterControl.c)
 * Callees:
 *     NVMeAllocateDmaBuffer @ 0x140006160 (NVMeAllocateDmaBuffer.c)
 *     NVMeFreeDmaBuffer @ 0x14000CF60 (NVMeFreeDmaBuffer.c)
 *     memset @ 0x1400314C0 (memset.c)
 */

__int64 __fastcall NVMeAllocateAsyncEventCommandsForMFND(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r9
  __int64 v3; // rbx
  unsigned int v5; // edi
  int v6; // r11d
  unsigned int v7; // r10d
  unsigned int v8; // ecx
  int v9; // ecx
  unsigned int v10; // edi
  _QWORD *v11; // r12
  unsigned int v12; // r15d
  __int64 v13; // rdx
  __int64 v14; // r8
  void *v16; // [rsp+100h] [rbp+67h] BYREF
  __int64 v17; // [rsp+108h] [rbp+6Fh]

  v1 = *(_QWORD *)(a1 + 1560);
  v2 = *(unsigned __int16 *)(a1 + 1552);
  v3 = 0LL;
  v16 = 0LL;
  v5 = 0;
  v17 = 0LL;
  v6 = *(unsigned __int8 *)(v1 + 259);
  if ( v6 + 1 <= (unsigned int)v2 )
    goto LABEL_20;
  v7 = *(unsigned __int16 *)(a1 + 4054);
  v8 = *(unsigned __int16 *)(a1 + 324);
  v5 = v6 - v2 + 1;
  if ( v5 >= v7 )
    v5 = v7;
  if ( v5 + (unsigned int)v2 >= v8 )
  {
    if ( (*(_BYTE *)(a1 + 21) & 2) != 0 )
      StorPortExtendedFunction(87LL, a1, 0LL, 1LL);
    v9 = *(unsigned __int16 *)(a1 + 1552);
    v10 = *(unsigned __int16 *)(a1 + 324);
    if ( v10 <= v9 + 1 )
    {
      v5 = 0;
      goto LABEL_20;
    }
    v5 = v10 - v9 - 1;
  }
  if ( v5 )
  {
    v11 = (_QWORD *)(a1 + 1400);
    if ( !(unsigned int)StorPortExtendedFunction(0LL, a1, v5 << 7, 1701672526LL)
      && *v11
      && !(unsigned int)NVMeAllocateDmaBuffer(a1, v5 << 13)
      && v16 )
    {
      v12 = v5 << 13 >> 2;
      if ( v12 )
        memset(v16, 0, 4LL * v12);
      v13 = v5;
      do
      {
        v3 += 128LL;
        *(_QWORD *)(v3 + *v11 - 32) = v16;
        *(_QWORD *)(v3 + *v11 - 24) = v17;
        v16 = (char *)v16 + 0x2000;
        v17 += 0x2000LL;
        --v13;
      }
      while ( v13 );
      LODWORD(v3) = v5;
      return (unsigned int)v3;
    }
  }
LABEL_20:
  if ( (*(_BYTE *)(a1 + 21) & 2) != 0 )
    StorPortExtendedFunction(87LL, a1, 0LL, 1LL);
  v14 = *(_QWORD *)(a1 + 1400);
  if ( v14 )
  {
    StorPortExtendedFunction(1LL, a1, v14, v2);
    *(_QWORD *)(a1 + 1400) = 0LL;
  }
  if ( v16 )
    NVMeFreeDmaBuffer(a1, v5 << 13, (__int64 *)&v16, v17);
  return (unsigned int)v3;
}
