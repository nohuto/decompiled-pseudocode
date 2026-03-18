/*
 * XREFs of ?VidSchiDestroyNodeSchedulingLog@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x140051C88
 * Callers:
 *     ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x140092720 (--1VIDMM_GLOBAL@@QEAA@XZ.c)
 * Callees:
 *     ??_GVIDMM_SCH_LOG@@AEAAPEAXI@Z @ 0x14004B4EC (--_GVIDMM_SCH_LOG@@AEAAPEAXI@Z.c)
 *     ?DdiSetSchedulingLogBuffer@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETSCHEDULINGLOGBUFFER@@@Z @ 0x14004B670 (-DdiSetSchedulingLogBuffer@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETSCHEDULINGLOGBUFFER@@@Z.c)
 */

void __fastcall VidSchiDestroyNodeSchedulingLog(struct _VIDSCH_NODE *a1)
{
  __int64 v1; // rdi
  int i; // eax
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rax
  bool v7; // cf
  ADAPTER_RENDER *v8; // rcx
  VIDMM_SCH_LOG *v9; // rcx
  _DXGKARG_SETSCHEDULINGLOGBUFFER v10; // [rsp+30h] [rbp-38h] BYREF

  v1 = *((_QWORD *)a1 + 3);
  for ( i = *((_DWORD *)a1 + 4122); i; i = *((_DWORD *)a1 + 4122) )
    KeWaitForSingleObject((char *)a1 + 16496, Executive, 0, 0, 0LL);
  if ( *((_QWORD *)a1 + 2052) )
  {
    v4 = *((unsigned __int16 *)a1 + 2);
    v5 = *(_QWORD *)(v1 + 688);
    memset(&v10.NumberOfEntries, 0, 32);
    v6 = v5 + 8 * v4;
    v7 = (unsigned int)v4 < *(_DWORD *)(v1 + 760);
    if ( (unsigned int)v4 >= *(_DWORD *)(v1 + 760) )
      v6 = v5;
    v10.EngineOrdinal = *(unsigned __int16 *)(*(_QWORD *)v6 + 6LL);
    if ( v7 )
      v5 += 8 * v4;
    v8 = *(ADAPTER_RENDER **)(v1 + 8);
    v10.NodeOrdinal = *(unsigned __int16 *)(*(_QWORD *)v5 + 8LL);
    ADAPTER_RENDER::DdiSetSchedulingLogBuffer(v8, &v10);
    v9 = (VIDMM_SCH_LOG *)*((_QWORD *)a1 + 2052);
    if ( v9 )
      VIDMM_SCH_LOG::`scalar deleting destructor'(v9);
    *((_QWORD *)a1 + 2052) = 0LL;
  }
}
