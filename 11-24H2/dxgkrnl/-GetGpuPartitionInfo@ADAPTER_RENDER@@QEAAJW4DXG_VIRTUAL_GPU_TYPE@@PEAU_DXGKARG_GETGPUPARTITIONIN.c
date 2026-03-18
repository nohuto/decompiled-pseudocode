/*
 * XREFs of ?GetGpuPartitionInfo@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETGPUPARTITIONINFO@@@Z @ 0x14020D664
 * Callers:
 *     DxgkDdiGetGpuPartitionInfo @ 0x14020FFC4 (DxgkDdiGetGpuPartitionInfo.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?SetGpuPartitionCount@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_SETGPUPARTITIONCOUNT@@E@Z @ 0x14020F328 (-SetGpuPartitionCount@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_SETGPUPARTITIONC.c)
 *     ?DdiGetGpuPartitionInfo@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETGPUPARTITIONINFO@@@Z @ 0x140212200 (-DdiGetGpuPartitionInfo@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETGPUPARTITIONINFO@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::GetGpuPartitionInfo(
        ADAPTER_RENDER *a1,
        int a2,
        struct _DXGKARG_GETGPUPARTITIONINFO *a3,
        __int64 a4)
{
  __int64 v6; // rdi
  USHORT *pGpuPartitionOptions; // rcx
  __int64 v9; // r9
  int CurrentGpuPartitionCount; // eax
  __int64 v11; // rcx
  int v12; // eax
  int v13; // [rsp+68h] [rbp+10h] BYREF

  LODWORD(v6) = 0;
  if ( a2 == 1 )
  {
    if ( !a3->NumGpuPartitionOptions )
      return 3221225507LL;
    if ( *((_QWORD *)a1 + 234)
      || (LOBYTE(a4) = 1,
          v13 = *(_DWORD *)(*((_QWORD *)a1 + 2) + 4800LL),
          LODWORD(v6) = ADAPTER_RENDER::SetGpuPartitionCount(a1, 1LL, &v13, a4),
          (int)v6 >= 0) )
    {
      a3->CurrentGpuPartitionCount = *(_WORD *)(*((_QWORD *)a1 + 234) + 12LL);
      pGpuPartitionOptions = a3->pGpuPartitionOptions;
      a3->NumGpuPartitionOptions = 1;
      *pGpuPartitionOptions = *(_WORD *)(*((_QWORD *)a1 + 2) + 4800LL);
    }
  }
  else
  {
    LODWORD(v6) = ADAPTER_RENDER::DdiGetGpuPartitionInfo(a1, a3);
    if ( (int)v6 >= 0 )
    {
      CurrentGpuPartitionCount = a3->CurrentGpuPartitionCount;
      if ( (_WORD)CurrentGpuPartitionCount )
      {
        v11 = *((_QWORD *)a1 + 233);
        if ( !v11 || *(_DWORD *)(v11 + 12) != CurrentGpuPartitionCount )
        {
          LOBYTE(v9) = 1;
          v13 = a3->CurrentGpuPartitionCount;
          v12 = ADAPTER_RENDER::SetGpuPartitionCount(a1, 0LL, &v13, v9);
          v6 = v12;
          if ( v12 < 0 )
          {
            WdLogSingleEntry1(2LL, v12);
            WdLogGlobalForLineNumber = 1827;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000LL,
              0xFFFFFFFFLL,
              L"SetGpuPartitionCount failed: 0x%I64x",
              v6,
              0LL,
              0LL,
              0LL,
              0LL);
          }
        }
      }
    }
  }
  return (unsigned int)v6;
}
