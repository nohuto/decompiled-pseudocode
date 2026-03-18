/*
 * XREFs of ??0VPTPContact@@QEAA@UVPTP_ID@@PEAU_LIST_ENTRY@@@Z @ 0x1402192F4
 * Callers:
 *     ?FindTouchpadAndContact@VirtualTouchpadProcessor@@AEAA_NQEAUtagHID_POINTER_DEVICE_INFO@@PEBUCPointerInfoNode@@PEAPEAVVPTPTouchpad@@PEAPEAVVPTPContact@@@Z @ 0x14021997C (-FindTouchpadAndContact@VirtualTouchpadProcessor@@AEAA_NQEAUtagHID_POINTER_DEVICE_INFO@@PEBUCPoi.c)
 * Callees:
 *     SendMessageTo @ 0x140048F20 (SendMessageTo.c)
 */

__int64 __fastcall VPTPContact::VPTPContact(__int64 a1, int a2, _QWORD *a3)
{
  __int64 *v4; // rax
  __int64 v5; // rcx
  int v7; // [rsp+30h] [rbp+8h] BYREF
  int v8; // [rsp+34h] [rbp+Ch]

  *(_WORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 20) = 0LL;
  *(_DWORD *)(a1 + 28) = a2;
  *(_QWORD *)(a1 + 32) = a3;
  if ( (_QWORD *)*a3 == a3 )
  {
    v7 = a2;
    v8 = 1;
    SendMessageTo(18LL, &v7, 8LL);
  }
  v4 = *(__int64 **)(a1 + 32);
  v5 = *v4;
  if ( *(__int64 **)(*v4 + 8) != v4 )
    __fastfail(3u);
  *(_QWORD *)(a1 + 8) = v4;
  *(_QWORD *)a1 = v5;
  *(_QWORD *)(v5 + 8) = a1;
  *v4 = a1;
  return a1;
}
