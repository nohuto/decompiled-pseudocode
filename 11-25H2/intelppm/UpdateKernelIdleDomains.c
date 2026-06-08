/*
 * XREFs of UpdateKernelIdleDomains @ 0x140028E2C
 * Callers:
 *     DeregisterKernelIdleDomains @ 0x14003D960 (DeregisterKernelIdleDomains.c)
 *     RegisterKernelIdleDomains @ 0x14003E75C (RegisterKernelIdleDomains.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1400050E8 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall @ 0x14000FF90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UpdateKernelIdleDomains(__int64 a1)
{
  __int64 v2; // rbp
  char *Pool2; // rax
  char *v4; // rdi
  int v5; // ebx
  __int64 v6; // rsi
  char *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rdx

  v2 = *(unsigned int *)(*(_QWORD *)(a1 + 712) + 40LL);
  Pool2 = (char *)ExAllocatePool2(64LL, (unsigned int)(264 * v2 + 272), 1919119952LL);
  v4 = Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)Pool2 = 82;
    *((_DWORD *)Pool2 + 1) = v2;
    KeInitializeAffinityEx2(Pool2 + 8, 32LL);
    KeAddProcessorAffinityEx(v4 + 8, *(unsigned int *)(a1 + 56));
    if ( (_DWORD)v2 )
    {
      v6 = 0LL;
      v7 = v4 + 272;
      do
      {
        KeInitializeAffinityEx2(v7, 32LL);
        v8 = *(_QWORD *)(v6 + *(_QWORD *)(a1 + 712) + 120);
        if ( v8 )
        {
          v9 = *(_QWORD *)(v8 + 8);
          if ( v9 )
          {
            if ( *(_DWORD *)(v9 + 32) >= *(_DWORD *)(v9 + 44) )
              KeCopyAffinityEx2(v7, v9 + 48);
          }
        }
        v7 += 264;
        v6 += 88LL;
        --v2;
      }
      while ( v2 );
    }
    v5 = ((__int64 (__fastcall *)(char *))qword_1400194C0)(v4);
    if ( v5 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        0x1Bu,
        (__int64)&WPP_98f9ac7a230638fb843a3fa300c5ade8_Traceguids,
        v5);
    ExFreePoolWithTag(v4, (ULONG)0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v5;
}
