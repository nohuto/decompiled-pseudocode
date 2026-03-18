/*
 * XREFs of PopPepDeviceDState @ 0x1403137A0
 * Callers:
 *     PopHandleDevicePowerIrpCompletion @ 0x140376270 (PopHandleDevicePowerIrpCompletion.c)
 *     PopFxHandleReportDevicePoweredOn @ 0x14049CF90 (PopFxHandleReportDevicePoweredOn.c)
 *     PopIrpWorker @ 0x1404EBF10 (PopIrpWorker.c)
 * Callees:
 *     PopPlNotifyDeviceDState @ 0x140312818 (PopPlNotifyDeviceDState.c)
 *     PopPepUpdateConstraints @ 0x1403128A0 (PopPepUpdateConstraints.c)
 *     PopFxUpdateDeviceAccountingEnhanced @ 0x140312FC4 (PopFxUpdateDeviceAccountingEnhanced.c)
 *     PopFxUpdateComponentAccountingEnhanced @ 0x1403152C4 (PopFxUpdateComponentAccountingEnhanced.c)
 *     PopPepUpdateIdleStateRefCount @ 0x140315390 (PopPepUpdateIdleStateRefCount.c)
 *     PopFxUpdateComponentPerfStateNominalChange @ 0x1405D2040 (PopFxUpdateComponentPerfStateNominalChange.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall PopPepDeviceDState(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebp
  __int64 v5; // r14
  int v6; // ebx
  char v7; // r12
  int v9; // edx
  unsigned int v10; // edi
  __int64 v11; // rcx
  unsigned int v12; // r13d
  int v13; // edx
  __int64 v14; // rcx
  unsigned int v15; // r12d
  __int64 v16; // rdi
  __int64 v17; // rbx
  __int64 v18; // rbx
  unsigned int i; // ebx
  __int64 v20; // rdx
  __int64 v21; // [rsp+20h] [rbp-48h] BYREF
  int v22; // [rsp+28h] [rbp-40h]
  char v23; // [rsp+2Ch] [rbp-3Ch]
  __int16 v24; // [rsp+2Dh] [rbp-3Bh]
  char v25; // [rsp+2Fh] [rbp-39h]
  unsigned int v26; // [rsp+70h] [rbp+8h]
  char v27; // [rsp+80h] [rbp+18h]
  int v28; // [rsp+88h] [rbp+20h]

  v28 = a4;
  v27 = a3;
  v4 = 0;
  v5 = a2;
  v6 = a4;
  v7 = a3;
  if ( (_BYTE)a3 )
  {
    if ( a2 == 1 && _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 132), 0xFFFFFFFF) == 1 )
      PopPepUpdateConstraints((_DWORD *)a1, 4, 1);
  }
  else
  {
    if ( a2 > 1 )
    {
      _InterlockedExchange((volatile __int32 *)(a1 + 132), 2);
      PopPepUpdateConstraints((_DWORD *)a1, 4, 0);
      if ( (unsigned int)(v6 - 1) <= 1 )
        _InterlockedDecrement((volatile signed __int32 *)(a1 + 132));
    }
    v9 = *(_DWORD *)(a1 + 168);
    if ( v9 != (_DWORD)v5 )
      PopPlNotifyDeviceDState(*(_QWORD *)(a1 + 32), v9, v5, 0);
  }
  if ( !*(_BYTE *)(a1 + 124) && !*(_BYTE *)(a1 + 188) )
  {
    if ( !v7 )
      return;
    goto LABEL_24;
  }
  v10 = 0;
  if ( (_DWORD)v5 != 4 )
    v10 = *(_DWORD *)(a1 + 4 * v5 + 140);
  v11 = *(int *)(a1 + 168);
  v26 = v10;
  v12 = 0;
  if ( (_DWORD)v11 != 4 )
    v12 = *(_DWORD *)(a1 + 4 * v11 + 140);
  if ( !v7 && (_DWORD)v11 != (_DWORD)v5 )
  {
    if ( (_DWORD)v5 == 1 && *(_DWORD *)(a1 + 180) )
    {
      v15 = 0;
      do
      {
        v16 = 208LL * v15;
        v17 = *(unsigned int *)(v16 + a1 + 368);
        PopPepUpdateIdleStateRefCount(
          0LL,
          *(unsigned int *)(*(_QWORD *)(v16 + a1 + 392) + 24 * v17 + 16),
          1LL,
          v16 + a1 + 384);
        PopFxUpdateComponentAccountingEnhanced(
          *(_QWORD *)(a1 + 32),
          *(unsigned int *)(v16 + a1 + 200),
          (unsigned int)v17,
          0LL);
        ++v15;
      }
      while ( v15 < *(_DWORD *)(a1 + 180) );
      v7 = v27;
      v10 = v26;
      v6 = v28;
    }
    PopPepUpdateIdleStateRefCount(v12, v10, 1LL, a1 + 184);
    PopFxUpdateDeviceAccountingEnhanced(*(_QWORD *)(a1 + 32), v5, 0);
  }
  if ( *(_BYTE *)(a1 + 124) )
  {
    v14 = *(_QWORD *)(a1 + 32);
    v25 = 0;
    v22 = v5;
    v23 = v7;
    v24 = v6 == 1;
    v21 = *(_QWORD *)(v14 + 72);
    guard_dispatch_icall_no_overrides(5LL, &v21, a3, a4);
  }
  if ( v7 )
  {
    if ( *(_DWORD *)(a1 + 168) != (_DWORD)v5 )
    {
      if ( PopFxPerfQueryOnDevicePowerChanges && (*(_BYTE *)(a1 + 177) || *(_BYTE *)(a1 + 176) && (_DWORD)v5 == 1) )
      {
        for ( i = 0; i < *(_DWORD *)(a1 + 180); ++i )
        {
          v20 = 208LL * i;
          if ( *(_BYTE *)(v20 + a1 + 376) )
          {
            LOBYTE(a3) = 1;
            PopFxUpdateComponentPerfStateNominalChange(
              *(_QWORD *)(a1 + 32),
              *(unsigned int *)(v20 + a1 + 200),
              a3,
              (unsigned int)v5);
          }
        }
      }
      if ( *(_DWORD *)(a1 + 168) == 1 && *(_DWORD *)(a1 + 180) )
      {
        do
        {
          v18 = 208LL * v4;
          PopPepUpdateIdleStateRefCount(
            *(unsigned int *)(*(_QWORD *)(v18 + a1 + 392) + 24LL * *(unsigned int *)(v18 + a1 + 368) + 16),
            0LL,
            0LL,
            v18 + a1 + 384);
          PopFxUpdateComponentAccountingEnhanced(
            *(_QWORD *)(a1 + 32),
            *(unsigned int *)(v18 + a1 + 200),
            (unsigned int)(*(_DWORD *)(v18 + a1 + 380) - 1),
            1LL);
          ++v4;
        }
        while ( v4 < *(_DWORD *)(a1 + 180) );
      }
      PopPepUpdateIdleStateRefCount(v12, v10, 0LL, a1 + 184);
      PopFxUpdateDeviceAccountingEnhanced(*(_QWORD *)(a1 + 32), v5, 1);
    }
LABEL_24:
    v13 = *(_DWORD *)(a1 + 168);
    if ( v13 != (_DWORD)v5 )
    {
      PopPlNotifyDeviceDState(*(_QWORD *)(a1 + 32), v13, v5, v7);
      *(_DWORD *)(a1 + 168) = v5;
    }
  }
}
