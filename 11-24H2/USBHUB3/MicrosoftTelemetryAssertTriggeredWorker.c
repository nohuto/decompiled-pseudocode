/*
 * XREFs of MicrosoftTelemetryAssertTriggeredWorker @ 0x140042F94
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredArgsMsgKM @ 0x140042F60 (MicrosoftTelemetryAssertTriggeredArgsMsgKM.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140001008 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140046500 (__security_check_cookie.c)
 */

void __fastcall MicrosoftTelemetryAssertTriggeredWorker(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        const char *a6)
{
  unsigned int v6; // r15d
  KIRQL v8; // al
  __int64 *v9; // rcx
  KIRQL v10; // si
  __int64 *v11; // rdi
  unsigned __int64 *Pool2; // rax
  __int64 v13; // rbx
  ULONG TimeIncrement; // eax
  unsigned __int64 v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int16 v20; // cx
  unsigned int v21; // r13d
  unsigned int v22; // r14d
  unsigned __int64 v23; // rcx
  int v24; // eax
  unsigned int v25; // eax
  int v26; // edi
  __int64 v27; // rbx
  const char *v29; // rcx
  __int64 v30; // rax
  KIRQL CurrentIrql; // al
  const char *v32; // rcx
  __int64 v33; // rax
  int v34; // eax
  unsigned int v35; // edi
  const char *v37; // rax
  KIRQL v38; // al
  __int64 *v39; // rcx
  int v40; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v41; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v42; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v43; // [rsp+5Ch] [rbp-A4h] BYREF
  int v44; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v45; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v46; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v47; // [rsp+6Ch] [rbp-94h] BYREF
  int v48; // [rsp+70h] [rbp-90h] BYREF
  int v49; // [rsp+74h] [rbp-8Ch]
  unsigned int v50; // [rsp+78h] [rbp-88h]
  unsigned int v51; // [rsp+7Ch] [rbp-84h]
  struct _EVENT_DATA_DESCRIPTOR v52[2]; // [rsp+80h] [rbp-80h] BYREF
  int *v53; // [rsp+A0h] [rbp-60h]
  __int64 v54; // [rsp+A8h] [rbp-58h]
  int *v55; // [rsp+B0h] [rbp-50h]
  __int64 v56; // [rsp+B8h] [rbp-48h]
  int *v57; // [rsp+C0h] [rbp-40h]
  __int64 v58; // [rsp+C8h] [rbp-38h]
  int *v59; // [rsp+D0h] [rbp-30h]
  __int64 v60; // [rsp+D8h] [rbp-28h]
  const char *v61; // [rsp+E0h] [rbp-20h]
  int v62; // [rsp+E8h] [rbp-18h]
  int v63; // [rsp+ECh] [rbp-14h]
  int *v64; // [rsp+F0h] [rbp-10h]
  __int64 v65; // [rsp+F8h] [rbp-8h]
  int *v66; // [rsp+100h] [rbp+0h]
  __int64 v67; // [rsp+108h] [rbp+8h]
  int *v68; // [rsp+110h] [rbp+10h]
  __int64 v69; // [rsp+118h] [rbp+18h]
  const char *v70; // [rsp+120h] [rbp+20h]
  __int64 v71; // [rsp+128h] [rbp+28h]
  int *v72; // [rsp+130h] [rbp+30h]
  __int64 v73; // [rsp+138h] [rbp+38h]
  int *v74; // [rsp+140h] [rbp+40h]
  __int64 v75; // [rsp+148h] [rbp+48h]
  const char *v76; // [rsp+150h] [rbp+50h]
  int v77; // [rsp+158h] [rbp+58h]
  int v78; // [rsp+15Ch] [rbp+5Ch]

  v6 = 0;
  v51 = a4;
  if ( !_InterlockedExchangeAdd(&g_AssertsOperational, 0) )
    return;
  v8 = KeAcquireSpinLockRaiseToDpc(&g_AssertSpinLock);
  v9 = (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList;
  v10 = v8;
  if ( &g_MicrosoftTelemetryAssertsTriggeredList == (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList )
  {
LABEL_5:
    Pool2 = (unsigned __int64 *)ExAllocatePool2(66LL, 48LL, 1953657665LL);
    v11 = (__int64 *)Pool2;
    if ( !Pool2 )
    {
LABEL_55:
      KeReleaseSpinLock(&g_AssertSpinLock, v10);
      return;
    }
    v13 = MEMORY[0xFFFFF78000000320];
    *Pool2 = a1;
    TimeIncrement = KeQueryTimeIncrement();
    v11[2] = 0LL;
    *((_DWORD *)v11 + 6) = 0;
    v15 = (__int64)((unsigned __int128)(v13 * TimeIncrement * (__int128)0x346DC5D63886594BLL) >> 64) >> 11;
    v11[1] = v15 - 60001 + (v15 >> 63);
    v16 = v11 + 4;
    v17 = g_MicrosoftTelemetryAssertsTriggeredList;
    if ( *(__int64 **)(g_MicrosoftTelemetryAssertsTriggeredList + 8) != &g_MicrosoftTelemetryAssertsTriggeredList )
      __fastfail(3u);
    *v16 = g_MicrosoftTelemetryAssertsTriggeredList;
    v11[5] = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
    *(_QWORD *)(v17 + 8) = v16;
    g_MicrosoftTelemetryAssertsTriggeredList = (__int64)(v11 + 4);
  }
  else
  {
    while ( 1 )
    {
      v11 = v9 - 4;
      if ( *(v9 - 4) == a1 )
        break;
      v9 = (__int64 *)*v9;
      if ( &g_MicrosoftTelemetryAssertsTriggeredList == v9 )
        goto LABEL_5;
    }
  }
  ++*((_DWORD *)v11 + 4);
  ++*((_DWORD *)v11 + 5);
  v18 = MEMORY[0xFFFFF78000000320];
  v19 = v18 * KeQueryTimeIncrement() / 10000;
  if ( (unsigned __int64)(v19 - v11[1]) <= 0xEA60 )
    goto LABEL_55;
  v20 = *(_WORD *)(0x140000018LL + MEMORY[0x14000003C]);
  if ( v20 == 267 || v20 == 523 )
  {
    v21 = *(_DWORD *)(0x140000008LL + MEMORY[0x14000003C]);
    v22 = *(_DWORD *)(0x140000050LL + MEMORY[0x14000003C]);
  }
  else
  {
    v21 = 0;
    v22 = 0;
  }
  if ( a1 >= 0x140000000LL )
  {
    v23 = 0x140000000LL + v22;
    if ( v23 > 0x140000000LL && a1 <= v23 )
      v6 = a1 - 0x40000000;
  }
  v24 = *((_DWORD *)v11 + 4);
  v11[1] = v19;
  v49 = v24;
  v25 = *((_DWORD *)v11 + 5);
  v26 = *((_DWORD *)v11 + 6);
  v50 = v25;
  KeReleaseSpinLock(&g_AssertSpinLock, v10);
  v27 = -1LL;
  if ( (unsigned int)dword_140076040 > 5
    && (qword_140076050 & 0x400000000000LL) != 0
    && (qword_140076058 & 0x400000000000LL) == qword_140076058 )
  {
    v29 = (const char *)g_ModuleName;
    v53 = &v40;
    v55 = (int *)&v41;
    v57 = (int *)&v42;
    v59 = (int *)&v43;
    v40 = 10;
    v54 = 4LL;
    v41 = v6;
    v56 = 4LL;
    v42 = v21;
    v58 = 4LL;
    v43 = v22;
    v60 = 4LL;
    if ( !g_ModuleName )
      v29 = "<unknown>";
    v30 = -1LL;
    do
      ++v30;
    while ( v29[v30] );
    v61 = v29;
    v62 = v30 + 1;
    v44 = v49;
    v64 = &v44;
    v45 = v50;
    v66 = (int *)&v45;
    v63 = 0;
    v65 = 4LL;
    v67 = 4LL;
    CurrentIrql = KeGetCurrentIrql();
    v32 = a6;
    v46 = CurrentIrql;
    v68 = (int *)&v46;
    v70 = "usbhub3.sys";
    v47 = v51;
    v72 = (int *)&v47;
    v48 = a5;
    v74 = &v48;
    if ( !a6 )
      v32 = "<unknown>";
    v69 = 4LL;
    v71 = 12LL;
    v73 = 4LL;
    v75 = 4LL;
    if ( v32 )
    {
      v33 = -1LL;
      do
        ++v33;
      while ( v32[v33] );
      v34 = v33 + 1;
    }
    else
    {
      v32 = File;
      v34 = 1;
    }
    v77 = v34;
    v76 = v32;
    v78 = 0;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140076040, byte_140068215, 0LL, 0LL, 0xEu, v52);
  }
  if ( dword_140076078 && !v26 && !KeGetCurrentIrql() )
  {
    v35 = DbgkWerCaptureLiveKernelDump(L"TELASSERT", 465LL, v6, g_ModuleName, v21, v22, 0LL, 0LL, 0);
    if ( (unsigned int)dword_140076040 > 5
      && (qword_140076050 & 0x400000000000LL) != 0
      && (qword_140076058 & 0x400000000000LL) == qword_140076058 )
    {
      v48 = 10;
      v53 = &v48;
      v55 = (int *)&v47;
      v57 = (int *)&v46;
      v59 = (int *)&v45;
      v37 = (const char *)g_ModuleName;
      v54 = 4LL;
      v47 = v6;
      v56 = 4LL;
      v46 = v21;
      v58 = 4LL;
      v45 = v22;
      v60 = 4LL;
      if ( !g_ModuleName )
        v37 = "<unknown>";
      do
        ++v27;
      while ( v37[v27] );
      v44 = v49;
      v63 = 0;
      v64 = &v44;
      v43 = v50;
      v61 = v37;
      v66 = (int *)&v43;
      v68 = (int *)&v42;
      v70 = "usbhub3.sys";
      v41 = v51;
      v72 = (int *)&v41;
      v40 = a5;
      v74 = &v40;
      v62 = v27 + 1;
      v65 = 4LL;
      v67 = 4LL;
      v42 = v35;
      v69 = 4LL;
      v71 = 12LL;
      v73 = 4LL;
      v75 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140076040, byte_14006832C, 0LL, 0LL, 0xDu, v52);
    }
    if ( !v35 )
    {
      v38 = KeAcquireSpinLockRaiseToDpc(&g_AssertSpinLock);
      v39 = (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList;
      v10 = v38;
      if ( &g_MicrosoftTelemetryAssertsTriggeredList != (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList )
      {
        while ( *(v39 - 4) != a1 )
        {
          v39 = (__int64 *)*v39;
          if ( &g_MicrosoftTelemetryAssertsTriggeredList == v39 )
            goto LABEL_55;
        }
        ++*((_DWORD *)v39 - 2);
      }
      goto LABEL_55;
    }
  }
}
