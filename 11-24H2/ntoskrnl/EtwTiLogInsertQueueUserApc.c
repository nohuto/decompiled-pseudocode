/*
 * XREFs of EtwTiLogInsertQueueUserApc @ 0x140262B38
 * Callers:
 *     KeInsertQueueApc @ 0x1402DF360 (KeInsertQueueApc.c)
 * Callees:
 *     EtwProviderEnabled @ 0x140262770 (EtwProviderEnabled.c)
 *     EtwpTiVadQueryEventWrite @ 0x140262ED4 (EtwpTiVadQueryEventWrite.c)
 *     EtwpTiFillProcessIdentity @ 0x1402633C0 (EtwpTiFillProcessIdentity.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void EtwTiLogInsertQueueUserApc(char a1, __int64 a2, __int64 a3, ...)
{
  _KPROCESS *v6; // r14
  _KPROCESS *Process; // rbx
  _KPROCESS *v8; // r12
  int v9; // eax
  bool v10; // zf
  const EVENT_DESCRIPTOR *EventDescriptor; // rsi
  __int64 Pool2; // rax
  struct _EVENT_DATA_DESCRIPTOR *v13; // rdi
  unsigned int v14; // eax
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // r8
  unsigned int v18; // ebx
  __int64 v19; // rcx
  struct _EVENT_DATA_DESCRIPTOR *v20; // rcx
  int v21; // eax
  __int64 v22; // r10
  __int64 v23; // rdx
  __int64 v24; // rax
  unsigned int v25; // ebx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned int v29; // ebx
  __int64 v30; // rax
  __int64 v31; // rax
  BOOLEAN v32; // al
  __int16 v33; // ax
  char v34; // [rsp+40h] [rbp-40h] BYREF
  __int64 v35; // [rsp+48h] [rbp-38h] BYREF
  __int64 v36; // [rsp+50h] [rbp-30h]
  _BYTE v37[8]; // [rsp+58h] [rbp-28h] BYREF
  _BYTE v38[8]; // [rsp+60h] [rbp-20h] BYREF
  _BYTE v39[8]; // [rsp+68h] [rbp-18h] BYREF
  __int64 v40; // [rsp+D8h] [rbp+58h] BYREF
  va_list va; // [rsp+D8h] [rbp+58h]
  __int64 v42; // [rsp+E0h] [rbp+60h] BYREF
  va_list va1; // [rsp+E0h] [rbp+60h]
  __int64 v44; // [rsp+E8h] [rbp+68h] BYREF
  va_list va2; // [rsp+E8h] [rbp+68h]
  __int64 v46; // [rsp+F0h] [rbp+70h]
  va_list va3; // [rsp+F8h] [rbp+78h] BYREF

  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v40 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v42 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v44 = va_arg(va3, _QWORD);
  v46 = va_arg(va3, _QWORD);
  v36 = 0LL;
  if ( EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0x3000uLL) )
  {
    v6 = *(_KPROCESS **)(a2 + 544);
    Process = KeGetCurrentThread()->ApcState.Process;
    v8 = KeGetCurrentThread()->Process;
    v9 = 0;
    v10 = (_BYTE)v46 ? v8 == v6 : Process == v6;
    LOBYTE(v9) = !v10;
    if ( v9 )
    {
      EventDescriptor = (const EVENT_DESCRIPTOR *)THREATINT_QUEUEUSERAPC_REMOTE_KERNEL_CALLER;
      if ( a1 )
        EventDescriptor = &THREATINT_QUEUEUSERAPC_REMOTE;
      if ( EtwEventEnabled(EtwThreatIntProvRegHandle, EventDescriptor)
        && ((KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0
         || EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0x20000000000uLL)) )
      {
        Pool2 = ExAllocatePool2(0x40uLL, 0x2A0uLL, 0x6E734954u);
        v13 = (struct _EVENT_DATA_DESCRIPTOR *)Pool2;
        if ( Pool2 )
        {
          v14 = EtwpTiFillProcessIdentity(Pool2, Process, v37);
          CurrentThread = KeGetCurrentThread();
          v17 = (_QWORD *)(v16 + 16LL * v14);
          *v17 = (char *)CurrentThread + 1296;
          v17[1] = 4LL;
          v17[2] = CurrentThread + 1;
          v17[3] = 8LL;
          v18 = EtwpTiFillProcessIdentity(&v13[v14 + 2], v6, v38) + v14 + 2;
          v19 = v18;
          v18 += 2;
          v20 = &v13[v19];
          v20->Ptr = a2 + 1296;
          *(_QWORD *)&v20->Size = 4LL;
          v20[1].Ptr = a2 + 1216;
          *(_QWORD *)&v20[1].Size = 8LL;
          v21 = EtwpTiFillProcessIdentity(&v13[v18], v8, v39);
          v23 = (unsigned int)(v22 + 1);
          v34 = (v22 + 1) & (*(_DWORD *)(a2 + 116) >> 4);
          v24 = v21 + v18;
          v25 = v23 + v24;
          v24 *= 2LL;
          *(&v13->Ptr + v24) = (ULONGLONG)&v34;
          *((_QWORD *)&v13->Size + v24) = v23;
          v26 = *(_QWORD *)(a2 + 544);
          if ( *(_QWORD *)(v26 + 784) == v22
            || (v33 = *(_WORD *)(v26 + 1772), v33 != 332) && v33 != 452
            || (v35 = -(a3 >> 2), (unsigned __int64)v35 > 0xFFFFFFFF) )
          {
            v35 = a3;
          }
          v27 = v25;
          v13[v27].Ptr = (ULONGLONG)&v35;
          *(_QWORD *)&v13[v27].Size = 8LL;
          v28 = (unsigned int)v23 + v25;
          v29 = v23 + v28;
          v28 *= 2LL;
          *(&v13->Ptr + v28) = (ULONGLONG)va;
          *((_QWORD *)&v13->Size + v28) = 8LL;
          v30 = v29;
          v13[v30].Ptr = (ULONGLONG)va1;
          *(_QWORD *)&v13[v30].Size = 8LL;
          v31 = (unsigned int)v23 + v29;
          v13[v31].Ptr = (ULONGLONG)va2;
          *(_QWORD *)&v13[v31].Size = 8LL;
          v32 = EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0x8000000uLL);
          if ( v32 )
            v36 = v40;
          EtwpTiVadQueryEventWrite(v13, (__int64)&v35, 2, EventDescriptor, v32);
          ExFreePoolWithTag(v13, 0);
        }
      }
    }
  }
}
