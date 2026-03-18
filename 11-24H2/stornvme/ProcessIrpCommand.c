/*
 * XREFs of ProcessIrpCommand @ 0x140014990
 * Callers:
 *     NVMeHwUnitControl @ 0x14000EC10 (NVMeHwUnitControl.c)
 * Callees:
 *     NVMeIsLunValid @ 0x140001AC0 (NVMeIsLunValid.c)
 *     AssignQueueId @ 0x14000B7C0 (AssignQueueId.c)
 *     ProcessPendingIoCommands @ 0x140014BB0 (ProcessPendingIoCommands.c)
 *     Feature_EnableLunValidCheckContainment__private_IsEnabledDeviceUsageNoInline @ 0x14001F720 (Feature_EnableLunValidCheckContainment__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall ProcessIrpCommand(__int64 a1, __int64 *a2)
{
  __int64 v3; // rsi
  __int64 v5; // r14
  __int64 v7; // rbp
  __int64 v8; // rcx
  __int64 v9; // rbp
  unsigned __int64 v10; // r15
  unsigned __int128 v11; // rax
  unsigned __int16 v12; // r8
  __int64 v13; // rax
  int v14; // edx
  int v15; // r9d
  int v16; // eax
  __int64 v17; // [rsp+20h] [rbp-38h]

  v3 = a2[3];
  v5 = *a2;
  if ( !*((_DWORD *)a2 + 4) || (*(_DWORD *)(a1 + 4064) & 0x100) != 0 )
    return StorPortNotification(0x2000LL, a1, a2[3]);
  if ( (unsigned int)Feature_EnableLunValidCheckContainment__private_IsEnabledDeviceUsageNoInline() )
  {
    v7 = *(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(v5 + 10) + 1672);
    if ( (unsigned int)Feature_EnableLunValidCheckContainment__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( !v7 )
        return StorPortNotification(0x2000LL, a1, v3);
    }
    if ( *(_BYTE *)(v7 + 66) || *(_WORD *)(v7 + 48) )
      return StorPortNotification(0x2000LL, a1, v3);
  }
  if ( (*(_DWORD *)(a1 + 24) & 1) == 0
    && (*(_DWORD *)(*(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(v5 + 10) + 1672) + 20LL) & 0x200) == 0 )
  {
    return StorPortNotification(0x2000LL, a1, v3);
  }
  v8 = *(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(v5 + 10) + 1672);
  v9 = *(unsigned int *)(v8 + 52);
  v10 = *(_QWORD *)(v8 + 56);
  if ( !(unsigned int)Feature_EnableLunValidCheckContainment__private_IsEnabledDeviceUsageNoInline()
    && !NVMeIsLunValid(a1, *(_BYTE *)(v5 + 10)) )
  {
    return StorPortNotification(0x2000LL, a1, v3);
  }
  if ( (_DWORD)v9 )
  {
    if ( *((_DWORD *)a2 + 4) % (unsigned int)v9 )
      return StorPortNotification(0x2000LL, a1, v3);
    *(_QWORD *)&v11 = a2[1] / v9;
    *((_QWORD *)&v11 + 1) = a2[1] % v9;
    if ( v11 >= v10
      || v10 - a2[1] / v9 < (unsigned int)(__PAIR64__(DWORD2(v11), *((_DWORD *)a2 + 4)) / (unsigned int)v9) )
    {
      return StorPortNotification(0x2000LL, a1, v3);
    }
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(v5 + 10) + 1672) + 20LL) & 0x200) != 0 )
    v12 = 1;
  else
    v12 = AssignQueueId(
            a1,
            *((_DWORD *)a2 + 12),
            *((unsigned __int16 *)a2 + 26),
            *((_DWORD *)a2 + 4),
            0,
            0,
            (a2[7] & 0x10) != 0);
  v13 = *(unsigned __int8 *)(v5 + 10);
  *(_BYTE *)(v3 + 3) = v13;
  *(_WORD *)v3 = 1;
  v14 = *((_DWORD *)a2 + 4);
  *(_DWORD *)(v3 + 4) = v14;
  *(_DWORD *)(v3 + 16) = 1;
  v15 = *(_DWORD *)(a1 + 120);
  if ( v15 )
  {
    if ( a2[1] )
    {
      v16 = *(_DWORD *)(*(_QWORD *)(a1 + 8 * v13 + 1672) + 52LL);
      *(_DWORD *)(v3 + 4) = v14 - (-v16 & (v16 + v15 - 1));
    }
  }
  return ProcessPendingIoCommands(a1, 208LL * v12 + *(_QWORD *)(a1 + 936) - 208LL, v3, a2, v17);
}
