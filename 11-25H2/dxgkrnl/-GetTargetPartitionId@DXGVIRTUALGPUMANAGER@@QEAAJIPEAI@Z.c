/*
 * XREFs of ?GetTargetPartitionId@DXGVIRTUALGPUMANAGER@@QEAAJIPEAI@Z @ 0x140207288
 * Callers:
 *     ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_PARAV@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z @ 0x14020F730 (-CreateVirtualGpu@DXGVIRTUALGPUMANAGER_PARAV@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z.c)
 *     ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z @ 0x1402110B0 (-CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGVIRTUALGPUMANAGER::GetTargetPartitionId(
        DXGVIRTUALGPUMANAGER *this,
        unsigned int a2,
        unsigned int *a3)
{
  unsigned int v3; // eax
  __int64 v5; // rbx
  __int64 result; // rax
  _QWORD *v7; // rcx
  __int64 v8; // [rsp+28h] [rbp-30h]

  v3 = *((_DWORD *)this + 3);
  if ( a2 == 0xFFFF )
  {
    a2 = 0;
    if ( v3 )
    {
      v7 = (_QWORD *)*((_QWORD *)this + 3);
      do
      {
        if ( !*v7 )
          break;
        ++a2;
        ++v7;
      }
      while ( a2 < v3 );
    }
    if ( a2 == *((_DWORD *)this + 3) )
    {
      WdLogSingleEntry0(4LL);
      result = 2147483674LL;
      WdLogGlobalForLineNumber = 3001;
      return result;
    }
  }
  else if ( a2 >= v3 )
  {
    v5 = a2;
    WdLogSingleEntry2(2LL, a2, v3);
    v8 = *((unsigned int *)this + 3);
    WdLogGlobalForLineNumber = 2983;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"PartitionId is greater that the number of available GPU partitions: 0x%I64x 0x%I64x",
      v5,
      v8,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  *a3 = a2;
  return 0LL;
}
