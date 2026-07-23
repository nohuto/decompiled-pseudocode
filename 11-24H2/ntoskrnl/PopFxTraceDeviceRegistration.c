/*
 * XREFs of PopFxTraceDeviceRegistration @ 0x140A505AC
 * Callers:
 *     PopDiagTraceFxRundown @ 0x1402B69F4 (PopDiagTraceFxRundown.c)
 *     PopFxRegisterDevice @ 0x14074CC80 (PopFxRegisterDevice.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     PopFxAddLogEntry @ 0x1402E69B4 (PopFxAddLogEntry.c)
 *     PopPepGetComponentVetoMasks @ 0x1404A3EAC (PopPepGetComponentVetoMasks.c)
 *     PopPepGetDeviceVetoMasks @ 0x1404BD07C (PopPepGetDeviceVetoMasks.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PopDiagTraceFxDeviceRegistration @ 0x140A5084C (PopDiagTraceFxDeviceRegistration.c)
 *     PopDiagTraceFxComponentRegistration @ 0x140A50944 (PopDiagTraceFxComponentRegistration.c)
 *     PopFxTracePerfRegistration @ 0x140AB99D0 (PopFxTracePerfRegistration.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PopFxTraceDeviceRegistration(__int64 a1, char a2)
{
  unsigned int *v3; // rbx
  __int64 *v5; // r15
  const EVENT_DESCRIPTOR *v6; // rdi
  __int64 v7; // rcx
  const EVENT_DESCRIPTOR *v8; // rax
  unsigned int v9; // edi
  __int64 *v10; // rdx
  unsigned int v11; // ebx
  __int64 Pool2; // rax
  _DWORD *v13; // rsi
  __int64 v14; // rcx
  unsigned int v15; // ebx
  void *v16; // r13
  __int64 v17; // r12
  __int64 v18; // r14
  __int64 i; // r9
  __int64 v20; // r8
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 *v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rax
  unsigned int v27; // ecx
  const EVENT_DESCRIPTOR *EventDescriptor; // [rsp+48h] [rbp-60h]
  __int64 v30; // [rsp+50h] [rbp-58h] BYREF
  int v31; // [rsp+58h] [rbp-50h]

  v3 = (unsigned int *)(a1 + 868);
  v5 = (__int64 *)(a1 + 48);
  if ( a2 )
  {
    v6 = &POP_ETW_EVENT_DEVICE_REGISTRATION_RUNDOWN;
  }
  else
  {
    PopFxAddLogEntry(*v5, 0, 1, *v3);
    v6 = (const EVENT_DESCRIPTOR *)POP_ETW_EVENT_DEVICE_REGISTRATION;
  }
  if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, v6) )
  {
    v7 = *(_QWORD *)(a1 + 56);
    v30 = 0LL;
    v31 = 0;
    PopPepGetDeviceVetoMasks(v7, (__int64)&v30);
    PopDiagTraceFxDeviceRegistration(v6, *(_DWORD *)(a1 + 32), *v5 + 128, *v3, (__int64)&v30);
    v8 = (const EVENT_DESCRIPTOR *)POP_ETW_EVENT_COMPONENT_REGISTRATION_RUNDOWN;
    if ( !a2 )
      v8 = &POP_ETW_EVENT_COMPONENT_REGISTRATION;
    EventDescriptor = v8;
    if ( EtwEventEnabled(PopDiagHandle, v8) )
    {
      v9 = *v3;
      if ( *v3 )
      {
        v10 = *(__int64 **)(a1 + 872);
        v11 = *(_DWORD *)(*v10 + 156);
        if ( v9 > 1 )
        {
          v24 = v10 + 1;
          v25 = v9 - 1;
          do
          {
            v26 = *v24++;
            v27 = *(_DWORD *)(v26 + 156);
            if ( v27 <= v11 )
              v27 = v11;
            v11 = v27;
            --v25;
          }
          while ( v25 );
        }
        Pool2 = ExAllocatePool2(0x100uLL, 28 * v11, 0x4D584650u);
        v13 = (_DWORD *)Pool2;
        if ( Pool2 )
        {
          v14 = v11;
          v15 = 0;
          v16 = (void *)(Pool2 + 24 * v14);
          if ( v9 )
          {
            v17 = 0LL;
            do
            {
              v18 = *(_QWORD *)(v17 + *(_QWORD *)(a1 + 872));
              memset_0(v16, 0, 4LL * *(unsigned int *)(v18 + 156));
              PopPepGetComponentVetoMasks(*(_QWORD *)(a1 + 56), v15, (__int64)v16);
              for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v18 + 156); v13[2 * v20 + 5] = v21 )
              {
                v20 = 3 * i;
                *(_QWORD *)&v13[2 * v20] = *(_QWORD *)(*(_QWORD *)(v18 + 160) + 24 * i);
                *(_QWORD *)&v13[2 * v20 + 2] = *(_QWORD *)(*(_QWORD *)(v18 + 160) + 24 * i + 8);
                v13[2 * v20 + 4] = *(_DWORD *)(*(_QWORD *)(v18 + 160) + 24 * i + 16);
                v21 = *((_DWORD *)v16 + i);
                i = (unsigned int)(i + 1);
              }
              PopDiagTraceFxComponentRegistration(
                EventDescriptor,
                *(_DWORD *)(v18 + 152),
                *(_DWORD *)(v18 + 156),
                (__int64)v13);
              v23 = *(_QWORD *)(v18 + 424);
              if ( v23 )
              {
                LOBYTE(v22) = a2;
                PopFxTracePerfRegistration(v23, v22);
              }
              ++v15;
              v17 += 8LL;
            }
            while ( v15 < v9 );
          }
          ExFreePoolWithTag(v13, 0x4D584650u);
        }
      }
    }
  }
}
