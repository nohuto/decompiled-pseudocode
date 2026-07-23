/*
 * XREFs of VmpTracingEnabledCallback @ 0x140A7EBF0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     PsGetProcessId @ 0x140427BE0 (PsGetProcessId.c)
 *     _tlgCreate1Sz_char @ 0x14042C374 (_tlgCreate1Sz_char.c)
 *     PfLockSharedAcquire @ 0x14047A884 (PfLockSharedAcquire.c)
 *     PfLockSharedRelease @ 0x14047DE88 (PfLockSharedRelease.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x14049AEBC (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PsGetNextProcess @ 0x1408603A0 (PsGetNextProcess.c)
 */

__int64 *__fastcall VmpTracingEnabledCallback(__int64 a1, int a2, __int64 a3, char a4)
{
  __int64 *result; // rax
  __int64 *v5; // rdi
  struct _EX_RUNDOWN_REF *v6; // rsi
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r15
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  unsigned __int64 j; // rbx
  __int64 v15; // rsi
  unsigned int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // r8
  __int64 *i; // rsi
  __int64 v21; // r12
  unsigned int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // r8
  _QWORD **v27; // rax
  unsigned __int64 v28; // rcx
  _QWORD *v29; // rcx
  int v30; // [rsp+20h] [rbp-E0h]
  int v31; // [rsp+28h] [rbp-D8h]
  unsigned int ProcessId; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v33; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v34; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v35; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v36; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v37; // [rsp+68h] [rbp-98h] BYREF
  __int64 v38; // [rsp+70h] [rbp-90h] BYREF
  __int64 v39; // [rsp+78h] [rbp-88h] BYREF
  _OWORD v40[3]; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v41[2]; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int *p_ProcessId; // [rsp+D0h] [rbp-30h]
  __int64 v43; // [rsp+D8h] [rbp-28h]
  __int64 *v44; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v45; // [rsp+E8h] [rbp-18h]
  __int64 *v46; // [rsp+F0h] [rbp-10h]
  __int64 v47; // [rsp+F8h] [rbp-8h]
  __int64 *v48; // [rsp+100h] [rbp+0h]
  __int64 v49; // [rsp+108h] [rbp+8h]
  __int64 *v50; // [rsp+110h] [rbp+10h]
  __int64 v51; // [rsp+118h] [rbp+18h]
  __int64 *v52; // [rsp+120h] [rbp+20h]
  __int64 v53; // [rsp+128h] [rbp+28h]
  unsigned int *v54; // [rsp+130h] [rbp+30h]
  __int64 v55; // [rsp+138h] [rbp+38h]
  __int64 *v56; // [rsp+140h] [rbp+40h]
  __int64 v57; // [rsp+148h] [rbp+48h]

  result = (__int64 *)(unsigned int)(a2 - 1);
  memset(v40, 0, sizeof(v40));
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
        if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)v5 + 61) )
          goto LABEL_35;
        KiStackAttachProcess((_KPROCESS *)v5, 0, (__int64)v40);
        v9 = v5[206];
        if ( v9 )
          break;
LABEL_34:
        KiUnstackDetachProcess((__int64)v40, 0, v7, v8);
        ExReleaseRundownProtection_0(v6);
LABEL_35:
        result = PsGetNextProcess(v5);
        v5 = result;
        if ( !result )
          return result;
      }
      PfLockSharedAcquire((volatile signed __int64 *)(v9 + 120));
      v10 = *(_QWORD *)&VmpTraceLoggingProvider;
      if ( **(_DWORD **)&VmpTraceLoggingProvider > 5u && tlgKeywordOn(*(__int64 *)&VmpTraceLoggingProvider, 128LL) )
      {
        ProcessId = (unsigned int)PsGetProcessId((PEPROCESS)v5);
        v43 = 4LL;
        p_ProcessId = &ProcessId;
        tlgCreate1Sz_char((__int64)&v44, (const CHAR *)v5 + 824);
        v11 = *(_QWORD *)(v9 + 104);
        v46 = &v33;
        v33 = v11;
        v47 = 8LL;
        tlgWriteEx_EtwWriteEx(v10, (unsigned __int8 *)&word_140052C2E, v12, 0, v30, v31, 5u, v41);
      }
      v13 = *(_QWORD *)(v9 + 32);
      if ( (v13 & 1) != 0 )
      {
        if ( v13 == 1 )
        {
LABEL_33:
          PfLockSharedRelease((signed __int64 *)(v9 + 120));
          goto LABEL_34;
        }
        j = v13 ^ ((v9 + 24) | 1);
      }
      else
      {
        j = *(_QWORD *)(v9 + 32);
      }
      if ( j )
      {
        do
        {
          v15 = *(_QWORD *)&VmpTraceLoggingProvider;
          if ( **(_DWORD **)&VmpTraceLoggingProvider > 5u && tlgKeywordOn(*(__int64 *)&VmpTraceLoggingProvider, 128LL) )
          {
            v16 = (unsigned int)PsGetProcessId((PEPROCESS)v5);
            v17 = *(_QWORD *)(j + 24);
            ProcessId = v16;
            v34 = v17;
            p_ProcessId = &ProcessId;
            v44 = &v34;
            v35 = *(_QWORD *)(j + 32);
            v46 = &v35;
            v36 = v35 - v17 + 1;
            v43 = 4LL;
            v48 = &v36;
            v37 = *(_QWORD *)(j + 56);
            v50 = &v37;
            v18 = *(_DWORD *)(j + 72) & 1;
            v45 = 8LL;
            LODWORD(v33) = v18;
            v52 = &v33;
            v38 = *(_QWORD *)(v9 + 104);
            v54 = (unsigned int *)&v38;
            v47 = 8LL;
            v49 = 8LL;
            v51 = 8LL;
            v53 = 4LL;
            v55 = 8LL;
            tlgWriteEx_EtwWriteEx(v15, (unsigned __int8 *)&word_14005267A, v19, 0, v30, v31, 9u, v41);
          }
          for ( i = *(__int64 **)(j + 40); i != (__int64 *)(j + 40); i = (__int64 *)*i )
          {
            v21 = *(_QWORD *)&VmpTraceLoggingProvider;
            if ( **(_DWORD **)&VmpTraceLoggingProvider > 5u && tlgKeywordOn(*(__int64 *)&VmpTraceLoggingProvider, 128LL) )
            {
              v22 = (unsigned int)PsGetProcessId((PEPROCESS)v5);
              v23 = i[6];
              v24 = i[7];
              LODWORD(v33) = v22;
              p_ProcessId = (unsigned int *)&v33;
              v44 = &v38;
              v46 = &v37;
              v36 = *(_QWORD *)(j + 24);
              v48 = &v36;
              v35 = *(_QWORD *)(j + 32);
              v50 = &v35;
              v52 = &v34;
              v25 = i[8] & 1;
              v37 = v24;
              ProcessId = v25;
              v38 = v23;
              v34 = v24 - v23 + 1;
              v54 = &ProcessId;
              v39 = *(_QWORD *)(v9 + 104);
              v56 = &v39;
              v43 = 4LL;
              v45 = 8LL;
              v47 = 8LL;
              v49 = 8LL;
              v51 = 8LL;
              v53 = 8LL;
              v55 = 4LL;
              v57 = 8LL;
              tlgWriteEx_EtwWriteEx(v21, (unsigned __int8 *)&word_140052436, v26, 0, v30, v31, 0xAu, v41);
            }
          }
          v27 = *(_QWORD ***)(j + 8);
          v28 = j;
          if ( v27 )
          {
            v29 = *v27;
            for ( j = *(_QWORD *)(j + 8); v29; v29 = (_QWORD *)*v29 )
              j = (unsigned __int64)v29;
          }
          else
          {
            while ( 1 )
            {
              j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL;
              if ( !j || *(_QWORD *)j == v28 )
                break;
              v28 = j;
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
