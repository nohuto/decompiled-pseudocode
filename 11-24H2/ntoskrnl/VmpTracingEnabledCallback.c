/*
 * XREFs of VmpTracingEnabledCallback @ 0x140A840D0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     _tlgKeywordOn @ 0x140426AF0 (_tlgKeywordOn.c)
 *     PsGetProcessId @ 0x140434960 (PsGetProcessId.c)
 *     _tlgCreate1Sz_char @ 0x1404397B4 (_tlgCreate1Sz_char.c)
 *     PfLockSharedAcquire @ 0x14047FC44 (PfLockSharedAcquire.c)
 *     PfLockSharedRelease @ 0x140482C98 (PfLockSharedRelease.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1404A083C (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     PsGetNextProcess @ 0x1408EEB70 (PsGetNextProcess.c)
 */

__int64 *__fastcall VmpTracingEnabledCallback(__int64 a1, int a2, __int64 a3, char a4)
{
  __int64 *result; // rax
  __int64 *v5; // rdi
  struct _EX_RUNDOWN_REF *v6; // rsi
  __int64 v7; // r15
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  unsigned __int64 j; // rbx
  __int64 v13; // rsi
  unsigned int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // r8
  __int64 *i; // rsi
  __int64 v19; // r12
  unsigned int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // r8
  _QWORD **v25; // rax
  unsigned __int64 v26; // rcx
  _QWORD *v27; // rcx
  int v28; // [rsp+20h] [rbp-E0h]
  int v29; // [rsp+28h] [rbp-D8h]
  unsigned int ProcessId; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v31; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v32; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v33; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v34; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v35; // [rsp+68h] [rbp-98h] BYREF
  __int64 v36; // [rsp+70h] [rbp-90h] BYREF
  __int64 v37; // [rsp+78h] [rbp-88h] BYREF
  _OWORD v38[3]; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v39[2]; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int *p_ProcessId; // [rsp+D0h] [rbp-30h]
  __int64 v41; // [rsp+D8h] [rbp-28h]
  __int64 *v42; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v43; // [rsp+E8h] [rbp-18h]
  __int64 *v44; // [rsp+F0h] [rbp-10h]
  __int64 v45; // [rsp+F8h] [rbp-8h]
  __int64 *v46; // [rsp+100h] [rbp+0h]
  __int64 v47; // [rsp+108h] [rbp+8h]
  __int64 *v48; // [rsp+110h] [rbp+10h]
  __int64 v49; // [rsp+118h] [rbp+18h]
  __int64 *v50; // [rsp+120h] [rbp+20h]
  __int64 v51; // [rsp+128h] [rbp+28h]
  unsigned int *v52; // [rsp+130h] [rbp+30h]
  __int64 v53; // [rsp+138h] [rbp+38h]
  __int64 *v54; // [rsp+140h] [rbp+40h]
  __int64 v55; // [rsp+148h] [rbp+48h]

  result = (__int64 *)(unsigned int)(a2 - 1);
  memset(v38, 0, sizeof(v38));
  if ( (unsigned int)result <= 1 && a4 < 0 )
  {
    result = PsGetNextProcess(0LL);
    v5 = result;
    if ( result )
    {
      while ( 1 )
      {
        if ( !v5[206] )
          goto LABEL_35;
        v6 = (struct _EX_RUNDOWN_REF *)(v5 + 61);
        if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)v5 + 61) )
          goto LABEL_35;
        KiStackAttachProcess((_KPROCESS *)v5, 0, (__int64)v38);
        v7 = v5[206];
        if ( v7 )
          break;
LABEL_34:
        KiUnstackDetachProcess((__int64)v38, 0);
        ExReleaseRundownProtection_0(v6);
LABEL_35:
        result = PsGetNextProcess(v5);
        v5 = result;
        if ( !result )
          return result;
      }
      PfLockSharedAcquire((volatile signed __int64 *)(v7 + 120));
      v8 = *(_QWORD *)&VmpTraceLoggingProvider;
      if ( **(_DWORD **)&VmpTraceLoggingProvider > 5u && tlgKeywordOn(*(__int64 *)&VmpTraceLoggingProvider, 128LL) )
      {
        ProcessId = (unsigned int)PsGetProcessId((PEPROCESS)v5);
        v41 = 4LL;
        p_ProcessId = &ProcessId;
        tlgCreate1Sz_char((__int64)&v42, (const CHAR *)v5 + 824);
        v9 = *(_QWORD *)(v7 + 104);
        v44 = &v31;
        v31 = v9;
        v45 = 8LL;
        tlgWriteEx_EtwWriteEx(v8, (unsigned __int8 *)&unk_140051E70, v10, 0, v28, v29, 5u, v39);
      }
      v11 = *(_QWORD *)(v7 + 32);
      if ( (v11 & 1) != 0 )
      {
        if ( v11 == 1 )
        {
LABEL_33:
          PfLockSharedRelease((signed __int64 *)(v7 + 120));
          goto LABEL_34;
        }
        j = v11 ^ ((v7 + 24) | 1);
      }
      else
      {
        j = *(_QWORD *)(v7 + 32);
      }
      if ( j )
      {
        do
        {
          v13 = *(_QWORD *)&VmpTraceLoggingProvider;
          if ( **(_DWORD **)&VmpTraceLoggingProvider > 5u && tlgKeywordOn(*(__int64 *)&VmpTraceLoggingProvider, 128LL) )
          {
            v14 = (unsigned int)PsGetProcessId((PEPROCESS)v5);
            v15 = *(_QWORD *)(j + 24);
            ProcessId = v14;
            v32 = v15;
            p_ProcessId = &ProcessId;
            v42 = &v32;
            v33 = *(_QWORD *)(j + 32);
            v44 = &v33;
            v34 = v33 - v15 + 1;
            v41 = 4LL;
            v46 = &v34;
            v35 = *(_QWORD *)(j + 56);
            v48 = &v35;
            v16 = *(_DWORD *)(j + 72) & 1;
            v43 = 8LL;
            LODWORD(v31) = v16;
            v50 = &v31;
            v36 = *(_QWORD *)(v7 + 104);
            v52 = (unsigned int *)&v36;
            v45 = 8LL;
            v47 = 8LL;
            v49 = 8LL;
            v51 = 4LL;
            v53 = 8LL;
            tlgWriteEx_EtwWriteEx(v13, (unsigned __int8 *)&byte_140051D5F, v17, 0, v28, v29, 9u, v39);
          }
          for ( i = *(__int64 **)(j + 40); i != (__int64 *)(j + 40); i = (__int64 *)*i )
          {
            v19 = *(_QWORD *)&VmpTraceLoggingProvider;
            if ( **(_DWORD **)&VmpTraceLoggingProvider > 5u && tlgKeywordOn(*(__int64 *)&VmpTraceLoggingProvider, 128LL) )
            {
              v20 = (unsigned int)PsGetProcessId((PEPROCESS)v5);
              v21 = i[6];
              v22 = i[7];
              LODWORD(v31) = v20;
              p_ProcessId = (unsigned int *)&v31;
              v42 = &v36;
              v44 = &v35;
              v34 = *(_QWORD *)(j + 24);
              v46 = &v34;
              v33 = *(_QWORD *)(j + 32);
              v48 = &v33;
              v50 = &v32;
              v23 = i[8] & 1;
              v35 = v22;
              ProcessId = v23;
              v36 = v21;
              v32 = v22 - v21 + 1;
              v52 = &ProcessId;
              v37 = *(_QWORD *)(v7 + 104);
              v54 = &v37;
              v41 = 4LL;
              v43 = 8LL;
              v45 = 8LL;
              v47 = 8LL;
              v49 = 8LL;
              v51 = 8LL;
              v53 = 4LL;
              v55 = 8LL;
              tlgWriteEx_EtwWriteEx(v19, (unsigned __int8 *)&byte_140051FF1, v24, 0, v28, v29, 0xAu, v39);
            }
          }
          v25 = *(_QWORD ***)(j + 8);
          v26 = j;
          if ( v25 )
          {
            v27 = *v25;
            for ( j = *(_QWORD *)(j + 8); v27; v27 = (_QWORD *)*v27 )
              j = (unsigned __int64)v27;
          }
          else
          {
            while ( 1 )
            {
              j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL;
              if ( !j || *(_QWORD *)j == v26 )
                break;
              v26 = j;
            }
          }
        }
        while ( j );
        v6 = (struct _EX_RUNDOWN_REF *)(v5 + 61);
      }
      goto LABEL_33;
    }
  }
  return result;
}
