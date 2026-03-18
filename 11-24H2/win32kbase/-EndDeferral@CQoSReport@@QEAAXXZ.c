/*
 * XREFs of ?EndDeferral@CQoSReport@@QEAAXXZ @ 0x1401A50A0
 * Callers:
 *     ?EndDeferReport@QualityOfService@@YAXXZ @ 0x1401A5060 (-EndDeferReport@QualityOfService@@YAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x14000274C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     _tlgKeywordOn @ 0x140096080 (_tlgKeywordOn.c)
 *     ?GetPsProcessWindowState@tagPROCESSINFO@@QEBA?AW4_PS_PROCESS_WINDOW_STATE@@W4GetWindowStatePolicy@1@@Z @ 0x1401A521C (-GetPsProcessWindowState@tagPROCESSINFO@@QEBA-AW4_PS_PROCESS_WINDOW_STATE@@W4GetWindowStatePolic.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

void __fastcall CQoSReport::EndDeferral(CQoSReport *this)
{
  _QWORD **v2; // rsi
  unsigned int v3; // ebx
  _QWORD *v4; // rax
  _QWORD *v5; // rcx
  _QWORD *v6; // r14
  unsigned int PsProcessWindowState; // ebp
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rax
  _BYTE v12[4]; // [rsp+30h] [rbp-448h] BYREF
  int v13; // [rsp+34h] [rbp-444h] BYREF
  __int128 v14; // [rsp+38h] [rbp-440h]
  _OWORD v15[64]; // [rsp+50h] [rbp-428h] BYREF

  if ( !*(_BYTE *)this )
    KeBugCheckEx(0x164u, 0x12uLL, 0LL, 0LL, 0LL);
  v2 = (_QWORD **)((char *)this + 8);
LABEL_4:
  v3 = 0;
  while ( 1 )
  {
    v4 = *v2;
    if ( *v2 == v2 )
      break;
    if ( (_QWORD **)v4[1] != v2 || (v5 = (_QWORD *)*v4, *(_QWORD **)(*v4 + 8LL) != v4) )
      __fastfail(3u);
    *v2 = v5;
    v6 = v4 - 141;
    v5[1] = v2;
    v4[1] = v4;
    *v4 = v4;
    PsProcessWindowState = tagPROCESSINFO::GetPsProcessWindowState(v4 - 141, 0LL);
    if ( (unsigned int)dword_14029AF48 > 5 && tlgKeywordOn((__int64)&dword_14029AF48, 4LL) )
    {
      v10 = *((unsigned int *)v6 + 14);
      v12[0] = PsProcessWindowState;
      v13 = v10;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
        v10,
        (__int64)&unk_140274986,
        v8,
        v9,
        (__int64)&v13,
        (__int64)v12);
    }
    *(_QWORD *)&v14 = *v6;
    v11 = v3++;
    *((_QWORD *)&v14 + 1) = PsProcessWindowState;
    v15[v11] = v14;
    if ( v3 == 64 )
    {
      PsSetProcessesWindowState(64LL, v15);
      goto LABEL_4;
    }
  }
  if ( v3 )
    PsSetProcessesWindowState(v3, v15);
  *(_BYTE *)this = 0;
}
