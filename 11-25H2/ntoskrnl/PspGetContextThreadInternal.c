/*
 * XREFs of PspGetContextThreadInternal @ 0x140909940
 * Callers:
 *     PspPicoGetContextThreadEx @ 0x14076A420 (PspPicoGetContextThreadEx.c)
 *     PspWow64GetContextThread_BeforeFix @ 0x14076CC9C (PspWow64GetContextThread_BeforeFix.c)
 *     PspWow64SetContextThread_BeforeFix @ 0x14076D0C0 (PspWow64SetContextThread_BeforeFix.c)
 *     PspWow64SetContextThread @ 0x1408B96E4 (PspWow64SetContextThread.c)
 *     sub_140907938 @ 0x140907938 (sub_140907938.c)
 *     sub_140907BA0 @ 0x140907BA0 (sub_140907BA0.c)
 *     PsGetUserContextThread @ 0x1409095C4 (PsGetUserContextThread.c)
 *     PspInitializeThunkContext @ 0x14090A9A0 (PspInitializeThunkContext.c)
 *     PsGetContextThread @ 0x14090B6C0 (PsGetContextThread.c)
 *     NtGetContextThread @ 0x14090B750 (NtGetContextThread.c)
 *     NtCreateUserProcess @ 0x1409BC1D0 (NtCreateUserProcess.c)
 *     PspWow64GetContextThread @ 0x1409C4730 (PspWow64GetContextThread.c)
 * Callees:
 *     RtlGetExtendedContextLength @ 0x140261030 (RtlGetExtendedContextLength.c)
 *     RtlpSanitizeContextFlags @ 0x140262830 (RtlpSanitizeContextFlags.c)
 *     RtlInitializeExtendedContext @ 0x140262930 (RtlInitializeExtendedContext.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeInsertQueueApc @ 0x1402EFFB0 (KeInsertQueueApc.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     KeInitializeEvent @ 0x140401B80 (KeInitializeEvent.c)
 *     KeInitializeApc @ 0x140429EA0 (KeInitializeApc.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     PspGetSetContextSpecialApc @ 0x1406A84B0 (PspGetSetContextSpecialApc.c)
 *     _alloca_probe @ 0x1406A89B0 (_alloca_probe.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     RtlpReadExtendedContext @ 0x140859000 (RtlpReadExtendedContext.c)
 *     RtlpWriteExtendedContext @ 0x140909C2C (RtlpWriteExtendedContext.c)
 */

int __fastcall PspGetContextThreadInternal(__int64 a1, __int64 a2, char a3, char a4, char a5)
{
  struct _KTHREAD *CurrentThread; // rdi
  int result; // eax
  PCONTEXT_EX v11; // r14
  bool v12; // zf
  ULONG v13; // r12d
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  void *v16; // rsp
  void *v17; // rsp
  __int64 v18; // rcx
  __int64 v19; // rax
  ULONG ContextFlags; // [rsp+40h] [rbp+0h] BYREF
  ULONG ContextLength; // [rsp+44h] [rbp+4h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+48h] [rbp+8h] BYREF
  _BYTE v23[64]; // [rsp+50h] [rbp+10h] BYREF
  _QWORD v24[3]; // [rsp+90h] [rbp+50h] BYREF
  char v25; // [rsp+A8h] [rbp+68h]
  _BYTE v26[3]; // [rsp+A9h] [rbp+69h] BYREF
  int v27; // [rsp+ACh] [rbp+6Ch]
  struct _KEVENT Event; // [rsp+B0h] [rbp+70h] BYREF
  ULONG *p_ContextFlags; // [rsp+C8h] [rbp+88h]
  _OWORD v30[2]; // [rsp+1D0h] [rbp+190h] BYREF

  ContextEx = 0LL;
  memset_0(v23, 0, 0x58uLL);
  memset_0(v26, 0, 0x127uLL);
  ContextLength = 0;
  memset(v30, 0, sizeof(v30));
  CurrentThread = KeGetCurrentThread();
  if ( a3 )
  {
    v19 = a2 + 48;
    if ( (unsigned __int64)(a2 + 48) >= 0x7FFFFFFF0000LL )
      v19 = 0x7FFFFFFF0000LL;
    ContextFlags = *(_DWORD *)v19;
  }
  else
  {
    ContextFlags = *(_DWORD *)(a2 + 48);
  }
  result = RtlpSanitizeContextFlags(&ContextFlags, a3);
  if ( result >= 0 )
  {
    if ( a3 )
    {
      v13 = ContextFlags;
      result = RtlGetExtendedContextLength(ContextFlags, &ContextLength);
      if ( result < 0 )
        return result;
      v14 = ContextLength + 15LL;
      if ( v14 <= ContextLength )
        v14 = 0xFFFFFFFFFFFFFF0LL;
      v15 = v14 & 0xFFFFFFFFFFFFFFF0uLL;
      v16 = alloca(v15);
      v17 = alloca(v15);
      p_ContextFlags = &ContextFlags;
      result = RtlInitializeExtendedContext((PCONTEXT)&ContextFlags, v13, &ContextEx);
      if ( result < 0 )
        return result;
      v11 = ContextEx;
      p_ContextFlags = (ULONG *)&ContextEx[-39].XState;
      result = RtlpReadExtendedContext(v18, 0, (__int64)ContextEx, v13, a2, v30);
      if ( result < 0 )
        return result;
    }
    else
    {
      p_ContextFlags = (ULONG *)a2;
      v11 = (PCONTEXT_EX)(a2 + 1232);
    }
    if ( a4 && (*(_DWORD *)(a1 + 116) & 0x400) != 0 )
    {
      return -1073741776;
    }
    else
    {
      v25 = a4;
      if ( (struct _KTHREAD *)a1 == CurrentThread )
      {
        v24[0] = 0LL;
        v24[1] = a1;
        v26[0] = v26[0] & 0xFC | (2 * (a5 & 1));
        --CurrentThread->SpecialApcDisable;
        PspGetSetContextSpecialApc((__int64)v23, 0LL, 0LL, v24);
        v12 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v12
          && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery();
        }
      }
      else
      {
        v26[0] = v26[0] & 0xFD | (2 * (a5 & 1)) | 1;
        KeInitializeEvent(&Event, NotificationEvent, 0);
        KeInitializeApc((__int64)v23, a1, 0, (__int64)PspGetSetContextSpecialApc, 0LL, 0LL, 0, 0LL);
        if ( !(unsigned __int8)KeInsertQueueApc((__int64)v23, 0LL, a1, 2u) )
          return -1073741823;
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      }
      result = v27;
      if ( v27 >= 0 && p_ContextFlags != (ULONG *)a2 )
        return RtlpWriteExtendedContext(v27, (int)a2 + 1232, (unsigned int)v30, p_ContextFlags[12], (__int64)v11);
    }
  }
  return result;
}
