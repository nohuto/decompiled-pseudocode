/*
 * XREFs of PopEndMirroring @ 0x140B64660
 * Callers:
 *     <none>
 * Callees:
 *     KeInsertQueueDpc @ 0x1402542F0 (KeInsertQueueDpc.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     RtlRaiseStatus @ 0x140280B30 (RtlRaiseStatus.c)
 *     KeSetSystemGroupAffinityThread @ 0x140339650 (KeSetSystemGroupAffinityThread.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     IoAddTriageDumpDataBlock @ 0x1403F2880 (IoAddTriageDumpDataBlock.c)
 *     KeInitializeDpc @ 0x140455470 (KeInitializeDpc.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     EtwKernelMemoryRundown @ 0x1407A950C (EtwKernelMemoryRundown.c)
 *     PopBuildMemoryImageHeader @ 0x140B64920 (PopBuildMemoryImageHeader.c)
 *     PopInvokeSystemStateHandler @ 0x140B6552C (PopInvokeSystemStateHandler.c)
 */

__int64 __fastcall PopEndMirroring(ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR v1; // rsi
  int v2; // ebx
  unsigned int v4; // ecx
  int v5; // edx
  unsigned __int8 CurrentIrql; // cl
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rdx
  int v9; // edx
  int v10; // esi
  __int64 v11; // rcx
  __int64 v12; // rcx
  struct _GROUP_AFFINITY Affinity; // [rsp+30h] [rbp-29h] BYREF
  __int128 v14; // [rsp+40h] [rbp-19h]
  __int64 v15; // [rsp+50h] [rbp-9h]
  struct _KDPC Dpc; // [rsp+60h] [rbp+7h] BYREF

  v1 = (unsigned int)BugCheckParameter3;
  v15 = 0LL;
  Affinity = 0LL;
  v14 = 0LL;
  memset(&Dpc, 0, 60);
  if ( (_DWORD)BugCheckParameter3 )
  {
    if ( (_DWORD)BugCheckParameter3 != 1 )
    {
      v2 = -1073741823;
      goto LABEL_5;
    }
    v2 = PopBuildMemoryImageHeader((PVOID)BugCheckParameter4);
    if ( v2 < 0 || (v2 = PopInvokeSystemStateHandler((unsigned int)PopHibernatePowerStateHandlerType), v2 < 0) )
    {
LABEL_5:
      IoAddTriageDumpDataBlock((ULONG)&PopAction, (PVOID)0x1E0);
      if ( *(_QWORD *)&qword_140F0B148 )
        IoAddTriageDumpDataBlock(qword_140F0B148, (PVOID)0x1D8);
      if ( BugCheckParameter4 )
      {
        IoAddTriageDumpDataBlock(BugCheckParameter4, (PVOID)0x1F0);
        v11 = *(_QWORD *)(BugCheckParameter4 + 184);
        if ( v11 )
          IoAddTriageDumpDataBlock(v11, (PVOID)0x178);
        v12 = *(_QWORD *)(BugCheckParameter4 + 216);
        if ( v12 )
          IoAddTriageDumpDataBlock(v12, (PVOID)0x4D8);
      }
      KeBugCheckEx(0xA0u, 9uLL, v2, v1, 0LL);
    }
    if ( PoResumeFromHibernate )
      v2 = 1073742484;
  }
  else
  {
    if ( (BYTE4(xmmword_140FC5B10) & 1) != 0 )
      EtwKernelMemoryRundown();
    KeSetEvent(PopSleeperHandoff, 0, 1u);
    KeWaitForSingleObject(&PopSleeperHandoff[1], Executive, 0, 0, 0LL);
    v2 = PopBuildMemoryImageHeader((PVOID)BugCheckParameter4);
    if ( v2 < 0 )
      goto LABEL_5;
    v4 = *(_DWORD *)KiGlobalState;
    Affinity.Reserved[1] = 0;
    Affinity.Reserved[2] = 0;
    *(_DWORD *)&Affinity.Group = (unsigned __int16)(v4 >> 6);
    Affinity.Mask = 1LL << (v4 & 0x3F);
    KeSetSystemGroupAffinityThread(&Affinity, 0LL);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v5) = 2;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v5);
    }
    memset_0(&PopHibernateSystemContext, 0, 0x50uLL);
    dword_140E275F0 = KeNumberProcessors_0;
    dword_140E275FC = KeNumberProcessors_0;
    dword_140E275F8 = 1;
    if ( ((unsigned __int8)&stru_140E27600 & 0xF) != 0 )
      RtlRaiseStatus(-2147483646);
    stru_140E27600 = 0LL;
    KeInitializeDpc(&Dpc, PopInvokeStateHandlerTargetProcessor, &PopHibernateSystemContext);
    v7 = KeActiveProcessors.Bitmap[0];
    Dpc.Importance = 2;
    while ( 1 )
    {
      while ( v7 )
      {
        _BitScanForward64(&v8, v7);
        v7 &= ~(1LL << v8);
        *((_QWORD *)&v14 + 1) = v7;
        v9 = *((_DWORD *)qword_140F21E78 + 64 * (unsigned __int16)v15 + (unsigned __int8)v8);
        if ( v9 )
        {
          v10 = dword_140E275F4;
          if ( !Dpc.DpcData )
            Dpc.Number = v9 + 2048;
          KeInsertQueueDpc(&Dpc, 0LL, 0LL);
          while ( v10 == dword_140E275F4 )
            ;
          v7 = *((_QWORD *)&v14 + 1);
        }
      }
      LOWORD(v15) = v15 + 1;
      if ( (unsigned __int16)v15 >= (unsigned int)KeActiveProcessors.Count )
        break;
      v7 = KeActiveProcessors.Bitmap[(unsigned __int16)v15];
    }
  }
  if ( v2 != 1073742484 )
    return 0;
  return (unsigned int)v2;
}
