/*
 * XREFs of EtwpDequeueFreeBuffer @ 0x1403E4D34
 * Callers:
 *     EtwpSwitchBuffer @ 0x1403E45C0 (EtwpSwitchBuffer.c)
 *     EtwpRotateCompressionTarget @ 0x14064569C (EtwpRotateCompressionTarget.c)
 * Callees:
 *     EtwpEnqueueOverflowBuffer @ 0x1403E4824 (EtwpEnqueueOverflowBuffer.c)
 *     EtwpUnlockBufferList @ 0x1403E4F1C (EtwpUnlockBufferList.c)
 *     EtwpLockBufferList @ 0x1403E4FA8 (EtwpLockBufferList.c)
 *     EtwpResetBufferHeader @ 0x140457AD8 (EtwpResetBufferHeader.c)
 *     EtwpDequeueBuffer @ 0x1404589D0 (EtwpDequeueBuffer.c)
 *     EtwpValidateBuffer @ 0x14045BE30 (EtwpValidateBuffer.c)
 *     Feature_Servicing_WinDiagCyberEO__private_IsEnabledDeviceUsageNoInline @ 0x140644440 (Feature_Servicing_WinDiagCyberEO__private_IsEnabledDeviceUsageNoInline.c)
 *     EtwpDisableCompression @ 0x140645400 (EtwpDisableCompression.c)
 */

__int64 __fastcall EtwpDequeueFreeBuffer(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bp
  bool v6; // zf
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  signed __int32 v12; // edx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r8
  signed __int64 v18; // rax
  signed __int64 v19; // rtt
  signed __int64 v20; // rdx
  signed __int64 v21; // rax
  signed __int64 v22; // rtt
  signed __int64 v23; // rdx
  __int64 v24; // rcx
  char v26; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  v6 = *(_QWORD *)(a1 + 56) == 0LL;
  v26 = 0;
  if ( v6 && !*(_QWORD *)(a1 + 72) )
    return 0LL;
  if ( (*(_DWORD *)(a1 + 12) & 0x400) != 0 )
  {
    EtwpLockBufferList(a1, &v26, a3, a4);
    v8 = EtwpDequeueBuffer(a1, a1 + 64);
    if ( !v8 )
      v8 = EtwpDequeueBuffer(v7, a1 + 48);
    if ( *(_DWORD *)(a1 + 1432) )
    {
      v9 = *(_QWORD *)(a1 + 56);
      if ( !v9 || ((*(_DWORD *)(v9 + 12) - 4) & 0xFFFFFFFD) == 0 )
        v4 = 1;
    }
    EtwpUnlockBufferList(a1, &v26);
    if ( v4 )
      EtwpDisableCompression(a1);
    if ( v8 )
    {
      do
      {
        _InterlockedDecrement((volatile signed __int32 *)(a1 + 228));
        Feature_Servicing_WinDiagCyberEO__private_IsEnabledDeviceUsageNoInline();
        if ( _bittest((const signed __int32 *)(a1 + 12), 0x1Au) )
        {
          v12 = *(_DWORD *)(v8 + 44);
          if ( (unsigned int)(v12 - 4) <= 1 )
            goto LABEL_17;
        }
        v12 = 0;
LABEL_17:
        if ( !*(_DWORD *)(v8 + 12) && v12 == _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 44), 1, v12) )
          break;
        EtwpEnqueueOverflowBuffer(a1, v8, v10, v11);
        EtwpLockBufferList(a1, &v26, v13, v14);
        v8 = EtwpDequeueBuffer(a1, a1 + 48);
        EtwpUnlockBufferList(v15, &v26);
      }
      while ( v8 );
      if ( v8 )
      {
        v16 = *(_QWORD *)(a1 + 1560);
        if ( v16 )
        {
          v17 = *(unsigned __int16 *)(v8 + 40);
          v18 = *(_QWORD *)(v16 + 8 * v17);
          do
          {
            v20 = *(_QWORD *)(v8 + 16);
            if ( v20 <= v18 )
              break;
            v19 = v18;
            v18 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)(a1 + 1560) + 8 * v17), v20, v18);
          }
          while ( v19 != v18 );
          if ( *(_QWORD *)(v8 + 24) <= *(_QWORD *)(a1 + 1576) )
          {
            v21 = *(_QWORD *)(*(_QWORD *)(a1 + 1568) + 8 * v17);
            do
            {
              v23 = *(_QWORD *)(v8 + 16);
              if ( v23 <= v21 )
                break;
              v22 = v21;
              v21 = _InterlockedCompareExchange64(
                      (volatile signed __int64 *)(*(_QWORD *)(a1 + 1568) + 8 * v17),
                      v23,
                      v21);
            }
            while ( v22 != v21 );
          }
        }
        EtwpResetBufferHeader(v8, 0LL);
        goto LABEL_32;
      }
    }
    return 0LL;
  }
  EtwpLockBufferList(a1, &v26, a3, a4);
  v8 = EtwpDequeueBuffer(a1, a1 + 48);
  EtwpUnlockBufferList(v24, &v26);
  if ( !v8 )
    return 0LL;
  EtwpResetBufferHeader(v8, 0LL);
  *(_DWORD *)(v8 + 44) = 1;
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 228));
LABEL_32:
  EtwpValidateBuffer(a1, v8);
  return v8;
}
