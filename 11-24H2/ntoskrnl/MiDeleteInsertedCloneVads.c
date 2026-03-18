/*
 * XREFs of MiDeleteInsertedCloneVads @ 0x140800264
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x140ABD72C (MiCloneProcessAddressSpace.c)
 * Callees:
 *     MiLockVad @ 0x1402629EC (MiLockVad.c)
 *     MiReferenceVad @ 0x140262A70 (MiReferenceVad.c)
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     MiDeleteCloneZombies @ 0x14048F544 (MiDeleteCloneZombies.c)
 *     MiDeleteCloneDescriptor @ 0x1404F8BB8 (MiDeleteCloneDescriptor.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     MiDeleteVad @ 0x1408E5390 (MiDeleteVad.c)
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
  _OWORD v14[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(v14, 0, sizeof(v14));
  CurrentThread = KeGetCurrentThread();
  KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v14);
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
  return KiUnstackDetachProcess((__int64)v14, 0);
}
