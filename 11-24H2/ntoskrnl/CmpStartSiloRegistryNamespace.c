/*
 * XREFs of CmpStartSiloRegistryNamespace @ 0x1409E2450
 * Callers:
 *     CmInitServerSiloState @ 0x1407D5B34 (CmInitServerSiloState.c)
 *     CmInitSiloNamespace @ 0x1409E1CA8 (CmInitSiloNamespace.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     CmSiFreeMemory @ 0x14046B8D0 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     CmpCreateKeyBody @ 0x14083E100 (CmpCreateKeyBody.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14086DD20 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpUnlockKcbStack @ 0x14086E6E0 (CmpUnlockKcbStack.c)
 *     CmpLockKcbExclusive @ 0x140870470 (CmpLockKcbExclusive.c)
 *     CmpInitializeParseContext @ 0x14092D400 (CmpInitializeParseContext.c)
 *     CmpCleanupParseContext @ 0x14092D4B0 (CmpCleanupParseContext.c)
 *     CmpUnlockKcb @ 0x140BB92C0 (CmpUnlockKcb.c)
 *     CmpLockRegistry @ 0x140BB9E60 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BB9F50 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpStartSiloRegistryNamespace(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  void *v5; // rbx
  struct _PRIVILEGE_SET *v6; // rdi
  int KeyBody; // esi
  _QWORD *v9; // r13
  __int16 v10; // si
  signed __int64 v11; // r14
  __int64 *v12; // rbx
  __int64 *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int16 v16; // si
  signed __int64 v17; // rdi
  __int64 *v18; // rbx
  ULONG_PTR *v19; // rcx
  signed __int64 v20; // rax
  __int64 v21; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v23[2]; // [rsp+50h] [rbp-B0h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+60h] [rbp-A0h]
  _BYTE v25[464]; // [rsp+70h] [rbp-90h] BYREF

  memset_0(v25, 0, sizeof(v25));
  *(_OWORD *)v23 = 0LL;
  WORD1(v23[0]) = -1;
  LOBYTE(v21) = 0;
  *(_OWORD *)Privileges = 0LL;
  CmpInitializeParseContext((__int64)v25);
  v5 = 0LL;
  v22 = 0LL;
  if ( *(_QWORD *)(a1 + 32) )
  {
LABEL_2:
    v6 = Privileges[1];
    KeyBody = 0;
    goto LABEL_3;
  }
  CmpLockRegistry(v2);
  v9 = CmpRegistryRootObject;
  CmpStartKcbStackForTopLayerKcb((__int64)v23, *((_QWORD *)CmpRegistryRootObject + 1));
  v10 = 0;
  v6 = Privileges[1];
  if ( (v23[0] & 0x80000000LL) == 0 )
  {
    v11 = (char *)Privileges[1] - (char *)&v23[1];
    v12 = &v23[1];
    do
    {
      if ( v10 >= 2 )
        v13 = (__int64 *)((char *)v12 + v11 - 16);
      else
        v13 = v12;
      CmpLockKcbExclusive(*v13);
      ++v10;
      ++v12;
    }
    while ( v10 <= SWORD1(v23[0]) );
  }
  KeyBody = CmpCreateKeyBody(v9[1], 0, (__int64)v25, 0LL, 3, (__int64)v23, (ULONG_PTR **)&v22, (bool *)&v21);
  if ( KeyBody >= 0 )
  {
    v16 = 0;
    if ( (v23[0] & 0x80000000LL) == 0 )
    {
      v17 = (char *)v6 - (char *)&v23[1];
      v18 = &v23[1];
      do
      {
        if ( v16 >= 2 )
          v19 = (ULONG_PTR *)((char *)v18 + v17 - 16);
        else
          v19 = (ULONG_PTR *)v18;
        CmpUnlockKcb(*v19);
        ++v16;
        ++v18;
      }
      while ( v16 <= SWORD1(v23[0]) );
    }
    CmpUnlockRegistry(v14);
    v20 = -_InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 32), v22, 0LL);
    v5 = (void *)(v22 & -(__int64)(v20 != 0));
    goto LABEL_2;
  }
  CmpUnlockKcbStack((__int64)v23);
  CmpUnlockRegistry(v15);
  v5 = (void *)v22;
LABEL_3:
  if ( v6 )
    CmSiFreeMemory(v6);
  CmpCleanupParseContext((__int64)v25, 0, v3, v4);
  if ( v5 )
    ObfDereferenceObject(v5);
  return (unsigned int)KeyBody;
}
