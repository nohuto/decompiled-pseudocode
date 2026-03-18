/*
 * XREFs of ?DwmHolographicDisplayAdd_@CompositorTracing@@QEAAXIAEBU_GUID@@@Z @ 0x1802CEDC8
 * Callers:
 *     ?AddHolographicDisplay@CHolographicManager@@QEAA_NPEAVCHolographicDisplay@@@Z @ 0x1802CE89C (-AddHolographicDisplay@CHolographicManager@@QEAA_NPEAVCHolographicDisplay@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18012ADD4 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1801B92C0 (_tlgKeywordOn.c)
 *     ?Instance@CompositorTracing@@KAPEAV1@XZ @ 0x18021279C (-Instance@CompositorTracing@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

void __fastcall CompositorTracing::DwmHolographicDisplayAdd_(CompositorTracing *this, int a2, const struct _GUID *a3)
{
  _DWORD *v5; // rcx
  __int64 v6; // rcx
  ULONG v7; // r8d
  int v8; // [rsp+30h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+40h] [rbp-58h] BYREF
  int *v10; // [rsp+60h] [rbp-38h]
  ULONG v11; // [rsp+68h] [rbp-30h]
  int v12; // [rsp+6Ch] [rbp-2Ch]
  const struct _GUID *v13; // [rsp+70h] [rbp-28h]
  int v14; // [rsp+78h] [rbp-20h]
  int v15; // [rsp+7Ch] [rbp-1Ch]

  v5 = (_DWORD *)*((_QWORD *)CompositorTracing::Instance() + 1);
  if ( *v5 > 4u && tlgKeywordOn((__int64)v5, 0x400000000000LL) )
  {
    v15 = 0;
    v12 = 0;
    v10 = &v8;
    v11 = v7;
    v8 = a2;
    v13 = a3;
    v14 = 16;
    tlgWriteTransfer_EventWriteTransfer(v6, byte_1803D007F, 0LL, 0LL, v7, &v9);
  }
}
