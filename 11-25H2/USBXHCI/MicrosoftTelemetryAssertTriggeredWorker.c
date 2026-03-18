/*
 * XREFs of MicrosoftTelemetryAssertTriggeredWorker @ 0x14005799C
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredArgsMsgKM @ 0x140057938 (MicrosoftTelemetryAssertTriggeredArgsMsgKM.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x14005796C (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 * Callees:
 *     _tlgCreate1Sz_char @ 0x140001008 (_tlgCreate1Sz_char.c)
 *     _tlgKeywordOn @ 0x14000103C (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140001068 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     GetImageTuple @ 0x140057730 (GetImageTuple.c)
 *     __security_check_cookie @ 0x1400596A0 (__security_check_cookie.c)
 */

void __fastcall MicrosoftTelemetryAssertTriggeredWorker(
        unsigned __int64 a1,
        int a2,
        _BYTE *a3,
        unsigned int a4,
        unsigned int a5,
        __int64 a6)
{
  KIRQL v8; // al
  __int64 *v9; // rcx
  KIRQL v10; // r15
  __int64 *v11; // rdi
  unsigned __int64 *Pool2; // rax
  __int64 v13; // rbx
  ULONG TimeIncrement; // eax
  _QWORD *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rcx
  int ImageTuple; // eax
  __int64 v20; // r10
  __int64 v21; // r12
  int v22; // r14d
  unsigned int v23; // ebx
  char *v24; // rdi
  __int64 v25; // r13
  char *v26; // r9
  unsigned int v27; // r11d
  char *v28; // rdx
  char *v29; // rax
  __int64 v30; // r8
  __int64 v31; // r9
  char *v32; // r9
  unsigned int v33; // r11d
  char *v34; // rdx
  KIRQL v35; // al
  char *v36; // rax
  __int64 v37; // r8
  __int64 v38; // r9
  unsigned int v39; // r15d
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // r8
  __int64 v43; // r9
  KIRQL v44; // al
  __int64 *v45; // rcx
  unsigned int v46; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v47; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v48; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v49; // [rsp+5Ch] [rbp-A4h] BYREF
  int CurrentIrql; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v51; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v52; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v53; // [rsp+6Ch] [rbp-94h] BYREF
  int v54; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v55; // [rsp+74h] [rbp-8Ch]
  unsigned int v56; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v57; // [rsp+7Ch] [rbp-84h] BYREF
  int v58; // [rsp+80h] [rbp-80h]
  unsigned int v59; // [rsp+84h] [rbp-7Ch]
  __int64 v60; // [rsp+88h] [rbp-78h]
  _BYTE *v61; // [rsp+90h] [rbp-70h]
  struct _EVENT_DATA_DESCRIPTOR v62[2]; // [rsp+A0h] [rbp-60h] BYREF
  int *v63; // [rsp+C0h] [rbp-40h]
  __int64 v64; // [rsp+C8h] [rbp-38h]
  int *v65; // [rsp+D0h] [rbp-30h]
  __int64 v66; // [rsp+D8h] [rbp-28h]
  int *v67; // [rsp+E0h] [rbp-20h]
  __int64 v68; // [rsp+E8h] [rbp-18h]
  int *v69; // [rsp+F0h] [rbp-10h]
  __int64 v70; // [rsp+F8h] [rbp-8h]
  _BYTE v71[16]; // [rsp+100h] [rbp+0h] BYREF
  int *v72; // [rsp+110h] [rbp+10h]
  __int64 v73; // [rsp+118h] [rbp+18h]
  int *v74; // [rsp+120h] [rbp+20h]
  __int64 v75; // [rsp+128h] [rbp+28h]
  int *p_CurrentIrql; // [rsp+130h] [rbp+30h]
  __int64 v77; // [rsp+138h] [rbp+38h]
  _BYTE v78[16]; // [rsp+140h] [rbp+40h] BYREF
  int *v79; // [rsp+150h] [rbp+50h]
  __int64 v80; // [rsp+158h] [rbp+58h]
  int *v81; // [rsp+160h] [rbp+60h]
  __int64 v82; // [rsp+168h] [rbp+68h]
  char v83[16]; // [rsp+170h] [rbp+70h] BYREF

  v60 = a6;
  v59 = a4;
  v58 = a2;
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
LABEL_53:
      KeReleaseSpinLock(&g_AssertSpinLock, v10);
      return;
    }
    v13 = MEMORY[0xFFFFF78000000320];
    *Pool2 = a1;
    TimeIncrement = KeQueryTimeIncrement();
    v11[2] = 0LL;
    *((_DWORD *)v11 + 6) = 0;
    v11[1] = ((__int64)((unsigned __int128)(v13 * TimeIncrement * (__int128)0x346DC5D63886594BLL) >> 64) >> 11)
           + ((unsigned __int64)((unsigned __int128)(v13 * TimeIncrement * (__int128)0x346DC5D63886594BLL) >> 64) >> 63)
           - 60001;
    v15 = v11 + 4;
    v16 = g_MicrosoftTelemetryAssertsTriggeredList;
    if ( *(__int64 **)(g_MicrosoftTelemetryAssertsTriggeredList + 8) != &g_MicrosoftTelemetryAssertsTriggeredList )
      __fastfail(3u);
    *v15 = g_MicrosoftTelemetryAssertsTriggeredList;
    v11[5] = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
    *(_QWORD *)(v16 + 8) = v15;
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
  v17 = MEMORY[0xFFFFF78000000320];
  v18 = v17 * KeQueryTimeIncrement();
  v56 = 0;
  v46 = 0;
  if ( (unsigned __int64)(v18 / 10000 - v11[1]) <= 0xEA60 )
    goto LABEL_53;
  ImageTuple = GetImageTuple(v18, &v56, &v46);
  v21 = v46;
  v22 = ImageTuple;
  if ( ImageTuple
    && a1 >= 0x140000000LL
    && 0x140000000LL + (unsigned __int64)v46 > 0x140000000LL
    && a1 <= 0x140000000LL + (unsigned __int64)v46 )
  {
    v23 = a1 - 0x40000000;
  }
  else
  {
    v23 = 0;
  }
  v55 = *((_DWORD *)v11 + 4);
  v46 = *((_DWORD *)v11 + 5);
  v54 = *((_DWORD *)v11 + 6);
  v11[1] = v20;
  KeReleaseSpinLock(&g_AssertSpinLock, v10);
  v24 = "<unknown>";
  if ( !a3 )
    a3 = g_ModuleName;
  v61 = a3;
  v25 = v56;
  if ( v58 )
  {
    if ( (unsigned int)dword_140073040 > 5 && tlgKeywordOn((__int64)&dword_140073040, 0x400000000000LL) )
    {
      v56 = v27;
      v63 = (int *)&v56;
      v28 = "<unknown>";
      v64 = 4LL;
      v65 = (int *)&v57;
      v57 = v23;
      v66 = 4LL;
      v67 = (int *)&v53;
      v68 = 4LL;
      v53 = v22 != 0 ? v25 : 0;
      v70 = 4LL;
      v69 = (int *)&v47;
      v47 = v22 != 0 ? v21 : 0;
      if ( v26 )
        v28 = v26;
      tlgCreate1Sz_char((__int64)v71, v28);
      v72 = (int *)&v48;
      v49 = v46;
      v74 = (int *)&v49;
      v48 = v55;
      v73 = 4LL;
      v75 = 4LL;
      CurrentIrql = KeGetCurrentIrql();
      p_CurrentIrql = &CurrentIrql;
      v77 = 4LL;
      tlgCreate1Sz_char((__int64)v78, v61);
      v79 = (int *)&v51;
      v52 = a5;
      v81 = (int *)&v52;
      v29 = (char *)v60;
      v51 = v59;
      v80 = 4LL;
      if ( !v60 )
        v29 = "<unknown>";
      v82 = 4LL;
      tlgCreate1Sz_char((__int64)v83, v29);
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140073040, byte_1400644DD, v30, v31, 0xEu, v62);
    }
  }
  else if ( (unsigned int)dword_140073040 > 5 && tlgKeywordOn((__int64)&dword_140073040, 0x400000000000LL) )
  {
    v52 = v33;
    v63 = (int *)&v52;
    v34 = "<unknown>";
    v64 = 4LL;
    v65 = (int *)&v51;
    v51 = v23;
    v66 = 4LL;
    v67 = &CurrentIrql;
    v68 = 4LL;
    CurrentIrql = v22 != 0 ? v25 : 0;
    v70 = 4LL;
    v69 = (int *)&v49;
    v49 = v22 != 0 ? v21 : 0;
    if ( v32 )
      v34 = v32;
    tlgCreate1Sz_char((__int64)v71, v34);
    v72 = (int *)&v48;
    v47 = v46;
    v74 = (int *)&v47;
    v48 = v55;
    v73 = 4LL;
    v75 = 4LL;
    v35 = KeGetCurrentIrql();
    v77 = 4LL;
    v53 = v35;
    p_CurrentIrql = (int *)&v53;
    v36 = (char *)v60;
    if ( !v60 )
      v36 = "<unknown>";
    tlgCreate1Sz_char((__int64)v78, v36);
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140073040,
      (unsigned __int8 *)dword_14006462D,
      v37,
      v38,
      0xBu,
      v62);
  }
  if ( dword_140073078 && !v54 && !KeGetCurrentIrql() )
  {
    v39 = DbgkWerCaptureLiveKernelDump(L"TELASSERT", 465LL, v23, g_ModuleName, v25, v21, 0LL, 0LL, 0);
    if ( v58 )
    {
      if ( (unsigned int)dword_140073040 > 5 && tlgKeywordOn((__int64)&dword_140073040, 0x400000000000LL) )
      {
        v54 = 10;
        v63 = &v54;
        v65 = (int *)&v52;
        v64 = 4LL;
        v52 = v23;
        v67 = (int *)&v51;
        v66 = 4LL;
        v51 = v22 != 0 ? v25 : 0;
        v68 = 4LL;
        v70 = 4LL;
        CurrentIrql = v22 != 0 ? v21 : 0;
        v69 = &CurrentIrql;
        if ( g_ModuleName )
          v24 = (char *)g_ModuleName;
        tlgCreate1Sz_char((__int64)v71, v24);
        v49 = v55;
        v72 = (int *)&v49;
        v48 = v46;
        v74 = (int *)&v48;
        p_CurrentIrql = (int *)&v47;
        v73 = 4LL;
        v75 = 4LL;
        v47 = v39;
        v77 = 4LL;
        tlgCreate1Sz_char((__int64)v78, v61);
        v53 = v59;
        v79 = (int *)&v53;
        v57 = a5;
        v81 = (int *)&v57;
        v80 = 4LL;
        v82 = 4LL;
        tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140073040, byte_140064587, v40, v41, 0xDu, v62);
      }
    }
    else if ( (unsigned int)dword_140073040 > 5 && tlgKeywordOn((__int64)&dword_140073040, 0x400000000000LL) )
    {
      v54 = 10;
      v63 = &v54;
      v65 = (int *)&v52;
      v64 = 4LL;
      v52 = v23;
      v67 = (int *)&v51;
      v66 = 4LL;
      v51 = v22 != 0 ? v25 : 0;
      v68 = 4LL;
      v70 = 4LL;
      CurrentIrql = v22 != 0 ? v21 : 0;
      v69 = &CurrentIrql;
      if ( g_ModuleName )
        v24 = (char *)g_ModuleName;
      tlgCreate1Sz_char((__int64)v71, v24);
      v49 = v55;
      v72 = (int *)&v49;
      v48 = v46;
      v74 = (int *)&v48;
      p_CurrentIrql = (int *)&v47;
      v73 = 4LL;
      v75 = 4LL;
      v47 = v39;
      v77 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140073040,
        (unsigned __int8 *)dword_14006469A,
        v42,
        v43,
        0xAu,
        v62);
    }
    if ( !v39 )
    {
      v44 = KeAcquireSpinLockRaiseToDpc(&g_AssertSpinLock);
      v45 = (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList;
      v10 = v44;
      if ( &g_MicrosoftTelemetryAssertsTriggeredList != (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList )
      {
        while ( *(v45 - 4) != a1 )
        {
          v45 = (__int64 *)*v45;
          if ( &g_MicrosoftTelemetryAssertsTriggeredList == v45 )
            goto LABEL_53;
        }
        ++*((_DWORD *)v45 - 2);
      }
      goto LABEL_53;
    }
  }
}
