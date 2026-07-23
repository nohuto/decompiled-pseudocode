/*
 * XREFs of IopUnloadSafeCompletion @ 0x1403B1A30
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x14031FC8C (ObpPushStackInfo.c)
 *     KeAreAllApcsDisabled @ 0x1403B2000 (KeAreAllApcsDisabled.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x1403B2040 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     ObpDeferObjectDeletion @ 0x1403B341C (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ObpRemoveObjectRoutine @ 0x140842AF0 (ObpRemoveObjectRoutine.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x1409C2750 (ObpHandleRevocationBlockRemoveObject.c)
 *     ObpDeregisterObject @ 0x1409C2898 (ObpDeregisterObject.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopUnloadSafeCompletion(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // esi
  volatile signed __int64 *v7; // rbp
  signed __int64 v8; // rax
  bool v9; // cc
  signed __int64 BugCheckParameter4; // rax
  BOOLEAN v12; // al
  volatile signed __int64 *v13; // rcx
  __int64 v14; // rax

  v3 = 0;
  if ( *(int *)(a2 + 48) < 0 )
  {
    if ( !*(_BYTE *)(a3 + 24) )
      goto LABEL_5;
LABEL_7:
    v7 = *(volatile signed __int64 **)a3;
    ObfReferenceObjectWithTag(*(PVOID *)a3, 0x70436F49u);
    v3 = guard_dispatch_icall_no_overrides(a1, a2);
    ExFreePoolWithTag((PVOID)a3, 0);
    if ( ObpTraceFlags )
      ObpPushStackInfo((__int64)(v7 - 6), 0, 1u, 0x70436F49u);
    v8 = _InterlockedExchangeAdd64(v7 - 6, 0xFFFFFFFFFFFFFFFFuLL);
    v9 = v8 <= 1;
    BugCheckParameter4 = v8 - 1;
    if ( v9 )
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
      v12 = KeAreAllApcsDisabled();
      v13 = v7 - 6;
      if ( v12 )
      {
        ObpDeferObjectDeletion(v13);
      }
      else
      {
        v14 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(v13);
        if ( v14 )
          ObpHandleRevocationBlockRemoveObject(v14);
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
