/*
 * XREFs of PsSyscallProviderDispatch @ 0x140A98970
 * Callers:
 *     KiSystemCall64 @ 0x1406BED40 (KiSystemCall64.c)
 * Callees:
 *     IoThreadToProcess @ 0x140438740 (IoThreadToProcess.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     PspSyscallProviderServiceDispatch @ 0x1406B46B0 (PspSyscallProviderServiceDispatch.c)
 *     PspEnsureGuiThreadAndBatchFlush @ 0x1407714E8 (PspEnsureGuiThreadAndBatchFlush.c)
 *     PspSyscallProviderServiceDispatchGeneric @ 0x1407718D4 (PspSyscallProviderServiceDispatchGeneric.c)
 *     PsPicoSystemCallDispatch @ 0x140A98B08 (PsPicoSystemCallDispatch.c)
 */

__int64 __fastcall PsSyscallProviderDispatch(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 result; // rax
  PEPROCESS v4; // rax
  unsigned int v5; // edi
  __int64 v6; // rcx
  _QWORD *v7; // r15
  unsigned int *v8; // rbx
  __int64 v9; // r14
  unsigned __int64 v10; // rbx
  int v11; // eax
  unsigned int v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // [rsp+70h] [rbp+18h] BYREF

  v15 = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->Header.Reserved1 & 4) != 0 )
  {
    PsPicoSystemCallDispatch();
    return 0LL;
  }
  v4 = IoThreadToProcess(CurrentThread);
  v5 = *(_DWORD *)(a1 + 48) & 0xFFFF9FFF;
  v6 = HIDWORD(v4[4].ActiveGroupPadding[1]);
  if ( (unsigned int)v6 >= 0x20 )
    KeBugCheckEx(0x1E0u, 5uLL, (unsigned int)v6, v4[4].ActiveGroupsMask.Masks[0], 0LL);
  v7 = (_QWORD *)((char *)&PspServiceDescriptorGroupTable + 24 * v6);
  v8 = (unsigned int *)v7[((v5 >> 12) & 7) + 1];
  if ( !v8 )
    return 1LL;
  if ( (*(_DWORD *)(a1 + 48) & 0xFFFu) >= *v8 )
  {
    *(_QWORD *)(a1 + 48) = 3221225500LL;
    return 0LL;
  }
  v9 = *(_WORD *)(a1 + 48) & 0xFFF;
  v10 = v8[v9 + 1];
  if ( !(_DWORD)v10 )
    return 1LL;
  if ( (_DWORD)v10 != 1 )
  {
    if ( (*(_WORD *)(a1 + 48) & 0x1000) == 0x1000
      && (v11 = PspEnsureGuiThreadAndBatchFlush((__int64)CurrentThread), v12 = v11, v11 < 0) )
    {
      if ( v11 == -1073741823 )
      {
        v12 = *(char *)(v9 + 4LL * (unsigned int)xmmword_140FC72F0 + xmmword_140FC72E0);
        if ( v12 == 1 )
          v12 = -1073741796;
      }
      v13 = v12;
    }
    else
    {
      v14 = *v7 + ((v10 >> 4) & 0xFFFFFFFFFFFFFF0LL);
      if ( (v10 & 0x10) != 0 )
      {
        result = PspSyscallProviderServiceDispatchGeneric(a1, v14, v10 & 0xF, v5, &v15);
        if ( (_DWORD)result )
          return result;
        v13 = v15;
        goto LABEL_22;
      }
      v13 = PspSyscallProviderServiceDispatch((_QWORD *)a1, v14, v10 & 0xF);
    }
    result = 0LL;
LABEL_22:
    *(_QWORD *)(a1 + 48) = v13;
    return result;
  }
  return 2LL;
}
