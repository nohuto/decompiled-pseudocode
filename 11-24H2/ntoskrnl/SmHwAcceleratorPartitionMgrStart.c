/*
 * XREFs of SmHwAcceleratorPartitionMgrStart @ 0x14079CDC0
 * Callers:
 *     ?SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z @ 0x1404A30D0 (-SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     SmAllocEx @ 0x1402F5228 (SmAllocEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     SmHwAcceleratorMgrPartitionRegister @ 0x14079C71C (SmHwAcceleratorMgrPartitionRegister.c)
 */

__int64 __fastcall SmHwAcceleratorPartitionMgrStart(_QWORD *a1, ULONG_PTR a2, _KPROCESS *a3)
{
  _QWORD *v3; // rbp
  ULONG_PTR v4; // rsi
  __int64 v6; // rdi
  __int64 *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  _QWORD *v12; // rcx
  int v13; // ebx
  __int64 v14; // r8
  __int64 v15; // r9
  _OWORD v17[3]; // [rsp+20h] [rbp-78h] BYREF

  v3 = a1 + 4;
  v4 = 16LL * (unsigned __int16)KeNumberNodes;
  v6 = 0LL;
  v9 = a1 + 4;
  memset(v17, 0, sizeof(v17));
  while ( v6 < 2 )
  {
    *v9 = SmAllocEx(v4, 0x6C416D73u, -1);
    if ( !v3 )
      return (unsigned int)-1073741670;
    if ( KeNumberNodes )
    {
      v10 = 0LL;
      v11 = (unsigned __int16)KeNumberNodes;
      do
      {
        v12 = (_QWORD *)(v10 + *v9);
        v10 += 16LL;
        v12[1] = v12;
        *v12 = v12;
        --v11;
      }
      while ( v11 );
    }
    ++v6;
    ++v9;
  }
  KiStackAttachProcess(a3, 0, (__int64)v17);
  v13 = SmHwAcceleratorMgrPartitionRegister(a2, a1);
  KiUnstackDetachProcess((__int64)v17, 0, v14, v15);
  if ( v13 >= 0 )
    return 0;
  return (unsigned int)v13;
}
