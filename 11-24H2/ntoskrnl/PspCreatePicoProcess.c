/*
 * XREFs of PspCreatePicoProcess @ 0x140779F60
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     PspLockProcessExclusive @ 0x14044FF38 (PspLockProcessExclusive.c)
 *     PspUnlockProcessExclusive @ 0x140458484 (PspUnlockProcessExclusive.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     PsCreateMinimalProcess @ 0x1407798C4 (PsCreateMinimalProcess.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall PspCreatePicoProcess(__int64 a1, __int64 a2, HANDLE *a3)
{
  struct _KTHREAD *CurrentThread; // r13
  int v4; // ebx
  void *v7; // r12
  int v8; // edi
  ULONG_PTR v9; // rcx
  int v10; // eax
  int v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // r8
  PVOID v14; // r15
  int v15; // eax
  HANDLE v16; // r14
  volatile signed __int32 *v17; // rsi
  int v18; // ebx
  PVOID Object; // [rsp+60h] [rbp-10h] BYREF
  __int64 v21; // [rsp+68h] [rbp-8h] BYREF
  PVOID v22; // [rsp+B0h] [rbp+40h] BYREF
  HANDLE *v23; // [rsp+C0h] [rbp+50h]
  HANDLE Handle; // [rsp+C8h] [rbp+58h] BYREF

  v23 = a3;
  CurrentThread = KeGetCurrentThread();
  v4 = *(_DWORD *)(a1 + 24);
  v21 = 0LL;
  v22 = 0LL;
  v7 = 0LL;
  Handle = 0LL;
  Object = 0LL;
  if ( (v4 & 0xFFFFFFF0) != 0 || (v4 & 6) != 0 && (v4 & 1) == 0 || !*(_QWORD *)(a1 + 16) )
    return (unsigned int)-1073741811;
  v8 = ObpReferenceObjectByHandleWithTag(*(_QWORD *)a1, 0x72437350u, (__int64)&v22, 0LL, 0LL);
  if ( v8 < 0 )
    return (unsigned int)v8;
  v9 = *(_QWORD *)(a1 + 8);
  if ( !v9 )
    goto LABEL_10;
  v8 = ObpReferenceObjectByHandleWithTag(v9, 0x72437350u, (__int64)&v21, 0LL, 0LL);
  if ( v8 >= 0 )
  {
    v7 = (void *)v21;
LABEL_10:
    v10 = 0;
    if ( (v4 & 1) != 0 )
    {
      v10 = 2 * (v4 & 2 | 0x1000);
      if ( (v4 & 4) != 0 )
        v10 |= 0x4000u;
    }
    v11 = v10 | 1;
    if ( (v4 & 8) == 0 )
      v11 = v10;
    v12 = 0LL;
    v13 = 0LL;
    if ( a2 )
    {
      v12 = *(_QWORD *)(a2 + 8);
      v13 = *(_QWORD *)(a2 + 16);
    }
    v14 = v22;
    v15 = PsCreateMinimalProcess((__int64)v22, v12, v13, 0, v7, v11, 2, *(_QWORD *)(a1 + 16), 0LL, 0LL, 0LL, &Handle);
    v16 = Handle;
    v8 = v15;
    if ( v15 >= 0 )
    {
      v8 = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 0x72437350u, (__int64)&Object, 0LL, 0LL);
      if ( v8 >= 0 )
      {
        v17 = (volatile signed __int32 *)Object;
        PspLockProcessExclusive((__int64)Object, (__int64)CurrentThread);
        if ( (v17[125] & 8) != 0 )
        {
          v8 = -1073741558;
        }
        else
        {
          _interlockedbittestandset(v17 + 124, 0xAu);
          v14 = v22;
          v17 = (volatile signed __int32 *)Object;
          v7 = (void *)v21;
          *v23 = Handle;
          v16 = 0LL;
        }
        v18 = v8;
        PspUnlockProcessExclusive((__int64)v17);
        ObfDereferenceObjectWithTag((PVOID)v17, 0x72437350u);
        v8 = 0;
        if ( v18 < 0 )
          v8 = v18;
      }
    }
    if ( v16 )
      ZwClose(v16);
    if ( v7 )
      ObfDereferenceObjectWithTag(v7, 0x72437350u);
    goto LABEL_29;
  }
  v14 = v22;
LABEL_29:
  if ( v14 )
    ObfDereferenceObjectWithTag(v14, 0x72437350u);
  return (unsigned int)v8;
}
