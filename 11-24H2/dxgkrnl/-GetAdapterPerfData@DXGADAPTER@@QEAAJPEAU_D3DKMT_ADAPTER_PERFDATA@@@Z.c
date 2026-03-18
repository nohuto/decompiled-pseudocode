/*
 * XREFs of ?GetAdapterPerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATA@@@Z @ 0x14035D83C
 * Callers:
 *     DxgkQueryStatisticsInternal @ 0x140295A90 (DxgkQueryStatisticsInternal.c)
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x140383210 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x14035DC70 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::GetAdapterPerfData(DXGADAPTER *this, struct _D3DKMT_ADAPTER_PERFDATA *a2)
{
  __int64 PhysicalAdapterIndex; // r15
  __int64 v5; // rdi
  LARGE_INTEGER v6; // rax
  LARGE_INTEGER v7; // rbx
  ULONGLONG *v8; // r12
  int v9; // eax
  unsigned int v10; // r15d
  __int64 result; // rax
  struct _DXGKARG_QUERYADAPTERINFO v12; // [rsp+20h] [rbp-30h] BYREF
  int v13; // [rsp+88h] [rbp+38h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+90h] [rbp+40h] BYREF

  if ( a2 )
  {
    PhysicalAdapterIndex = a2->PhysicalAdapterIndex;
    if ( (unsigned int)PhysicalAdapterIndex < *((_DWORD *)this + 74) )
    {
      PerformanceFrequency.QuadPart = 0LL;
      v5 = *((_QWORD *)this + 374) + 344 * PhysicalAdapterIndex;
      v6 = KeQueryPerformanceCounter(&PerformanceFrequency);
      v7 = v6;
      if ( *((_DWORD *)this + 40) == 1
        || 1000 * (v6.QuadPart - *(_QWORD *)(v5 + 176)) / PerformanceFrequency.QuadPart < 450 )
      {
        v10 = 0;
        v8 = (ULONGLONG *)(v5 + 120);
      }
      else
      {
        *((_DWORD *)&v12.Type + 1) = 0;
        *(&v12.InputDataSize + 1) = 0;
        v8 = (ULONGLONG *)(v5 + 120);
        *(_QWORD *)&v12.Flags.0 = 0LL;
        HIDWORD(v12.hKmdProcessHandle) = 0;
        v12.pInputData = &v13;
        v12.pOutputData = (void *)(v5 + 120);
        v13 = PhysicalAdapterIndex;
        v12.Type = DXGKQAITYPE_ADAPTERPERFDATA;
        v12.InputDataSize = 4;
        v12.OutputDataSize = 53;
        v9 = DXGADAPTER::DdiQueryAdapterInfo(this, &v12);
        v10 = v9;
        if ( v9 < 0 )
        {
          WdLogSingleEntry2(3LL, this, v9);
          WdLogGlobalForLineNumber = 12055;
          return v10;
        }
        *(LARGE_INTEGER *)(v5 + 176) = v7;
      }
      a2->MemoryFrequency = *v8;
      a2->MaxMemoryFrequency = *(_QWORD *)(v5 + 128);
      a2->MaxMemoryFrequencyOC = *(_QWORD *)(v5 + 136);
      a2->MemoryBandwidth = *(_QWORD *)(v5 + 144);
      a2->PCIEBandwidth = *(_QWORD *)(v5 + 152);
      a2->FanRPM = *(_DWORD *)(v5 + 160);
      a2->Power = *(_DWORD *)(v5 + 164);
      a2->Temperature = *(_DWORD *)(v5 + 168);
      a2->PowerStateOverride = *(_BYTE *)(v5 + 172);
      return v10;
    }
  }
  WdLogSingleEntry1(3LL, this);
  result = 3221225485LL;
  WdLogGlobalForLineNumber = 12021;
  return result;
}
