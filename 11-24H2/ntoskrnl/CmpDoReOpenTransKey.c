/*
 * XREFs of CmpDoReOpenTransKey @ 0x1407E74C4
 * Callers:
 *     CmpDoReDoCreateKey @ 0x1407E71A4 (CmpDoReDoCreateKey.c)
 *     CmpDoReDoRecord @ 0x1407E7294 (CmpDoReDoRecord.c)
 * Callees:
 *     ExIsResourceAcquiredSharedLite @ 0x14022A090 (ExIsResourceAcquiredSharedLite.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     CmpTestRegistryLock @ 0x140666994 (CmpTestRegistryLock.c)
 *     Feature_Servicing_RemainingPathForLocalKeyName__private_IsEnabledDeviceUsageNoInline @ 0x140669F44 (Feature_Servicing_RemainingPathForLocalKeyName__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     ObOpenObjectByName @ 0x1408A38B0 (ObOpenObjectByName.c)
 *     CmpInitializeParseContext @ 0x14092F540 (CmpInitializeParseContext.c)
 *     CmpCleanupParseContext @ 0x14092F5F0 (CmpCleanupParseContext.c)
 *     CmpSplitParentKeyName @ 0x140BBBD74 (CmpSplitParentKeyName.c)
 *     CmpLockRegistry @ 0x140BBBE60 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BBBF50 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpDoReOpenTransKey(__int64 a1, __int128 *a2, int a3, _QWORD *a4)
{
  __int128 v7; // xmm1
  bool v8; // zf
  bool v9; // r15
  char v10; // r14
  int v11; // esi
  int v12; // eax
  __int64 v13; // rdx
  HANDLE v14; // rbx
  NTSTATUS v15; // eax
  _QWORD *v16; // rdi
  __int64 v17; // rcx
  int v19; // eax
  __int64 v20; // rdx
  NTSTATUS v21; // eax
  PVOID Object; // [rsp+40h] [rbp-C0h] BYREF
  int v23; // [rsp+48h] [rbp-B8h]
  HANDLE Handle; // [rsp+50h] [rbp-B0h] BYREF
  void *v25; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v26; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v27; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v28[2]; // [rsp+80h] [rbp-80h] BYREF
  HANDLE v29; // [rsp+88h] [rbp-78h]
  __int128 *v30; // [rsp+90h] [rbp-70h]
  int v31; // [rsp+98h] [rbp-68h]
  int v32; // [rsp+9Ch] [rbp-64h]
  __int128 v33; // [rsp+A0h] [rbp-60h]
  _QWORD *v34; // [rsp+B0h] [rbp-50h]
  _BYTE v35[24]; // [rsp+C0h] [rbp-40h] BYREF
  int v36; // [rsp+D8h] [rbp-28h]

  v23 = a3;
  v34 = a4;
  v28[1] = 0;
  v32 = 0;
  memset_0(v35, 0, 0x1D0uLL);
  v7 = *a2;
  v25 = 0LL;
  v27 = 0LL;
  Handle = 0LL;
  v26 = v7;
  if ( dword_140EF6F68 == 1 )
    v8 = !CmpTestRegistryLock();
  else
    v8 = ExIsResourceAcquiredSharedLite(CmpRegistryLock) == 0;
  v9 = !v8;
  v10 = 0;
  v11 = -1073741762;
  if ( !(_WORD)v26 )
    return (unsigned int)v11;
  while ( 1 )
  {
    CmpInitializeParseContext(v35);
    v30 = &v26;
    v36 = 8;
    v28[0] = 48;
    v29 = 0LL;
    v31 = 4928;
    v33 = 0LL;
    v12 = ObOpenObjectByName((unsigned int)v28, (_DWORD)CmKeyObjectType, 0, 0, a3, (__int64)v35, (__int64)&Handle);
    LOBYTE(v13) = v9;
    v11 = v12;
    CmpCleanupParseContext(v35, v13);
    if ( v11 >= 0 )
      break;
    CmpSplitParentKeyName(&v26, &v26, &v27);
    if ( (unsigned int)Feature_Servicing_RemainingPathForLocalKeyName__private_IsEnabledDeviceUsageNoInline() )
    {
      LOWORD(v27) = *(_WORD *)a2 - v26 - 2;
      WORD1(v27) = *((_WORD *)a2 + 1) - v26 - 2;
    }
    if ( !(_WORD)v26 )
    {
      v14 = Handle;
      goto LABEL_19;
    }
  }
  v14 = Handle;
  Object = 0LL;
  v15 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &Object, 0LL);
  v16 = Object;
  v11 = v15;
  if ( v15 < 0 )
    goto LABEL_17;
  if ( !v9 )
  {
    CmpLockRegistry();
    v10 = 1;
  }
  v17 = *(_QWORD *)(v16[1] + 32LL);
  if ( *(_QWORD *)(a1 + 64) != *(_QWORD *)(v17 + 4152) )
    goto LABEL_14;
  if ( v10 )
  {
    CmpUnlockRegistry(v17);
    v10 = 0;
  }
  v16[8] = a1 + 88;
  ObfDereferenceObject(v16);
  v16 = 0LL;
  if ( (_WORD)v27 )
  {
    CmpInitializeParseContext(v35);
    v30 = &v27;
    v36 = 8;
    v28[0] = 48;
    v29 = v14;
    v31 = 4928;
    v33 = 0LL;
    v19 = ObOpenObjectByName((unsigned int)v28, (_DWORD)CmKeyObjectType, 0, 0, v23, (__int64)v35, (__int64)&v25);
    LOBYTE(v20) = v9;
    v11 = v19;
    CmpCleanupParseContext(v35, v20);
    if ( v11 < 0
      || (Object = 0LL,
          v21 = ObReferenceObjectByHandle(v14, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &Object, 0LL),
          v16 = Object,
          v11 = v21,
          v21 < 0) )
    {
LABEL_15:
      if ( v10 )
        CmpUnlockRegistry(v17);
LABEL_17:
      if ( v16 )
        ObfDereferenceObject(v16);
      goto LABEL_19;
    }
    if ( !v9 )
    {
      CmpLockRegistry();
      v10 = 1;
    }
    v17 = *(_QWORD *)(v16[1] + 32LL);
    if ( *(_QWORD *)(a1 + 64) != *(_QWORD *)(v17 + 4152) )
    {
LABEL_14:
      v11 = -1073741762;
      goto LABEL_15;
    }
    if ( v10 )
      CmpUnlockRegistry(v17);
    v16[8] = a1 + 88;
    ObfDereferenceObject(v16);
    ZwClose(v14);
    v14 = v25;
  }
  v11 = 0;
  *v34 = v14;
  v14 = 0LL;
LABEL_19:
  if ( v14 )
    ZwClose(v14);
  return (unsigned int)v11;
}
