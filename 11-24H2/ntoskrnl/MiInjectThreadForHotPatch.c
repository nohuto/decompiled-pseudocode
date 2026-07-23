/*
 * XREFs of MiInjectThreadForHotPatch @ 0x1407F3738
 * Callers:
 *     MiHotPatchProcess @ 0x1407F32D8 (MiHotPatchProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwCreateThreadEx @ 0x1406A8CD0 (ZwCreateThreadEx.c)
 *     MiLogHotPatchOperationStatus @ 0x1407F4298 (MiLogHotPatchOperationStatus.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 *     PsGetThreadExitStatus @ 0x140992A70 (PsGetThreadExitStatus.c)
 */

__int64 __fastcall MiInjectThreadForHotPatch(PVOID Argument, int a2, int a3)
{
  unsigned int v3; // edi
  struct _EX_RUNDOWN_REF *p_Blink; // rsi
  BOOLEAN v8; // al
  int v9; // r14d
  struct _KTHREAD *v10; // rbx
  NTSTATUS ThreadExitStatus; // eax
  HANDLE ThreadHandle; // [rsp+68h] [rbp-9h] BYREF
  LARGE_INTEGER Timeout; // [rsp+70h] [rbp-1h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp+7h] BYREF
  PVOID Object; // [rsp+F0h] [rbp+7Fh] BYREF

  v3 = 0;
  memset(&ObjectAttributes, 0, 44);
  Timeout.QuadPart = 0LL;
  ThreadHandle = 0LL;
  Object = 0LL;
  p_Blink = (struct _EX_RUNDOWN_REF *)&KeGetCurrentThread()->ApcState.Process[1].ProfileListHead.Blink;
  v8 = ExAcquireRundownProtection_0(p_Blink);
  v9 = v8;
  if ( !v8 )
  {
    v10 = (struct _KTHREAD *)Object;
    v3 = -1073741558;
    goto LABEL_15;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 512;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ThreadExitStatus = ZwCreateThreadEx(
                       &ThreadHandle,
                       0x1FFFFFu,
                       &ObjectAttributes,
                       (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                       qword_140FC7550,
                       Argument,
                       0,
                       0LL,
                       0LL,
                       0LL,
                       0LL);
  if ( ThreadExitStatus < 0
    || (ThreadExitStatus = ObpReferenceObjectByHandleWithTag(
                             (ULONG_PTR)ThreadHandle,
                             0x70486D4Du,
                             (__int64)&Object,
                             0LL,
                             0LL),
        ThreadExitStatus < 0) )
  {
    v10 = (struct _KTHREAD *)Object;
    v3 = ThreadExitStatus;
  }
  else
  {
    ExReleaseRundownProtection_0(p_Blink);
    v10 = (struct _KTHREAD *)Object;
    v9 = 0;
    if ( *((_BYTE *)Object + 644) || (*((_DWORD *)Object + 30) & 0x4000) != 0 )
    {
      ThreadExitStatus = 1073741825;
    }
    else
    {
      Timeout.QuadPart = -100000000LL;
      if ( KeWaitForSingleObject(Object, WrKernel, 0, 0, &Timeout) == 258 )
      {
        ThreadExitStatus = -1073740675;
      }
      else
      {
        ThreadExitStatus = PsGetThreadExitStatus(v10);
        if ( ThreadExitStatus >= 0 )
          goto LABEL_15;
      }
    }
  }
  MiLogHotPatchOperationStatus(a2, a3, (_DWORD)Argument, ThreadExitStatus, 3);
  if ( v9 )
    ExReleaseRundownProtection_0(p_Blink);
LABEL_15:
  if ( ThreadHandle )
    ZwClose(ThreadHandle);
  if ( v10 )
    ObfDereferenceObjectWithTag(v10, 0x70486D4Du);
  return v3;
}
