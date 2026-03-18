/*
 * XREFs of VidMmInitializeWorkerThread @ 0x140098D44
 * Callers:
 *     ?CreateWorkerThread@VIDMM_GLOBAL@@QEAAJXZ @ 0x140098A40 (-CreateWorkerThread@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140027B84 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     VidMmRequestWorkerThreadStatus @ 0x1400FF084 (VidMmRequestWorkerThreadStatus.c)
 */

__int64 __fastcall VidMmInitializeWorkerThread(__int64 *StartContext, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rax
  bool v9; // zf
  KSTART_ROUTINE *StartRoutine; // rax
  __int64 v11; // rdx
  NTSTATUS v12; // edi
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-38h] BYREF
  void *ThreadHandle; // [rsp+80h] [rbp+8h] BYREF

  *a2 = 0LL;
  v4 = operator new(72LL, 0x37346956u, 64LL);
  StartContext[3] = v4;
  if ( !v4 )
    return 3221225495LL;
  v6 = 0LL;
  v7 = 3LL;
  do
  {
    KeInitializeEvent((PRKEVENT)(v6 + StartContext[3]), SynchronizationEvent, 0);
    v6 += 24LL;
    --v7;
  }
  while ( v7 );
  v8 = *StartContext;
  memset(&ObjectAttributes.Length + 1, 0, 20);
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ThreadHandle = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 512;
  v9 = (*(_BYTE *)(v8 + 40937) & 0x10) == 0;
  StartRoutine = (KSTART_ROUTINE *)VidMmWorkerThreadProc2;
  if ( v9 )
    StartRoutine = VidMmWorkerThreadProc;
  v12 = PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, &ObjectAttributes, 0LL, 0LL, StartRoutine, StartContext);
  if ( v12 >= 0 )
  {
    LOBYTE(v11) = 1;
    VidMmRequestWorkerThreadStatus(StartContext, v11, 0LL);
    ObfReferenceObject((PVOID)StartContext[1]);
    ZwClose(ThreadHandle);
    *a2 = StartContext[3];
  }
  return (unsigned int)v12;
}
