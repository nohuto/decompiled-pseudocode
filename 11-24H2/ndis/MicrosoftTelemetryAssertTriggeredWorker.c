/*
 * XREFs of MicrosoftTelemetryAssertTriggeredWorker @ 0x1400E4FB0
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400E4F80 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 * Callees:
 *     _tlgCreate1Sz_char @ 0x140004888 (_tlgCreate1Sz_char.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140045E80 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1400713E0 (_tlgKeywordOn.c)
 *     GetImageTuple @ 0x1400E4D68 (GetImageTuple.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 */

void __fastcall MicrosoftTelemetryAssertTriggeredWorker(unsigned __int64 a1)
{
  KIRQL v2; // al
  __int64 *v3; // rcx
  KIRQL v4; // r14
  __int64 *v5; // rdi
  unsigned __int64 *Pool2; // rax
  __int64 v7; // rbx
  ULONG TimeIncrement; // eax
  _QWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rcx
  int ImageTuple; // eax
  __int64 v14; // r10
  __int64 v15; // r15
  int v16; // r12d
  unsigned int v17; // ebx
  unsigned int v18; // eax
  int v19; // edi
  const CHAR *v20; // r13
  __int64 v21; // r14
  const CHAR *v22; // rdx
  unsigned int v23; // edi
  const GUID *v24; // r8
  ULONG v25; // r10d
  KIRQL v26; // al
  __int64 *v27; // rcx
  unsigned int v28; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v29; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned int v30; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v31; // [rsp+64h] [rbp-A4h] BYREF
  unsigned int v32; // [rsp+68h] [rbp-A0h] BYREF
  int v33; // [rsp+6Ch] [rbp-9Ch] BYREF
  unsigned int v34; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v35; // [rsp+74h] [rbp-94h] BYREF
  _DWORD v36[4]; // [rsp+78h] [rbp-90h] BYREF
  _EVENT_DATA_DESCRIPTOR v37[2]; // [rsp+88h] [rbp-80h] BYREF
  unsigned int *v38; // [rsp+A8h] [rbp-60h]
  __int64 v39; // [rsp+B0h] [rbp-58h]
  int *v40; // [rsp+B8h] [rbp-50h]
  __int64 v41; // [rsp+C0h] [rbp-48h]
  int *v42; // [rsp+C8h] [rbp-40h]
  __int64 v43; // [rsp+D0h] [rbp-38h]
  int *v44; // [rsp+D8h] [rbp-30h]
  __int64 v45; // [rsp+E0h] [rbp-28h]
  _BYTE v46[16]; // [rsp+E8h] [rbp-20h] BYREF
  int *v47; // [rsp+F8h] [rbp-10h]
  __int64 v48; // [rsp+100h] [rbp-8h]
  int *v49; // [rsp+108h] [rbp+0h]
  __int64 v50; // [rsp+110h] [rbp+8h]
  int *v51; // [rsp+118h] [rbp+10h]
  __int64 v52; // [rsp+120h] [rbp+18h]
  char v53[16]; // [rsp+128h] [rbp+20h] BYREF

  if ( !_InterlockedExchangeAdd(&g_AssertsOperational, 0) )
    return;
  v2 = KeAcquireSpinLockRaiseToDpc(&g_AssertSpinLock);
  v3 = (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList;
  v4 = v2;
  if ( &g_MicrosoftTelemetryAssertsTriggeredList == (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList )
  {
LABEL_5:
    Pool2 = (unsigned __int64 *)ExAllocatePool2(66LL, 48LL, 1953657665LL);
    v5 = (__int64 *)Pool2;
    if ( !Pool2 )
    {
LABEL_35:
      KeReleaseSpinLock(&g_AssertSpinLock, v4);
      return;
    }
    v7 = MEMORY[0xFFFFF78000000320];
    *Pool2 = a1;
    TimeIncrement = KeQueryTimeIncrement();
    v5[2] = 0LL;
    *((_DWORD *)v5 + 6) = 0;
    v5[1] = ((__int64)((unsigned __int128)(v7 * TimeIncrement * (__int128)0x346DC5D63886594BLL) >> 64) >> 11)
          + ((unsigned __int64)((unsigned __int128)(v7 * TimeIncrement * (__int128)0x346DC5D63886594BLL) >> 64) >> 63)
          - 60001;
    v9 = v5 + 4;
    v10 = g_MicrosoftTelemetryAssertsTriggeredList;
    if ( *(__int64 **)(g_MicrosoftTelemetryAssertsTriggeredList + 8) != &g_MicrosoftTelemetryAssertsTriggeredList )
      __fastfail(3u);
    *v9 = g_MicrosoftTelemetryAssertsTriggeredList;
    v5[5] = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
    *(_QWORD *)(v10 + 8) = v9;
    g_MicrosoftTelemetryAssertsTriggeredList = (__int64)(v5 + 4);
  }
  else
  {
    while ( 1 )
    {
      v5 = v3 - 4;
      if ( *(v3 - 4) == a1 )
        break;
      v3 = (__int64 *)*v3;
      if ( &g_MicrosoftTelemetryAssertsTriggeredList == v3 )
        goto LABEL_5;
    }
  }
  ++*((_DWORD *)v5 + 4);
  ++*((_DWORD *)v5 + 5);
  v11 = MEMORY[0xFFFFF78000000320];
  v12 = v11 * KeQueryTimeIncrement();
  v29 = 0;
  v28 = 0;
  if ( (unsigned __int64)(v12 / 10000 - v5[1]) <= 0xEA60 )
    goto LABEL_35;
  ImageTuple = GetImageTuple(v12, &v29, &v28);
  v15 = v28;
  v16 = ImageTuple;
  if ( ImageTuple
    && a1 >= 0x140000000LL
    && 0x140000000LL + (unsigned __int64)v28 > 0x140000000LL
    && a1 <= 0x140000000LL + (unsigned __int64)v28 )
  {
    v17 = a1 - 0x40000000;
  }
  else
  {
    v17 = 0;
  }
  v28 = *((_DWORD *)v5 + 4);
  v18 = *((_DWORD *)v5 + 5);
  v5[1] = v14;
  v19 = *((_DWORD *)v5 + 6);
  v30 = v18;
  KeReleaseSpinLock(&g_AssertSpinLock, v4);
  v20 = "<unknown>";
  v21 = v29;
  if ( (unsigned int)dword_140134040 > 5 && tlgKeywordOn((__int64)&dword_140134040, 0x400000000000LL) )
  {
    v29 = 10;
    v38 = &v29;
    v22 = "<unknown>";
    v39 = 4LL;
    v40 = (int *)&v31;
    v31 = v17;
    v41 = 4LL;
    v42 = (int *)&v32;
    v43 = 4LL;
    v32 = v16 != 0 ? v21 : 0;
    v45 = 4LL;
    v44 = &v33;
    v33 = v16 != 0 ? v15 : 0;
    if ( g_ModuleName )
      v22 = (const CHAR *)g_ModuleName;
    tlgCreate1Sz_char((__int64)v46, v22);
    v47 = (int *)&v34;
    v35 = v30;
    v49 = (int *)&v35;
    v34 = v28;
    v48 = 4LL;
    v50 = 4LL;
    v36[0] = KeGetCurrentIrql();
    v51 = v36;
    v52 = 4LL;
    tlgCreate1Sz_char((__int64)v53, "<unknown>");
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140134040, byte_140103204, 0LL, 0LL, 0xBu, v37);
  }
  if ( dword_140134078 && !v19 && !KeGetCurrentIrql() )
  {
    v23 = DbgkWerCaptureLiveKernelDump(L"TELASSERT", 465LL, v17, g_ModuleName, v21, v15, 0LL, 0LL, 0);
    if ( (unsigned int)dword_140134040 > 5 && tlgKeywordOn((__int64)&dword_140134040, 0x400000000000LL) )
    {
      v39 = 4LL;
      v38 = v36;
      v36[0] = 10;
      v40 = (int *)&v35;
      v35 = v17;
      v41 = 4LL;
      v42 = (int *)&v34;
      v43 = 4LL;
      v34 = v16 != 0 ? v21 : 0;
      v45 = 4LL;
      v33 = v16 != 0 ? v15 : 0;
      v44 = &v33;
      if ( g_ModuleName )
        v20 = (const CHAR *)g_ModuleName;
      tlgCreate1Sz_char((__int64)v46, v20);
      v32 = v28;
      v48 = 4LL;
      v47 = (int *)&v32;
      v31 = v30;
      v49 = (int *)&v31;
      v51 = (int *)&v30;
      v50 = 4LL;
      v30 = v23;
      v52 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140134040, byte_140103317, v24, 0LL, v25, v37);
    }
    if ( !v23 )
    {
      v26 = KeAcquireSpinLockRaiseToDpc(&g_AssertSpinLock);
      v27 = (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList;
      v4 = v26;
      if ( &g_MicrosoftTelemetryAssertsTriggeredList != (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList )
      {
        while ( *(v27 - 4) != a1 )
        {
          v27 = (__int64 *)*v27;
          if ( &g_MicrosoftTelemetryAssertsTriggeredList == v27 )
            goto LABEL_35;
        }
        ++*((_DWORD *)v27 - 2);
      }
      goto LABEL_35;
    }
  }
}
