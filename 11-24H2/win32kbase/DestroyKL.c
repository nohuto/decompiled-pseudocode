/*
 * XREFs of DestroyKL @ 0x14006379C
 * Callers:
 *     ?DestroyKLIfSupported@@YAXPEAUtagKL@@@Z @ 0x140063BE0 (-DestroyKLIfSupported@@YAXPEAUtagKL@@@Z.c)
 *     _lambda_003a05ce5104f89dcc953024da4d9dc6_::operator() @ 0x14014835C (_lambda_003a05ce5104f89dcc953024da4d9dc6_--operator().c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?Identify@IdentifyPrimaryDestroyTarget@@AEAAXPEAU_HANDLEENTRY@@@Z @ 0x1400415C0 (-Identify@IdentifyPrimaryDestroyTarget@@AEAAXPEAU_HANDLEENTRY@@@Z.c)
 *     HMAssignmentUnlock @ 0x14005F130 (HMAssignmentUnlock.c)
 *     _HMPheFromObjectWorker @ 0x140062A10 (_HMPheFromObjectWorker.c)
 *     HMFreeObject @ 0x1400632F0 (HMFreeObject.c)
 *     DestroyKF @ 0x140064130 (DestroyKF.c)
 */

__int64 __fastcall DestroyKL(void *a1)
{
  struct _HANDLEENTRY *v2; // rax
  char *v3; // rcx
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // rcx
  void *v7; // rax
  __int64 i; // rdi
  __int64 *v9; // rcx
  void *v10; // rax
  char v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = 0;
  v2 = (struct _HANDLEENTRY *)HMPheFromObjectWorker((int *)a1);
  IdentifyPrimaryDestroyTarget::Identify((Identify *)&v11, v2);
  *(_QWORD *)(*((_QWORD *)a1 + 3) + 16LL) = *((_QWORD *)a1 + 2);
  *(_QWORD *)(*((_QWORD *)a1 + 2) + 24LL) = *((_QWORD *)a1 + 3);
  if ( HMAssignmentUnlock((__int64 *)a1 + 6) )
  {
    v7 = (void *)HMAssignmentUnlock((__int64 *)a1 + 7);
    if ( v7 )
      DestroyKF(v7);
  }
  if ( *((_QWORD *)a1 + 12) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)a1 + 22); i = (unsigned int)(i + 1) )
    {
      v9 = (__int64 *)(*((_QWORD *)a1 + 12) + 8 * i);
      if ( !*v9 )
        break;
      v10 = (void *)HMAssignmentUnlock(v9);
      if ( v10 )
        DestroyKF(v10);
    }
    GreDeleteFastMutex(*((char **)a1 + 12));
  }
  v3 = (char *)*((_QWORD *)a1 + 10);
  if ( v3 )
    GreDeleteFastMutex(v3);
  if ( a1 == *(void **)(W32GetUserSessionState(v3) + 14224) )
    *(_QWORD *)(W32GetUserSessionState(v4) + 14224) = 0LL;
  result = HMFreeObject((unsigned int *)a1);
  if ( v11 )
  {
    result = W32GetUserSessionState(v6);
    *(_QWORD *)(result + 19824) = 0LL;
  }
  return result;
}
