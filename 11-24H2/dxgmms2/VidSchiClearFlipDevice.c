/*
 * XREFs of VidSchiClearFlipDevice @ 0x14001CD04
 * Callers:
 *     ?VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z @ 0x14001D38C (-VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z.c)
 *     VidSchiReportHwHang @ 0x140044F38 (VidSchiReportHwHang.c)
 *     VidSchFlushAdapter @ 0x1400A6CB0 (VidSchFlushAdapter.c)
 *     VidSchFlushDevice @ 0x1400B5320 (VidSchFlushDevice.c)
 * Callees:
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1400122B0 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     VidSchiProcessFlipPendingContextList @ 0x1400186B8 (VidSchiProcessFlipPendingContextList.c)
 *     VidSchiSetFlipDevice @ 0x14001E0BC (VidSchiSetFlipDevice.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x14001FEE0 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x1400316A0 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 */

void __fastcall VidSchiClearFlipDevice(struct _VIDSCH_GLOBAL *a1, __int64 a2, int a3, unsigned int a4, char a5)
{
  unsigned int *v6; // rsi
  unsigned int i; // r14d
  struct _VIDSCH_GLOBAL *v9; // [rsp+48h] [rbp-11h] BYREF
  _QWORD v10[2]; // [rsp+50h] [rbp-9h] BYREF
  char v11; // [rsp+60h] [rbp+7h]
  int v12; // [rsp+64h] [rbp+Bh]
  _BYTE v13[48]; // [rsp+68h] [rbp+Fh] BYREF

  v6 = (unsigned int *)((char *)a1 + 40);
  if ( a4 != -3 )
  {
    if ( a4 < *v6 )
    {
      VidSchiSetFlipDevice(a1, a3, 0, a5);
      goto LABEL_6;
    }
    WdLogSingleEntry1(3LL, a4);
    WdLogGlobalForLineNumber = 23030;
  }
  for ( i = 0; i < *v6; ++i )
    VidSchiSetFlipDevice(a1, a3, 0, a5);
LABEL_6:
  if ( *((_BYTE *)a1 + 51) )
  {
    AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v13, (unsigned __int64 *)a1 + 248, 1, 0);
    v9 = a1;
    v11 = 0;
    v10[1] = v10;
    v12 = 2;
    v10[0] = v10;
    if ( (unsigned int)VidSchiProcessFlipPendingContextList((__int64)&v9, (__int64)a1) )
    {
      *((_QWORD *)a1 + 185) = MEMORY[0xFFFFF78000000320];
      KeSetEvent((PRKEVENT)((char *)a1 + 1448), 0, 0);
    }
    HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)&v9);
    AcquireSpinLock::Release((AcquireSpinLock *)v13);
  }
}
