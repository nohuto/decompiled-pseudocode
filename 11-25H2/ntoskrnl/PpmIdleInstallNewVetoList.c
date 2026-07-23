/*
 * XREFs of PpmIdleInstallNewVetoList @ 0x1405CA0F0
 * Callers:
 *     PpmIdleAllocateVetoReasons @ 0x14073DE38 (PpmIdleAllocateVetoReasons.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetSystemGroupAffinityThread @ 0x1402783E0 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x140278FE0 (KeRevertToUserGroupAffinityThread.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     KeFirstGroupAffinityEx @ 0x14045ADB0 (KeFirstGroupAffinityEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 */

void __fastcall PpmIdleInstallNewVetoList(__int64 a1, int a2, char *a3)
{
  KIRQL v6; // al
  const void *v7; // rdx
  char *v8; // rbx
  __int64 v9; // rdi
  KIRQL v10; // r14
  _QWORD *v11; // rcx
  _QWORD *v12; // rax
  unsigned int v13; // edx
  char *v14; // rcx
  char **v15; // rax
  _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-58h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-48h] BYREF

  Affinity = 0LL;
  PreviousAffinity = 0LL;
  KeFirstGroupAffinityEx((__int64)&Affinity, (unsigned __int16 *)(a1 + 64));
  KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  v6 = KeAcquireSpinLockRaiseToDpc(&PpmIdleVetoLock);
  v7 = *(const void **)(a1 + 48);
  v8 = (char *)(a1 + 24);
  v9 = *(unsigned int *)(a1 + 44);
  v10 = v6;
  while ( 1 )
  {
    v11 = *(_QWORD **)v8;
    if ( *(char **)v8 == v8 )
      break;
    if ( (char *)v11[1] != v8 || (v12 = (_QWORD *)*v11, *(_QWORD **)(*v11 + 8LL) != v11) )
LABEL_12:
      __fastfail(3u);
    *(_QWORD *)v8 = v12;
    v12[1] = v8;
  }
  memmove(a3, v7, v9 << 6);
  v13 = 0;
  *(_QWORD *)(a1 + 48) = a3;
  for ( *(_DWORD *)(a1 + 44) = a2; v13 < (unsigned int)v9; ++v13 )
  {
    v14 = &a3[64 * (unsigned __int64)v13];
    if ( *((_DWORD *)v14 + 5) )
    {
      v15 = *(char ***)(a1 + 32);
      if ( *v15 != v8 )
        goto LABEL_12;
      *(_QWORD *)v14 = v8;
      *((_QWORD *)v14 + 1) = v15;
      *v15 = v14;
      *(_QWORD *)(a1 + 32) = v14;
    }
  }
  KeReleaseSpinLock(&PpmIdleVetoLock, v10);
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
}
