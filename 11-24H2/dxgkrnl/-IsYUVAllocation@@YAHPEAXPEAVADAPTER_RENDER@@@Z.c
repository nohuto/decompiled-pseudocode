/*
 * XREFs of ?IsYUVAllocation@@YAHPEAXPEAVADAPTER_RENDER@@@Z @ 0x1402F5480
 * Callers:
 *     ?PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAVCRefCountedBuffer@@@Z @ 0x1404201A0 (-PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUV.c)
 * Callees:
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1402F57E0 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 */

__int64 __fastcall IsYUVAllocation(void *a1, struct ADAPTER_RENDER *a2)
{
  unsigned int v2; // ebx
  struct _DXGKARG_DESCRIBEALLOCATION v4; // [rsp+20h] [rbp-38h] BYREF

  memset(&v4, 0, sizeof(v4));
  v4.hAllocation = a1;
  v2 = 0;
  if ( (int)ADAPTER_RENDER::DdiDescribeAllocation(a2, &v4) >= 0 )
    return v4.Format >= 0xFFFFFF;
  return v2;
}
