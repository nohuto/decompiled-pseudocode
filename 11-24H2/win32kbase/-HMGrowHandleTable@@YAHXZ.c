/*
 * XREFs of ?HMGrowHandleTable@@YAHXZ @ 0x140111A54
 * Callers:
 *     HMAllocObjectEx @ 0x140041FF0 (HMAllocObjectEx.c)
 *     HMCreateHandleForObject @ 0x140062FB0 (HMCreateHandleForObject.c)
 *     HMInitHandleTable @ 0x1402E23C8 (HMInitHandleTable.c)
 * Callees:
 *     CommitReadOnlyMemory @ 0x140111D40 (CommitReadOnlyMemory.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall HMGrowHandleTable(__int64 a1)
{
  __int64 *v1; // rsi
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  unsigned __int64 v5; // rbx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rcx
  __int64 UserSessionState; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rbx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rbx
  _QWORD *v31; // rdx
  _WORD *v32; // rcx
  __int64 v33; // rcx
  __int64 result; // rax
  __int64 v35; // [rsp+30h] [rbp+8h] BYREF

  v1 = (__int64 *)(W32GetUserSessionState(a1) + 19744);
  v3 = *(_QWORD *)(W32GetUserSessionState(v2) + 19928);
  if ( *(_QWORD *)(v3 + 8) == 65534LL )
    return 0LL;
  v4 = *(_QWORD *)(W32GetUserSessionState(v3) + 19928);
  v5 = v1[25] + *(unsigned int *)(v4 + 864);
  if ( v5 >= *(_QWORD *)(W32GetUserSessionState(v4) + 19920) )
    return 0LL;
  v7 = v5 - *(_DWORD *)(W32GetUserSessionState(v6) + 19912);
  v35 = 4096LL;
  UserSessionState = W32GetUserSessionState(v8);
  if ( (int)CommitReadOnlyMemory(*(_QWORD *)(UserSessionState + 19896), &v35, v7, 0LL) < 0 )
    return 0LL;
  v11 = W32GetUserSessionState(v10);
  v12 = v35;
  v13 = *(_QWORD *)(v11 + 19928);
  v14 = 40LL * *(_QWORD *)(v13 + 8);
  v15 = W32GetUserSessionState(v13);
  if ( (int)MmCommitSessionMappedView(v14 + *(_QWORD *)(v15 + 19888), v12) < 0 )
    return 0LL;
  v17 = *(_QWORD *)(W32GetUserSessionState(v16) + 19928);
  *(_DWORD *)(v17 + 864) += 4096;
  v18 = *(_QWORD *)(W32GetUserSessionState(v17) + 19928);
  v19 = *(_DWORD *)(v18 + 864) / 0x28u;
  v20 = *(_QWORD *)(W32GetUserSessionState(v18) + 19928);
  *(_QWORD *)(v20 + 8) = v19;
  v21 = *(_QWORD *)(W32GetUserSessionState(v20) + 19928);
  if ( *(_QWORD *)(v21 + 8) > 0xFFFEuLL )
  {
    v21 = *(_QWORD *)(W32GetUserSessionState(v21) + 19928);
    *(_QWORD *)(v21 + 8) = 65534LL;
  }
  v22 = *v1;
  v23 = W32GetUserSessionState(v21);
  memset((void *)(v1[25] + 32 * v22), 0, 32 * (*(_QWORD *)(*(_QWORD *)(v23 + 19928) + 8LL) - v22));
  v25 = *(_QWORD *)(W32GetUserSessionState(v24) + 19928);
  v27 = W32GetUserSessionState(v26);
  memset((void *)(*(_QWORD *)(v27 + 19888) + 40 * v22), 0, 40 * (*(_QWORD *)(v25 + 8) - v22));
  v29 = *(_QWORD *)(W32GetUserSessionState(v28) + 19928);
  v30 = *(_QWORD *)(v29 + 8) - 1LL;
  v31 = (_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v29) + 19888) + 40 * v30);
  v32 = (_WORD *)(32 * v30 + 26);
  if ( v30 >= v22 )
  {
    v32 = (_WORD *)((char *)v32 + v1[25]);
    do
    {
      *v32 = 1;
      if ( (v30 & 1) != 0 )
      {
        *v31 = v1[2];
        v1[2] = v30;
      }
      else
      {
        *v31 = v1[1];
        v1[1] = v30;
      }
      --v30;
      v32 -= 16;
      v31 -= 5;
    }
    while ( v30 >= v22 );
  }
  v33 = *(_QWORD *)(W32GetUserSessionState(v32) + 19928);
  result = 1LL;
  *v1 = *(_QWORD *)(v33 + 8);
  return result;
}
