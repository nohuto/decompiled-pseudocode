/*
 * XREFs of DxgkConfirmToken @ 0x1401B85A0
 * Callers:
 *     ?ConfirmIndependentFlipEntry@CFlipExBuffer@@UEAAJIII@Z @ 0x14009D6E0 (-ConfirmIndependentFlipEntry@CFlipExBuffer@@UEAAJIII@Z.c)
 * Callees:
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x14000C948 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14000F940 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x140023980 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall DxgkConfirmToken(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v7; // r14d
  __int64 v9; // rdi
  struct _KTHREAD **Current; // rax
  struct DXGADAPTER *v11; // rbx
  unsigned __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+48h] [rbp-B8h]
  char v18; // [rsp+50h] [rbp-B0h]
  struct DXGADAPTER *v19; // [rsp+58h] [rbp-A8h] BYREF
  DXGADAPTER *v20[2]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v21[144]; // [rsp+70h] [rbp-90h] BYREF

  v16 = -1;
  v17 = 0LL;
  v7 = a3;
  v9 = (unsigned int)a1;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v18 = 1;
    v16 = 2095;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2095);
  }
  else
  {
    v18 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v16, 2095);
  v19 = 0LL;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v20, v9, Current, &v19, 1);
  v11 = v19;
  if ( v19 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v21, v19, 0LL);
    v13 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v21, 0LL);
    if ( v13 >= 0 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v11 + 391) + 736LL)
                                                                                            + 8LL)
                                                                                + 392LL))(
        *(_QWORD *)(*((_QWORD *)v11 + 391) + 744LL),
        a2,
        v7,
        a4,
        a5,
        a6);
    }
    else
    {
      WdLogSingleEntry2(3LL, v11, v13);
      WdLogGlobalForLineNumber = 2494;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v21);
  }
  else
  {
    WdLogSingleEntry2(3LL, v9, -1073741811LL);
    WdLogGlobalForLineNumber = 2482;
  }
  DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v20, v12);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
  if ( v18 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerExit, v15, v16);
  }
}
