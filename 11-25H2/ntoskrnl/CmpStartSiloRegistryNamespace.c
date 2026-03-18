/*
 * XREFs of CmpStartSiloRegistryNamespace @ 0x1409E3800
 * Callers:
 *     CmInitServerSiloState @ 0x1407C63E4 (CmInitServerSiloState.c)
 *     CmInitSiloNamespace @ 0x1409E3058 (CmInitSiloNamespace.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     CmSiFreeMemory @ 0x14046F140 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14086CAF0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpUnlockKcbStack @ 0x1408713D0 (CmpUnlockKcbStack.c)
 *     CmpLockKcbExclusive @ 0x140874380 (CmpLockKcbExclusive.c)
 *     CmpCreateKeyBody @ 0x14089EB50 (CmpCreateKeyBody.c)
 *     CmpInitializeParseContext @ 0x140913DE0 (CmpInitializeParseContext.c)
 *     CmpCleanupParseContext @ 0x140913E90 (CmpCleanupParseContext.c)
 *     CmpUnlockKcb @ 0x140BA92B0 (CmpUnlockKcb.c)
 *     CmpLockRegistry @ 0x140BA9570 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BA9920 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpStartSiloRegistryNamespace(__int64 a1)
{
  __int64 v2; // rcx
  ULONG_PTR *v3; // rbx
  struct _PRIVILEGE_SET *v4; // rdi
  int v5; // esi
  _QWORD *v7; // r13
  __int16 v8; // si
  signed __int64 v9; // r14
  __int64 *v10; // rbx
  __int64 *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int16 v14; // si
  signed __int64 v15; // rdi
  ULONG_PTR *v16; // rbx
  ULONG_PTR *v17; // rcx
  signed __int64 v18; // rax
  bool v19; // [rsp+40h] [rbp-C0h] BYREF
  signed __int64 v20; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v21; // [rsp+50h] [rbp-B0h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+60h] [rbp-A0h]
  _BYTE v23[464]; // [rsp+70h] [rbp-90h] BYREF

  memset_0(v23, 0, sizeof(v23));
  v21 = 0LL;
  WORD1(v21) = -1;
  v19 = 0;
  *(_OWORD *)Privileges = 0LL;
  CmpInitializeParseContext((__int64)v23);
  v3 = 0LL;
  v20 = 0LL;
  if ( *(_QWORD *)(a1 + 32) )
  {
LABEL_2:
    v4 = Privileges[1];
    v5 = 0;
    goto LABEL_3;
  }
  CmpLockRegistry(v2);
  v7 = CmpRegistryRootObject;
  CmpStartKcbStackForTopLayerKcb((__int64)&v21, *((_QWORD *)CmpRegistryRootObject + 1));
  v8 = 0;
  v4 = Privileges[1];
  if ( (SWORD1(v21) & 0x8000u) == 0 )
  {
    v9 = (char *)Privileges[1] - ((char *)&v21 + 8);
    v10 = (__int64 *)&v21 + 1;
    do
    {
      if ( v8 >= 2 )
        v11 = (__int64 *)((char *)v10 + v9 - 16);
      else
        v11 = v10;
      CmpLockKcbExclusive(*v11);
      ++v8;
      ++v10;
    }
    while ( v8 <= SWORD1(v21) );
  }
  v5 = CmpCreateKeyBody(v7[1], 0, (__int64)v23, 0LL, 3, (__int64)&v21, (ULONG_PTR **)&v20, &v19);
  if ( v5 >= 0 )
  {
    v14 = 0;
    if ( (SWORD1(v21) & 0x8000u) == 0 )
    {
      v15 = (char *)v4 - ((char *)&v21 + 8);
      v16 = (ULONG_PTR *)&v21 + 1;
      do
      {
        if ( v14 >= 2 )
          v17 = (ULONG_PTR *)((char *)v16 + v15 - 16);
        else
          v17 = v16;
        CmpUnlockKcb(*v17);
        ++v14;
        ++v16;
      }
      while ( v14 <= SWORD1(v21) );
    }
    CmpUnlockRegistry(v12);
    v18 = -_InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 32), v20, 0LL);
    v3 = (ULONG_PTR *)(v20 & -(__int64)(v18 != 0));
    goto LABEL_2;
  }
  CmpUnlockKcbStack((__int64)&v21);
  CmpUnlockRegistry(v13);
  v3 = (ULONG_PTR *)v20;
LABEL_3:
  if ( v4 )
    CmSiFreeMemory(v4);
  CmpCleanupParseContext((__int64)v23, 0);
  if ( v3 )
    ObfDereferenceObject(v3);
  return (unsigned int)v5;
}
