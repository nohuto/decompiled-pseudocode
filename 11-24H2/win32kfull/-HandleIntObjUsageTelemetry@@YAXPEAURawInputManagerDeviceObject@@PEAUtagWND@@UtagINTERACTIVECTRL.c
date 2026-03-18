/*
 * XREFs of ?HandleIntObjUsageTelemetry@@YAXPEAURawInputManagerDeviceObject@@PEAUtagWND@@UtagINTERACTIVECTRL_INFO@@IW4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1402135F4
 * Callers:
 *     ?GenerateMessages@InteractiveControlInput@@QEAAJPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@I@Z @ 0x14021352C (-GenerateMessages@InteractiveControlInput@@QEAAJPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@.c)
 * Callees:
 *     ?UpdateIntObjUsage@@YAXPEAUtagWND@@UtagINTERACTIVECTRL_INFO@@IW4tagINTERACTIVECTRL_PROMOTION_TYPE@@_K@Z @ 0x14026588C (-UpdateIntObjUsage@@YAXPEAUtagWND@@UtagINTERACTIVECTRL_INFO@@IW4tagINTERACTIVECTRL_PROMOTION_TYP.c)
 *     ?TraceLoggingIntObjUsageSummaryEvent@@YAXPEAUtagINTOBJTELEMETRYSTATE@@GGU_GUID@@1_K@Z @ 0x1402B6338 (-TraceLoggingIntObjUsageSummaryEvent@@YAXPEAUtagINTOBJTELEMETRYSTATE@@GGU_GUID@@1_K@Z.c)
 *     ?ProcessGetAppSessionGuid@@YA?AU_GUID@@PEAUtagPROCESSINFO@@@Z @ 0x1402ECBD0 (-ProcessGetAppSessionGuid@@YA-AU_GUID@@PEAUtagPROCESSINFO@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memcmp @ 0x140340360 (memcmp.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall HandleIntObjUsageTelemetry(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  unsigned int v5; // ebx
  __int128 v8; // rtt
  __int64 v9; // rsi
  __int64 v10; // rcx
  __m128i v11; // xmm8
  __m128i v12; // xmm7
  unsigned __int64 v13; // r12
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct tagPROCESSINFO *v16; // rdx
  __int64 v17; // rcx
  __int64 UserSessionState; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  struct _GUID v21; // xmm0
  __int64 v22; // rax
  unsigned __int64 v23; // rcx
  __int64 v24; // rax
  struct _GUID v25; // xmm0
  __int64 v26; // rax
  unsigned __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r15
  struct tagINTOBJTELEMETRYSTATE *v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // rcx
  unsigned __int64 v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  int v39; // ebx
  struct _GUID v40; // xmm6
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rdx
  unsigned __int16 v45; // r8
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // xmm1_8
  int v53; // eax
  _QWORD v56[4]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v57; // [rsp+60h] [rbp-A8h]
  __int64 v58; // [rsp+68h] [rbp-A0h]
  struct _GUID v59; // [rsp+78h] [rbp-90h] BYREF
  _BYTE Buf2[96]; // [rsp+88h] [rbp-80h] BYREF

  v5 = a4;
  v58 = a1;
  v8 = 1000LL * *(_QWORD *)&KeQueryPerformanceCounter(0LL);
  v9 = v8 / gliQpcFreq;
  v11 = 0LL;
  v12 = 0LL;
  v13 = v9 - *(_QWORD *)(W32GetUserSessionState(v10, v8 % gliQpcFreq) + 17272);
  if ( *(_QWORD *)(W32GetUserSessionState(v15, v14) + 18960) )
  {
    v17 = *(_QWORD *)(W32GetUserSessionState(v17, v16) + 18960);
    if ( *(_QWORD *)(v17 + 464) )
    {
      UserSessionState = W32GetUserSessionState(v17, v16);
      v11 = *(__m128i *)ProcessGetAppSessionGuid(
                          (struct _GUID *)&v56[1],
                          *(struct tagPROCESSINFO **)(*(_QWORD *)(UserSessionState + 18960) + 464LL));
    }
  }
  if ( a2 )
  {
    v16 = *(struct tagPROCESSINFO **)(*(_QWORD *)(a2 + 16) + 464LL);
    if ( v16 )
      v12 = *(__m128i *)ProcessGetAppSessionGuid((struct _GUID *)&v56[1], v16);
  }
  if ( v13 > 0xEA60 )
    goto LABEL_14;
  v19 = W32GetUserSessionState(v17, v16);
  v21 = *(struct _GUID *)(v19 + 17324);
  v22 = *(_QWORD *)(v19 + 17324);
  v59 = v21;
  v23 = v11.m128i_i64[0] - v22;
  if ( v11.m128i_i64[0] == v22 )
    v23 = _mm_srli_si128(v11, 8).m128i_u64[0] - *(_QWORD *)v59.Data4;
  if ( v23 )
    goto LABEL_14;
  v24 = W32GetUserSessionState(0LL, v20);
  v25 = *(struct _GUID *)(v24 + 17340);
  v26 = *(_QWORD *)(v24 + 17340);
  v59 = v25;
  v27 = v12.m128i_i64[0] - v26;
  if ( v12.m128i_i64[0] == v26 )
    v27 = _mm_srli_si128(v12, 8).m128i_u64[0] - *(_QWORD *)v59.Data4;
  if ( v27 )
  {
LABEL_14:
    memset_0(Buf2, 0, sizeof(Buf2));
    v30 = W32GetUserSessionState(v29, v28);
    v31 = (struct tagINTOBJTELEMETRYSTATE *)(v30 + 17176);
    if ( memcmp((const void *)(v30 + 17176), Buf2, 0x60uLL) )
    {
      v34 = *(_QWORD *)(W32GetUserSessionState(v33, v32) + 17288);
      if ( v34 < *(_QWORD *)(W32GetUserSessionState(v36, v35) + 17280) )
      {
        v39 = *(_DWORD *)(v30 + 17316);
        v37 = *(_QWORD *)(W32GetUserSessionState(v38, v37) + 17280);
        v38 = (v39 & 2) != 0 ? 0x30 : 0;
        *(_QWORD *)((char *)v31 + v38 + 40) += v9 - v37;
      }
      v40 = *(struct _GUID *)(W32GetUserSessionState(v38, v37) + 17340);
      v43 = W32GetUserSessionState(v42, v41);
      v59 = v40;
      v44 = *(_QWORD *)(v58 + 512);
      v45 = *(_WORD *)(v44 + 112);
      LOWORD(v44) = *(_WORD *)(v44 + 110);
      *(_OWORD *)&v56[1] = *(_OWORD *)(v43 + 17324);
      TraceLoggingIntObjUsageSummaryEvent(v31, v44, v45, (struct _GUID *)&v56[1], &v59, v13);
      memset_0(v31, 0, 0x60uLL);
      v5 = a4;
    }
    *(_QWORD *)(W32GetUserSessionState(v33, v32) + 17280) = v9;
    *(_QWORD *)(W32GetUserSessionState(v47, v46) + 17272) = v9;
    *(__m128i *)(W32GetUserSessionState(v49, v48) + 17324) = v11;
    *(__m128i *)(W32GetUserSessionState(v51, v50) + 17340) = v12;
  }
  v52 = *(_QWORD *)(a3 + 16);
  v53 = *(_DWORD *)(a3 + 24);
  *(_OWORD *)&v56[1] = *(_OWORD *)a3;
  v56[3] = v52;
  LODWORD(v57) = v53;
  return UpdateIntObjUsage(a2, &v56[1], v5, a5, v9);
}
