/*
 * XREFs of EtwpDequeueFreeBuffer @ 0x1404EF438
 * Callers:
 *     EtwpSwitchBuffer @ 0x14024CDA0 (EtwpSwitchBuffer.c)
 *     EtwpRotateCompressionTarget @ 0x14065169C (EtwpRotateCompressionTarget.c)
 * Callees:
 *     EtwpEnqueueOverflowBuffer @ 0x14024D048 (EtwpEnqueueOverflowBuffer.c)
 *     EtwpUnlockBufferList @ 0x1403EEBF4 (EtwpUnlockBufferList.c)
 *     EtwpLockBufferList @ 0x1403EEC80 (EtwpLockBufferList.c)
 *     EtwpResetBufferHeader @ 0x140458490 (EtwpResetBufferHeader.c)
 *     EtwpDequeueBuffer @ 0x140459200 (EtwpDequeueBuffer.c)
 *     EtwpValidateBuffer @ 0x14045AF10 (EtwpValidateBuffer.c)
 *     Feature_Servicing_WinDiagCyberEO__private_IsEnabledDeviceUsageNoInline @ 0x140650450 (Feature_Servicing_WinDiagCyberEO__private_IsEnabledDeviceUsageNoInline.c)
 *     EtwpDisableCompression @ 0x140651400 (EtwpDisableCompression.c)
 */

_QWORD *__fastcall EtwpDequeueFreeBuffer(__int64 a1)
{
  char v1; // bp
  bool v3; // zf
  __int64 v4; // rcx
  _QWORD *v5; // rdi
  __int64 v6; // rax
  signed __int32 v7; // edx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r8
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  signed __int64 v13; // rdx
  signed __int64 v14; // rax
  signed __int64 v15; // rtt
  signed __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned __int8 v19; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  v3 = *(_QWORD *)(a1 + 56) == 0LL;
  v19 = 0;
  if ( v3 && !*(_QWORD *)(a1 + 72) )
    return 0LL;
  if ( (*(_DWORD *)(a1 + 12) & 0x400) != 0 )
  {
    EtwpLockBufferList(a1, &v19);
    v5 = EtwpDequeueBuffer(a1, (_QWORD *)(a1 + 64));
    if ( !v5 )
      v5 = EtwpDequeueBuffer(v4, (_QWORD *)(a1 + 48));
    if ( *(_DWORD *)(a1 + 1432) )
    {
      v6 = *(_QWORD *)(a1 + 56);
      if ( !v6 || ((*(_DWORD *)(v6 + 12) - 4) & 0xFFFFFFFD) == 0 )
        v1 = 1;
    }
    EtwpUnlockBufferList(a1, &v19);
    if ( v1 )
      EtwpDisableCompression(a1);
    if ( v5 )
    {
      do
      {
        _InterlockedDecrement((volatile signed __int32 *)(a1 + 228));
        Feature_Servicing_WinDiagCyberEO__private_IsEnabledDeviceUsageNoInline();
        if ( _bittest((const signed __int32 *)(a1 + 12), 0x1Au) )
        {
          v7 = *((_DWORD *)v5 + 11);
          if ( (unsigned int)(v7 - 4) <= 1 )
            goto LABEL_17;
        }
        v7 = 0;
LABEL_17:
        if ( !*((_DWORD *)v5 + 3) && v7 == _InterlockedCompareExchange((volatile signed __int32 *)v5 + 11, 1, v7) )
          break;
        EtwpEnqueueOverflowBuffer(a1, (__int64)v5);
        EtwpLockBufferList(a1, &v19);
        v5 = EtwpDequeueBuffer(a1, (_QWORD *)(a1 + 48));
        EtwpUnlockBufferList(v8, &v19);
      }
      while ( v5 );
      if ( v5 )
      {
        v9 = *(_QWORD *)(a1 + 1560);
        if ( v9 )
        {
          v10 = *((unsigned __int16 *)v5 + 20);
          v11 = *(_QWORD *)(v9 + 8 * v10);
          do
          {
            v13 = v5[2];
            if ( v13 <= v11 )
              break;
            v12 = v11;
            v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)(a1 + 1560) + 8 * v10), v13, v11);
          }
          while ( v12 != v11 );
          if ( v5[3] <= *(_QWORD *)(a1 + 1576) )
          {
            v14 = *(_QWORD *)(*(_QWORD *)(a1 + 1568) + 8 * v10);
            do
            {
              v16 = v5[2];
              if ( v16 <= v14 )
                break;
              v15 = v14;
              v14 = _InterlockedCompareExchange64(
                      (volatile signed __int64 *)(*(_QWORD *)(a1 + 1568) + 8 * v10),
                      v16,
                      v14);
            }
            while ( v15 != v14 );
          }
        }
        EtwpResetBufferHeader((__int64)v5, 0);
        goto LABEL_32;
      }
    }
    return 0LL;
  }
  EtwpLockBufferList(a1, &v19);
  v5 = EtwpDequeueBuffer(a1, (_QWORD *)(a1 + 48));
  EtwpUnlockBufferList(v17, &v19);
  if ( !v5 )
    return 0LL;
  EtwpResetBufferHeader((__int64)v5, 0);
  *((_DWORD *)v5 + 11) = 1;
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 228));
LABEL_32:
  EtwpValidateBuffer(a1, (unsigned int *)v5);
  return v5;
}
