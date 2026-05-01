/*
 * XREFs of ?HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x1800412CC
 * Callers:
 *     ?HampClientDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x1800412A0 (-HampClientDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 * Callees:
 *     CemRcObjectDereference @ 0x180014EE0 (CemRcObjectDereference.c)
 *     CemRcTableGetNext @ 0x180016F20 (CemRcTableGetNext.c)
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x18001B770 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampClientReleaseLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18001C3E0 (-HampClientReleaseLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampClientAcquireLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18001C43C (-HampClientAcquireLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampActTerminate@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_KKK@Z @ 0x18003B5D0 (-HampActTerminate@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_KKK.c)
 *     CemRcTableGetFirst @ 0x180043370 (CemRcTableGetFirst.c)
 *     ?HampClientPkgClose@@YAJPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@@Z @ 0x180044598 (-HampClientPkgClose@@YAJPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@@Z.c)
 *     RmpWnfCleanupPendingCallbackList @ 0x180066434 (RmpWnfCleanupPendingCallbackList.c)
 *     ?HampClientGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x18006A69C (-HampClientGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@K@Z.c)
 */

void __fastcall HampClientRundownObjects(struct _HAM_CLIENT_CONTEXT *a1)
{
  struct _HAM_CLIENT_CONTEXT *i; // rbx
  unsigned int v2; // edx
  struct _HAM_ACTIVITY *FirstActivity; // rax
  struct _HAM_ACTIVITY *v4; // rdi
  __int64 v5; // rdx
  struct _HAM_CLIENT_PACKAGE_CONTEXT *j; // rax
  struct _HAM_CLIENT_PACKAGE_CONTEXT *v7; // rdi
  void *v8; // rcx

  for ( i = a1; ; a1 = i )
  {
    HampClientAcquireLockExclusive(a1);
    FirstActivity = HampClientGetFirstActivity(i, v2);
    v4 = FirstActivity;
    if ( !FirstActivity )
      break;
    if ( _InterlockedIncrement64((volatile signed __int64 *)FirstActivity + 3) <= 1 )
      __fastfail(0xEu);
    HampClientReleaseLockExclusive(i);
    if ( !*((_BYTE *)i + 164) && (*((_BYTE *)i + 160) & 1) != 0 )
      HampActTerminate((__int64)v4, 1, 0x1A00u, 0LL, 0, 0);
    HampActClose(v4, v5);
    CemRcObjectDereference(v4);
  }
  HampClientReleaseLockExclusive(i);
  for ( j = (struct _HAM_CLIENT_PACKAGE_CONTEXT *)CemRcTableGetFirst((char *)i + 72);
        ;
        j = (struct _HAM_CLIENT_PACKAGE_CONTEXT *)CemRcTableGetNext(v7) )
  {
    v7 = j;
    if ( !j )
      break;
    HampClientPkgClose(j);
  }
  if ( (*((_BYTE *)i + 144) & 1) == 0 )
  {
    v8 = (void *)*((_QWORD *)i + 16);
    if ( v8 )
      RmpWnfCleanupPendingCallbackList(v8);
  }
}
