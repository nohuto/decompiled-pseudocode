/*
 * XREFs of ACPIBuildProcessRunMethodPhaseRunMethod @ 0x14001DC20
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x140010850 (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x140010934 (AMLIAsyncEvalObject.c)
 *     AMLIReferenceHandleEx @ 0x140015FC0 (AMLIReferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x14001D630 (AMLIGetNamedChild.c)
 *     ACPIBuildCompleteMustSucceed @ 0x14001E380 (ACPIBuildCompleteMustSucceed.c)
 *     WPP_RECORDER_SF_Lqss @ 0x14001E4C0 (WPP_RECORDER_SF_Lqss.c)
 *     WPP_RECORDER_SF_qss @ 0x14003E0C4 (WPP_RECORDER_SF_qss.c)
 *     memset @ 0x140070F40 (memset.c)
 */

__int64 __fastcall ACPIBuildProcessRunMethodPhaseRunMethod(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rbx
  unsigned int v3; // esi
  __int64 *v4; // r15
  int v5; // r12d
  __int64 v6; // r13
  const char *v8; // rcx
  int v9; // edx
  int v10; // edx
  const char *v11; // r8
  const char *v12; // rax
  __int64 v13; // rcx
  int v15; // edx
  const char *v16; // r8
  __int64 v17; // rax
  int v18; // r14d
  int v19; // r14d
  _OWORD *v20; // rsi
  __int64 v21; // rcx
  __int64 *v22; // rcx
  signed __int64 v23; // rax
  signed __int64 v24; // rtt
  signed __int64 v25; // rax
  signed __int64 v26; // rtt
  char v27; // [rsp+30h] [rbp-41h]
  char v28; // [rsp+38h] [rbp-39h]
  _OWORD v29[5]; // [rsp+58h] [rbp-19h] BYREF

  v1 = *(_DWORD *)(a1 + 84);
  v2 = *(_QWORD *)(a1 + 40);
  v3 = 0;
  v4 = 0LL;
  v5 = 0;
  v6 = 0LL;
  v8 = byte_140075488;
  if ( (v1 & 0x40) != 0 && *(_DWORD *)(a1 + 128) )
  {
    v15 = 0;
    v16 = byte_140075488;
    if ( v2 )
    {
      v17 = *(_QWORD *)(v2 + 8);
      v15 = v2;
      if ( (v17 & 0x200000000000LL) != 0 )
      {
        v16 = *(const char **)(v2 + 608);
        if ( (v17 & 0x400000000000LL) != 0 )
          v8 = *(const char **)(v2 + 616);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v27 = v15;
      LOBYTE(v15) = 4;
      WPP_RECORDER_SF_qss(
        WPP_GLOBAL_Control->DeviceExtension,
        v15,
        6,
        66,
        (__int64)&WPP_a066bce47e7f3a3d1099cda73e5d7dd3_Traceguids,
        v27,
        (__int64)v16,
        (__int64)v8);
    }
    *(_DWORD *)(a1 + 32) = 0;
    goto LABEL_3;
  }
  v9 = *(_DWORD *)(a1 + 80);
  *(_DWORD *)(a1 + 32) = 9;
  v4 = AMLIGetNamedChild(*(__int64 **)(v2 + 760), v9);
  if ( !v4 )
    goto LABEL_3;
  v18 = *(_DWORD *)(a1 + 84);
  if ( (v18 & 2) != 0 )
  {
    _m_prefetchw((const void *)(v2 + 8));
    v25 = *(_QWORD *)(v2 + 8);
    do
    {
      v26 = v25;
      v25 = _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 8), v25 | 0x20000000000000LL, v25);
    }
    while ( v26 != v25 );
    if ( (v25 & 0x20000000000000LL) != 0 )
      goto LABEL_3;
    goto LABEL_38;
  }
  if ( (v18 & 8) != 0 )
  {
    if ( !*(_DWORD *)(v2 + 552) )
      goto LABEL_3;
    v20 = v29;
    *(_QWORD *)&v29[2] = 0LL;
    v29[0] = 0LL;
    v5 = 1;
    v29[1] = 1uLL;
    WORD1(v29[0]) = 1;
    goto LABEL_26;
  }
  if ( (v18 & 0x30) == 0 )
  {
    if ( (v18 & 0x80u) != 0 )
    {
      _m_prefetchw((const void *)(v2 + 1120));
      v23 = *(_QWORD *)(v2 + 1120);
      do
      {
        v24 = v23;
        v23 = _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 1120), v23 | 0x4000, v23);
      }
      while ( v24 != v23 );
      if ( (v23 & 0x4000) != 0 )
        goto LABEL_3;
      v6 = a1 + 88;
      *(_OWORD *)(a1 + 88) = 0LL;
      *(_OWORD *)(a1 + 104) = 0LL;
      *(_QWORD *)(a1 + 120) = 0LL;
      *(_DWORD *)(a1 + 32) = 8;
    }
LABEL_38:
    v20 = 0LL;
    goto LABEL_26;
  }
  v19 = v18 | 0x40;
  *(_DWORD *)(a1 + 84) = v19;
  memset(v29, 0, sizeof(v29));
  v20 = v29;
  *(_QWORD *)&v29[1] = 2LL;
  WORD1(v29[0]) = 1;
  WORD5(v29[2]) = 1;
  v5 = 2;
  *((_QWORD *)&v29[3] + 1) = ((unsigned __int64)(unsigned __int8)v19 >> 4) & 1;
LABEL_26:
  v21 = *(_QWORD *)(a1 + 56);
  if ( v21 )
    AMLIDereferenceHandleEx(v21);
  *(_QWORD *)(a1 + 56) = v4;
  AMLIReferenceHandleEx((__int64)v4);
  v3 = AMLIAsyncEvalObject(v22, v6, v5, (__int64)v20, ACPIBuildCompleteMustSucceed, a1);
LABEL_3:
  v10 = 0;
  v11 = byte_140075488;
  v12 = byte_140075488;
  if ( v2 )
  {
    v13 = *(_QWORD *)(v2 + 8);
    v10 = v2;
    if ( (v13 & 0x200000000000LL) != 0 )
    {
      v11 = *(const char **)(v2 + 608);
      if ( (v13 & 0x400000000000LL) != 0 )
        v12 = *(const char **)(v2 + 616);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v28 = v10;
    LOBYTE(v10) = 4;
    WPP_RECORDER_SF_Lqss(
      WPP_GLOBAL_Control->DeviceExtension,
      v10,
      6,
      67,
      (__int64)&WPP_a066bce47e7f3a3d1099cda73e5d7dd3_Traceguids,
      v3,
      v28,
      (__int64)v11,
      (__int64)v12);
  }
  if ( v3 == 259 )
    v3 = 0;
  else
    ACPIBuildCompleteMustSucceed((ULONG_PTR)v4);
  if ( v4 )
    AMLIDereferenceHandleEx((__int64)v4);
  return v3;
}
