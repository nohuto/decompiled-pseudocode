/*
 * XREFs of PspSetContextThreadInternal @ 0x14091FB00
 * Callers:
 *     PspPicoSetContextThreadEx @ 0x14077A200 (PspPicoSetContextThreadEx.c)
 *     PspWow64SetContextThread @ 0x1408EA8C4 (PspWow64SetContextThread.c)
 *     sub_14091DCCC @ 0x14091DCCC (sub_14091DCCC.c)
 *     sub_14091DF30 @ 0x14091DF30 (sub_14091DF30.c)
 *     PspInitializeThunkContext @ 0x140920BE8 (PspInitializeThunkContext.c)
 *     NtSetContextThread @ 0x140A6A7E0 (NtSetContextThread.c)
 *     PsSetContextThread @ 0x140A98550 (PsSetContextThread.c)
 * Callees:
 *     KeInsertQueueApc @ 0x1402DF360 (KeInsertQueueApc.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     RtlpSanitizeContextFlags @ 0x1403D4970 (RtlpSanitizeContextFlags.c)
 *     RtlInitializeExtendedContext @ 0x1403D4E10 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x1403D4E90 (RtlGetExtendedContextLength.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     KeInitializeApc @ 0x1404163D0 (KeInitializeApc.c)
 *     IoThreadToProcess @ 0x140438740 (IoThreadToProcess.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PspGetSetContextSpecialApc @ 0x1406B4720 (PspGetSetContextSpecialApc.c)
 *     _alloca_probe @ 0x1406B4C20 (_alloca_probe.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     RtlpReadExtendedContext @ 0x1409219A0 (RtlpReadExtendedContext.c)
 *     EtwTiLogSetContextThread @ 0x140A1AB28 (EtwTiLogSetContextThread.c)
 */

int __fastcall PspSetContextThreadInternal(PETHREAD Thread, _CONTEXT *a2, char a3, char a4, char a5)
{
  struct _KTHREAD *CurrentThread; // r14
  int result; // eax
  char v11; // si
  bool v12; // zf
  int v13; // ebx
  struct _KPROCESS *v14; // rdi
  ULONG v15; // esi
  unsigned __int64 v16; // rax
  void *v17; // rsp
  int v18; // edx
  int v19; // ecx
  __int64 p_ContextFlags; // rax
  ULONG ContextFlags; // [rsp+40h] [rbp+0h] BYREF
  ULONG ContextLength; // [rsp+44h] [rbp+4h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+48h] [rbp+8h] BYREF
  _BYTE v24[64]; // [rsp+50h] [rbp+10h] BYREF
  _QWORD v25[3]; // [rsp+90h] [rbp+50h] BYREF
  char v26; // [rsp+A8h] [rbp+68h]
  _BYTE v27[3]; // [rsp+A9h] [rbp+69h] BYREF
  int v28; // [rsp+ACh] [rbp+6Ch]
  struct _KEVENT Event; // [rsp+B0h] [rbp+70h] BYREF
  PCONTEXT Context; // [rsp+C8h] [rbp+88h]

  ContextEx = 0LL;
  memset_0(v24, 0, 0x58uLL);
  memset_0(v27, 0, 0x127uLL);
  ContextLength = 0;
  CurrentThread = KeGetCurrentThread();
  if ( a3 )
  {
    p_ContextFlags = (__int64)&a2->ContextFlags;
    if ( (unsigned __int64)&a2->ContextFlags >= 0x7FFFFFFF0000LL )
      p_ContextFlags = 0x7FFFFFFF0000LL;
    ContextFlags = *(_DWORD *)p_ContextFlags;
  }
  else
  {
    ContextFlags = a2->ContextFlags;
  }
  result = RtlpSanitizeContextFlags(&ContextFlags, a3);
  if ( result >= 0 )
  {
    if ( !a3 )
    {
      Context = a2;
      goto LABEL_6;
    }
    v15 = ContextFlags;
    result = RtlGetExtendedContextLength(ContextFlags, &ContextLength);
    if ( result >= 0 )
    {
      v16 = ContextLength + 15LL;
      if ( v16 <= ContextLength )
        v16 = 0xFFFFFFFFFFFFFF0LL;
      v17 = alloca(v16 & 0xFFFFFFFFFFFFFFF0uLL);
      Context = (PCONTEXT)&ContextFlags;
      memset_0(&ContextFlags, 0, ContextLength);
      result = RtlInitializeExtendedContext(Context, v15, &ContextEx);
      if ( result >= 0 )
      {
        Context = (PCONTEXT)&ContextEx[-39].XState;
        LOBYTE(v18) = 1;
        result = RtlpReadExtendedContext(v19, v18, (_DWORD)ContextEx, v15, (__int64)a2, 0LL);
        if ( result >= 0 )
        {
LABEL_6:
          if ( a4 && (Thread->MiscFlags & 0x400) != 0 )
            return -1073741776;
          v11 = v27[0] & 0xFB;
          v27[0] &= ~4u;
          if ( a4 )
          {
            if ( (a5 & 2) == 0 )
            {
              v14 = IoThreadToProcess(CurrentThread);
              if ( IoThreadToProcess(Thread) == v14 )
                v11 |= 0x14u;
            }
          }
          v26 = a4;
          if ( Thread == CurrentThread )
          {
            v25[0] = 1LL;
            v25[1] = Thread;
            v27[0] = v11 & 0xFC | (2 * (a5 & 1));
            --CurrentThread->SpecialApcDisable;
            PspGetSetContextSpecialApc((__int64)v24, 0LL, 0LL, v25);
            v12 = CurrentThread->SpecialApcDisable++ == -1;
            if ( v12
              && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
            {
              KiCheckForKernelApcDelivery();
            }
            goto LABEL_14;
          }
          v27[0] = v11 & 0xFD | (2 * (a5 & 1)) | 1;
          KeInitializeEvent(&Event, NotificationEvent, 0);
          KeInitializeApc((__int64)v24, (__int64)Thread, 0, (__int64)PspGetSetContextSpecialApc, 0LL, 0LL, 0, 0LL);
          if ( (unsigned __int8)KeInsertQueueApc((__int64)v24, 1LL, (__int64)Thread, 2u) )
          {
            KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
LABEL_14:
            v13 = v28;
            if ( v28 >= 0 && a3 == 1 && a4 == 1 )
              EtwTiLogSetContextThread(
                (unsigned __int8)KeGetCurrentThread()->PreviousMode,
                Thread,
                Context,
                ContextFlags);
            return v13;
          }
          return -1073741823;
        }
      }
    }
  }
  return result;
}
