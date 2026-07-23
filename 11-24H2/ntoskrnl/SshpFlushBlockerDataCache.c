/*
 * XREFs of SshpFlushBlockerDataCache @ 0x140A425B0
 * Callers:
 *     SshNotifySystemSessionChange @ 0x140A42178 (SshNotifySystemSessionChange.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140438B90 (CmpFreeTransientPoolWithTag.c)
 *     SSHSupportEtwEventEnabled @ 0x140474570 (SSHSupportEtwEventEnabled.c)
 *     SSHSupportEtwWrite @ 0x14049EA8C (SSHSupportEtwWrite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall SshpFlushBlockerDataCache(ULONG *a1, __int64 a2)
{
  __int64 v3; // rcx
  ULONG i; // esi
  __int64 v5; // rbx
  unsigned int v6; // r11d
  unsigned int v7; // ebx
  __int64 v8; // r14
  ULONG *v9; // rsi
  __int64 v10; // r15
  unsigned __int16 *v11; // r8
  ULONG v12; // r10d
  int *v13; // rdx
  __int64 v14; // rcx
  ULONG *v15; // r9
  ULONGLONG v16; // rax
  __int64 v17; // rcx
  ULONGLONG v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  ULONGLONG v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  char v24; // [rsp+30h] [rbp-D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+40h] [rbp-C0h] BYREF
  ULONG *v26; // [rsp+50h] [rbp-B0h]
  int v27; // [rsp+58h] [rbp-A8h]
  int v28; // [rsp+5Ch] [rbp-A4h]
  _BYTE v29[64]; // [rsp+2F0h] [rbp+1F0h] BYREF
  __int64 v30; // [rsp+378h] [rbp+278h] BYREF

  v30 = a2;
  v24 = 0;
  if ( SshpTraceHandleRegistered )
  {
    if ( SSHSupportEtwEventEnabled((__int64)a1, &SLEEPSTUDY_EVT_SCENARIO_BLOCKER_DATA) )
    {
      v3 = a1[1];
      if ( (_DWORD)v3 )
      {
        v6 = 2;
        v25.Reserved = 0;
        v28 = 0;
        v24 = v30;
        v25.Ptr = (ULONGLONG)&v24;
        v25.Size = 1;
        v26 = a1 + 1;
        v27 = 4;
        v7 = 4;
        v8 = 0LL;
        v9 = a1 + 4;
        v10 = v3;
        do
        {
          v11 = (unsigned __int16 *)*((_QWORD *)v9 - 1);
          v12 = *((unsigned __int16 *)v9 + 4);
          v13 = (int *)&v29[v8];
          v14 = 2LL * v6;
          v15 = (ULONG *)&v29[v8 + 32];
          v6 += 5;
          v8 += 4LL;
          *v13 = *v11 >> 1;
          *(&v25.Reserved + 2 * v14) = 0;
          *(&v25.Size + 2 * v14) = 16;
          *v15 = v12 >> 1;
          v16 = *(_QWORD *)v9;
          v9 += 8;
          *(&v25.Ptr + v14) = v16;
          v17 = 2LL * (v7 - 1);
          *(&v25.Reserved + 2 * v17) = 0;
          *(&v25.Ptr + v17) = (ULONGLONG)v13;
          *(&v25.Size + 2 * v17) = 4;
          LODWORD(v17) = *v11;
          v18 = *((_QWORD *)v11 + 1);
          v19 = 2LL * v7;
          *(&v25.Reserved + 2 * v19) = 0;
          *(&v25.Size + 2 * v19) = v17;
          *(&v25.Ptr + v19) = v18;
          v20 = 2LL * (v7 + 1);
          v21 = *((_QWORD *)v9 - 2);
          *(&v25.Reserved + 2 * v20) = 0;
          *(&v25.Ptr + v20) = (ULONGLONG)v15;
          *(&v25.Size + 2 * v20) = 4;
          v22 = 2LL * (v7 + 2);
          v7 += 5;
          *(&v25.Reserved + 2 * v22) = 0;
          *(&v25.Ptr + v22) = v21;
          *(&v25.Size + 2 * v22) = v12;
          --v10;
        }
        while ( v10 );
        v23 = 2LL * v6;
        *(&v25.Reserved + 2 * v23) = 0;
        *(&v25.Ptr + v23) = (ULONGLONG)&v30;
        *(&v25.Size + 2 * v23) = 8;
        SSHSupportEtwWrite((__int64)&v30, &SLEEPSTUDY_EVT_SCENARIO_BLOCKER_DATA, (__int64)v11, v6 + 1, &v25);
      }
    }
  }
  for ( i = 0; i < a1[1]; *(_OWORD *)&a1[v5 + 6] = 0LL )
  {
    v5 = 8LL * i;
    CmpFreeTransientPoolWithTag(*(void **)&a1[v5 + 8], *a1);
    ++i;
    *(_OWORD *)&a1[v5 + 2] = 0LL;
  }
  a1[1] = 0;
}
