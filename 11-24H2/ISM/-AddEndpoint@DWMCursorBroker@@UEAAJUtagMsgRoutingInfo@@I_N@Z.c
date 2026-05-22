/*
 * XREFs of ?AddEndpoint@DWMCursorBroker@@UEAAJUtagMsgRoutingInfo@@I_N@Z @ 0x1801C7150
 * Callers:
 *     <none>
 * Callees:
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180015E94 (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091C24 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateMotionTransformAndVerifySend@DWMCursorBroker@@AEAAJPEAVDWMCursor@@I@Z @ 0x1801C7254 (-CreateMotionTransformAndVerifySend@DWMCursorBroker@@AEAAJPEAVDWMCursor@@I@Z.c)
 *     ?GetNextEndpointIndex@DWMCursorBroker@@AEAAJPEAI@Z @ 0x1801C78FC (-GetNextEndpointIndex@DWMCursorBroker@@AEAAJPEAI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall DWMCursorBroker::AddEndpoint(__int64 a1, __int64 a2, int a3, char a4)
{
  DWMCursorBroker *v8; // rsi
  int NextEndpointIndex; // eax
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // rbp
  __int64 ***v13; // rdi
  __int64 **i; // rbx
  unsigned int v16[18]; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  std::_Mutex_base::lock((std::_Mutex_base *)&DWMCursorBroker::s_lock);
  v16[0] = 0;
  v8 = (DWMCursorBroker *)(a1 - 8);
  NextEndpointIndex = DWMCursorBroker::GetNextEndpointIndex((DWMCursorBroker *)(a1 - 8), v16);
  if ( NextEndpointIndex < 0 )
  {
    v10 = 240LL;
LABEL_10:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v10,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
      (const char *)(unsigned int)NextEndpointIndex);
    goto LABEL_11;
  }
  v11 = v16[0];
  v12 = 3LL * v16[0];
  NextEndpointIndex = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 168) + 120LL))(
                        *(_QWORD *)(a1 + 168),
                        a2,
                        a1 + 8 * (v12 + 26));
  if ( NextEndpointIndex < 0 )
  {
    v10 = 244LL;
    goto LABEL_10;
  }
  *(_DWORD *)(a1 + 8 * v12 + 200) = a3;
  *(_BYTE *)(a1 + 24 * v11 + 216) = a4;
  v13 = *(__int64 ****)(a1 + 48);
  for ( i = *v13; i != (__int64 **)v13; i = (__int64 **)*i )
  {
    NextEndpointIndex = DWMCursorBroker::CreateMotionTransformAndVerifySend(v8, (struct DWMCursor *)i[3], v16[0]);
    if ( NextEndpointIndex < 0 )
    {
      v10 = 251LL;
      goto LABEL_10;
    }
  }
LABEL_11:
  _Mtx_unlock((_Mtx_t)&DWMCursorBroker::s_lock);
  return 0LL;
}
