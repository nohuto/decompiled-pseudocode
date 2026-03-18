/*
 * XREFs of MiInjectThreadForHotPatch @ 0x1407F3144
 * Callers:
 *     MiHotPatchProcess @ 0x1407F2D08 (MiHotPatchProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwCreateThreadEx @ 0x1406A7D30 (ZwCreateThreadEx.c)
 *     MiLogHotPatchOperationStatus @ 0x1407F3CA4 (MiLogHotPatchOperationStatus.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084B7E0 (ObpReferenceObjectByHandleWithTag.c)
 *     PsGetThreadExitStatus @ 0x1409A9660 (PsGetThreadExitStatus.c)
 */

__int64 __fastcall MiInjectThreadForHotPatch(int a1, int a2, int a3)
{
  unsigned int v3; // edi
  struct _EX_RUNDOWN_REF *p_Blink; // rsi
  BOOLEAN v8; // al
  int v9; // r14d
  struct _KTHREAD *v10; // rbx
  int Thread; // eax
  HANDLE Handle; // [rsp+68h] [rbp-9h] BYREF
  LARGE_INTEGER Timeout; // [rsp+70h] [rbp-1h] BYREF
  __int128 v15; // [rsp+78h] [rbp+7h]
  __int128 v16; // [rsp+88h] [rbp+17h]
  __int128 v17; // [rsp+98h] [rbp+27h]
  PVOID Object; // [rsp+F0h] [rbp+7Fh] BYREF

  v3 = 0;
  *(_QWORD *)&v17 = 0LL;
  v15 = 0LL;
  DWORD2(v17) = 0;
  v16 = 0LL;
  Timeout.QuadPart = 0LL;
  Handle = 0LL;
  Object = 0LL;
  p_Blink = (struct _EX_RUNDOWN_REF *)&KeGetCurrentThread()->ApcState.Process[1].ProfileListHead.Blink;
  v8 = ExAcquireRundownProtection(p_Blink);
  v9 = v8;
  if ( !v8 )
  {
    v10 = (struct _KTHREAD *)Object;
    v3 = -1073741558;
    goto LABEL_15;
  }
  LODWORD(v15) = 48;
  *((_QWORD *)&v15 + 1) = 0LL;
  DWORD2(v16) = 512;
  *(_QWORD *)&v16 = 0LL;
  v17 = 0LL;
  Thread = ZwCreateThreadEx((__int64)&Handle, 0x1FFFFFLL);
  if ( Thread < 0
    || (Thread = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 0x70486D4Du, (__int64)&Object, 0LL, 0LL),
        Thread < 0) )
  {
    v10 = (struct _KTHREAD *)Object;
    v3 = Thread;
  }
  else
  {
    ExReleaseRundownProtection_0(p_Blink);
    v10 = (struct _KTHREAD *)Object;
    v9 = 0;
    if ( *((_BYTE *)Object + 644) || (*((_DWORD *)Object + 30) & 0x4000) != 0 )
    {
      Thread = 1073741825;
    }
    else
    {
      Timeout.QuadPart = -100000000LL;
      if ( KeWaitForSingleObject(Object, WrKernel, 0, 0, &Timeout) == 258 )
      {
        Thread = -1073740675;
      }
      else
      {
        Thread = PsGetThreadExitStatus(v10);
        if ( Thread >= 0 )
          goto LABEL_15;
      }
    }
  }
  MiLogHotPatchOperationStatus(a2, a3, a1, Thread, 3);
  if ( v9 )
    ExReleaseRundownProtection_0(p_Blink);
LABEL_15:
  if ( Handle )
    ZwClose(Handle);
  if ( v10 )
    ObfDereferenceObjectWithTag(v10, 0x70486D4Du);
  return v3;
}
