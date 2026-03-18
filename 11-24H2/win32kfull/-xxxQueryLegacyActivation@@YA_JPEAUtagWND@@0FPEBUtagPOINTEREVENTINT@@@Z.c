/*
 * XREFs of ?xxxQueryLegacyActivation@@YA_JPEAUtagWND@@0FPEBUtagPOINTEREVENTINT@@@Z @ 0x140205AC4
 * Callers:
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x14021985C (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 * Callees:
 *     xxxSendMessage @ 0x140042030 (xxxSendMessage.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GetDPITransformationMonitor @ 0x14006E2CC (GetDPITransformationMonitor.c)
 */

__int64 __fastcall xxxQueryLegacyActivation(
        struct tagWND *a1,
        struct tagWND *a2,
        __int64 a3,
        const struct tagPOINTEREVENTINT *a4)
{
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct tagTHREADINFO *v10; // rax
  __int64 v11; // rbx
  __int64 v12; // xmm0_8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  struct tagTHREADINFO *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  struct tagTHREADINFO *v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  struct tagTHREADINFO *v27; // rax
  __int64 v29; // [rsp+20h] [rbp-48h] BYREF
  __int64 DPITransformationMonitor; // [rsp+28h] [rbp-40h] BYREF
  __int64 v31; // [rsp+30h] [rbp-38h]
  int v32; // [rsp+70h] [rbp+8h]

  v29 = 0LL;
  v6 = 3LL;
  if ( !*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 472LL) + 112LL) )
  {
    v7 = *((_QWORD *)PtiCurrent((__int64)a1, (__int64)a2) + 101);
    v10 = PtiCurrent(v9, v8);
    v11 = *((_QWORD *)a4 + 5);
    v12 = *(_QWORD *)((char *)v10 + 796);
    LODWORD(v10) = *((_DWORD *)v10 + 201);
    v31 = v12;
    v32 = (int)v10;
    *((_QWORD *)PtiCurrent(v14, v13) + 101) = v11;
    v15 = *((_QWORD *)a1 + 5);
    v16 = *((_QWORD *)a4 + 5);
    v29 = v16;
    v17 = *(unsigned int *)(v15 + 288);
    LOBYTE(v17) = v17 & 0xF;
    if ( (_BYTE)v17 != 2 )
    {
      DPITransformationMonitor = GetDPITransformationMonitor(v16, (__int64)a1);
      PhysicalToLogicalDPIPoint(&v29, &v29, 0LL, &DPITransformationMonitor);
    }
    v18 = PtiCurrent(v16, v17);
    v19 = (unsigned int)v29;
    *((_DWORD *)v18 + 199) = v29;
    v21 = PtiCurrent(v19, v20);
    *((_DWORD *)v21 + 200) = HIDWORD(v29);
    v22 = xxxSendMessage(a1, 0x21u);
    *((_QWORD *)PtiCurrent(v24, v23) + 101) = v7;
    v27 = PtiCurrent(v26, v25);
    *(_QWORD *)((char *)v27 + 796) = v31;
    *((_DWORD *)v27 + 201) = v32;
    if ( v22 != 3 && v22 != 4 )
      return 1LL;
  }
  return v6;
}
