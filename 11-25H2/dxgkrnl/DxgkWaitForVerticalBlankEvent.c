/*
 * XREFs of DxgkWaitForVerticalBlankEvent @ 0x1402AEF90
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     DxgkWaitForVerticalBlankEventInternal @ 0x1402AF120 (DxgkWaitForVerticalBlankEventInternal.c)
 */

__int64 __fastcall DxgkWaitForVerticalBlankEvent(__int64 a1, __int64 a2, __int64 a3)
{
  const void *v3; // rbx
  unsigned int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // r8
  char v8; // [rsp+30h] [rbp-58h]
  int v9; // [rsp+40h] [rbp-48h] BYREF
  __int64 v10; // [rsp+48h] [rbp-40h]
  char v11; // [rsp+50h] [rbp-38h]
  __int64 v12; // [rsp+58h] [rbp-30h] BYREF
  __int64 v13; // [rsp+60h] [rbp-28h] BYREF
  unsigned int v14; // [rsp+68h] [rbp-20h]

  v3 = (const void *)a1;
  v9 = -1;
  v10 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v11 = 1;
    v9 = 2026;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2026);
  }
  else
  {
    v11 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v9, 2026);
  v13 = 0LL;
  v14 = 0;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(&v13, v3, 0xCuLL);
  v12 = -800000LL;
  v8 = 0;
  v4 = DxgkWaitForVerticalBlankEventInternal((unsigned int)v13, HIDWORD(v13), v14, 0LL, 0LL, &v12, v8);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v9);
  if ( v11 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v5, (__int64)&EventProfilerExit, v6, v9);
  return v4;
}
