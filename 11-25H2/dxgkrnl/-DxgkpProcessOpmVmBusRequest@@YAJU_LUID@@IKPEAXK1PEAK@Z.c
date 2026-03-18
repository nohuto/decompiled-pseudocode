/*
 * XREFs of ?DxgkpProcessOpmVmBusRequest@@YAJU_LUID@@IKPEAXK1PEAK@Z @ 0x14019DB60
 * Callers:
 *     ?VmBusOpmRequest@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140220160 (-VmBusOpmRequest@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14001C0B0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14001C140 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x14001F610 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z @ 0x14003907C (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z.c)
 *     DpiProcessOpmVmBusRequest @ 0x140089D4C (DpiProcessOpmVmBusRequest.c)
 */

__int64 __fastcall DxgkpProcessOpmVmBusRequest(
        struct _LUID a1,
        int a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        void **a6,
        unsigned int *a7)
{
  DWORD LowPart; // ebx
  __int64 v11; // rdx
  unsigned int v12; // ebx
  struct DXGADAPTER *v13; // rbx
  struct DXGADAPTER *v15[2]; // [rsp+40h] [rbp-38h] BYREF
  _BYTE v16[32]; // [rsp+50h] [rbp-28h] BYREF
  struct _LUID v17; // [rsp+80h] [rbp+8h] BYREF

  v17 = a1;
  v15[0] = 0LL;
  LowPart = a1.LowPart;
  if ( DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v15, &v17) )
  {
    v13 = v15[0];
    DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v16, v15[0], 1);
    v12 = DpiProcessOpmVmBusRequest(*((_QWORD *)v13 + 27), a2, a3, a4, a5, a6, a7);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v16);
  }
  else
  {
    v11 = LowPart;
    v12 = -1073741811;
    WdLogSingleEntry3(3LL, v11, v17.HighPart, -1073741811LL);
    WdLogGlobalForLineNumber = 1186;
  }
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v15, 0LL);
  return v12;
}
