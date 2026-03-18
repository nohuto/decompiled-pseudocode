/*
 * XREFs of RIMIDEInjectDeviceInput @ 0x140121AFC
 * Callers:
 *     NtUserInjectDeviceInput @ 0x140139390 (NtUserInjectDeviceInput.c)
 *     ?RIMIDEInjectPartialFrameFromPointerInfo@@YAJPEAURawInputManagerDeviceObject@@PEAUtagPOINTER_TYPE_INFO@@III@Z @ 0x1401E3FA8 (-RIMIDEInjectPartialFrameFromPointerInfo@@YAJPEAURawInputManagerDeviceObject@@PEAUtagPOINTER_TYP.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x14009782C (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_dDD @ 0x14011657C (WPP_RECORDER_AND_TRACE_SF_dDD.c)
 *     ?InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z @ 0x1401221F4 (-InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x140122404 (rimProcessDeviceBufferAndStartRead.c)
 *     ?RIMIDEInjectionIndexToLinkIndex@@YAHPEAURIMDEV@@KPEAGH@Z @ 0x1401E4B60 (-RIMIDEInjectionIndexToLinkIndex@@YAHPEAURIMDEV@@KPEAGH@Z.c)
 *     RIMIDESetLinkCollectionUsageValues @ 0x1401E6D44 (RIMIDESetLinkCollectionUsageValues.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall RIMIDEInjectDeviceInput(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // r13
  unsigned int v5; // r15d
  __int64 v6; // rax
  char v8; // bp
  __int64 v9; // rdi
  int v11; // esi
  int v12; // r14d
  int v13; // eax
  __int64 v14; // r14
  int v15; // eax
  char v16; // r14
  __int64 v17; // r9
  char v18; // r14
  __int64 v19; // r9
  int v20; // ecx
  int v21; // r15d
  int v22; // r12d
  __int64 v23; // rcx
  char v24; // bl
  char v25; // r14
  __int64 v26; // rax
  __int64 v27; // rax
  char v28; // bl
  bool v29; // di
  __int64 UserSessionState; // rax
  int v31; // r8d
  int v32; // edx
  int v34; // [rsp+28h] [rbp-90h]
  int v35; // [rsp+60h] [rbp-58h]
  int v36; // [rsp+64h] [rbp-54h] BYREF
  int v37; // [rsp+68h] [rbp-50h]
  int *v38; // [rsp+70h] [rbp-48h]
  __int64 v39; // [rsp+78h] [rbp-40h]
  unsigned __int16 v40; // [rsp+C0h] [rbp+8h] BYREF
  unsigned int v41; // [rsp+D0h] [rbp+18h]

  v41 = a3;
  v4 = *(_QWORD *)(a1 + 392);
  v5 = 0;
  v40 = 0;
  v6 = *(_QWORD *)(a1 + 440);
  v36 = 0;
  v8 = 1;
  v38 = 0LL;
  v9 = (a1 + 72) & -(__int64)(a1 != 0);
  v35 = 1;
  v11 = 0;
  v12 = 0;
  v37 = 1;
  if ( !*(_DWORD *)(v6 + 16) )
    *(_DWORD *)(v6 + 16) = 1;
  v39 = v4 + 104;
  RIMLockExclusive(v4 + 104);
  InputTraceLogging::RIM::InjectInput(v9, a4, 1LL);
  if ( *(_BYTE *)(v4 + 81) )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v28 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v28 = 0;
    }
    v29 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v28 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v31) = v29;
      LOBYTE(v32) = v28;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v32,
        v31,
        *(_QWORD *)(UserSessionState + 19392),
        2,
        1,
        57,
        (__int64)&WPP_a924233173b9385c264afbc4034b0533_Traceguids);
    }
    v11 = -1073741637;
  }
  else
  {
    v13 = *(_DWORD *)(v9 + 184);
    if ( (v13 & 0x10) != 0 || (v13 & 8) != 0 )
      v38 = &v36;
    memset(*(void **)(*(_QWORD *)(v9 + 440) + 24LL), 0, *(unsigned __int16 *)(*(_QWORD *)(v9 + 440) + 44LL));
    while ( v5 < v41 )
    {
      v14 = a2 + 12LL * v5;
      if ( !(unsigned int)RIMIDEInjectionIndexToLinkIndex(
                            (struct RIMDEV *)v9,
                            *(unsigned __int16 *)(v14 + 8),
                            &v40,
                            v35) )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
        {
          v8 = 0;
        }
        v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v19 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 19392);
          WPP_RECORDER_AND_TRACE_SF_dDD(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v8,
            v18,
            v19,
            2u,
            v34,
            0x37u,
            (__int64)&WPP_a924233173b9385c264afbc4034b0533_Traceguids);
        }
        goto LABEL_26;
      }
      v15 = *(_DWORD *)(v9 + 184);
      if ( ((v15 & 0x10) != 0 || (v15 & 8) != 0) && *(_WORD *)v14 == 13 && *(_WORD *)(v14 + 2) == 84 )
        v37 = *(_DWORD *)(v14 + 4);
      v12 = RIMIDESetLinkCollectionUsageValues(v9, 0, (unsigned int)a2 + 12 * v5, v40, (__int64)v38);
      if ( !v12 )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
        {
          v8 = 0;
        }
        v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v17 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 19392);
          WPP_RECORDER_AND_TRACE_SF_dDD(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v8,
            v16,
            v17,
            2u,
            v34,
            0x36u,
            (__int64)&WPP_a924233173b9385c264afbc4034b0533_Traceguids);
        }
        goto LABEL_26;
      }
      if ( *(_WORD *)(a2 + 12LL * v5 + 8) )
        v35 = 0;
      ++v5;
    }
    if ( !v12 )
    {
LABEL_26:
      v11 = -1073741668;
      goto LABEL_56;
    }
    v20 = *(_DWORD *)(v9 + 184);
    if ( (v20 & 8) == 0 && (v20 & 0x10) == 0 )
      goto LABEL_47;
    v21 = v36;
    v22 = v37;
    if ( v37 == v36 )
    {
      LODWORD(v23) = v20 & 0xFFFFFFF7;
    }
    else
    {
      v23 = v20 | 8u;
      v11 = -1073741436;
      *(_DWORD *)(v9 + 184) = v23;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v24 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v24 = 0;
      }
      v25 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v26 = W32GetUserSessionState(v23);
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v24,
          v25,
          *(_QWORD *)(v26 + 19392),
          2u,
          1u,
          0x38u,
          (__int64)&WPP_a924233173b9385c264afbc4034b0533_Traceguids,
          v22,
          v21);
        LODWORD(v23) = *(_DWORD *)(v9 + 184);
      }
    }
    *(_DWORD *)(v9 + 184) = v23 & 0xFFFFFFEF;
    if ( v11 >= 0 )
    {
LABEL_47:
      RIMLockExclusive(v4 + 760);
      v27 = *(_QWORD *)(v9 + 440);
      *(_DWORD *)(v9 + 240) = 0;
      *(_QWORD *)(v9 + 248) = *(unsigned __int16 *)(v27 + 44);
      rimProcessDeviceBufferAndStartRead((struct RawInputManagerObject *)v4, (struct RIMDEV *)v9);
      RIMUnlockExclusive(v4 + 760);
    }
  }
LABEL_56:
  RIMUnlockExclusive(v39);
  return (unsigned int)v11;
}
