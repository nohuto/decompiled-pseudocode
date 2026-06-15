/*
 * XREFs of ?InitializeMatrixInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z @ 0x14000407C
 * Callers:
 *     ?InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ @ 0x140003174 (-InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 *     WPP_SF_D @ 0x1400659FC (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140065CDC (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CPipeInstance::InitializeMatrixInterface(
        CPipeInstance *this,
        struct CProcessNode *a2,
        struct IAudioProcessingObject *a3)
{
  int v5; // ebx
  __int64 v7; // rax
  __int64 v8; // rbx
  float v9; // xmm6_4
  int v10; // eax
  __int64 v11; // [rsp+20h] [rbp-50h] BYREF
  __int64 v12; // [rsp+28h] [rbp-48h] BYREF
  __int64 v13; // [rsp+30h] [rbp-40h] BYREF
  int v14; // [rsp+38h] [rbp-38h] BYREF
  GUID v15; // [rsp+3Ch] [rbp-34h]
  __int64 v16; // [rsp+4Ch] [rbp-24h]
  float v17; // [rsp+54h] [rbp-1Ch]

  v13 = 0LL;
  v14 = 0;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0.0;
  v11 = 0LL;
  v12 = 0LL;
  if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 *))a3->lpVtbl->QueryInterface)(
         a3,
         &GUID_bb8b2f5d_2af0_473f_bd94_f55a77587d3f,
         &v13) < 0 )
  {
    v5 = 0;
    goto LABEL_3;
  }
  v7 = *(_QWORD *)a2;
  if ( !*((_DWORD *)a2 + 6) )
  {
    v5 = (*(__int64 (__fastcall **)(struct CProcessNode *, __int64 *))(v7 + 8))(a2, &v11);
    if ( v5 < 0 )
      goto LABEL_12;
    v10 = (*(__int64 (__fastcall **)(struct CProcessNode *, __int64 *))(*(_QWORD *)a2 + 16LL))(a2, &v12);
LABEL_17:
    v5 = v10;
    if ( v10 >= 0 )
    {
      v14 = 32;
      v15 = GUID_541987ee_0e02_411e_9a85_1fc6156e7f4b;
      LODWORD(v16) = *(unsigned __int16 *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 40LL))(v11) + 2);
      HIDWORD(v16) = *(unsigned __int16 *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 40LL))(v12) + 2);
      v8 = v11;
      v9 = (float)*(int *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 40LL))(v11) + 8);
      v17 = v9 / (float)*(unsigned __int16 *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 40LL))(v8) + 12);
      v5 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, int *))a3->lpVtbl->Initialize)(
             a3,
             32LL,
             &v14);
      if ( v5 >= 0 )
        goto LABEL_3;
    }
    goto LABEL_12;
  }
  v5 = (*(__int64 (__fastcall **)(struct CProcessNode *, __int64 *))(v7 + 16))(a2, &v11);
  if ( v5 >= 0 )
  {
    v10 = (*(__int64 (__fastcall **)(struct CProcessNode *, __int64 *))(*(_QWORD *)a2 + 8LL))(a2, &v12);
    goto LABEL_17;
  }
LABEL_12:
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 45LL, &WPP_ece7ed133f5c32246e9f73031954d020_Traceguids);
  }
  AudDGTraceLoggingErrorHelper("CPipeInstance::InitializeMatrixInterface", 0xE29u, v5);
LABEL_3:
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  return (unsigned int)v5;
}
