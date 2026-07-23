/*
 * XREFs of sub_140695E50 @ 0x140695E50
 * Callers:
 *     <none>
 * Callees:
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     KeDelayExecutionThread @ 0x14031B140 (KeDelayExecutionThread.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     ExGenRandom @ 0x14040A540 (ExGenRandom.c)
 *     KeExitRetpoline @ 0x14045517C (KeExitRetpoline.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     PsQueryThreadTerminationPort @ 0x1406FA4F0 (PsQueryThreadTerminationPort.c)
 *     KeRundownApcQueues @ 0x1408FDCCC (KeRundownApcQueues.c)
 */

void __fastcall __noreturn sub_140695E50(__int64 a1, __int64 a2)
{
  __int64 *ThreadTerminationPort; // r14
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int64 v7; // rdi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  struct _KTHREAD *CurrentThread; // rax
  struct _KEVENT *p_Object; // r15
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // eax
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // rbx
  unsigned int v22; // eax
  int v23; // edx
  __int64 v24; // rsi
  char v25; // r13
  __int64 v26; // rax
  __int64 v27; // rbx
  __int64 v28; // rdi
  unsigned __int8 CurrentIrql; // r12
  unsigned int v30; // r11d
  unsigned __int64 v31; // r10
  __int64 v32; // rbx
  unsigned int v33; // r9d
  unsigned __int64 v34; // r8
  __int64 v35; // rdi
  __int64 v36; // r13
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rdi
  __int64 v40; // rax
  _QWORD v41[2]; // [rsp+30h] [rbp-38h] BYREF
  __int16 Object; // [rsp+40h] [rbp-28h] BYREF
  char v43; // [rsp+42h] [rbp-26h]
  int v44; // [rsp+44h] [rbp-24h]
  _QWORD v45[4]; // [rsp+48h] [rbp-20h] BYREF
  LARGE_INTEGER Interval; // [rsp+C0h] [rbp+58h] BYREF
  __int64 v47; // [rsp+C8h] [rbp+60h]

  KeExitRetpoline(a1, a2);
  ThreadTerminationPort = (__int64 *)PsQueryThreadTerminationPort();
  v7 = (unsigned int)ExGenRandom(1, v4, v5, v6);
  v10 = 100000000 * (v7 / 0x5F5E100);
  Interval.QuadPart = -1200000000LL - v7 % 0x5F5E100;
  if ( *(_QWORD *)(a1 + 8) == 1LL )
    KeRundownApcQueues(KeGetCurrentThread());
  if ( (unsigned int)ExGenRandom(1, v10, v8, v9) % 0xA < 3 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
  }
  p_Object = *(struct _KEVENT **)a1;
  KeWaitForSingleObject(*(PVOID *)a1, Executive, 0, 0, 0LL);
  v16 = ExGenRandom(1, v13, v14, v15);
  v19 = v16 / 0xA;
  if ( v16 % 0xA >= 5 )
  {
    KeResetEvent(p_Object);
  }
  else
  {
    Object = 0;
    v45[1] = v45;
    p_Object = (struct _KEVENT *)&Object;
    v43 = 6;
    v45[0] = v45;
    v44 = 0;
  }
  v20 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = 0LL;
  v21 = *(_QWORD *)(v20 + 32);
  v22 = ExGenRandom(1, v19, v17, v18);
  v24 = v22 ^ 0x6A15A217BC2A27DBLL;
  *ThreadTerminationPort = 0LL;
  v25 = v22 ^ 0xDB;
  v26 = v21 ^ v24;
  v27 = v20 ^ v24;
  v47 = v25 & 1;
  v28 = v26;
  while ( 1 )
  {
    if ( (v28 ^ v24) >> 47 == -1 || (v28 ^ v24) >> 47 == 0 )
    {
      guard_dispatch_icall_no_overrides(v27 ^ v24, v28 ^ v24);
      v28 = *(_QWORD *)((v27 ^ v24) + 0x20) ^ v24;
    }
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v23) = 2;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v23);
    }
    v30 = 25;
    v31 = v28 ^ *(_QWORD *)((v27 ^ v24) + 0x40) ^ v24 | 0xFFFF800000000000uLL;
    v32 = __ROR8__(v31, (v28 ^ *(_BYTE *)((v27 ^ v24) + 0x40) ^ v24) & 0x3F);
    v33 = 0;
    v34 = v31 - 8;
    do
    {
      v35 = *(_QWORD *)(v34 + 8);
      v34 += 8LL;
      *(_QWORD *)v34 = v31 + (KiWaitAlways ^ _byteswap_uint64(v32 ^ __ROL8__(KiWaitNever ^ v35, KiWaitNever))) + v33;
      v32 = (v31 + __ROL8__(
                     __ROR8__(v33 ^ (unsigned __int64)(200 - v33), ~(_BYTE)v35 & 0x3F) ^ v32,
                     (v35 ^ 0xFA) & 0x3F)) ^ 0x2F8068FF;
      if ( v33 == 24 && *(_QWORD *)v31 != 0x85131481131482ELL )
      {
        *(_QWORD *)v34 ^= *(_QWORD *)v31 ^ 0x85131481131482ELL;
        v30 += *(_DWORD *)(v34 + 4);
        *(_QWORD *)v34 ^= *(_QWORD *)v31 ^ 0x85131481131482ELL;
      }
      ++v33;
    }
    while ( v33 < v30 );
    v36 = v47;
    v37 = *(_QWORD *)v31 ^ 0x85131481131482ELL;
    *(_BYTE *)(v31 + 3) = 17;
    *(_BYTE *)(v31 + 2) = 49;
    *(_BYTE *)(v31 + 1) = 72;
    *(_BYTE *)v31 = 46;
    guard_dispatch_icall_no_overrides(v31, v37);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    if ( *ThreadTerminationPort > 0 )
    {
      v39 = -*ThreadTerminationPort;
      *ThreadTerminationPort = 0LL;
      v41[0] = v39;
      guard_dispatch_icall_no_overrides(*(_QWORD *)(v39 + 24), v38);
      memset((void *)v39, 0, 0x20uLL);
      memset(v41, 0, 8uLL);
    }
    while ( 1 )
    {
      v40 = *ThreadTerminationPort;
      if ( *ThreadTerminationPort )
        break;
      if ( v36 )
        KeDelayExecutionThread(0, 0, &Interval);
      else
        KeWaitForSingleObject(p_Object, Executive, 0, 0, &Interval);
    }
    v28 = *(_QWORD *)(v40 + 32) ^ v24;
    v27 = v24 ^ v40;
    *ThreadTerminationPort = 0LL;
    if ( v36 )
      KeDelayExecutionThread(0, 0, &Interval);
    else
      KeWaitForSingleObject(p_Object, Executive, 0, 0, &Interval);
  }
}
