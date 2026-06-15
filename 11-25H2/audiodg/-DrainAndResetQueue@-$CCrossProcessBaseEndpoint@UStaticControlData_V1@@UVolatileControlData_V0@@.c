/*
 * XREFs of ?DrainAndResetQueue@?$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@IEAAXXZ @ 0x140083B28
 * Callers:
 *     ?Reset@?$CCrossProcessControl@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAJXZ @ 0x140085A60 (-Reset@-$CCrossProcessControl@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@.c)
 * Callees:
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002CC20 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 */

void __fastcall CCrossProcessBaseEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::DrainAndResetQueue(
        __int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  _DWORD *v3; // rax
  unsigned int i; // edx
  __int64 v5; // rcx
  unsigned int j; // edx
  __int64 v7; // rcx
  unsigned int v8; // edx
  __int64 v9; // rcx
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+30h] [rbp+8h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  v3 = *(_DWORD **)(a1 + 96);
  v10 = v1;
  for ( i = 0; i < v3[33]; v3 = *(_DWORD **)(a1 + 96) )
  {
    v5 = i++;
    *(_DWORD *)((v5 << 6) + *(_QWORD *)(a1 + 136) + 4) = 0;
  }
  for ( j = 0; j < v3[36]; v3 = *(_DWORD **)(a1 + 96) )
  {
    v7 = j++;
    *(_DWORD *)((v7 << 6) + *(_QWORD *)(a1 + 152) + 4) = 0;
  }
  v8 = 0;
  if ( v3[37] )
  {
    do
    {
      v9 = v8++;
      *(_DWORD *)((v9 << 6) + *(_QWORD *)(a1 + 144) + 4) = -1;
    }
    while ( v8 < *(_DWORD *)(*(_QWORD *)(a1 + 96) + 148LL) );
  }
  _InterlockedExchange(*(volatile __int32 **)(a1 + 88), 0);
  _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 + 88) + 4LL), 0);
  _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 + 88) + 8LL), 0);
  _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 + 88) + 12LL), 0);
  _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 + 88) + 184LL), 0);
  _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 + 88) + 188LL), 0);
  CSAutoLock<1>::~CSAutoLock<1>(&v10);
}
