/*
 * XREFs of IopDeleteFileObjectExtension @ 0x1403C3010
 * Callers:
 *     IopDeleteFile @ 0x140841DB0 (IopDeleteFile.c)
 *     IopParseDevice @ 0x14089F880 (IopParseDevice.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14024A9C0 (ExFreeToNPagedLookasideList.c)
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14025E950 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x1403407AC (ObpPushStackInfo.c)
 *     KeAreAllApcsDisabled @ 0x1403C3440 (KeAreAllApcsDisabled.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x1403C3480 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     PsReleaseSiloHardReference @ 0x1403C4750 (PsReleaseSiloHardReference.c)
 *     ObpDeferObjectDeletion @ 0x1403C485C (ObpDeferObjectDeletion.c)
 *     IopCleanupNotifications @ 0x1404A60A8 (IopCleanupNotifications.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     ObpRemoveObjectRoutine @ 0x140846830 (ObpRemoveObjectRoutine.c)
 *     FsRtlFreeExtraCreateParameter @ 0x1408A2A00 (FsRtlFreeExtraCreateParameter.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x1409D2920 (ObpHandleRevocationBlockRemoveObject.c)
 *     ObpDeregisterObject @ 0x1409D2A68 (ObpDeregisterObject.c)
 *     PspAdjustKeepAliveCountProcess @ 0x140A67818 (PspAdjustKeepAliveCountProcess.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  ULONG_PTR v13; // r14
  signed __int64 v14; // rax
  signed __int64 v15; // rax
  void *v16; // rcx
  BOOLEAN v17; // al
  ULONG_PTR v18; // rcx
  __int64 v19; // rax
  void *v20; // rcx
  _BYTE *v21; // r15
  _QWORD *v22; // r13
  KIRQL v23; // r12
  _QWORD *v24; // r14
  _QWORD *v25; // rcx
  void *v26; // rcx
  _QWORD *v27; // rdi
  unsigned __int8 v28; // [rsp+60h] [rbp+8h]

  v1 = *(_QWORD *)(a1 + 208);
  if ( !v1 || (__int64 *)v1 == qword_140014770 )
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
          v24 = (_QWORD *)*v4;
          while ( v24 != v4 )
          {
            v26 = v24;
            v24 = (_QWORD *)*v24;
            ExFreePoolWithTag(v26, 0);
          }
          goto LABEL_20;
        }
        if ( !i )
        {
          v20 = (void *)v4[1];
          if ( !v20 )
            goto LABEL_20;
          ObDereferenceObjectDeferDeleteWithTag(v20, 0x746C6644u);
          ExFreePoolWithTag(*(PVOID *)(v1 + 8), 0);
          goto LABEL_6;
        }
        if ( i != 5 )
          break;
        FsRtlFreeExtraCreateParameter(v4);
        i = 6LL;
      }
      if ( i == 1 )
        break;
      if ( i != 6 )
      {
        if ( i == 2 )
        {
          v25 = (_QWORD *)v4[5];
          if ( v25 )
          {
            do
            {
              v27 = (_QWORD *)v25[5];
              ExFreePoolWithTag(v25, 0);
              v25 = v27;
            }
            while ( v27 );
          }
          goto LABEL_20;
        }
        if ( i != 7 )
        {
          if ( i == 8 )
            ObfDereferenceObjectWithTag((PVOID)*v4, 0x6F466F49u);
LABEL_20:
          ExFreePoolWithTag(*(PVOID *)(v1 + 8 * i + 8), 0);
          goto LABEL_6;
        }
        v11 = *((_DWORD *)v4 + 1);
        if ( (v11 & 1) != 0 )
        {
          v12 = (void *)v4[1];
          *((_DWORD *)v4 + 1) = v11 & 0xFFFFFFFE;
          PsReleaseSiloHardReference(v12);
        }
        v13 = v4[1];
        if ( ObpTraceFlags )
          ObpPushStackInfo(v13 - 48, 0, 1u, 0x70536F49u);
        v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v13 - 48), 0xFFFFFFFFFFFFFFFFuLL);
        v9 = v14 <= 1;
        v15 = v14 - 1;
        if ( !v9 )
          goto LABEL_20;
        if ( *(_QWORD *)(v13 - 40) )
          KeBugCheckEx(
            0x18u,
            ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v13 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v13 - 48) >> 8)],
            v13,
            3uLL,
            *(_QWORD *)(v13 - 40));
        if ( v15 < 0 )
          KeBugCheckEx(0x18u, 0LL, v13, 4uLL, v15);
        v18 = v13 - 48;
LABEL_46:
        ObpDeferObjectDeletion(v18);
        ExFreePoolWithTag(*(PVOID *)(v1 + 8 * i + 8), 0);
        goto LABEL_6;
      }
      ExFreeToNPagedLookasideList(&IopOplockFoExtLookasideList, v4);
      i = 7LL;
    }
    v5 = (_QWORD *)v4[2];
    while ( v5 )
    {
      v16 = v5;
      v5 = (_QWORD *)*v5;
      ExFreePoolWithTag(v16, 0);
    }
    v6 = (_QWORD *)v4[3];
    while ( v6 )
    {
      v21 = (_BYTE *)v6[3];
      v22 = v6;
      v6 = (_QWORD *)*v6;
      v23 = KeAcquireSpinLockRaiseToDpc(&qword_140F8C930);
      v28 = v21[18];
      if ( v21[16] == 1 )
        v21[17] = 1;
      else
        ExFreePoolWithTag(v21, 0);
      KeReleaseSpinLock(&qword_140F8C930, v23);
      if ( *((_DWORD *)v22 + 4) )
      {
        PspAdjustKeepAliveCountProcess(v22[1], 0xFFFFFFFFLL, a1, v28);
        ObfDereferenceObjectWithTag((PVOID)v22[1], 0x746C6644u);
      }
      ExFreePoolWithTag(v22, 0);
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
    v17 = KeAreAllApcsDisabled();
    v18 = v7 - 48;
    if ( v17 )
      goto LABEL_46;
    v19 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(v18);
    if ( v19 )
      ObpHandleRevocationBlockRemoveObject(v19);
    if ( ObpTraceFlags )
      ObpDeregisterObject(v7 - 48);
    ObpRemoveObjectRoutine(v7 - 48, 0LL);
    ExFreePoolWithTag(*(PVOID *)(v1 + 16), 0);
LABEL_6:
    ;
  }
  if ( (*(_DWORD *)v1 & 2) != 0 )
    IopCleanupNotifications(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL), a1);
  ExFreePoolWithTag((PVOID)v1, 0);
}
