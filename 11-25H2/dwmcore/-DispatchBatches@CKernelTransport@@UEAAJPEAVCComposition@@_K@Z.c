/*
 * XREFs of ?DispatchBatches@CKernelTransport@@UEAAJPEAVCComposition@@_K@Z @ 0x1800AE180
 * Callers:
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x1800ACB80 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     McTemplateU0t_EventWriteTransfer @ 0x18006DBC8 (McTemplateU0t_EventWriteTransfer.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800B1240 (McGenEventWrite_EventWriteTransfer.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@?$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ @ 0x18014BED0 (-Release@-$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ.c)
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 *     ?CloseChannel@CComposition@@IEAAJI@Z @ 0x1801989A4 (-CloseChannel@CComposition@@IEAAJI@Z.c)
 *     ?FailFastOnMalformedPacket@CComposition@@KAXW4MILCMD_CRASHID@@PEBX@Z @ 0x1801991F8 (-FailFastOnMalformedPacket@CComposition@@KAXW4MILCMD_CRASHID@@PEBX@Z.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x180199530 (-IsOOM@@YA_NJ@Z.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x1801EB924 (McTemplateU0x_EventWriteTransfer.c)
 *     ?OpenChannel@CComposition@@IEAAJIK_KPEAX@Z @ 0x1801F3BB0 (-OpenChannel@CComposition@@IEAAJIK_KPEAX@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18020B324 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?MilUnexpectedError@@YAXJPEBG@Z @ 0x18025475C (-MilUnexpectedError@@YAXJPEBG@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180255010 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?GetStackCaptureRootFailureAddress@@YAPEAXJ@Z @ 0x18025A06C (-GetStackCaptureRootFailureAddress@@YAPEAXJ@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CKernelTransport::DispatchBatches(CKernelTransport *this, struct CComposition *a2, __int64 a3)
{
  __int64 v3; // r9
  int v4; // esi
  struct CComposition *v5; // r14
  int ConnectionBatch; // eax
  __int64 v7; // r8
  __int64 v8; // rdi
  int v10; // ebx
  int v11; // r12d
  __int64 v12; // rax
  __int64 v13; // rbx
  unsigned int v14; // eax
  unsigned int *v15; // rdi
  __int64 v16; // r13
  __int64 v17; // rcx
  unsigned int *v18; // rsi
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rcx
  unsigned int v21; // r14d
  unsigned int *v22; // rdi
  unsigned int v23; // r15d
  __int64 v24; // rdx
  __int64 (__fastcall *v25)(struct CComposition *, __int64, unsigned int *, _QWORD); // rax
  int v26; // eax
  int v27; // edi
  int v28; // eax
  int v29; // eax
  unsigned int v30; // ebx
  const unsigned __int16 *v31; // rdx
  int v32; // ecx
  void *StackCaptureRootFailureAddress; // rax
  int v34; // eax
  int v35; // [rsp+20h] [rbp-99h]
  __int64 v36; // [rsp+40h] [rbp-79h] BYREF
  int v37; // [rsp+48h] [rbp-71h]
  struct CComposition *v38; // [rsp+50h] [rbp-69h] BYREF
  int v39; // [rsp+58h] [rbp-61h] BYREF
  unsigned int v40; // [rsp+60h] [rbp-59h] BYREF
  __int64 v41; // [rsp+68h] [rbp-51h]
  __int64 v42; // [rsp+70h] [rbp-49h] BYREF
  unsigned int *v43; // [rsp+78h] [rbp-41h]
  char v44[16]; // [rsp+80h] [rbp-39h] BYREF
  int *v45; // [rsp+90h] [rbp-29h]
  __int64 v46; // [rsp+98h] [rbp-21h]
  unsigned int *v47; // [rsp+A0h] [rbp-19h]
  __int64 v48; // [rsp+A8h] [rbp-11h]
  char v49[16]; // [rsp+B0h] [rbp-9h] BYREF
  struct CComposition **v50; // [rsp+C0h] [rbp+7h]
  __int64 v51; // [rsp+C8h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+5Fh]

  v3 = *((_QWORD *)this + 3);
  v4 = 0;
  v42 = a3;
  v38 = a2;
  v5 = a2;
  v36 = 0LL;
  v37 = 0;
  if ( v3 )
  {
    v29 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v3 + 24LL))(v3, a3, &v36);
    v30 = v29;
    if ( v29 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE5,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\kerneltransport.cpp",
        (const char *)(unsigned int)v29,
        v35);
      return v30;
    }
  }
  else
  {
    ConnectionBatch = NtDCompositionGetConnectionBatch(*((_QWORD *)this + 1), &v42, &v36);
    if ( ConnectionBatch < 0 )
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)0xEC,
               (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\kerneltransport.cpp",
               (const char *)(unsigned int)ConnectionBatch,
               v35);
  }
  v8 = v36;
  while ( v8 )
  {
    v10 = 0;
    v11 = 0;
    switch ( *(_DWORD *)v8 )
    {
      case 7:
        v12 = *(unsigned int *)(v8 + 16);
        if ( (unsigned int)v12 >= 0x10000
          || (unsigned int)v12 >= *((_DWORD *)v5 + 216)
          || (v13 = *(_QWORD *)(*((_QWORD *)v5 + 105) + 8 * v12)) == 0 )
        {
          v27 = -2147024809;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x6AFu, 0LL);
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x1D8u, 0LL);
          v10 = -2147024809;
LABEL_42:
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0x1BAu, 0LL);
LABEL_43:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xF2,
            (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\kerneltransport.cpp",
            (const char *)(unsigned int)v10,
            v35);
          return (unsigned int)v10;
        }
        if ( _InterlockedAdd((volatile signed __int32 *)(v13 + 8), 1u) <= 0 )
          wil::details::in1diag3::Log_Hr(
            retaddr,
            (void *)0x18,
            (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
            (const char *)0x8007029CLL,
            v35);
        v14 = *(_DWORD *)(v8 + 20);
        v15 = *(unsigned int **)(v8 + 24);
        v16 = v14;
        ++*(_DWORD *)(v13 + 120);
        v17 = *(_QWORD *)(v13 + 48);
        v43 = v15;
        v41 = v17;
        CComposition::s_pLastCommandBuffer_ForFailfast = v15;
        LODWORD(CComposition::s_cbLastCommandBuffer_ForFailfast) = v14;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
          McTemplateU0x_EventWriteTransfer(v17, &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSQUEUEEVENT, v14);
        v18 = v15;
        while ( 1 )
        {
          v19 = (unsigned __int64)v15 + v16 - (_QWORD)v18;
          if ( !v19 )
          {
            v27 = 0;
            *(_BYTE *)(*((_QWORD *)v5 + 103) + 440LL) |= 2u;
            goto LABEL_35;
          }
          if ( v19 < 8 || (v20 = *v18, (unsigned int)v20 < 8) || (v20 & 3) != 0 || v20 > v19 )
          {
            v27 = -2147467259;
            goto LABEL_48;
          }
          v21 = v18[1];
          v22 = v18 + 1;
          v18 = (unsigned int *)((char *)v18 + v20);
          v23 = v20 - 4;
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x400000) != 0 )
          {
            v39 = *(_DWORD *)(v13 + 28);
            v40 = v21;
            v45 = &v39;
            v46 = 4LL;
            v47 = &v40;
            v48 = 4LL;
            McGenEventWrite_EventWriteTransfer(
              &Microsoft_Windows_Dwm_Core_Provider_Context,
              &EVTDESC_COMMAND_PROCESSED_ONBEHALF,
              v7,
              3LL,
              v44);
          }
          v24 = v21;
          v5 = v38;
          v25 = *(__int64 (__fastcall **)(struct CComposition *, __int64, unsigned int *, _QWORD))(*(_QWORD *)v38 + 88LL);
          v35 = v13;
          v26 = (char *)v25 == (char *)CGlobalComposition::ProcessMessage
              ? CGlobalComposition::ProcessMessage(v38, v24, v22, v23)
              : v25(v38, v24, v22, v23);
          v27 = v26;
          if ( v26 < 0 )
            break;
          v15 = v43;
          ++v11;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0x223u, 0LL);
LABEL_48:
        if ( !IsOOM(v27) )
        {
          MilUnexpectedError(v32, v31);
          StackCaptureRootFailureAddress = GetStackCaptureRootFailureAddress(v27);
          CComposition::FailFastOnMalformedPacket((unsigned int)v27, StackCaptureRootFailureAddress);
        }
        if ( v27 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0x1DCu, 0LL);
LABEL_35:
        CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>::Release((CDrawListCache *)v13);
        v10 = v27;
        if ( v27 < 0 )
          goto LABEL_42;
        v4 = v37;
        break;
      case 5:
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20000) != 0 )
          McTemplateU0t_EventWriteTransfer(
            (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
            (__int64)&EVTDESC_CHANNEL_OPENED_FOR_PROCESS,
            *(unsigned int *)(v8 + 20));
        v34 = CComposition::OpenChannel(
                v5,
                *(_DWORD *)(v8 + 16),
                *(_DWORD *)(v8 + 20),
                *(_QWORD *)(v8 + 24),
                *(void **)(v8 + 32));
        v10 = v34;
        if ( v34 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v34, 0x1B6u, 0LL);
          goto LABEL_43;
        }
        break;
      case 6:
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20000) != 0 )
          McTemplateU0t_EventWriteTransfer(
            (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
            (__int64)&EVTDESC_CHANNEL_CLOSED_FOR_PROCESS,
            *(unsigned int *)(v8 + 20));
        v28 = CComposition::CloseChannel(v5, *(_DWORD *)(v8 + 16));
        v10 = v28;
        if ( v28 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, 0x1BFu, 0LL);
          goto LABEL_43;
        }
        break;
      default:
        goto LABEL_38;
    }
    v8 = v36;
LABEL_38:
    if ( v10 < 0 )
      goto LABEL_43;
    v8 = *(_QWORD *)(v8 + 8);
    v4 += v11;
    v36 = v8;
    v37 = v4;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
  {
    LODWORD(v38) = v4;
    v50 = &v38;
    v51 = 4LL;
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_NUMBER_OF_COMMANDS_PROCESSED,
      v7,
      2LL,
      v49);
  }
  return 0LL;
}
