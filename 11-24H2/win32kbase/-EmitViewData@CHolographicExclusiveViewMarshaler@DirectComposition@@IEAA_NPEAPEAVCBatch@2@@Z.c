/*
 * XREFs of ?EmitViewData@CHolographicExclusiveViewMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1402346E4
 * Callers:
 *     ?EmitUpdateCommands@CHolographicExclusiveViewMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140234640 (-EmitUpdateCommands@CHolographicExclusiveViewMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@.c)
 * Callees:
 *     GreUnlockDwmState @ 0x1400231D0 (GreUnlockDwmState.c)
 *     ReferenceDwmProcess @ 0x14006F910 (ReferenceDwmProcess.c)
 *     CheckOrAcquireDwmStateLock @ 0x14006F960 (CheckOrAcquireDwmStateLock.c)
 *     UserDereferenceDwmProcess @ 0x14006F990 (UserDereferenceDwmProcess.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x14007F480 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CHolographicExclusiveViewMarshaler::EmitViewData(
        DirectComposition::CHolographicExclusiveViewMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // r14
  __int64 v5; // rcx
  void *v6; // rdi
  NTSTATUS v7; // ebx
  PVOID v8; // rcx
  char *v9; // rdx
  int v11; // [rsp+38h] [rbp-18h]
  int v12; // [rsp+38h] [rbp-18h]
  HANDLE Handle; // [rsp+40h] [rbp-10h] BYREF
  void *v14; // [rsp+48h] [rbp-8h] BYREF
  PVOID Object; // [rsp+90h] [rbp+40h] BYREF
  HANDLE v16; // [rsp+A0h] [rbp+50h] BYREF
  HANDLE v17; // [rsp+A8h] [rbp+58h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x80u) == 0 )
    return 1;
  Object = 0LL;
  Handle = 0LL;
  v17 = 0LL;
  v16 = 0LL;
  v4 = CheckOrAcquireDwmStateLock();
  v6 = (void *)ReferenceDwmProcess(v5);
  if ( v6 )
  {
    v7 = ObReferenceObjectByHandleWithTag((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0x40u, 0LL, 0, 0, &Object, 0LL);
    if ( v7 >= 0 )
    {
      v7 = ObDuplicateObject(Object, -1LL, v6, &Handle, -1073741824, 0, 2, 1);
      if ( v7 >= 0 )
      {
        LOBYTE(v11) = 1;
        v7 = ObDuplicateObject(Object, *((_QWORD *)this + 11), v6, &v17, 1048578, 0, 2, v11);
        if ( v7 >= 0 )
        {
          LOBYTE(v12) = 1;
          v7 = ObDuplicateObject(Object, *((_QWORD *)this + 10), v6, &v16, -1073741824, 0, 2, v12);
        }
      }
    }
  }
  else
  {
    v7 = -1073741811;
  }
  v8 = Object;
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0);
  if ( v7 < 0 )
  {
    if ( Handle )
    {
      ObCloseHandle(Handle, 1);
      Handle = 0LL;
    }
    if ( v17 )
    {
      ObCloseHandle(v17, 1);
      v17 = 0LL;
    }
    v8 = v16;
    if ( v16 )
    {
      ObCloseHandle(v16, 1);
      v16 = 0LL;
    }
  }
  if ( v6 )
    UserDereferenceDwmProcess(v6);
  if ( v4 )
    GreUnlockDwmState((__int64)v8);
  v14 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x24uLL, &v14) )
  {
    v9 = (char *)v14;
    *(_DWORD *)v14 = 36;
    *(_OWORD *)(v9 + 4) = 0LL;
    *(_OWORD *)(v9 + 20) = 0LL;
    *((_DWORD *)v9 + 1) = 163;
    *((_DWORD *)v9 + 2) = *((_DWORD *)this + 8);
    *(_QWORD *)(v9 + 12) = v16;
    *(_QWORD *)(v9 + 20) = v17;
    *(_QWORD *)(v9 + 28) = Handle;
    *((_DWORD *)this + 4) &= ~0x80u;
    return 1;
  }
  return 0;
}
