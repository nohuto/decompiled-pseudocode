/*
 * XREFs of PspSetContextThreadInternal @ 0x1408FD220
 * Callers:
 *     PspPicoSetContextThreadEx @ 0x14077A100 (PspPicoSetContextThreadEx.c)
 *     sub_1408FB3EC @ 0x1408FB3EC (sub_1408FB3EC.c)
 *     sub_1408FB650 @ 0x1408FB650 (sub_1408FB650.c)
 *     PspInitializeThunkContext @ 0x1408FE308 (PspInitializeThunkContext.c)
 *     PspWow64SetContextThread @ 0x140913174 (PspWow64SetContextThread.c)
 *     NtSetContextThread @ 0x140A71400 (NtSetContextThread.c)
 *     PsSetContextThread @ 0x140A9CFE0 (PsSetContextThread.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     KeInsertQueueApc @ 0x140337240 (KeInsertQueueApc.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     RtlpSanitizeContextFlags @ 0x1403E6DD0 (RtlpSanitizeContextFlags.c)
 *     RtlInitializeExtendedContext @ 0x1403E7270 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x1403E72F0 (RtlGetExtendedContextLength.c)
 *     KeInitializeEvent @ 0x140409D80 (KeInitializeEvent.c)
 *     KeInitializeApc @ 0x140422520 (KeInitializeApc.c)
 *     IoThreadToProcess @ 0x140441CC0 (IoThreadToProcess.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     PspGetSetContextSpecialApc @ 0x1406B3780 (PspGetSetContextSpecialApc.c)
 *     _alloca_probe @ 0x1406B3C80 (_alloca_probe.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     RtlpReadExtendedContext @ 0x1408FF0C0 (RtlpReadExtendedContext.c)
 *     EtwTiLogSetContextThread @ 0x140A260A0 (EtwTiLogSetContextThread.c)
 */

__int64 __fastcall PspSetContextThreadInternal(PETHREAD Thread, __int64 a2, char a3, char a4, char a5)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 result; // rax
  char v11; // si
  __int64 v12; // rdx
  __int64 v13; // rcx
  bool v14; // zf
  unsigned int v15; // ebx
  struct _KPROCESS *v16; // rdi
  unsigned int v17; // esi
  unsigned __int64 v18; // rax
  void *v19; // rsp
  int v20; // edx
  int v21; // ecx
  __int64 v22; // rax
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-20h]
  unsigned int v24; // [rsp+40h] [rbp+0h] BYREF
  unsigned int v25; // [rsp+44h] [rbp+4h] BYREF
  __int64 v26; // [rsp+48h] [rbp+8h] BYREF
  _BYTE v27[64]; // [rsp+50h] [rbp+10h] BYREF
  __int64 v28; // [rsp+90h] [rbp+50h] BYREF
  PETHREAD v29; // [rsp+98h] [rbp+58h] BYREF
  char v30; // [rsp+A8h] [rbp+68h]
  _BYTE v31[3]; // [rsp+A9h] [rbp+69h] BYREF
  int v32; // [rsp+ACh] [rbp+6Ch]
  struct _KEVENT Event; // [rsp+B0h] [rbp+70h] BYREF
  unsigned int *v34; // [rsp+C8h] [rbp+88h]

  v26 = 0LL;
  memset_0(v27, 0, 0x58uLL);
  memset_0(v31, 0, 0x127uLL);
  v25 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( a3 )
  {
    v22 = a2 + 48;
    if ( (unsigned __int64)(a2 + 48) >= 0x7FFFFFFF0000LL )
      v22 = 0x7FFFFFFF0000LL;
    v24 = *(_DWORD *)v22;
  }
  else
  {
    v24 = *(_DWORD *)(a2 + 48);
  }
  result = RtlpSanitizeContextFlags(&v24, a3);
  if ( (int)result >= 0 )
  {
    if ( !a3 )
    {
      v34 = (unsigned int *)a2;
      goto LABEL_6;
    }
    v17 = v24;
    result = RtlGetExtendedContextLength(v24, &v25);
    if ( (int)result >= 0 )
    {
      v18 = v25 + 15LL;
      if ( v18 <= v25 )
        v18 = 0xFFFFFFFFFFFFFF0LL;
      v19 = alloca(v18 & 0xFFFFFFFFFFFFFFF0uLL);
      v34 = &v24;
      memset_0(&v24, 0, v25);
      result = RtlInitializeExtendedContext((__int64)v34, v17, &v26);
      if ( (int)result >= 0 )
      {
        v34 = (unsigned int *)(v26 - 1232);
        LOBYTE(v20) = 1;
        result = RtlpReadExtendedContext(v21, v20, v26, v17, a2, 0LL);
        if ( (int)result >= 0 )
        {
LABEL_6:
          if ( a4 && (Thread->MiscFlags & 0x400) != 0 )
          {
            return (unsigned int)-1073741776;
          }
          else
          {
            v11 = v31[0] & 0xFB;
            v31[0] &= ~4u;
            if ( a4 )
            {
              if ( (a5 & 2) == 0 )
              {
                v16 = IoThreadToProcess(CurrentThread);
                if ( IoThreadToProcess(Thread) == v16 )
                  v11 |= 0x14u;
              }
            }
            v30 = a4;
            if ( Thread == CurrentThread )
            {
              v28 = 1LL;
              v29 = Thread;
              v31[0] = v11 & 0xFC | (2 * (a5 & 1));
              --CurrentThread->SpecialApcDisable;
              Timeout = (PLARGE_INTEGER)&v29;
              PspGetSetContextSpecialApc((__int64)v27, 0LL, 0LL, &v28);
              v14 = CurrentThread->SpecialApcDisable++ == -1;
              if ( v14
                && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
              {
                KiCheckForKernelApcDelivery(v13, v12);
              }
              goto LABEL_14;
            }
            v31[0] = v11 & 0xFD | (2 * (a5 & 1)) | 1;
            KeInitializeEvent(&Event, NotificationEvent, 0);
            KeInitializeApc((__int64)v27, (__int64)Thread, 0, (__int64)PspGetSetContextSpecialApc, 0LL, 0LL, 0, 0LL);
            if ( (unsigned __int8)KeInsertQueueApc((__int64)v27, 1LL, (__int64)Thread, 2u) )
            {
              KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
LABEL_14:
              v15 = v32;
              if ( v32 >= 0 && a3 == 1 && a4 == 1 )
                EtwTiLogSetContextThread((unsigned __int8)KeGetCurrentThread()->PreviousMode, Thread, v34, v24, Timeout);
              return v15;
            }
            return (unsigned int)-1073741823;
          }
        }
      }
    }
  }
  return result;
}
