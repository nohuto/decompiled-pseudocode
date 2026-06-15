/*
 * XREFs of ??1CPdcTimerActivation@@QEAA@XZ @ 0x18000F8DC
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VCPdcTimerActivation@@@std@@EEAAXXZ @ 0x180072ED0 (-_Destroy@-$_Ref_count_obj2@VCPdcTimerActivation@@@std@@EEAAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@34@Z @ 0x180001504 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x1800108DC (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     __std_find_trivial_8 @ 0x1800A3840 (__std_find_trivial_8.c)
 *     memmove_0 @ 0x180167F48 (memmove_0.c)
 */

void __fastcall CPdcTimerActivation::~CPdcTimerActivation(CPdcTimerActivation *this)
{
  _QWORD *v2; // rbp
  __int64 v3; // rdi
  __int64 trivial_8; // rax
  __int64 v5; // r8
  int v6; // ebx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // [rsp+70h] [rbp+8h] BYREF
  int v11; // [rsp+78h] [rbp+10h] BYREF
  __int64 v12; // [rsp+80h] [rbp+18h] BYREF
  __int64 v13; // [rsp+88h] [rbp+20h] BYREF

  v2 = (_QWORD *)*((_QWORD *)this + 1);
  v3 = *((_QWORD *)this + 2);
  std::_Mutex_base::lock((std::_Mutex_base *)(v2 + 4));
  trivial_8 = _std_find_trivial_8(v2[1], v2[2], v3);
  v5 = v2[2];
  if ( trivial_8 != v5 )
  {
    memmove_0((void *)trivial_8, (const void *)(trivial_8 + 8), v5 - (trivial_8 + 8));
    v2[2] -= 8LL;
  }
  _Mtx_unlock((_Mtx_t)(v2 + 4));
  if ( *(_QWORD *)this )
  {
    v6 = Pdcv2ActivationClientDeactivate();
    *(_QWORD *)this = 0LL;
    v7 = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
    if ( *(_DWORD *)v7 > 4u
      && (*(_BYTE *)(v7 + 16) & 0x40) != 0
      && (*(_QWORD *)(v7 + 24) & 0x40LL) == *(_QWORD *)(v7 + 24) )
    {
      v10 = v6;
      v9 = *((_QWORD *)this + 2);
      v12 = *(_QWORD *)(v9 + 544);
      v11 = *(_DWORD *)(v9 + 40);
      v13 = v9;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v7,
        (int)&unk_1801AD194,
        v7,
        v8,
        (__int64)&v13,
        (__int64)&v11,
        (__int64)&v12,
        (__int64)&v10);
    }
  }
}
