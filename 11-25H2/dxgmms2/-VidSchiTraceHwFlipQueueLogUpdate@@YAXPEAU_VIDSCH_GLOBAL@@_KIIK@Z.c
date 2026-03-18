/*
 * XREFs of ?VidSchiTraceHwFlipQueueLogUpdate@@YAXPEAU_VIDSCH_GLOBAL@@_KIIK@Z @ 0x14002E5BC
 * Callers:
 *     ?VidSchiProcessDpcVSyncHwFlipQueue@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x14002C51C (-VidSchiProcessDpcVSyncHwFlipQueue@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z.c)
 *     ?VidSchiObserveHwFlipQueueUpdates@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAPEAU_KEVENT@@PEA_N@Z @ 0x14005488C (-VidSchiObserveHwFlipQueueUpdates@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAPEAU_KEVEN.c)
 * Callees:
 *     McTemplateK0pqqqqXR4XR4_EtwWriteTransfer @ 0x14002F18C (McTemplateK0pqqqqXR4XR4_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 *     memset @ 0x140056780 (memset.c)
 */

void __fastcall VidSchiTraceHwFlipQueueLogUpdate(
        struct _VIDSCH_GLOBAL *a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 v5; // rbp
  __int64 v8; // rsi
  __int64 v9; // r10
  __int64 v10; // rdi
  __int64 v11; // r9
  unsigned int v12; // ecx
  unsigned int v13; // r8d
  unsigned int v14; // r11d
  int v15; // edx
  _QWORD *v16; // rdx
  _QWORD v17[64]; // [rsp+50h] [rbp-428h] BYREF
  _QWORD v18[64]; // [rsp+250h] [rbp-228h] BYREF

  v5 = a3;
  v8 = a4;
  memset(v18, 0, sizeof(v18));
  memset(v17, 0, sizeof(v17));
  v9 = *((_QWORD *)a1 + v5 + 429);
  v10 = 0LL;
  v11 = 304 * v8;
  v12 = *(_DWORD *)(v9 + 304 * v8 + 372);
  v13 = (a5 + 1) % v12;
  v14 = (v12 + *(_DWORD *)(v9 + 304 * v8 + 376) - 1) % v12 + 1;
  while ( 1 )
  {
    v15 = v14 % v12;
    if ( v13 == v14 % v12 )
      break;
    v16 = (_QWORD *)(*(_QWORD *)(v9 + v11 + 448) + 16LL * v13);
    v18[v10] = *v16;
    v17[v10] = v16[1];
    v12 = *(_DWORD *)(v9 + v11 + 372);
    v10 = (unsigned int)(v10 + 1);
    v13 = (v13 + 1) % v12;
  }
  if ( a2 > 0xFFFFFFFF )
  {
    WdLogSingleEntry1(3LL, a2);
    WdLogGlobalForLineNumber = 7003;
  }
  if ( (byte_140081244 & 4) != 0 )
    McTemplateK0pqqqqXR4XR4_EtwWriteTransfer(
      v12,
      v15,
      v13,
      *((_QWORD *)a1 + 2),
      v5,
      v8,
      a2,
      v10,
      (__int64)v18,
      (__int64)v17);
}
