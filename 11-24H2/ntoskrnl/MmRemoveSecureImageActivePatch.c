/*
 * XREFs of MmRemoveSecureImageActivePatch @ 0x1407F6A1C
 * Callers:
 *     PsDispatchIumService @ 0x1404E66B4 (PsDispatchIumService.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x1402911D0 (RtlAvlRemoveNode.c)
 *     MmReleaseLoadLock @ 0x1404C2E10 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1404CBB50 (MmAcquireLoadLock.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MiCompareHotPatchNodes @ 0x1407F2A54 (MiCompareHotPatchNodes.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall MmRemoveSecureImageActivePatch(int a1, int a2)
{
  void *v4; // rsi
  struct _KTHREAD *Lock; // rax
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
  v6 = (_QWORD *)qword_140E375C8;
  v7 = Lock;
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
    RtlAvlRemoveNode((unsigned __int64 *)&qword_140E375C8, (__int64)v6);
  }
  MmReleaseLoadLock(v7);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
}
