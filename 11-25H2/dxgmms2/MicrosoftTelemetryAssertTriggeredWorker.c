/*
 * XREFs of MicrosoftTelemetryAssertTriggeredWorker @ 0x140055AA0
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140055A70 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 * Callees:
 *     _tlgCreate1Sz_char @ 0x140002AE4 (_tlgCreate1Sz_char.c)
 *     _tlgKeywordOn @ 0x1400404B8 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140040BE0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     TakeTelemetryAssertsLock @ 0x140055FA0 (TakeTelemetryAssertsLock.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 */

void __fastcall MicrosoftTelemetryAssertTriggeredWorker(unsigned __int64 a1)
{
  __int64 *v2; // rax
  __int64 *v3; // rdi
  unsigned __int64 *Pool2; // rax
  __int64 v5; // rbx
  ULONG TimeIncrement; // eax
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int16 v11; // cx
  unsigned int v12; // r15d
  unsigned int v13; // r14d
  unsigned __int64 v14; // rcx
  unsigned int v15; // ebx
  int v16; // r12d
  int v17; // r13d
  struct _FAST_MUTEX *v18; // rcx
  int v19; // edi
  KIRQL CurrentIrql; // al
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // edi
  __int64 v24; // r8
  char v25; // al
  const GUID *v26; // r8
  ULONG v27; // r10d
  __int64 *v28; // rax
  int v29; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v30; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned int v31; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v32; // [rsp+64h] [rbp-A4h] BYREF
  int v33; // [rsp+68h] [rbp-A0h] BYREF
  int v34; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v35; // [rsp+70h] [rbp-98h] BYREF
  int v36; // [rsp+74h] [rbp-94h] BYREF
  unsigned int v37; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v38; // [rsp+7Ch] [rbp-8Ch] BYREF
  unsigned int v39; // [rsp+80h] [rbp-88h] BYREF
  int v40; // [rsp+84h] [rbp-84h] BYREF
  int v41; // [rsp+88h] [rbp-80h] BYREF
  int v42; // [rsp+8Ch] [rbp-7Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+98h] [rbp-70h] BYREF
  int *v44; // [rsp+B8h] [rbp-50h]
  __int64 v45; // [rsp+C0h] [rbp-48h]
  int *v46; // [rsp+C8h] [rbp-40h]
  __int64 v47; // [rsp+D0h] [rbp-38h]
  int *v48; // [rsp+D8h] [rbp-30h]
  __int64 v49; // [rsp+E0h] [rbp-28h]
  int *v50; // [rsp+E8h] [rbp-20h]
  __int64 v51; // [rsp+F0h] [rbp-18h]
  _BYTE v52[16]; // [rsp+F8h] [rbp-10h] BYREF
  int *v53; // [rsp+108h] [rbp+0h]
  __int64 v54; // [rsp+110h] [rbp+8h]
  int *v55; // [rsp+118h] [rbp+10h]
  __int64 v56; // [rsp+120h] [rbp+18h]
  int *v57; // [rsp+128h] [rbp+20h]
  __int64 v58; // [rsp+130h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+138h] [rbp+30h] BYREF
  int *v60; // [rsp+158h] [rbp+50h]
  __int64 v61; // [rsp+160h] [rbp+58h]
  int *v62; // [rsp+168h] [rbp+60h]
  __int64 v63; // [rsp+170h] [rbp+68h]
  int *v64; // [rsp+178h] [rbp+70h]
  __int64 v65; // [rsp+180h] [rbp+78h]
  int *v66; // [rsp+188h] [rbp+80h]
  __int64 v67; // [rsp+190h] [rbp+88h]
  _BYTE v68[16]; // [rsp+198h] [rbp+90h] BYREF
  int *v69; // [rsp+1A8h] [rbp+A0h]
  __int64 v70; // [rsp+1B0h] [rbp+A8h]
  int *v71; // [rsp+1B8h] [rbp+B0h]
  __int64 v72; // [rsp+1C0h] [rbp+B8h]
  int *v73; // [rsp+1C8h] [rbp+C0h]
  int v74; // [rsp+1D0h] [rbp+C8h]
  int v75; // [rsp+1D4h] [rbp+CCh]
  _BYTE v76[16]; // [rsp+1D8h] [rbp+D0h] BYREF

  if ( _InterlockedExchangeAdd(&g_AssertsOperational, 0)
    && !(unsigned int)((__int64 (*)(void))TakeTelemetryAssertsLock)() )
  {
    v2 = &g_MicrosoftTelemetryAssertsTriggeredList;
    while ( 1 )
    {
      v2 = (__int64 *)*v2;
      if ( &g_MicrosoftTelemetryAssertsTriggeredList == v2 )
        break;
      v3 = v2 - 4;
      if ( *(v2 - 4) == a1 )
        goto LABEL_11;
    }
    Pool2 = (unsigned __int64 *)ExAllocatePool2(66LL, 48LL, 1953657665LL);
    v3 = (__int64 *)Pool2;
    if ( !Pool2 )
      goto LABEL_36;
    v5 = MEMORY[0xFFFFF78000000320];
    *Pool2 = a1;
    TimeIncrement = KeQueryTimeIncrement();
    v3[2] = 0LL;
    *((_DWORD *)v3 + 6) = 0;
    v3[1] = ((__int64)((unsigned __int128)(v5 * TimeIncrement * (__int128)0x346DC5D63886594BLL) >> 64) >> 11)
          + ((unsigned __int64)((unsigned __int128)(v5 * TimeIncrement * (__int128)0x346DC5D63886594BLL) >> 64) >> 63)
          - 60001;
    v7 = v3 + 4;
    v8 = g_MicrosoftTelemetryAssertsTriggeredList;
    if ( *(__int64 **)(g_MicrosoftTelemetryAssertsTriggeredList + 8) != &g_MicrosoftTelemetryAssertsTriggeredList )
      __fastfail(3u);
    *v7 = g_MicrosoftTelemetryAssertsTriggeredList;
    v3[5] = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
    *(_QWORD *)(v8 + 8) = v7;
    g_MicrosoftTelemetryAssertsTriggeredList = (__int64)(v3 + 4);
LABEL_11:
    ++*((_DWORD *)v3 + 4);
    ++*((_DWORD *)v3 + 5);
    v9 = MEMORY[0xFFFFF78000000320];
    v10 = v9 * KeQueryTimeIncrement() / 10000;
    if ( (unsigned __int64)(v10 - v3[1]) <= 0xEA60 )
    {
LABEL_36:
      ExReleaseFastMutex(g_AssertFastMutex);
      return;
    }
    v11 = *(_WORD *)(0x140000018LL + MEMORY[0x14000003C]);
    if ( v11 == 267 || v11 == 523 )
    {
      v12 = *(_DWORD *)(0x140000008LL + MEMORY[0x14000003C]);
      v13 = *(_DWORD *)(0x140000050LL + MEMORY[0x14000003C]);
    }
    else
    {
      v12 = 0;
      v13 = 0;
    }
    if ( a1 < 0x140000000LL || (v14 = 0x140000000LL + v13, v14 <= 0x140000000LL) || a1 > v14 )
      v15 = 0;
    else
      v15 = a1 - 0x40000000;
    v16 = *((_DWORD *)v3 + 4);
    v17 = *((_DWORD *)v3 + 5);
    v18 = g_AssertFastMutex;
    v3[1] = v10;
    v19 = *((_DWORD *)v3 + 6);
    ExReleaseFastMutex(v18);
    if ( (unsigned int)dword_14008E040 > 5 && tlgKeywordOn((__int64)&dword_14008E040, 0x400000000000LL) )
    {
      v29 = 10;
      v60 = &v29;
      v61 = 4LL;
      v62 = (int *)&v30;
      v30 = v15;
      v64 = (int *)&v31;
      v66 = (int *)&v32;
      v63 = 4LL;
      v31 = v12;
      v65 = 4LL;
      v32 = v13;
      v67 = 4LL;
      tlgCreate1Sz_char((__int64)v68, "<unknown>");
      v33 = v16;
      v69 = &v33;
      v71 = &v34;
      v70 = 4LL;
      v34 = v17;
      v72 = 4LL;
      CurrentIrql = KeGetCurrentIrql();
      v75 = 0;
      v35 = CurrentIrql;
      v73 = &v35;
      v74 = 4;
      tlgCreate1Sz_char((__int64)v76, "<unknown>");
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_14008E040, byte_140075CAA, 0LL, 0LL, 0xBu, &v59);
    }
    if ( dword_14008E078 && !v19 && !KeGetCurrentIrql() )
    {
      v23 = DbgkWerCaptureLiveKernelDump(L"TELASSERT", 465LL, v15, 0LL, v12, v13, 0LL, 0LL, 0);
      if ( (unsigned int)dword_14008E040 > 5 )
      {
        v25 = tlgKeywordOn((__int64)&dword_14008E040, 0x400000000000LL);
        v24 = 0LL;
        if ( v25 )
        {
          v45 = 4LL;
          v44 = &v36;
          v36 = 10;
          v46 = (int *)&v37;
          v37 = v15;
          v48 = (int *)&v38;
          v47 = 4LL;
          v50 = (int *)&v39;
          v38 = v12;
          v49 = 4LL;
          v39 = v13;
          v51 = 4LL;
          tlgCreate1Sz_char((__int64)v52, "<unknown>");
          v40 = v16;
          v53 = &v40;
          v54 = 4LL;
          v55 = &v41;
          v41 = v17;
          v57 = &v42;
          v56 = 4LL;
          v42 = v23;
          v58 = 4LL;
          tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_14008E040, byte_140075DBD, v26, 0LL, v27, &v43);
        }
      }
      if ( !v23 && !(unsigned int)TakeTelemetryAssertsLock(v22, v21, v24) )
      {
        v28 = &g_MicrosoftTelemetryAssertsTriggeredList;
        while ( 1 )
        {
          v28 = (__int64 *)*v28;
          if ( &g_MicrosoftTelemetryAssertsTriggeredList == v28 )
            goto LABEL_36;
          if ( *(v28 - 4) == a1 )
          {
            ++*((_DWORD *)v28 - 2);
            goto LABEL_36;
          }
        }
      }
    }
  }
}
