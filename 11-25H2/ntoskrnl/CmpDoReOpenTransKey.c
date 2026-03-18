/*
 * XREFs of CmpDoReOpenTransKey @ 0x1407D7070
 * Callers:
 *     CmpDoReDoCreateKey @ 0x1407D6D50 (CmpDoReDoCreateKey.c)
 *     CmpDoReDoRecord @ 0x1407D6E40 (CmpDoReDoRecord.c)
 * Callees:
 *     ExIsResourceAcquiredSharedLite @ 0x140301360 (ExIsResourceAcquiredSharedLite.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     ObOpenObjectByName @ 0x14085AA70 (ObOpenObjectByName.c)
 *     CmpInitializeParseContext @ 0x140913DE0 (CmpInitializeParseContext.c)
 *     CmpCleanupParseContext @ 0x140913E90 (CmpCleanupParseContext.c)
 *     CmpLockRegistry @ 0x140BA9570 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BA9920 (CmpUnlockRegistry.c)
 *     CmpSplitParentKeyName @ 0x140BA9DFC (CmpSplitParentKeyName.c)
 */

__int64 __fastcall CmpDoReOpenTransKey(__int64 a1, __int128 *a2, int a3, _QWORD *a4)
{
  __int128 v7; // xmm1
  ULONG IsResourceAcquiredSharedLite; // r12d
  char v9; // r14
  int v10; // esi
  int v11; // eax
  __int64 v12; // rdx
  HANDLE v13; // rbx
  NTSTATUS v14; // eax
  _QWORD *v15; // rdi
  __int64 v16; // rcx
  int v18; // eax
  __int64 v19; // rdx
  NTSTATUS v20; // eax
  PVOID Object; // [rsp+48h] [rbp-B8h] BYREF
  int v22; // [rsp+50h] [rbp-B0h]
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  void *v24; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v25; // [rsp+68h] [rbp-98h] BYREF
  _DWORD v26[2]; // [rsp+78h] [rbp-88h] BYREF
  HANDLE v27; // [rsp+80h] [rbp-80h]
  __int128 *v28; // [rsp+88h] [rbp-78h]
  int v29; // [rsp+90h] [rbp-70h]
  int v30; // [rsp+94h] [rbp-6Ch]
  __int128 v31; // [rsp+98h] [rbp-68h]
  _QWORD *v32; // [rsp+A8h] [rbp-58h]
  __int128 v33; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v34[24]; // [rsp+C0h] [rbp-40h] BYREF
  int v35; // [rsp+D8h] [rbp-28h]

  v22 = a3;
  v32 = a4;
  v26[1] = 0;
  v30 = 0;
  memset_0(v34, 0, 0x1D0uLL);
  v7 = *a2;
  v24 = 0LL;
  Handle = 0LL;
  v25 = v7;
  v33 = 0LL;
  IsResourceAcquiredSharedLite = ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock);
  v9 = 0;
  v10 = -1073741762;
  if ( !(_WORD)v7 )
    return (unsigned int)v10;
  while ( 1 )
  {
    CmpInitializeParseContext(v34);
    v28 = &v25;
    v35 = 8;
    v26[0] = 48;
    v27 = 0LL;
    v29 = 4928;
    v31 = 0LL;
    v11 = ObOpenObjectByName((unsigned int)v26, (_DWORD)CmKeyObjectType, 0, 0, a3, (__int64)v34, (__int64)&Handle);
    LOBYTE(v12) = IsResourceAcquiredSharedLite != 0;
    v10 = v11;
    CmpCleanupParseContext(v34, v12);
    if ( v10 >= 0 )
      break;
    CmpSplitParentKeyName(&v25, &v25, &v33);
    if ( !(_WORD)v25 )
    {
      v13 = Handle;
      goto LABEL_14;
    }
  }
  v13 = Handle;
  Object = 0LL;
  v14 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &Object, 0LL);
  v15 = Object;
  v10 = v14;
  if ( v14 < 0 )
    goto LABEL_12;
  if ( !IsResourceAcquiredSharedLite )
  {
    CmpLockRegistry();
    v9 = 1;
  }
  v16 = *(_QWORD *)(v15[1] + 32LL);
  if ( *(_QWORD *)(a1 + 64) != *(_QWORD *)(v16 + 4152) )
    goto LABEL_9;
  if ( v9 )
  {
    CmpUnlockRegistry(v16);
    v9 = 0;
  }
  v15[8] = a1 + 88;
  ObfDereferenceObject(v15);
  v15 = 0LL;
  if ( (_WORD)v33 )
  {
    CmpInitializeParseContext(v34);
    v28 = &v33;
    v35 = 8;
    v26[0] = 48;
    v27 = v13;
    v29 = 4928;
    v31 = 0LL;
    v18 = ObOpenObjectByName((unsigned int)v26, (_DWORD)CmKeyObjectType, 0, 0, v22, (__int64)v34, (__int64)&v24);
    LOBYTE(v19) = IsResourceAcquiredSharedLite != 0;
    v10 = v18;
    CmpCleanupParseContext(v34, v19);
    if ( v10 < 0
      || (Object = 0LL,
          v20 = ObReferenceObjectByHandle(v13, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &Object, 0LL),
          v15 = Object,
          v10 = v20,
          v20 < 0) )
    {
LABEL_10:
      if ( v9 )
        CmpUnlockRegistry(v16);
LABEL_12:
      if ( v15 )
        ObfDereferenceObject(v15);
      goto LABEL_14;
    }
    if ( !IsResourceAcquiredSharedLite )
    {
      CmpLockRegistry();
      v9 = 1;
    }
    v16 = *(_QWORD *)(v15[1] + 32LL);
    if ( *(_QWORD *)(a1 + 64) != *(_QWORD *)(v16 + 4152) )
    {
LABEL_9:
      v10 = -1073741762;
      goto LABEL_10;
    }
    if ( v9 )
      CmpUnlockRegistry(v16);
    v15[8] = a1 + 88;
    ObfDereferenceObject(v15);
    ZwClose(v13);
    v13 = v24;
  }
  v10 = 0;
  *v32 = v13;
  v13 = 0LL;
LABEL_14:
  if ( v13 )
    ZwClose(v13);
  return (unsigned int)v10;
}
