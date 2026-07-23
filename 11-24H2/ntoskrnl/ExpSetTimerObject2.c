/*
 * XREFs of ExpSetTimerObject2 @ 0x1403B09D8
 * Callers:
 *     NtCancelTimer @ 0x1402BCF30 (NtCancelTimer.c)
 *     NtSetTimer @ 0x1402BD310 (NtSetTimer.c)
 *     NtSetTimerEx @ 0x1402BD5A0 (NtSetTimerEx.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x14031FC8C (ObpPushStackInfo.c)
 *     KeCancelTimer2 @ 0x1403AF520 (KeCancelTimer2.c)
 *     KeSetTimer2 @ 0x1403B0C60 (KeSetTimer2.c)
 *     KeAreAllApcsDisabled @ 0x1403B2000 (KeAreAllApcsDisabled.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x1403B2040 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     ObpDeferObjectDeletion @ 0x1403B341C (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     ObpRemoveObjectRoutine @ 0x140842AF0 (ObpRemoveObjectRoutine.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x1409C2750 (ObpHandleRevocationBlockRemoveObject.c)
 *     ObpDeregisterObject @ 0x1409C2898 (ObpDeregisterObject.c)
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
