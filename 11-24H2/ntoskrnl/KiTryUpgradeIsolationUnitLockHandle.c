/*
 * XREFs of KiTryUpgradeIsolationUnitLockHandle @ 0x1405AE300
 * Callers:
 *     KiAcquirePrcbLocksForPreemptionAttemptSlowPath @ 0x1402A6534 (KiAcquirePrcbLocksForPreemptionAttemptSlowPath.c)
 * Callees:
 *     KzReleaseAdditionalPrcbLocks @ 0x1402E0E00 (KzReleaseAdditionalPrcbLocks.c)
 *     KiPrcbArrayForIsolationWidth @ 0x1403EB700 (KiPrcbArrayForIsolationWidth.c)
 */

char __fastcall KiTryUpgradeIsolationUnitLockHandle(int *a1, unsigned int a2)
{
  char v2; // bl
  __int64 v3; // rsi
  int v4; // edx
  unsigned __int64 v5; // rax
  unsigned __int64 *v6; // r10
  __int64 *v7; // rdi
  __int64 v8; // r8
  unsigned int v9; // r11d
  __int64 v10; // rdx
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v14; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int64 v15; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v16; // [rsp+60h] [rbp+20h] BYREF
  int v17; // [rsp+70h] [rbp+30h] BYREF
  __int64 *v18; // [rsp+78h] [rbp+38h] BYREF

  v2 = 0;
  v3 = a2;
  v4 = *a1;
  v5 = *(_QWORD *)a1 & 0xFFFFFFFFFFFFFFFEuLL;
  v18 = 0LL;
  v15 = v5;
  v17 = 0;
  v14 = 0LL;
  v16 = 0;
  KiPrcbArrayForIsolationWidth((__int64)&v15, v4 & 1, &v18, &v17);
  KiPrcbArrayForIsolationWidth((__int64)&v15, v3, &v14, &v16);
  v7 = v18;
  LODWORD(v8) = 0;
  v9 = v16;
  v10 = 0LL;
  v11 = *v18;
  if ( v16 )
  {
    v12 = v14;
    do
    {
      if ( *(_QWORD *)v12 == v11 )
      {
        v8 = (unsigned int)(v8 + 1);
        if ( (_DWORD)v8 == v17 )
          v11 = -1LL;
        else
          v11 = v7[v8];
      }
      else
      {
        if ( _interlockedbittestandset64((volatile signed __int32 *)(*(_QWORD *)v12 + 48LL), 0LL) )
        {
          KzReleaseAdditionalPrcbLocks(v14, v10, v18, v17);
          return v2;
        }
        v7 = v18;
        v9 = v16;
      }
      v10 = (unsigned int)(v10 + 1);
      v12 += 8LL;
    }
    while ( (unsigned int)v10 < v9 );
  }
  v2 = 1;
  *v6 = v3 ^ (*v6 ^ v3) & 0xFFFFFFFFFFFFFFFEuLL;
  return v2;
}
