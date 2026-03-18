/*
 * XREFs of DxgkOpenNtHandleFromName @ 0x1401DE1B0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall DxgkOpenNtHandleFromName(ULONG64 a1, __int64 a2, __int64 a3)
{
  const void *v4; // rdx
  __int64 v5; // r8
  int v6; // ebx
  void *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v11; // [rsp+40h] [rbp-38h] BYREF
  __int64 v12; // [rsp+48h] [rbp-30h]
  char v13; // [rsp+50h] [rbp-28h]
  __int128 v14; // [rsp+58h] [rbp-20h] BYREF
  __int64 v15; // [rsp+68h] [rbp-10h]
  __int64 Src; // [rsp+88h] [rbp+10h] BYREF

  v11 = -1;
  v12 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v13 = 1;
    v11 = 2075;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2075);
  }
  else
  {
    v13 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v11, 2075);
  v14 = 0LL;
  v15 = 0LL;
  v4 = (const void *)a1;
  if ( a1 >= MmUserProbeAddress )
    v4 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(&v14, v4, 0x18uLL);
  Src = 0LL;
  LOBYTE(v5) = 1;
  v6 = ObOpenObjectByName(*((_QWORD *)&v14 + 1), g_pDxgkSharedAllocationObjectType, v5, 0LL, v14, 0LL, &Src);
  if ( v6 >= 0 )
  {
    v7 = (void *)(a1 + 16);
    if ( a1 + 16 >= MmUserProbeAddress )
      v7 = (void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(v7, &Src, 8uLL);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v11);
  if ( v13 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v8, (__int64)&EventProfilerExit, v9, v11);
  return (unsigned int)v6;
}
