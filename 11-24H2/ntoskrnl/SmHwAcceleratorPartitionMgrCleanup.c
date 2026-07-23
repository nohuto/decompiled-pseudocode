/*
 * XREFs of SmHwAcceleratorPartitionMgrCleanup @ 0x14079CC8C
 * Callers:
 *     ?SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z @ 0x1404A30D0 (-SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z.c)
 *     SmPartitionCleanup @ 0x1407976A4 (SmPartitionCleanup.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     KeStackAttachProcess @ 0x1402E1C90 (KeStackAttachProcess.c)
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     SmHwAcceleratorMgrPartitionUnregister @ 0x14079C83C (SmHwAcceleratorMgrPartitionUnregister.c)
 *     SmHwAcceleratorPartitionCtxCleanup @ 0x14079CC18 (SmHwAcceleratorPartitionCtxCleanup.c)
 */

void __fastcall SmHwAcceleratorPartitionMgrCleanup(_QWORD *a1, struct _KPROCESS *a2)
{
  PPRIVILEGE_SET *v2; // r14
  int v5; // r15d
  _DWORD *v6; // r12
  PPRIVILEGE_SET v7; // rbx
  struct _PRIVILEGE_SET *v8; // rsi
  struct _PRIVILEGE_SET *v9; // rdi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-78h] BYREF

  v2 = (PPRIVILEGE_SET *)(a1 + 4);
  memset(&ApcState, 0, sizeof(ApcState));
  v5 = 0;
  v6 = a1 + 6;
  do
  {
    v7 = *v2;
    if ( *v2 )
    {
      v8 = (PPRIVILEGE_SET)((char *)v7 + 16 * (unsigned __int16)KeNumberNodes);
      while ( v7 < v8 )
      {
        while ( 1 )
        {
          v9 = *(struct _PRIVILEGE_SET **)&v7->PrivilegeCount;
          if ( *(PPRIVILEGE_SET *)&v7->PrivilegeCount == v7 )
            break;
          if ( (PPRIVILEGE_SET)v9->Privilege[0].Luid != v7
            || (v12 = *(_QWORD *)&v9->PrivilegeCount,
                *(struct _PRIVILEGE_SET **)(*(_QWORD *)&v9->PrivilegeCount + 8LL) != v9) )
          {
            __fastfail(3u);
          }
          *(_QWORD *)&v7->PrivilegeCount = v12;
          *(_QWORD *)(v12 + 8) = v7;
          --*v6;
          SmHwAcceleratorPartitionCtxCleanup((__int64)v9);
          CmSiFreeMemory(v9);
        }
        v7 = (PPRIVILEGE_SET)((char *)v7 + 16);
      }
      CmSiFreeMemory(*v2);
    }
    ++v5;
    ++v2;
    ++v6;
  }
  while ( v5 < 2 );
  if ( a1[2] )
  {
    KeStackAttachProcess(a2, &ApcState);
    SmHwAcceleratorMgrPartitionUnregister(a1[2], a1);
    KiUnstackDetachProcess((__int64)&ApcState, 0, v10, v11);
  }
}
