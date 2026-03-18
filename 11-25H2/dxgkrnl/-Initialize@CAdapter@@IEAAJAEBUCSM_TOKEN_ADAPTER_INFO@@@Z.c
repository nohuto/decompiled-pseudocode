/*
 * XREFs of ?Initialize@CAdapter@@IEAAJAEBUCSM_TOKEN_ADAPTER_INFO@@@Z @ 0x14005E930
 * Callers:
 *     ?Create@CAdapter@@SAJAEBUCSM_TOKEN_ADAPTER_INFO@@IPEAPEAV1@@Z @ 0x14005CB94 (-Create@CAdapter@@SAJAEBUCSM_TOKEN_ADAPTER_INFO@@IPEAPEAV1@@Z.c)
 * Callees:
 *     ?UpdateRenderFence@CAdapter@@QEAAJPEAX@Z @ 0x14002E8E8 (-UpdateRenderFence@CAdapter@@QEAAJPEAX@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     DxgkOpenAdapterFromLuidInternal @ 0x14018A320 (DxgkOpenAdapterFromLuidInternal.c)
 *     DxgkGetPresentHistoryReadyEvent @ 0x140400520 (DxgkGetPresentHistoryReadyEvent.c)
 */

__int64 __fastcall CAdapter::Initialize(CAdapter *this, const struct CSM_TOKEN_ADAPTER_INFO *a2)
{
  __int64 v4; // rax
  int PresentHistoryReadyEvent; // ebx
  void *v6; // rdx
  __int64 v8; // [rsp+48h] [rbp-20h] BYREF
  int v9; // [rsp+50h] [rbp-18h]

  v9 = 0;
  *((_QWORD *)this + 4) = PsGetCurrentProcess();
  v4 = *(_QWORD *)a2;
  *((_QWORD *)this + 3) = *(_QWORD *)a2;
  v8 = v4;
  PresentHistoryReadyEvent = DxgkOpenAdapterFromLuidInternal(&v8);
  if ( PresentHistoryReadyEvent >= 0 )
  {
    *((_DWORD *)this + 10) = v9;
    v6 = (void *)*((_QWORD *)a2 + 1);
    if ( !v6 || (PresentHistoryReadyEvent = CAdapter::UpdateRenderFence(this, v6), PresentHistoryReadyEvent >= 0) )
    {
      PresentHistoryReadyEvent = DxgkGetPresentHistoryReadyEvent(*((_DWORD *)this + 10));
      if ( PresentHistoryReadyEvent >= 0 )
        return (unsigned int)ObOpenObjectByPointer(
                               0LL,
                               0x80u,
                               0LL,
                               0x100000u,
                               (POBJECT_TYPE)ExEventObjectType,
                               1,
                               (PHANDLE)this + 6);
    }
  }
  return (unsigned int)PresentHistoryReadyEvent;
}
