/*
 * XREFs of IopUnloadSafeCompletion @ 0x1403C2E70
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x1403407AC (ObpPushStackInfo.c)
 *     KeAreAllApcsDisabled @ 0x1403C3440 (KeAreAllApcsDisabled.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x1403C3480 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     ObpDeferObjectDeletion @ 0x1403C485C (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ObpRemoveObjectRoutine @ 0x140846830 (ObpRemoveObjectRoutine.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x1409D2920 (ObpHandleRevocationBlockRemoveObject.c)
 *     ObpDeregisterObject @ 0x1409D2A68 (ObpDeregisterObject.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopUnloadSafeCompletion(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // esi
  volatile signed __int64 *v7; // rbp
  __int64 v8; // r9
  signed __int64 v9; // rax
  bool v10; // cc
  signed __int64 BugCheckParameter4; // rax
  BOOLEAN v13; // al
  volatile signed __int64 *v14; // rcx
  __int64 v15; // rax

  v3 = 0;
  if ( *(int *)(a2 + 48) < 0 )
  {
    if ( !*(_BYTE *)(a3 + 24) )
      goto LABEL_5;
LABEL_7:
    v7 = *(volatile signed __int64 **)a3;
    ObfReferenceObjectWithTag(*(PVOID *)a3, 0x70436F49u);
    v3 = guard_dispatch_icall_no_overrides(a1, a2, *(_QWORD *)(a3 + 8), v8);
    ExFreePoolWithTag((PVOID)a3, 0);
    if ( ObpTraceFlags )
      ObpPushStackInfo((__int64)(v7 - 6), 0, 1u, 0x70436F49u);
    v9 = _InterlockedExchangeAdd64(v7 - 6, 0xFFFFFFFFFFFFFFFFuLL);
    v10 = v9 <= 1;
    BugCheckParameter4 = v9 - 1;
    if ( v10 )
    {
      if ( *((_QWORD *)v7 - 5) )
        KeBugCheckEx(
          0x18u,
          ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)v7 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v7 - 48) >> 8)],
          (ULONG_PTR)v7,
          1uLL,
          *((_QWORD *)v7 - 5));
      if ( BugCheckParameter4 < 0 )
        KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)v7, 2uLL, BugCheckParameter4);
      v13 = KeAreAllApcsDisabled();
      v14 = v7 - 6;
      if ( v13 )
      {
        ObpDeferObjectDeletion(v14);
      }
      else
      {
        v15 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(v14);
        if ( v15 )
          ObpHandleRevocationBlockRemoveObject(v15);
        if ( ObpTraceFlags )
          ObpDeregisterObject(v7 - 6);
        ObpRemoveObjectRoutine(v7 - 6, 0LL);
      }
    }
    return v3;
  }
  if ( *(_BYTE *)(a3 + 25) )
    goto LABEL_7;
LABEL_5:
  if ( *(_BYTE *)(a2 + 68) && *(_BYTE *)(a3 + 26) )
    goto LABEL_7;
  if ( *(_BYTE *)(a2 + 65) )
  {
    v3 = 259;
    *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  }
  ExFreePoolWithTag((PVOID)a3, 0);
  return v3;
}
