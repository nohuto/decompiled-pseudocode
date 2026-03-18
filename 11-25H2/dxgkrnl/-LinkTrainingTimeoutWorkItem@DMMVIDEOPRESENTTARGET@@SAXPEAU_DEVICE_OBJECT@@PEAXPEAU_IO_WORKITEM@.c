/*
 * XREFs of ?LinkTrainingTimeoutWorkItem@DMMVIDEOPRESENTTARGET@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1402584B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14001EE2C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140023EE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140030728 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x1400354D0 (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x14003962C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x140043904 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     DpiPollSingleDisplayChild @ 0x140230F04 (DpiPollSingleDisplayChild.c)
 *     ?HandleLinkTrainingTimeout@VIDPN_MGR@@QEAAXIEPEAE0@Z @ 0x140256E2C (-HandleLinkTrainingTimeout@VIDPN_MGR@@QEAAXIEPEAE0@Z.c)
 *     ?StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXE@Z @ 0x14040C5C4 (-StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXE@Z.c)
 */

void __fastcall DMMVIDEOPRESENTTARGET::LinkTrainingTimeoutWorkItem(
        PVOID IoObject,
        volatile signed __int32 *Context,
        PIO_WORKITEM IoWorkItem)
{
  unsigned int v4; // r12d
  void *v5; // rsi
  signed __int32 v6; // eax
  __int64 v7; // r15
  __int64 v8; // rdx
  signed __int32 v9; // eax
  signed __int32 v10; // r14d
  DMMVIDEOPRESENTTARGETSET **v11; // rbx
  __int64 v12; // rax
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v13; // rbx
  struct _IO_WORKITEM *v14; // rcx
  unsigned __int8 v15[8]; // [rsp+38h] [rbp-89h] BYREF
  __int64 v16; // [rsp+40h] [rbp-81h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v17[2]; // [rsp+48h] [rbp-79h] BYREF
  _BYTE v18[144]; // [rsp+58h] [rbp-69h] BYREF

  v4 = 0;
  v15[0] = 0;
  v5 = 0LL;
  v6 = _InterlockedCompareExchange(Context + 38, 0, 5);
  if ( ((v6 - 2) & 0xFFFFFFFD) != 0 )
  {
    if ( v6 != -1 )
    {
      if ( v6 != 5 )
      {
        WdLogSingleEntry2(7LL, *(_QWORD *)Context, v6);
        WdLogGlobalForLineNumber = 238;
      }
      return;
    }
    goto LABEL_24;
  }
  v7 = *(_QWORD *)Context;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v18, *(struct DXGADAPTER *const *)Context, 0LL);
  v8 = (int)COREADAPTERACCESS::AcquireExclusive((__int64)v18, 2u, 0);
  v9 = _InterlockedCompareExchange(Context + 38, 0, 5);
  v10 = v9;
  if ( ((v9 - 2) & 0xFFFFFFFD) != 0 )
  {
    if ( v9 != -1 && v9 != 5 )
    {
      WdLogSingleEntry2(7LL, v7, v9);
      WdLogGlobalForLineNumber = 274;
    }
  }
  else if ( (int)v8 >= 0 )
  {
    v11 = *(DMMVIDEOPRESENTTARGETSET ***)(*(_QWORD *)(v7 + 3120) + 104LL);
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v16, (__int64)v11);
    v12 = *((_QWORD *)Context + 1);
    v15[1] = 0;
    v4 = *(_DWORD *)(v12 + 24);
    VIDPN_MGR::HandleLinkTrainingTimeout(v11, v4, v10 == 2, &v15[1], v15);
    if ( v15[1] )
    {
      if ( v10 != 2 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 304;
      }
      DMMVIDEOPRESENTTARGET::StartLinkTrainingTimer(*((DMMVIDEOPRESENTTARGET **)Context + 1), 0);
    }
    v5 = *(void **)(v7 + 216);
    if ( v5 )
    {
      ObfReferenceObject(*(PVOID *)(v7 + 216));
    }
    else
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 315;
      v15[0] = 0;
    }
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v16 + 40));
  }
  else
  {
    WdLogSingleEntry2(2LL, v7, v8);
    WdLogGlobalForLineNumber = 284;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v18);
  if ( v15[0] )
  {
    LOBYTE(v17[0]) = 0;
    CDisplayScenarioContextScope::ContextScopeConstructor(v17, 0LL, 0x40u, 0);
    v13 = v17[1];
    WdLogSingleEntry2(7LL, v4, *(_QWORD *)Context);
    WdLogGlobalForLineNumber = 335;
    DpiPollSingleDisplayChild((__int64)v5, v4, (__int64)v13);
    CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v17);
  }
  if ( v5 )
    ObfDereferenceObject(v5);
  if ( v10 == -1 )
  {
LABEL_24:
    if ( *(_QWORD *)Context )
      DXGADAPTER::ReleaseReferenceNoTracking(*(DXGADAPTER **)Context);
    v14 = (struct _IO_WORKITEM *)*((_QWORD *)Context + 18);
    if ( v14 )
      IoFreeWorkItem(v14);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete((void *)Context);
  }
}
