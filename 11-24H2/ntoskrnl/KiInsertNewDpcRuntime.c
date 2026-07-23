/*
 * XREFs of KiInsertNewDpcRuntime @ 0x1403F9BD0
 * Callers:
 *     KiExecuteAllDpcs @ 0x1402858E0 (KiExecuteAllDpcs.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KiInsertNewDpcRuntime(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // r15
  int v4; // ebx
  __int64 v6; // rdi
  __int64 result; // rax
  _QWORD *v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rdi
  struct _KPRCB *v12; // rcx
  _DWORD *v13; // rdi
  int v14; // ett
  __int64 v15; // rbx
  char *Pool2; // r14
  char v17; // cl
  unsigned __int64 v18; // rcx
  unsigned int v19; // edi
  __int64 v20; // r9
  __int64 v21; // r11
  _QWORD *v22; // r8
  __int64 v23; // rdx
  void *v24; // rbp
  int v25; // eax
  struct _KPRCB *v26; // rcx
  signed __int32 *SchedulerAssist; // rdi
  signed __int32 v28; // eax
  signed __int32 v29; // ett
  __int64 v30; // [rsp+60h] [rbp+8h]
  __int64 v32; // [rsp+78h] [rbp+20h]

  CurrentPrcb = KeGetCurrentPrcb();
  v4 = *(_DWORD *)(a1 + 4) >> 5;
  v6 = a2;
  if ( *(_DWORD *)a1 >= (unsigned int)(2 * v4) )
  {
    v15 = (unsigned int)(2 * v4);
    if ( (unsigned int)v15 < 4 )
      v15 = 4LL;
    Pool2 = (char *)ExAllocatePool2(0x40uLL, 8LL * (unsigned int)v15, 0x74687244u);
    if ( Pool2 )
    {
      _disable();
      KxAcquireSpinLock(&CurrentPrcb->DpcData[0].DpcLock);
      if ( (((_DWORD)v15 - 1) & (unsigned int)v15) != 0 )
      {
        v17 = -1;
        do
        {
          ++v17;
          LODWORD(v15) = (unsigned int)v15 >> 1;
        }
        while ( (_DWORD)v15 );
        v15 = (unsigned int)(1 << v17);
      }
      if ( (unsigned int)v15 > 0x4000000 )
        v15 = 0x4000000LL;
      v18 = (unsigned int)v15;
      if ( Pool2 > &Pool2[8 * v15] )
        v18 = 0LL;
      if ( v18 )
        memset64(Pool2, a1 | 1, v18);
      v19 = 0;
      v20 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
      if ( (*(_DWORD *)(a1 + 4) & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v21 = *(_QWORD *)(a1 + 8);
          while ( 1 )
          {
            v22 = *(_QWORD **)(v21 + 8LL * v19);
            if ( ((unsigned __int8)v22 & 1) != 0 )
              break;
            *(_QWORD *)(v21 + 8LL * v19) = *v22;
            v30 = v20 & v22[1];
            v23 = (37
                 * (BYTE6(v30)
                  + 37
                  * (BYTE5(v30)
                   + 37
                   * (BYTE4(v30)
                    + 37 * (BYTE3(v30) + 37 * (BYTE2(v30) + 37 * (BYTE1(v30) + 37 * ((unsigned __int8)v30 + 11623883)))))))
                 + HIBYTE(v30)) & (unsigned int)(v15 - 1);
            *v22 = *(_QWORD *)&Pool2[8 * v23];
            *(_QWORD *)&Pool2[8 * v23] = v22;
          }
          ++v19;
        }
        while ( v19 < *(_DWORD *)(a1 + 4) >> 5 );
      }
      v24 = *(void **)(a1 + 8);
      v25 = (32 * v15) | *(_DWORD *)(a1 + 4) & 0x1F;
      *(_QWORD *)(a1 + 8) = Pool2;
      *(_DWORD *)(a1 + 4) = v25;
      KxReleaseSpinLock((volatile signed __int64 *)&CurrentPrcb->DpcData[0].DpcLock);
      v26 = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)v26->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v28 = *SchedulerAssist;
        do
        {
          v29 = v28;
          v28 = _InterlockedCompareExchange(SchedulerAssist, v28 & 0xFFDFFFFF, v28);
        }
        while ( v29 != v28 );
        if ( (v28 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)v26);
      }
      _enable();
      if ( v24 )
        ExFreePoolWithTag(v24, 0);
      v6 = a2;
    }
  }
  result = ExAllocatePool2(0x40uLL, 0x20uLL, 0x74687244u);
  v9 = (_QWORD *)result;
  if ( result )
  {
    *(_QWORD *)(result + 8) = v6;
    *(_QWORD *)(result + 16) = a3;
    *(_BYTE *)(result + 24) = 1;
    _disable();
    KxAcquireSpinLock(&CurrentPrcb->DpcData[0].DpcLock);
    v32 = v9[1] & (-1LL << (*(_DWORD *)(a1 + 4) & 0x1F));
    v10 = *(_QWORD *)(a1 + 8);
    v11 = (37
         * (BYTE6(v32)
          + 37
          * (BYTE5(v32)
           + 37
           * (BYTE4(v32)
            + 37 * (BYTE3(v32) + 37 * (BYTE2(v32) + 37 * (BYTE1(v32) + 37 * ((unsigned __int8)v32 + 11623883)))))))
         + HIBYTE(v32)) & (unsigned int)((*(_DWORD *)(a1 + 4) >> 5) - 1);
    *v9 = *(_QWORD *)(v10 + 8 * v11);
    *(_QWORD *)(v10 + 8 * v11) = v9;
    ++*(_DWORD *)a1;
    result = KxReleaseSpinLock((volatile signed __int64 *)&CurrentPrcb->DpcData[0].DpcLock);
    v12 = KeGetCurrentPrcb();
    v13 = v12->SchedulerAssist;
    if ( v13 )
    {
      _m_prefetchw(v13);
      LODWORD(result) = *v13;
      do
      {
        v14 = result;
        result = (unsigned int)_InterlockedCompareExchange(v13, result & 0xFFDFFFFF, result);
      }
      while ( v14 != (_DWORD)result );
      if ( (result & 0x200000) != 0 )
        result = KiRemoveSystemWorkPriorityKick((__int64)v12);
    }
    _enable();
  }
  return result;
}
