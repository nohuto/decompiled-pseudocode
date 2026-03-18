/*
 * XREFs of PspGetContextThreadInternal @ 0x1408FD570
 * Callers:
 *     PspPicoGetContextThreadEx @ 0x14077A0D0 (PspPicoGetContextThreadEx.c)
 *     sub_1408FB3EC @ 0x1408FB3EC (sub_1408FB3EC.c)
 *     sub_1408FB650 @ 0x1408FB650 (sub_1408FB650.c)
 *     PsGetUserContextThread @ 0x1408FD1FC (PsGetUserContextThread.c)
 *     PspInitializeThunkContext @ 0x1408FE308 (PspInitializeThunkContext.c)
 *     PspWow64SetContextThread @ 0x140913174 (PspWow64SetContextThread.c)
 *     PspWow64GetContextThread @ 0x1409A90C0 (PspWow64GetContextThread.c)
 *     NtGetContextThread @ 0x140A26DF0 (NtGetContextThread.c)
 *     PsGetContextThread @ 0x140A4C350 (PsGetContextThread.c)
 *     NtCreateUserProcess @ 0x140ACBA80 (NtCreateUserProcess.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     KeInsertQueueApc @ 0x140337240 (KeInsertQueueApc.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     RtlpSanitizeContextFlags @ 0x1403E6DD0 (RtlpSanitizeContextFlags.c)
 *     RtlInitializeExtendedContext @ 0x1403E7270 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x1403E72F0 (RtlGetExtendedContextLength.c)
 *     KeInitializeEvent @ 0x140409D80 (KeInitializeEvent.c)
 *     KeInitializeApc @ 0x140422520 (KeInitializeApc.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     PspGetSetContextSpecialApc @ 0x1406B3780 (PspGetSetContextSpecialApc.c)
 *     _alloca_probe @ 0x1406B3C80 (_alloca_probe.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     RtlpWriteExtendedContext @ 0x1408FD85C (RtlpWriteExtendedContext.c)
 *     RtlpReadExtendedContext @ 0x1408FF0C0 (RtlpReadExtendedContext.c)
 */

__int64 __fastcall PspGetContextThreadInternal(__int64 a1, __int64 a2, char a3, char a4, char a5)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 result; // rax
  __int64 v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rcx
  bool v14; // zf
  unsigned int v15; // r12d
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  void *v18; // rsp
  void *v19; // rsp
  int v20; // ecx
  __int64 v21; // rax
  unsigned int v22; // [rsp+40h] [rbp+0h] BYREF
  unsigned int v23; // [rsp+44h] [rbp+4h] BYREF
  __int64 v24; // [rsp+48h] [rbp+8h] BYREF
  _BYTE v25[64]; // [rsp+50h] [rbp+10h] BYREF
  _QWORD v26[3]; // [rsp+90h] [rbp+50h] BYREF
  char v27; // [rsp+A8h] [rbp+68h]
  _BYTE v28[3]; // [rsp+A9h] [rbp+69h] BYREF
  int v29; // [rsp+ACh] [rbp+6Ch]
  struct _KEVENT Event; // [rsp+B0h] [rbp+70h] BYREF
  unsigned int *v31; // [rsp+C8h] [rbp+88h]
  _OWORD v32[2]; // [rsp+1D0h] [rbp+190h] BYREF

  v24 = 0LL;
  memset_0(v25, 0, 0x58uLL);
  memset_0(v28, 0, 0x127uLL);
  v23 = 0;
  memset(v32, 0, sizeof(v32));
  CurrentThread = KeGetCurrentThread();
  if ( a3 )
  {
    v21 = a2 + 48;
    if ( (unsigned __int64)(a2 + 48) >= 0x7FFFFFFF0000LL )
      v21 = 0x7FFFFFFF0000LL;
    v22 = *(_DWORD *)v21;
  }
  else
  {
    v22 = *(_DWORD *)(a2 + 48);
  }
  result = RtlpSanitizeContextFlags(&v22, a3);
  if ( (int)result >= 0 )
  {
    if ( a3 )
    {
      v15 = v22;
      result = RtlGetExtendedContextLength(v22, &v23);
      if ( (int)result < 0 )
        return result;
      v16 = v23 + 15LL;
      if ( v16 <= v23 )
        v16 = 0xFFFFFFFFFFFFFF0LL;
      v17 = v16 & 0xFFFFFFFFFFFFFFF0uLL;
      v18 = alloca(v17);
      v19 = alloca(v17);
      v31 = &v22;
      result = RtlInitializeExtendedContext((__int64)&v22, v15, &v24);
      if ( (int)result < 0 )
        return result;
      v11 = v24;
      v31 = (unsigned int *)(v24 - 1232);
      result = RtlpReadExtendedContext(v20, 0, v24, v15, a2, (__int64)v32);
      if ( (int)result < 0 )
        return result;
    }
    else
    {
      v31 = (unsigned int *)a2;
      v11 = a2 + 1232;
    }
    if ( a4 && (*(_DWORD *)(a1 + 116) & 0x400) != 0 )
    {
      return 3221225520LL;
    }
    else
    {
      v27 = a4;
      if ( (struct _KTHREAD *)a1 == CurrentThread )
      {
        v26[0] = 0LL;
        v26[1] = a1;
        v28[0] = v28[0] & 0xFC | (2 * (a5 & 1));
        --CurrentThread->SpecialApcDisable;
        PspGetSetContextSpecialApc((__int64)v25, 0LL, 0LL, v26);
        v14 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v14
          && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery(v13, v12);
        }
      }
      else
      {
        v28[0] = v28[0] & 0xFD | (2 * (a5 & 1)) | 1;
        KeInitializeEvent(&Event, NotificationEvent, 0);
        KeInitializeApc((__int64)v25, a1, 0, (__int64)PspGetSetContextSpecialApc, 0LL, 0LL, 0, 0LL);
        if ( !(unsigned __int8)KeInsertQueueApc((__int64)v25, 0LL, a1, 2u) )
          return 3221225473LL;
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      }
      result = (unsigned int)v29;
      if ( v29 >= 0 && v31 != (unsigned int *)a2 )
        return RtlpWriteExtendedContext(v29, (int)a2 + 1232, (unsigned int)v32, v31[12], v11);
    }
  }
  return result;
}
