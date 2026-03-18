/*
 * XREFs of ?VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@AEAU_VIDSCH_CALL_EXECUTE_FLIP@@PEAW4_VIDSCH_FLIP_STATUS@@K@Z @ 0x14002F478
 * Callers:
 *     VidSchiExecuteMmIoFlip @ 0x14002D920 (VidSchiExecuteMmIoFlip.c)
 * Callees:
 *     VidSchiSetupMmIoFlipMultiPlaneOverlay3 @ 0x14002FA40 (VidSchiSetupMmIoFlipMultiPlaneOverlay3.c)
 *     ?VidSchiLogMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEBU_VIDSCH_CALL_EXECUTE_FLIP@@W4_VIDSCH_FLIP_STATUS@@I_K@Z @ 0x140030570 (-VidSchiLogMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEBU.c)
 *     ?VidSchiEnqueueDeviceCommandToWorkerThreadAtDpc@@YAXPEBXW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z @ 0x1400460B8 (-VidSchiEnqueueDeviceCommandToWorkerThreadAtDpc@@YAXPEBXW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z.c)
 *     McTemplateK0pqqtq_EtwWriteTransfer @ 0x14004F318 (McTemplateK0pqqtq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140055E20 (__security_check_cookie.c)
 *     memset @ 0x140056340 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VidSchiExecuteMmIoFlipMultiPlaneOverlay3(
        struct _VIDSCH_GLOBAL *a1,
        unsigned int a2,
        struct VIDSCH_FLIP_QUEUE *a3,
        struct _VIDSCH_CALL_EXECUTE_FLIP *a4,
        enum _VIDSCH_FLIP_STATUS *a5,
        unsigned int a6)
{
  enum _VIDSCH_FLIP_STATUS *v7; // r12
  __int64 v9; // r15
  LARGE_INTEGER *v10; // r14
  struct _VIDSCH_CALL_EXECUTE_FLIP *v11; // rdi
  LARGE_INTEGER v12; // rcx
  unsigned int v13; // ebx
  __int64 v14; // r9
  __int64 v15; // rcx
  int v16; // eax
  int v17; // ecx
  int v18; // r8d
  int v19; // edx
  unsigned int v20; // r11d
  unsigned int v21; // r10d
  bool v22; // zf
  int v23; // eax
  char v24; // cl
  int v25; // r13d
  unsigned int v26; // r12d
  char v27; // cl
  int v28; // eax
  unsigned int v29; // edi
  __int64 v30; // rcx
  _QWORD *v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rax
  _DWORD *v34; // rcx
  _QWORD *v35; // r10
  unsigned int v36; // edx
  char v37; // cl
  int v38; // eax
  char v39; // cl
  int v40; // eax
  int v41; // eax
  int v42; // edx
  __int64 v43; // rcx
  __int64 v44; // rdx
  char v45; // [rsp+40h] [rbp-C0h] BYREF
  char v46; // [rsp+41h] [rbp-BFh]
  unsigned int v47; // [rsp+44h] [rbp-BCh]
  struct _VIDSCH_GLOBAL *v48; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v49; // [rsp+50h] [rbp-B0h]
  int v50; // [rsp+54h] [rbp-ACh]
  struct VIDSCH_FLIP_QUEUE *v51; // [rsp+58h] [rbp-A8h]
  char v52; // [rsp+60h] [rbp-A0h]
  int v53; // [rsp+61h] [rbp-9Fh]
  __int16 v54; // [rsp+65h] [rbp-9Bh]
  char v55; // [rsp+67h] [rbp-99h]
  struct _VIDSCH_CALL_EXECUTE_FLIP *v56; // [rsp+68h] [rbp-98h]
  enum _VIDSCH_FLIP_STATUS *v57; // [rsp+70h] [rbp-90h]
  __int64 v58[2]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v59[2]; // [rsp+88h] [rbp-78h] BYREF
  __int128 v60; // [rsp+98h] [rbp-68h]
  __int64 v61; // [rsp+A8h] [rbp-58h]
  __int64 v62[10]; // [rsp+B0h] [rbp-50h] BYREF

  v7 = a5;
  v9 = a2;
  v56 = a4;
  v10 = (LARGE_INTEGER *)((char *)a3 + 1400 * a6);
  v57 = a5;
  v11 = a4;
  v47 = a6;
  memset(v62, 0, sizeof(v62));
  v12 = v10[148];
  v61 = 0LL;
  v13 = 0;
  *(_OWORD *)v58 = 0LL;
  *(_OWORD *)v59 = 0LL;
  v60 = 0LL;
  if ( v12.QuadPart && v12.QuadPart < *((_QWORD *)a3 + 12) )
  {
    v43 = *((int *)a3 + 21);
    g_DxgMmsBugcheckExportIndex = 1;
    v16 = WdLogSingleEntry5(0LL, 281LL, 36864LL, v9, v43, v47);
    WdLogGlobalForLineNumber = 906;
LABEL_64:
    v44 = *((_QWORD *)a1 + 2);
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 11LL, v16, v11, v44);
    WdLogGlobalForLineNumber = 906;
LABEL_65:
    v17 = (*((_BYTE *)a1 + 59) != 0) + 1;
    *((_DWORD *)v11 + 4) = v17;
LABEL_57:
    v41 = *((_DWORD *)v11 + 4);
    if ( (v41 & 2) == 0 )
    {
      if ( (v41 & 1) != 0 )
      {
        v52 = v46;
        v53 = 0;
        v54 = 0;
        v55 = 0;
        v48 = a1;
        v50 = v9;
        v51 = a3;
        v49 = v47;
        VidSchiEnqueueDeviceCommandToWorkerThreadAtDpc(&v48);
        if ( (v10[159].LowPart & 0x10) != 0 )
          v42 = ((unsigned __int16)*(_DWORD *)v10[164].QuadPart | (unsigned __int16)(*(_DWORD *)v10[164].QuadPart >> 10)) & 0x3FF;
        else
          v42 = (1 << *((_DWORD *)a1 + 38)) - 1;
        *(_DWORD *)(*((_QWORD *)a1 + v9 + 429) + 3252LL) |= v42;
        return;
      }
      goto LABEL_8;
    }
LABEL_45:
    if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
      McTemplateK0pqqtq_EtwWriteTransfer(
        v17,
        v19,
        v18,
        *((_QWORD *)a1 + 2),
        v9,
        v10[146].LowPart,
        (*((_DWORD *)v11 + 4) & 2) != 0,
        v19);
    return;
  }
  *((LARGE_INTEGER *)a3 + 12) = v12;
  v46 = *(_DWORD *)a5 == 11;
  VidSchiSetupMmIoFlipMultiPlaneOverlay3(a1, v46, (__int64)v62, (__int64)v58, (__int64)v59);
  if ( !*((_DWORD *)v11 + 5) )
  {
    *((_DWORD *)v11 + 530) = 0;
    WdLogSingleEntry2(4LL, v9, (*(_DWORD *)v10[164].QuadPart >> 10) & 0x3FF);
    WdLogGlobalForLineNumber = 21602;
    goto LABEL_24;
  }
  if ( (v10[159].LowPart & 0x1000) != 0 )
  {
    *((_DWORD *)v11 + 530) = 0;
    WdLogSingleEntry0(4LL);
    WdLogGlobalForLineNumber = 21609;
    goto LABEL_24;
  }
  v14 = *((unsigned int *)a1 + 8);
  v15 = *((_QWORD *)a1 + 3);
  v45 = 0;
  v16 = DpSynchronizeExecution(v15, VidSchiExecuteMmIoFlipMultiPlaneOverlayAtISR3, v11, v14, &v45);
  if ( v16 < 0 )
    goto LABEL_64;
  v19 = *((_DWORD *)v11 + 530);
  if ( v19 == -1073741267 )
  {
    if ( *((_DWORD *)v11 + 4) )
      goto LABEL_57;
    goto LABEL_65;
  }
  if ( v19 == -2147483631 )
    goto LABEL_45;
LABEL_8:
  if ( (v10[159].LowPart & 0x1000) == 0 )
  {
    v20 = *(_DWORD *)v10[164].QuadPart & 0x3FF;
    if ( *((_BYTE *)a1 + 156) )
      v21 = (*(_DWORD *)v10[164].QuadPart >> 10) & 0x3FF;
    else
      v21 = 0;
    v22 = !_BitScanForward((unsigned int *)&v23, v20);
    v24 = -1;
    v25 = 0;
    if ( !v22 )
      v24 = v23;
    v26 = v24;
    v27 = -1;
    v22 = !_BitScanForward((unsigned int *)&v28, v21);
    if ( !v22 )
      v27 = v28;
    v29 = v27;
    while ( v20 || v21 )
    {
      v36 = v29;
      if ( v26 < v29 )
        v36 = v26;
      *(_QWORD *)(*((_QWORD *)a1 + v9 + 429) + 304LL * v36 + 392) = *(_QWORD *)(v25
                                                                              * ((8 * *(_DWORD *)(v10[164].QuadPart + 8)
                                                                                + 231) & 0xFFFFFFF8)
                                                                              + v10[164].QuadPart
                                                                              + 24);
      if ( v26 >= v29 )
      {
        v39 = -1;
        v21 &= ~(1 << v29);
        v22 = !_BitScanForward((unsigned int *)&v40, v21);
        if ( !v22 )
          v39 = v40;
        v29 = v39;
      }
      else
      {
        v37 = -1;
        v20 &= ~(1 << v26);
        v22 = !_BitScanForward((unsigned int *)&v38, v20);
        if ( !v22 )
          v37 = v38;
        v26 = v37;
      }
      ++v25;
    }
    v11 = v56;
    v7 = v57;
  }
  if ( *((_BYTE *)a1 + 59) )
    v10[181] = KeQueryPerformanceCounter(0LL);
  v30 = *((_QWORD *)a1 + v9 + 429);
  v31 = *(_QWORD **)(v10[145].QuadPart + 40);
  v32 = *((unsigned int *)v11 + 10);
  if ( (_DWORD)v32 == -1 )
  {
    ++v31[346];
    ++*(_QWORD *)(v30 + 78896);
  }
  else if ( !(_DWORD)v32 || (_DWORD)v32 == *(_DWORD *)(v30 + 83096) )
  {
    ++v31[344];
    v31[348] += v32;
    ++*(_QWORD *)(v30 + 78880);
    *(_QWORD *)(v30 + 78912) += v32;
  }
  else if ( *(_DWORD *)(v30 + 83092) <= 1u )
  {
    ++v31[345];
    v31[349] += v32;
    ++*(_QWORD *)(v30 + 78888);
    *(_QWORD *)(v30 + 78920) += v32;
  }
  else
  {
    ++v31[347];
    v31[351] += v32;
    ++*(_QWORD *)(v30 + 78904);
    *(_QWORD *)(v30 + 78936) += v32;
  }
LABEL_24:
  *(_DWORD *)v7 = 11;
  while ( v13 < *((_DWORD *)v11 + 5) )
  {
    v33 = *(_QWORD *)(*((_QWORD *)v11 + 3) + 8LL * v13);
    v34 = (_DWORD *)(v33 + 20);
    if ( (*(_DWORD *)(v33 + 16) & 4) != 0 && (*v34 & 1) == 0 )
    {
      *(_DWORD *)v7 = 5;
      break;
    }
    if ( (*v34 & 4) != 0 )
      *(_DWORD *)v7 = 15;
    ++v13;
  }
  if ( *(_DWORD *)v7 == 11 )
  {
    v35 = (_QWORD *)*((_QWORD *)a1 + v9 + 429);
    *((_QWORD *)v11 + 267) = v35[5546];
    *((_QWORD *)v11 + 266) = v35[5544];
    *((_QWORD *)v11 + 269) = v35[5547];
    *((_QWORD *)v11 + 268) = v35[5545];
  }
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))VidSchiLogMmIoFlipMultiPlaneOverlay3)(
    a1,
    &v10[15],
    v11,
    *(unsigned int *)v7,
    v10[149].LowPart,
    (LARGE_INTEGER)v10[179].QuadPart);
}
