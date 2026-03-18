/*
 * XREFs of IopDeleteFileObjectExtension @ 0x140371E50
 * Callers:
 *     IopDeleteFile @ 0x140844B30 (IopDeleteFile.c)
 *     IopParseDevice @ 0x14085F1F0 (IopParseDevice.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeAreInterruptsEnabled @ 0x140256C40 (KeAreInterruptsEnabled.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x14029C310 (ObpPushStackInfo.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402BC860 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     ObpDeferObjectDeletion @ 0x14036FDD8 (ObpDeferObjectDeletion.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x140372210 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     ExFreeToNPagedLookasideList @ 0x1403739F0 (ExFreeToNPagedLookasideList.c)
 *     PsReleaseSiloHardReference @ 0x140373EC0 (PsReleaseSiloHardReference.c)
 *     IopCleanupNotifications @ 0x1404A559C (IopCleanupNotifications.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     ObpRemoveObjectRoutine @ 0x14084AB80 (ObpRemoveObjectRoutine.c)
 *     FsRtlFreeExtraCreateParameter @ 0x1408EFDB0 (FsRtlFreeExtraCreateParameter.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x1409CF610 (ObpHandleRevocationBlockRemoveObject.c)
 *     ObpDeregisterObject @ 0x1409CF758 (ObpDeregisterObject.c)
 *     PspAdjustKeepAliveCountProcess @ 0x140A64E18 (PspAdjustKeepAliveCountProcess.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall IopDeleteFileObjectExtension(__int64 a1)
{
  __int64 v1; // rsi
  __int64 i; // rbx
  _QWORD *v4; // rdi
  _QWORD *v5; // r14
  _QWORD *v6; // r14
  ULONG_PTR v7; // r14
  signed __int64 v8; // rax
  bool v9; // cc
  signed __int64 BugCheckParameter4; // rax
  int v11; // eax
  void *v12; // rcx
  __int64 v13; // rax
  void *v14; // rcx
  void *v15; // rcx
  _BYTE *v16; // r15
  _QWORD *v17; // r13
  KIRQL v18; // r12
  _QWORD *v19; // r14
  _QWORD *v20; // rcx
  void *v21; // rcx
  _QWORD *v22; // rdi
  unsigned __int8 v23; // [rsp+60h] [rbp+8h]

  v1 = *(_QWORD *)(a1 + 208);
  if ( !v1 || (__int64 *)v1 == qword_1400140F0 )
    return;
  for ( i = 0LL; i < 10; ++i )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v4 = *(_QWORD **)(v1 + 8 * i + 8);
        if ( !v4 )
          goto LABEL_6;
        if ( i == 4 )
        {
          v19 = (_QWORD *)*v4;
          while ( v19 != v4 )
          {
            v21 = v19;
            v19 = (_QWORD *)*v19;
            ExFreePoolWithTag(v21, 0);
          }
          goto LABEL_20;
        }
        if ( !i )
        {
          v15 = (void *)v4[1];
          if ( !v15 )
            goto LABEL_20;
          ObDereferenceObjectDeferDeleteWithTag(v15, 0x746C6644u);
          ExFreePoolWithTag(*(PVOID *)(v1 + 8), 0);
          goto LABEL_6;
        }
        if ( i != 5 )
          break;
        FsRtlFreeExtraCreateParameter(v4);
        i = 6LL;
      }
      if ( i == 1 )
      {
        v5 = (_QWORD *)v4[2];
        while ( v5 )
        {
          v14 = v5;
          v5 = (_QWORD *)*v5;
          ExFreePoolWithTag(v14, 0);
        }
        v6 = (_QWORD *)v4[3];
        while ( v6 )
        {
          v16 = (_BYTE *)v6[3];
          v17 = v6;
          v6 = (_QWORD *)*v6;
          v18 = KeAcquireSpinLockRaiseToDpc(&qword_140F8C190);
          v23 = v16[18];
          if ( v16[16] == 1 )
            v16[17] = 1;
          else
            ExFreePoolWithTag(v16, 0);
          KeReleaseSpinLock(&qword_140F8C190, v18);
          if ( *((_DWORD *)v17 + 4) )
          {
            PspAdjustKeepAliveCountProcess(v17[1], 0xFFFFFFFFLL, a1, v23);
            ObfDereferenceObjectWithTag((PVOID)v17[1], 0x746C6644u);
          }
          ExFreePoolWithTag(v17, 0);
        }
        v7 = v4[1];
        if ( !v7 )
          goto LABEL_20;
        if ( ObpTraceFlags )
          ObpPushStackInfo(v7 - 48, 0, 1u, 0x746C6644u);
        v8 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v7 - 48), 0xFFFFFFFFFFFFFFFFuLL);
        v9 = v8 <= 1;
        BugCheckParameter4 = v8 - 1;
        if ( !v9 )
          goto LABEL_20;
        if ( *(_QWORD *)(v7 - 40) )
          KeBugCheckEx(
            0x18u,
            ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v7 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v7 - 48) >> 8)],
            v7,
            1uLL,
            *(_QWORD *)(v7 - 40));
        if ( BugCheckParameter4 < 0 )
          KeBugCheckEx(0x18u, 0LL, v7, 2uLL, BugCheckParameter4);
        if ( KeGetCurrentThread()->SpecialApcDisable || !KeAreInterruptsEnabled() || KeGetCurrentIrql() )
        {
          ObpDeferObjectDeletion(v7 - 48);
LABEL_20:
          ExFreePoolWithTag(*(PVOID *)(v1 + 8 * i + 8), 0);
          goto LABEL_6;
        }
        v13 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(v7 - 48);
        if ( v13 )
          ObpHandleRevocationBlockRemoveObject(v13);
        if ( ObpTraceFlags )
          ObpDeregisterObject(v7 - 48);
        ObpRemoveObjectRoutine(v7 - 48, 0LL);
        ExFreePoolWithTag(*(PVOID *)(v1 + 16), 0);
        goto LABEL_6;
      }
      if ( i != 6 )
        break;
      ExFreeToNPagedLookasideList(&IopOplockFoExtLookasideList, v4);
      i = 7LL;
    }
    if ( i == 2 )
    {
      v20 = (_QWORD *)v4[5];
      if ( v20 )
      {
        do
        {
          v22 = (_QWORD *)v20[5];
          ExFreePoolWithTag(v20, 0);
          v20 = v22;
        }
        while ( v22 );
      }
      goto LABEL_20;
    }
    if ( i != 7 )
    {
      if ( i == 8 )
        ObfDereferenceObjectWithTag((PVOID)*v4, 0x6F466F49u);
      goto LABEL_20;
    }
    v11 = *((_DWORD *)v4 + 1);
    if ( (v11 & 1) != 0 )
    {
      v12 = (void *)v4[1];
      *((_DWORD *)v4 + 1) = v11 & 0xFFFFFFFE;
      PsReleaseSiloHardReference(v12);
    }
    ObDereferenceObjectDeferDeleteWithTag((PVOID)v4[1], 0x70536F49u);
    ExFreePoolWithTag(*(PVOID *)(v1 + 64), 0);
LABEL_6:
    ;
  }
  if ( (*(_DWORD *)v1 & 2) != 0 )
    IopCleanupNotifications(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL), a1);
  ExFreePoolWithTag((PVOID)v1, 0);
}
