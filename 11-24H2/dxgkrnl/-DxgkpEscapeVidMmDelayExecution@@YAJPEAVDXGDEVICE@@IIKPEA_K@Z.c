/*
 * XREFs of ?DxgkpEscapeVidMmDelayExecution@@YAJPEAVDXGDEVICE@@IIKPEA_K@Z @ 0x1401D0EB8
 * Callers:
 *     DxgkEscape @ 0x140419AB0 (DxgkEscape.c)
 * Callees:
 *     ??1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ @ 0x14000E9C4 (--1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ?Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z @ 0x14002F238 (-Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkpEscapeVidMmDelayExecution(
        struct DXGDEVICE *a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        unsigned __int64 *a5)
{
  unsigned int v5; // ebx
  __int64 v6; // rsi
  __int64 v11; // r9
  struct _KTHREAD **Current; // rax
  struct DXGPAGINGQUEUE *v13; // [rsp+40h] [rbp-28h] BYREF
  __int64 v14; // [rsp+70h] [rbp+8h] BYREF

  v5 = 0;
  v6 = a3;
  if ( !a1 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 1344;
    return 3221225485LL;
  }
  if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL) + 296LL) < a2 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 1350;
    return 3221225485LL;
  }
  v14 = 0LL;
  v11 = 0LL;
  if ( !a3 )
    goto LABEL_12;
  v13 = 0LL;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  DXGPAGINGQUEUEBYHANDLE::Open((DXGPAGINGQUEUEBYHANDLE *)&v14, v6, Current, &v13, 1);
  if ( !v13 )
  {
    WdLogSingleEntry1(3LL, v6);
    WdLogGlobalForLineNumber = 1364;
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)&v14);
    return 3221225485LL;
  }
  if ( a1 == *((struct DXGDEVICE **)v13 + 2) )
  {
    v11 = *((_QWORD *)v13 + 4);
LABEL_12:
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, int, unsigned __int64 *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 760LL)
                                                                                                 + 8LL)
                                                                                     + 1168LL))(
      *(_QWORD *)(*((_QWORD *)a1 + 2) + 768LL),
      *((_QWORD *)a1 + 99),
      a2,
      v11,
      a4,
      a5);
    goto LABEL_13;
  }
  WdLogSingleEntry2(3LL, a1, v13);
  WdLogGlobalForLineNumber = 1373;
  v5 = -1073741811;
LABEL_13:
  DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)&v14);
  return v5;
}
