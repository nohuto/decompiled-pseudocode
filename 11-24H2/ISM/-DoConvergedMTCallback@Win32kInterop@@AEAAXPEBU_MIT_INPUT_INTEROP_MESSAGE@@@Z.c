/*
 * XREFs of ?DoConvergedMTCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x18002FC28
 * Callers:
 *     ?ProcessInteropCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x18002FB40 (-ProcessInteropCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z.c)
 * Callees:
 *     ?OnNewFrame@PointerInputMediator@@SAXPEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x180015CC0 (-OnNewFrame@PointerInputMediator@@SAXPEBUtagMANIPULATION_INPUT_INFO@@@Z.c)
 *     ?InitializeInputInfoWithPointerInfo@@YAXPEBUtagPOINTER_INFO_UNION@@_NPEAUPointerInputInfo@@@Z @ 0x18002FEA8 (-InitializeInputInfoWithPointerInfo@@YAXPEBUtagPOINTER_INFO_UNION@@_NPEAUPointerInputInfo@@@Z.c)
 *     ?ReceivePointerFrame@ISM@InputTraceLogging@@SAXPEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x180030084 (-ReceivePointerFrame@ISM@InputTraceLogging@@SAXPEBUtagMANIPULATION_INPUT_INFO@@@Z.c)
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180030A30 (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ?GetSizeForPointerCount@PointerInputInfo@@SAKK@Z @ 0x180030BEC (-GetSizeForPointerCount@PointerInputInfo@@SAKK@Z.c)
 *     ?DeliverToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@KV?$function@$$A6AXPEAVInputContext@@@Z@std@@V?$function@$$A6AXPEAUIInputTarget@@@Z@4@@Z @ 0x180030C10 (-DeliverToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@KV-$function@$$A6AXPEAVInputCo.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     memset_0 @ 0x18009D598 (memset_0.c)
 *     ??_U@YAPEAX_K@Z @ 0x18009E86C (--_U@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Win32kInterop::DoConvergedMTCallback(Win32kInterop *this, const struct _MIT_INPUT_INTEROP_MESSAGE *a2)
{
  unsigned int SizeForPointerCount; // eax
  const char *v4; // r9
  unsigned int v5; // esi
  unsigned int v6; // edi
  _DWORD *v7; // rbx
  _DWORD *v8; // rcx
  struct tagMANIPULATION_INPUT_INFO *v9; // rax
  _DWORD *v10; // r10
  _OWORD *v11; // r8
  _OWORD *v12; // rcx
  _DWORD *v13; // [rsp+38h] [rbp-61h] BYREF
  unsigned int v14; // [rsp+40h] [rbp-59h]
  __int128 v15; // [rsp+48h] [rbp-51h] BYREF
  __int128 v16; // [rsp+58h] [rbp-41h]
  __int128 *v17; // [rsp+80h] [rbp-19h]
  __int64 (__fastcall **v18)(); // [rsp+88h] [rbp-11h] BYREF
  __int128 v19; // [rsp+90h] [rbp-9h]
  __int128 v20; // [rsp+A0h] [rbp+7h]
  __int64 (__fastcall ***v21)(); // [rsp+C0h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]
  const struct _MIT_INPUT_INTEROP_MESSAGE *v23; // [rsp+108h] [rbp+6Fh] BYREF
  struct tagMANIPULATION_INPUT_INFO *v24; // [rsp+110h] [rbp+77h] BYREF
  _DWORD *v25; // [rsp+118h] [rbp+7Fh] BYREF

  v23 = a2;
  v24 = (const struct _MIT_INPUT_INTEROP_MESSAGE *)((char *)a2 + 8);
  InputTraceLogging::ISM::ReceivePointerFrame((const struct _MIT_INPUT_INTEROP_MESSAGE *)((char *)a2 + 8));
  PointerInputMediator::OnNewFrame(v24);
  SizeForPointerCount = PointerInputInfo::GetSizeForPointerCount(*((_DWORD *)v24 + 37));
  v5 = SizeForPointerCount;
  v6 = 0;
  v13 = 0LL;
  if ( SizeForPointerCount < 0x20uLL )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1FB,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinput\\inc\\rawinput.h",
      v4);
  v7 = operator new[](SizeForPointerCount);
  v13 = v7;
  v14 = v5;
  memset_0(v7, 0, v5);
  v7[6] = v5;
  v25 = v7;
  InitializeInputInfoWithPointerInfo(
    (struct tagMANIPULATION_INPUT_INFO *)((char *)v24 + 160),
    *((_BYTE *)v24 + 152) & 1,
    (struct PointerInputInfo *)v7);
  v25[79] = *((_DWORD *)v24 + 37);
  v25[11] = *((_DWORD *)v24 + 36);
  v8 = v25;
  v9 = v24;
  *(_OWORD *)(v25 + 22) = *(_OWORD *)v24;
  *(_OWORD *)(v8 + 26) = *((_OWORD *)v9 + 1);
  *(_OWORD *)(v8 + 30) = *((_OWORD *)v9 + 2);
  *(_OWORD *)(v8 + 34) = *((_OWORD *)v9 + 3);
  *(_OWORD *)(v8 + 38) = *((_OWORD *)v9 + 4);
  *(_OWORD *)(v8 + 42) = *((_OWORD *)v9 + 5);
  *(_OWORD *)(v8 + 46) = *((_OWORD *)v9 + 6);
  *(_OWORD *)(v8 + 50) = *((_OWORD *)v9 + 7);
  *(_OWORD *)(v8 + 54) = *((_OWORD *)v9 + 8);
  *((_BYTE *)v25 + 313) = (*((_DWORD *)v24 + 38) & 2u) >> 1;
  v10 = v25;
  if ( v25[79] )
  {
    do
    {
      v11 = &v10[36 * v6 + 80];
      v12 = (_OWORD *)((char *)v24 + 240 * v6 + 160);
      *v11 = *v12;
      v11[1] = v12[1];
      v11[2] = v12[2];
      v11[3] = v12[3];
      v11[4] = v12[4];
      v11[5] = v12[5];
      v11[6] = v12[6];
      v11[7] = v12[7];
      v11[8] = v12[8];
      ++v6;
      v10 = v25;
    }
    while ( v6 < v25[79] );
  }
  *(_QWORD *)&v15 = &v24;
  *((_QWORD *)&v15 + 1) = &v23;
  *(_QWORD *)&v16 = this;
  *((_QWORD *)&v16 + 1) = &v25;
  v18 = off_1801DF238;
  v19 = v15;
  v20 = v16;
  v21 = &v18;
  *(_QWORD *)&v15 = off_1801DF6C0;
  v17 = &v15;
  Win32kInterop::DeliverToContextualProcessing(this, v10, *((unsigned int *)v24 + 39), &v15, &v18);
  VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(&v13);
}
