/*
 * XREFs of ?MapGpuVaForAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAVDXGALLOCATION@@@Z @ 0x140400328
 * Callers:
 *     ?BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAVDXGHWQUEUE@@UtagRECT@@2IPEBU3@PEAVCOREDEVICEACCESS@@@Z @ 0x1401EA67C (-BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAVDXGHWQUEUE@@UtagRECT@@2IPEBU3@PEAVCOREDEVICEACCESS@@.c)
 *     ?Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1402F4884 (-Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@PEAPEAVDXGHWQUEUE@@@.c)
 * Callees:
 *     ?VidMmWaitForFences@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI@Z @ 0x1400585C0 (-VidMmWaitForFences@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A2000 (memset.c)
 */

__int64 __fastcall MapGpuVaForAllocation(
        struct ADAPTER_RENDER *a1,
        struct DXGDEVICE *a2,
        unsigned int a3,
        struct DXGALLOCATION *a4)
{
  __int64 v4; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rcx
  int v11; // eax
  unsigned int v12; // ebx
  char v14; // [rsp+20h] [rbp-69h]
  __int64 v15; // [rsp+40h] [rbp-49h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v16; // [rsp+48h] [rbp-41h] BYREF
  _QWORD v17[14]; // [rsp+50h] [rbp-39h] BYREF

  v4 = *((_QWORD *)a1 + 95);
  v15 = 0LL;
  v16 = 0LL;
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, struct _VIDSCH_SYNC_OBJECT **))(*(_QWORD *)(v4 + 8) + 928LL))(
    *((_QWORD *)a2 + 99),
    a3,
    &v15,
    &v16);
  memset(v17, 0, 0x68uLL);
  v7 = *((_QWORD *)a1 + 2);
  v8 = *((_QWORD *)a4 + 3);
  v17[7] = 1LL;
  v17[2] = *(_QWORD *)(v7 + 2952);
  v9 = *(_QWORD *)(v7 + 2960);
  v10 = *((_QWORD *)a1 + 96);
  v17[3] = v9;
  v14 = 1;
  v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD *, char, int))(*(_QWORD *)(*((_QWORD *)a1 + 95)
                                                                                              + 8LL)
                                                                                  + 744LL))(
          v10,
          v15,
          v8,
          v17,
          v14,
          -2);
  v12 = v11;
  if ( v11 >= 0 )
  {
    if ( v11 == 259 )
    {
      v12 = 0;
      VIDMM_EXPORT::VidMmWaitForFences(*((VIDMM_EXPORT **)a1 + 95), *((struct VIDMM_GLOBAL **)a1 + 96), &v16, &v17[12]);
    }
  }
  else
  {
    WdLogSingleEntry1(3LL, v11);
    WdLogGlobalForLineNumber = 7411;
  }
  return v12;
}
