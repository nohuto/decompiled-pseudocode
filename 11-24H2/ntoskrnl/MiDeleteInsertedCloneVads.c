/*
 * XREFs of MiDeleteInsertedCloneVads @ 0x1408009A4
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x140AB879C (MiCloneProcessAddressSpace.c)
 * Callees:
 *     MiLockVad @ 0x1402926F0 (MiLockVad.c)
 *     MiReferenceVad @ 0x140292770 (MiReferenceVad.c)
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     MiDeleteCloneZombies @ 0x140489754 (MiDeleteCloneZombies.c)
 *     MiDeleteCloneDescriptor @ 0x1404F6498 (MiDeleteCloneDescriptor.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     MiDeleteVad @ 0x140895840 (MiDeleteVad.c)
 */

__int64 __fastcall MiDeleteInsertedCloneVads(ULONG_PTR BugCheckParameter1)
{
  struct _KTHREAD *CurrentThread; // rbp
  _QWORD *v3; // rax
  _QWORD *i; // rbx
  _QWORD **v5; // rax
  void *v6; // rsi
  _QWORD *v7; // rcx
  _QWORD *v8; // rcx
  _QWORD *j; // rax
  _QWORD **v10; // rcx
  _QWORD *v11; // rax
  _QWORD *k; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  _OWORD v16[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(v16, 0, sizeof(v16));
  CurrentThread = KeGetCurrentThread();
  KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v16);
  *(_BYTE *)(*(_QWORD *)(BugCheckParameter1 + 1040) + 1061LL) |= 1u;
  v3 = *(_QWORD **)(BugCheckParameter1 + 1368);
  i = 0LL;
  while ( v3 )
  {
    i = v3;
    v3 = (_QWORD *)*v3;
  }
  while ( i )
  {
    v5 = (_QWORD **)i[1];
    v6 = i;
    v7 = i;
    if ( v5 )
    {
      v8 = *v5;
      for ( i = (_QWORD *)i[1]; v8; v8 = (_QWORD *)*v8 )
        i = v8;
    }
    else
    {
      while ( 1 )
      {
        i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !i || (_QWORD *)*i == v7 )
          break;
        v7 = i;
      }
    }
    MiLockVad((__int64)CurrentThread, (__int64)v6);
    MiReferenceVad((__int64)v6);
    MiDeleteVad(v6);
  }
  MiDeleteCloneZombies(BugCheckParameter1, 0);
  for ( j = *(_QWORD **)(BugCheckParameter1 + 640); j; j = (_QWORD *)*j )
    i = j;
  while ( i )
  {
    i[6] = 0LL;
    MiDeleteCloneDescriptor(BugCheckParameter1, (__int64)i);
    v10 = (_QWORD **)i[1];
    v11 = i;
    if ( v10 )
    {
      i = (_QWORD *)i[1];
      for ( k = *v10; k; k = (_QWORD *)*k )
        i = k;
    }
    else
    {
      while ( 1 )
      {
        i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !i || (_QWORD *)*i == v11 )
          break;
        v11 = i;
      }
    }
  }
  MiDeleteCloneZombies(BugCheckParameter1, 0);
  return KiUnstackDetachProcess((__int64)v16, 0, v13, v14);
}
