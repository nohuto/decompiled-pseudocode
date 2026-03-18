/*
 * XREFs of ExpSetTimerObject2 @ 0x1403C1E18
 * Callers:
 *     NtCancelTimer @ 0x1403320A0 (NtCancelTimer.c)
 *     NtSetTimer @ 0x140332480 (NtSetTimer.c)
 *     NtSetTimerEx @ 0x140332710 (NtSetTimerEx.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x1403407AC (ObpPushStackInfo.c)
 *     KeCancelTimer2 @ 0x1403C0960 (KeCancelTimer2.c)
 *     KeSetTimer2 @ 0x1403C20A0 (KeSetTimer2.c)
 *     KeAreAllApcsDisabled @ 0x1403C3440 (KeAreAllApcsDisabled.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x1403C3480 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     ObpDeferObjectDeletion @ 0x1403C485C (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     ObpRemoveObjectRoutine @ 0x140846830 (ObpRemoveObjectRoutine.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x1409D2920 (ObpHandleRevocationBlockRemoveObject.c)
 *     ObpDeregisterObject @ 0x1409D2A68 (ObpDeregisterObject.c)
 */

__int64 __fastcall ExpSetTimerObject2(ULONG_PTR BugCheckParameter2, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  char v6; // cl
  ULONG_PTR v7; // rbx
  signed __int64 v8; // rax
  bool v9; // cc
  signed __int64 BugCheckParameter4; // rax
  unsigned int v12; // ebx
  BOOLEAN v13; // al
  ULONG_PTR v14; // rcx
  __int64 v15; // rax

  if ( a3 && (*(_BYTE *)(BugCheckParameter2 + 129) & 2) != 0 )
  {
    v12 = -1073741811;
LABEL_20:
    ObfDereferenceObjectWithTag((PVOID)BugCheckParameter2, 0x746C6644u);
    return v12;
  }
  if ( a4 && (*(_DWORD *)a4 || *(__int64 *)(a4 + 8) < -1) )
  {
    v12 = -1073741583;
    goto LABEL_20;
  }
  if ( a2 )
  {
    v5 = *a2;
    v6 = 1;
  }
  else
  {
    v6 = 0;
    v5 = 0LL;
  }
  *(_QWORD *)(BugCheckParameter2 + 144) = v5;
  *(_QWORD *)(BugCheckParameter2 + 152) = 0LL;
  if ( a4 )
    *(_QWORD *)(BugCheckParameter2 + 152) = *(_QWORD *)(a4 + 8);
  if ( v6 )
    KeSetTimer2(BugCheckParameter2, v5, a3, a4);
  else
    KeCancelTimer2(BugCheckParameter2, 0LL, a3, a4);
  v7 = BugCheckParameter2 - 48;
  if ( ObpTraceFlags )
    ObpPushStackInfo(BugCheckParameter2 - 48, 0, 1u, 0x746C6644u);
  v8 = _InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL);
  v9 = v8 <= 1;
  BugCheckParameter4 = v8 - 1;
  if ( v9 )
  {
    if ( *(_QWORD *)(v7 + 8) )
      KeBugCheckEx(
        0x18u,
        ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v7 + 24) ^ (unsigned __int64)BYTE1(v7)],
        BugCheckParameter2,
        1uLL,
        *(_QWORD *)(v7 + 8));
    if ( BugCheckParameter4 < 0 )
      KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 2uLL, BugCheckParameter4);
    v13 = KeAreAllApcsDisabled();
    v14 = BugCheckParameter2 - 48;
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
        ObpDeregisterObject(BugCheckParameter2 - 48);
      ObpRemoveObjectRoutine(BugCheckParameter2 - 48, 0LL);
    }
  }
  return 0LL;
}
