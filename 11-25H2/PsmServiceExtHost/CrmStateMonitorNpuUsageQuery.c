/*
 * XREFs of CrmStateMonitorNpuUsageQuery @ 0x18007A05C
 * Callers:
 *     CrmStateMonitorResourceUsageQuery @ 0x18007A90C (CrmStateMonitorResourceUsageQuery.c)
 * Callees:
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000F7E0 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     CrmStateMonitorAttemptNpuContextRefresh @ 0x180079748 (CrmStateMonitorAttemptNpuContextRefresh.c)
 *     CrmpDxUtilsQueryEngineInfo @ 0x18007B2A8 (CrmpDxUtilsQueryEngineInfo.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A8010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CrmStateMonitorNpuUsageQuery(__int64 a1, unsigned __int64 *a2)
{
  unsigned int v2; // ebx
  _QWORD *v3; // rbp
  __int64 v5; // rcx
  int v7; // esi
  int v8; // eax
  unsigned __int64 v9; // rdx
  _QWORD *v10; // r8
  __int64 v11; // r10
  __int64 v12; // rax
  __int64 v13; // rcx
  void *v14; // rcx
  __int64 result; // rax
  unsigned int v16; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v17; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  v3 = 0LL;
  v16 = 0;
  v5 = *(_QWORD *)a1;
  v17 = 0LL;
  if ( v5 && !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v5 + 8) + 40LL))(*(_QWORD *)(v5 + 8))
    || (v7 = CrmStateMonitorAttemptNpuContextRefresh(a1), v7 >= 0) )
  {
    v8 = CrmpDxUtilsQueryEngineInfo(*(_QWORD *)a1, &v16, &v17);
    v3 = v17;
    v7 = v8;
    if ( v8 < 0 )
    {
      v2 = v16;
    }
    else
    {
      if ( *(_DWORD *)(a1 + 8) )
      {
        v2 = v16;
        v9 = 0LL;
        if ( v16 )
        {
          v10 = v17;
          v11 = v16;
          do
          {
            v12 = *v10 - *(_QWORD *)((char *)v10 + *(_QWORD *)(a1 + 16) - (_QWORD)v17);
            ++v10;
            v13 = 10 * v12;
            if ( v9 > 10 * v12 )
              v13 = v9;
            v9 = v13;
            --v11;
          }
          while ( v11 );
        }
      }
      else
      {
        v2 = v16;
        v9 = -(__int64)(v16 != 0);
      }
      *a2 = v9;
      v7 = 0;
    }
  }
  v14 = *(void **)(a1 + 16);
  if ( v14 )
    HampFreeHeap(v14);
  *(_DWORD *)(a1 + 8) = v2;
  result = (unsigned int)v7;
  *(_QWORD *)(a1 + 16) = v3;
  return result;
}
