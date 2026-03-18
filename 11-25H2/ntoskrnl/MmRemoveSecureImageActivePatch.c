/*
 * XREFs of MmRemoveSecureImageActivePatch @ 0x1407E6418
 * Callers:
 *     PsDispatchIumService @ 0x14048F2F0 (PsDispatchIumService.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x1402A8F20 (RtlAvlRemoveNode.c)
 *     MmAcquireLoadLock @ 0x14036CED0 (MmAcquireLoadLock.c)
 *     MmReleaseLoadLock @ 0x14036D060 (MmReleaseLoadLock.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     MiCompareHotPatchNodes @ 0x1407E25E4 (MiCompareHotPatchNodes.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MmRemoveSecureImageActivePatch(int a1, int a2)
{
  void *v4; // rsi
  __int64 Lock; // rax
  _QWORD *v6; // rbx
  struct _KTHREAD *v7; // rdi
  int v8; // eax
  _BYTE v9[24]; // [rsp+20h] [rbp-48h] BYREF
  int v10; // [rsp+38h] [rbp-30h]
  int v11; // [rsp+3Ch] [rbp-2Ch]

  memset_0(v9, 0, 0x40uLL);
  v4 = 0LL;
  v10 = a1;
  v11 = a2;
  Lock = MmAcquireLoadLock();
  v6 = (_QWORD *)qword_140E37248;
  v7 = (struct _KTHREAD *)Lock;
  while ( v6 )
  {
    v8 = MiCompareHotPatchNodes((__int64)v9, (__int64)v6);
    if ( v8 >= 0 )
    {
      if ( v8 <= 0 )
        break;
      v6 = (_QWORD *)v6[1];
    }
    else
    {
      v6 = (_QWORD *)*v6;
    }
  }
  if ( v6 )
  {
    v4 = v6;
    RtlAvlRemoveNode((unsigned __int64 *)&qword_140E37248, (__int64)v6);
  }
  MmReleaseLoadLock(v7);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
}
