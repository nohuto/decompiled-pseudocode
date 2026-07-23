/*
 * XREFs of PsGetEffectiveContainerId @ 0x140439ED0
 * Callers:
 *     NtQueryInformationThread @ 0x1409910D0 (NtQueryInformationThread.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x1402195E0 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1402C2D30 (ExAcquireSpinLockShared.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 */

__int64 __fastcall PsGetEffectiveContainerId(int a1, struct _KTHREAD *a2, __int64 a3)
{
  _QWORD *Object; // rbp
  int v7; // r14d
  unsigned __int64 v8; // rcx
  int v10; // ebx
  __int64 v11; // rax
  __int128 v12; // xmm0
  KIRQL v13; // al
  KIRQL v14; // r15
  int v15; // ebx

  if ( a1 >= 5 )
    return 3221225711LL;
  if ( a2 )
  {
    *(_OWORD *)a3 = 0LL;
    *(_DWORD *)(a3 + 16) = 0;
    if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 && a2 == KeGetCurrentThread() )
      return 0LL;
    Object = a2[1].WaitBlock[1].Object;
    v7 = 0;
    if ( !Object )
      goto LABEL_6;
    if ( a2 == KeGetCurrentThread() )
      goto LABEL_13;
    v13 = ExAcquireSpinLockShared(&PspThreadWorkOnBehalfLock);
    Object = a2[1].WaitBlock[1].Object;
    v14 = v13;
    if ( Object )
    {
      ObfReferenceObjectWithTag(a2[1].WaitBlock[1].Object, 0x746C6644u);
      v7 = 1;
    }
    ExReleaseSpinLockShared(&PspThreadWorkOnBehalfLock, v14);
    if ( Object )
    {
LABEL_13:
      v8 = *(_QWORD *)(Object[68] + 672LL);
      *(_DWORD *)(a3 + 16) |= 1u;
    }
    else
    {
LABEL_6:
      v8 = a2->Process[1].Padding[3];
    }
    if ( !v8 )
    {
LABEL_8:
      if ( v7 )
        ObfDereferenceObjectWithTag(Object, 0x746C6644u);
      return 0LL;
    }
    if ( a1 )
    {
      v10 = a1 - 2;
      if ( !v10 )
      {
        v11 = *(_QWORD *)(v8 + 1040);
LABEL_17:
        if ( !v11 )
          goto LABEL_8;
        v12 = *(_OWORD *)(v11 + 1472);
        goto LABEL_19;
      }
      v15 = v10 - 1;
      if ( !v15 )
      {
        v11 = *(_QWORD *)(v8 + 1048);
        goto LABEL_17;
      }
      if ( v15 != 1 )
        goto LABEL_8;
    }
    v12 = *(_OWORD *)(v8 + 1472);
LABEL_19:
    *(_OWORD *)a3 = v12;
    goto LABEL_8;
  }
  return 3221225712LL;
}
