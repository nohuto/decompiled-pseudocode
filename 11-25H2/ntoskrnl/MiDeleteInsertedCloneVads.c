/*
 * XREFs of MiDeleteInsertedCloneVads @ 0x1407F03A4
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x140AB962C (MiCloneProcessAddressSpace.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     MiLockVad @ 0x1402A6CB4 (MiLockVad.c)
 *     MiReferenceVad @ 0x1402A7A40 (MiReferenceVad.c)
 *     MiDeleteCloneZombies @ 0x14048FC24 (MiDeleteCloneZombies.c)
 *     MiDeleteCloneDescriptor @ 0x1404F63B8 (MiDeleteCloneDescriptor.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     MiDeleteVad @ 0x1408B4F54 (MiDeleteVad.c)
 */

__int64 __fastcall MiDeleteInsertedCloneVads(ULONG_PTR BugCheckParameter1)
{
  struct _KTHREAD *CurrentThread; // rbp
  _QWORD *v3; // rax
  _QWORD *i; // rbx
  _QWORD **v5; // rax
  __int64 v6; // rsi
  _QWORD *v7; // rcx
  _QWORD *v8; // rcx
  _QWORD *v9; // rax
  _QWORD *j; // rbx
  _QWORD **v11; // rax
  _QWORD *v12; // rcx
  _QWORD *v13; // rcx
  _OWORD v15[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(v15, 0, sizeof(v15));
  CurrentThread = KeGetCurrentThread();
  KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v15);
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
    v6 = (__int64)i;
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
    MiLockVad((__int64)CurrentThread, v6);
    MiReferenceVad(v6);
    MiDeleteVad(v6, 0LL, 0LL);
  }
  if ( MmVadEventBlockFixEnabled )
    MiDeleteCloneZombies(BugCheckParameter1, 0);
  v9 = *(_QWORD **)(BugCheckParameter1 + 640);
  j = 0LL;
  while ( v9 )
  {
    j = v9;
    v9 = (_QWORD *)*v9;
  }
  while ( j )
  {
    j[6] = 0LL;
    MiDeleteCloneDescriptor(BugCheckParameter1, (__int64)j);
    v11 = (_QWORD **)j[1];
    v12 = j;
    if ( v11 )
    {
      v13 = *v11;
      for ( j = (_QWORD *)j[1]; v13; v13 = (_QWORD *)*v13 )
        j = v13;
    }
    else
    {
      while ( 1 )
      {
        j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !j || (_QWORD *)*j == v12 )
          break;
        v12 = j;
      }
    }
  }
  MiDeleteCloneZombies(BugCheckParameter1, 0);
  return KiUnstackDetachProcess((__int64)v15, 0LL);
}
