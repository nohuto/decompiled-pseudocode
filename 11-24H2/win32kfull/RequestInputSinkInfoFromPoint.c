/*
 * XREFs of RequestInputSinkInfoFromPoint @ 0x1401C30E4
 * Callers:
 *     NtUserCompositionInputSinkLuidFromPoint @ 0x1401BEFD0 (NtUserCompositionInputSinkLuidFromPoint.c)
 *     NtUserCompositionInputSinkViewInstanceIdFromPoint @ 0x14021ABB0 (NtUserCompositionInputSinkViewInstanceIdFromPoint.c)
 * Callees:
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140065000 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x14026E498 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall RequestInputSinkInfoFromPoint(_OWORD *a1, __int64 a2)
{
  unsigned int v3; // esi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 UserSessionState; // rax
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  LONG v41; // ebx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  _OWORD v47[7]; // [rsp+38h] [rbp-19h] BYREF
  char v48; // [rsp+C0h] [rbp+6Fh] BYREF

  v3 = 0;
  while ( *(_DWORD *)(W32GetUserSessionState(a1, a2) + 18800) )
  {
    if ( *(_BYTE *)(W32GetUserSessionState(v5, v4) + 18844) != 1 )
    {
      *(_BYTE *)(W32GetUserSessionState(v7, v6) + 18844) = 1;
      UserSessionState = W32GetUserSessionState(v9, v8);
      v11 = UserSessionState + 19016;
      *(_OWORD *)(UserSessionState + 19016) = *a1;
      *(_OWORD *)(UserSessionState + 19032) = a1[1];
      *(_OWORD *)(UserSessionState + 19048) = a1[2];
      *(_OWORD *)(UserSessionState + 19064) = a1[3];
      *(_OWORD *)(UserSessionState + 19080) = a1[4];
      *(_OWORD *)(UserSessionState + 19096) = a1[5];
      *(_OWORD *)(UserSessionState + 19112) = a1[6];
      if ( *(_DWORD *)(W32GetUserSessionState(v13, v12) + 64232) )
      {
        *(_DWORD *)(W32GetUserSessionState(v15, v14) + 64236) = 1;
        v36 = W32GetUserSessionState(v35, v34);
        KeSetEvent(*(PRKEVENT *)(v36 + 18816), 1, 0);
      }
      else
      {
        WakeMIT(2LL);
      }
      LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v48, 1);
      v18 = W32GetUserSessionState(v17, v16);
      KeWaitForSingleObject(*(PVOID *)(v18 + 18856), UserRequest, 1, 1u, 0LL);
      LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v48);
      *(_DWORD *)(W32GetUserSessionState(v20, v19) + 64236) = 0;
      v3 = *(_DWORD *)(v11 + 16);
      if ( v3 )
      {
        *a1 = *(_OWORD *)v11;
        a1[1] = *(_OWORD *)(v11 + 16);
        a1[2] = *(_OWORD *)(v11 + 32);
        a1[3] = *(_OWORD *)(v11 + 48);
        a1[4] = *(_OWORD *)(v11 + 64);
        a1[5] = *(_OWORD *)(v11 + 80);
        v28 = *(_OWORD *)(v11 + 96);
      }
      else
      {
        memset_0(v47, 0, sizeof(v47));
        v23 = v47[1];
        *a1 = v47[0];
        v24 = v47[2];
        a1[1] = v23;
        v25 = v47[3];
        a1[2] = v24;
        v26 = v47[4];
        a1[3] = v25;
        v27 = v47[5];
        a1[4] = v26;
        v28 = v47[6];
        a1[5] = v27;
      }
      a1[6] = v28;
      *(_BYTE *)(W32GetUserSessionState(v22, v21) + 18844) = 0;
      if ( *(_DWORD *)(W32GetUserSessionState(v30, v29) + 18840) )
      {
        v41 = *(_DWORD *)(W32GetUserSessionState(v32, v31) + 18840);
        v44 = W32GetUserSessionState(v43, v42);
        KeReleaseSemaphore(*(PRKSEMAPHORE *)(v44 + 18832), 0, v41, 0);
        *(_DWORD *)(W32GetUserSessionState(v46, v45) + 18840) = 0;
      }
      return v3;
    }
    v37 = W32GetUserSessionState(v7, v6);
    ++*(_DWORD *)(v37 + 18840);
    LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v48, 0);
    v40 = W32GetUserSessionState(v39, v38);
    KeWaitForSingleObject(*(PVOID *)(v40 + 18832), UserRequest, 0, 0, 0LL);
    LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v48);
  }
  return v3;
}
