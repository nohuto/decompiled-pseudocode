/*
 * XREFs of PopPepDeviceDState @ 0x1403A6948
 * Callers:
 *     PopHandleDevicePowerIrpCompletion @ 0x1403A65A0 (PopHandleDevicePowerIrpCompletion.c)
 *     PopFxHandleReportDevicePoweredOn @ 0x140497CE0 (PopFxHandleReportDevicePoweredOn.c)
 *     PopIrpWorker @ 0x1404E3650 (PopIrpWorker.c)
 * Callees:
 *     PopFxUpdateComponentAccountingEnhanced @ 0x1403A6DE4 (PopFxUpdateComponentAccountingEnhanced.c)
 *     PopPepUpdateIdleStateRefCount @ 0x1403A6EB0 (PopPepUpdateIdleStateRefCount.c)
 *     PopFxUpdateDeviceAccountingEnhanced @ 0x1403A7470 (PopFxUpdateDeviceAccountingEnhanced.c)
 *     PopPepUpdateConstraints @ 0x1403A750C (PopPepUpdateConstraints.c)
 *     PopPlNotifyDeviceDState @ 0x1403A78A0 (PopPlNotifyDeviceDState.c)
 *     PopFxUpdateComponentPerfStateNominalChange @ 0x1405CF760 (PopFxUpdateComponentPerfStateNominalChange.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopPepDeviceDState(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebp
  __int64 v5; // r14
  int v6; // ebx
  char v7; // r12
  __int64 result; // rax
  __int64 v10; // rdx
  unsigned int v11; // edi
  __int64 v12; // rcx
  unsigned int v13; // r13d
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // r12d
  __int64 v17; // rdi
  __int64 v18; // rbx
  __int64 v19; // rbx
  unsigned int i; // ebx
  __int64 v21; // rdx
  __int64 v22; // [rsp+20h] [rbp-48h] BYREF
  int v23; // [rsp+28h] [rbp-40h]
  char v24; // [rsp+2Ch] [rbp-3Ch]
  __int16 v25; // [rsp+2Dh] [rbp-3Bh]
  char v26; // [rsp+2Fh] [rbp-39h]
  unsigned int v27; // [rsp+70h] [rbp+8h]
  char v28; // [rsp+80h] [rbp+18h]
  int v29; // [rsp+88h] [rbp+20h]

  v29 = a4;
  v28 = a3;
  v4 = 0;
  v5 = a2;
  v6 = a4;
  v7 = a3;
  if ( (_BYTE)a3 )
  {
    if ( a2 == 1 )
    {
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 132), 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
      {
        LOBYTE(a3) = 1;
        result = PopPepUpdateConstraints(a1, 4LL, a3);
      }
    }
  }
  else
  {
    if ( a2 > 1 )
    {
      _InterlockedExchange((volatile __int32 *)(a1 + 132), 2);
      PopPepUpdateConstraints(a1, 4LL, 0LL);
      result = (unsigned int)(v6 - 1);
      if ( (unsigned int)result <= 1 )
        _InterlockedDecrement((volatile signed __int32 *)(a1 + 132));
    }
    v10 = *(unsigned int *)(a1 + 168);
    if ( (_DWORD)v10 != (_DWORD)v5 )
    {
      LOBYTE(a4) = 0;
      result = PopPlNotifyDeviceDState(*(_QWORD *)(a1 + 32), v10, (unsigned int)v5, a4);
    }
  }
  if ( !*(_BYTE *)(a1 + 124) && !*(_BYTE *)(a1 + 188) )
  {
    if ( !v7 )
      return result;
    goto LABEL_24;
  }
  v11 = 0;
  if ( (_DWORD)v5 != 4 )
    v11 = *(_DWORD *)(a1 + 4 * v5 + 140);
  v12 = *(int *)(a1 + 168);
  v27 = v11;
  v13 = 0;
  if ( (_DWORD)v12 != 4 )
    v13 = *(_DWORD *)(a1 + 4 * v12 + 140);
  if ( !v7 && (_DWORD)v12 != (_DWORD)v5 )
  {
    if ( (_DWORD)v5 == 1 && *(_DWORD *)(a1 + 180) )
    {
      v16 = 0;
      do
      {
        v17 = 208LL * v16;
        v18 = *(unsigned int *)(v17 + a1 + 368);
        PopPepUpdateIdleStateRefCount(
          0LL,
          *(unsigned int *)(*(_QWORD *)(v17 + a1 + 392) + 24 * v18 + 16),
          1LL,
          v17 + a1 + 384);
        PopFxUpdateComponentAccountingEnhanced(
          *(_QWORD *)(a1 + 32),
          *(unsigned int *)(v17 + a1 + 200),
          (unsigned int)v18,
          0LL);
        ++v16;
      }
      while ( v16 < *(_DWORD *)(a1 + 180) );
      v7 = v28;
      v11 = v27;
      v6 = v29;
    }
    PopPepUpdateIdleStateRefCount(v13, v11, 1LL, a1 + 184);
    result = PopFxUpdateDeviceAccountingEnhanced(*(_QWORD *)(a1 + 32), (unsigned int)v5, 0LL);
  }
  if ( *(_BYTE *)(a1 + 124) )
  {
    v15 = *(_QWORD *)(a1 + 32);
    v26 = 0;
    v23 = v5;
    v24 = v7;
    v25 = v6 == 1;
    v22 = *(_QWORD *)(v15 + 72);
    result = guard_dispatch_icall_no_overrides(5LL, &v22);
  }
  if ( v7 )
  {
    if ( *(_DWORD *)(a1 + 168) != (_DWORD)v5 )
    {
      if ( PopFxPerfQueryOnDevicePowerChanges && (*(_BYTE *)(a1 + 177) || *(_BYTE *)(a1 + 176) && (_DWORD)v5 == 1) )
      {
        for ( i = 0; i < *(_DWORD *)(a1 + 180); ++i )
        {
          v21 = 208LL * i;
          if ( *(_BYTE *)(v21 + a1 + 376) )
          {
            LOBYTE(a3) = 1;
            PopFxUpdateComponentPerfStateNominalChange(
              *(_QWORD *)(a1 + 32),
              *(unsigned int *)(v21 + a1 + 200),
              a3,
              (unsigned int)v5);
          }
        }
      }
      if ( *(_DWORD *)(a1 + 168) == 1 && *(_DWORD *)(a1 + 180) )
      {
        do
        {
          v19 = 208LL * v4;
          PopPepUpdateIdleStateRefCount(
            *(unsigned int *)(*(_QWORD *)(v19 + a1 + 392) + 24LL * *(unsigned int *)(v19 + a1 + 368) + 16),
            0LL,
            0LL,
            v19 + a1 + 384);
          PopFxUpdateComponentAccountingEnhanced(
            *(_QWORD *)(a1 + 32),
            *(unsigned int *)(v19 + a1 + 200),
            (unsigned int)(*(_DWORD *)(v19 + a1 + 380) - 1),
            1LL);
          ++v4;
        }
        while ( v4 < *(_DWORD *)(a1 + 180) );
      }
      PopPepUpdateIdleStateRefCount(v13, v11, 0LL, a1 + 184);
      result = PopFxUpdateDeviceAccountingEnhanced(*(_QWORD *)(a1 + 32), (unsigned int)v5, 1LL);
    }
LABEL_24:
    v14 = *(unsigned int *)(a1 + 168);
    if ( (_DWORD)v14 != (_DWORD)v5 )
    {
      LOBYTE(a4) = v7;
      result = PopPlNotifyDeviceDState(*(_QWORD *)(a1 + 32), v14, (unsigned int)v5, a4);
      *(_DWORD *)(a1 + 168) = v5;
    }
  }
  return result;
}
