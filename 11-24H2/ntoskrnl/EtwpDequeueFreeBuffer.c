/*
 * XREFs of EtwpDequeueFreeBuffer @ 0x1404EC950
 * Callers:
 *     EtwpSwitchBuffer @ 0x14027D3B0 (EtwpSwitchBuffer.c)
 *     EtwpRotateCompressionTarget @ 0x14064FD9C (EtwpRotateCompressionTarget.c)
 * Callees:
 *     EtwpEnqueueOverflowBuffer @ 0x14027D658 (EtwpEnqueueOverflowBuffer.c)
 *     EtwpUnlockBufferList @ 0x1403E1688 (EtwpUnlockBufferList.c)
 *     EtwpLockBufferList @ 0x1403E1714 (EtwpLockBufferList.c)
 *     EtwpResetBufferHeader @ 0x14044D7A0 (EtwpResetBufferHeader.c)
 *     EtwpDequeueBuffer @ 0x14044E2B0 (EtwpDequeueBuffer.c)
 *     EtwpValidateBuffer @ 0x1404502B0 (EtwpValidateBuffer.c)
 *     EtwpDisableCompression @ 0x14064FB00 (EtwpDisableCompression.c)
 */

_QWORD *__fastcall EtwpDequeueFreeBuffer(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bp
  bool v6; // zf
  __int64 v7; // rcx
  _QWORD *v8; // rdi
  __int64 v9; // rax
  signed __int32 v10; // edx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r8
  signed __int64 v16; // rax
  signed __int64 v17; // rtt
  signed __int64 v18; // rdx
  signed __int64 v19; // rax
  signed __int64 v20; // rtt
  signed __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned __int8 v24; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  v6 = *(_QWORD *)(a1 + 56) == 0LL;
  v24 = 0;
  if ( v6 && !*(_QWORD *)(a1 + 72) )
    return 0LL;
  if ( (*(_DWORD *)(a1 + 12) & 0x400) != 0 )
  {
    EtwpLockBufferList(a1, &v24, a3, a4);
    v8 = EtwpDequeueBuffer(a1, (_QWORD *)(a1 + 64));
    if ( !v8 )
      v8 = EtwpDequeueBuffer(v7, (_QWORD *)(a1 + 48));
    if ( *(_DWORD *)(a1 + 1432) )
    {
      v9 = *(_QWORD *)(a1 + 56);
      if ( !v9 || ((*(_DWORD *)(v9 + 12) - 4) & 0xFFFFFFFD) == 0 )
        v4 = 1;
    }
    EtwpUnlockBufferList(a1, &v24);
    if ( v4 )
      EtwpDisableCompression(a1);
    if ( v8 )
    {
      do
      {
        _InterlockedDecrement((volatile signed __int32 *)(a1 + 228));
        if ( (*(_DWORD *)(a1 + 12) & 0x4000000) != 0 )
        {
          v10 = *((_DWORD *)v8 + 11);
          if ( (unsigned int)(v10 - 4) <= 1 )
            goto LABEL_17;
        }
        v10 = 0;
LABEL_17:
        if ( !*((_DWORD *)v8 + 3) && v10 == _InterlockedCompareExchange((volatile signed __int32 *)v8 + 11, 1, v10) )
          break;
        EtwpEnqueueOverflowBuffer(a1, (__int64)v8);
        EtwpLockBufferList(a1, &v24, v11, v12);
        v8 = EtwpDequeueBuffer(a1, (_QWORD *)(a1 + 48));
        EtwpUnlockBufferList(v13, &v24);
      }
      while ( v8 );
      if ( v8 )
      {
        v14 = *(_QWORD *)(a1 + 1560);
        if ( v14 )
        {
          v15 = *((unsigned __int16 *)v8 + 20);
          v16 = *(_QWORD *)(v14 + 8 * v15);
          do
          {
            v18 = v8[2];
            if ( v18 <= v16 )
              break;
            v17 = v16;
            v16 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)(a1 + 1560) + 8 * v15), v18, v16);
          }
          while ( v17 != v16 );
          if ( v8[3] <= *(_QWORD *)(a1 + 1576) )
          {
            v19 = *(_QWORD *)(*(_QWORD *)(a1 + 1568) + 8 * v15);
            do
            {
              v21 = v8[2];
              if ( v21 <= v19 )
                break;
              v20 = v19;
              v19 = _InterlockedCompareExchange64(
                      (volatile signed __int64 *)(*(_QWORD *)(a1 + 1568) + 8 * v15),
                      v21,
                      v19);
            }
            while ( v20 != v19 );
          }
        }
        EtwpResetBufferHeader((__int64)v8, 0);
        goto LABEL_32;
      }
    }
    return 0LL;
  }
  EtwpLockBufferList(a1, &v24, a3, a4);
  v8 = EtwpDequeueBuffer(a1, (_QWORD *)(a1 + 48));
  EtwpUnlockBufferList(v22, &v24);
  if ( !v8 )
    return 0LL;
  EtwpResetBufferHeader((__int64)v8, 0);
  *((_DWORD *)v8 + 11) = 1;
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 228));
LABEL_32:
  EtwpValidateBuffer(a1, (unsigned int *)v8);
  return v8;
}
