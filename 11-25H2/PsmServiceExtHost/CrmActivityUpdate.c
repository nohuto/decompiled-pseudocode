/*
 * XREFs of CrmActivityUpdate @ 0x18002E120
 * Callers:
 *     CrmActivityListenerCallback @ 0x18005BBC0 (CrmActivityListenerCallback.c)
 * Callees:
 *     CempQueryUnbiasedInterruptTimeMs64 @ 0x18002C79C (CempQueryUnbiasedInterruptTimeMs64.c)
 *     CrmLogActivityUpdate @ 0x18002E5A0 (CrmLogActivityUpdate.c)
 *     CrmRegistrationReadyQueueRemoveAndNotify @ 0x18002E894 (CrmRegistrationReadyQueueRemoveAndNotify.c)
 *     CrmRegistrationReadyQueueAdd @ 0x18002E944 (CrmRegistrationReadyQueueAdd.c)
 *     CrmRegistrationNotify @ 0x18002F2C0 (CrmRegistrationNotify.c)
 *     CrmRegistrationReadyQueueRemove @ 0x18002F6F8 (CrmRegistrationReadyQueueRemove.c)
 *     CrmRegistrationNotifyWindowClosedReasonChange @ 0x18002FED8 (CrmRegistrationNotifyWindowClosedReasonChange.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A8010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CrmActivityUpdate(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v7; // rax
  __int64 (__fastcall *v8)(_QWORD, __int64); // rax
  int v9; // eax
  int v10; // edi
  int v11; // esi
  BOOL v12; // r14d
  _BOOL8 v13; // r12
  int v14; // edi
  int v15; // r14d
  int v16; // esi
  int v17; // ebp
  int v18; // r15d
  __int64 v19; // r12
  int v21; // eax
  int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  bool v26; // zf
  __int64 v27; // rcx
  int v28; // [rsp+80h] [rbp-68h]
  __int64 v29; // [rsp+88h] [rbp-60h] BYREF
  int v30; // [rsp+90h] [rbp-58h]
  int v31; // [rsp+94h] [rbp-54h]
  __int64 v32; // [rsp+98h] [rbp-50h]
  __int64 v33; // [rsp+A0h] [rbp-48h]
  __int64 v34; // [rsp+A8h] [rbp-40h]
  int v35; // [rsp+F0h] [rbp+8h]
  int v36; // [rsp+F8h] [rbp+10h]

  v34 = *(_QWORD *)(a1 + 56);
  v31 = *(_DWORD *)(a1 + 68);
  v7 = *(_QWORD *)(a1 + 48);
  v32 = 0LL;
  v33 = *(_QWORD *)(v7 + 16);
  RtlAcquireSRWLockExclusive(a1 + 80);
  *(_DWORD *)(a1 + 88) = GetCurrentThreadId();
  v8 = *(__int64 (__fastcall **)(_QWORD, __int64))(a2 + 40);
  v30 = *(_DWORD *)(a2 + 48);
  v9 = v8(0LL, a4);
  v35 = v9;
  v10 = v30 != 0;
  v28 = v10;
  v11 = v9 != 0;
  v36 = v11;
  v12 = v30 == 1;
  v13 = v9 == 1;
  if ( v11 == v10 && v13 == v12 )
  {
    v14 = *(_DWORD *)(a1 + 100);
    v15 = 0;
    v16 = *(_DWORD *)(a1 + 104);
    v17 = v14;
    v18 = v16;
LABEL_4:
    v19 = 0LL;
    goto LABEL_5;
  }
  *(_DWORD *)(a2 + 48) = v9;
  RtlAcquireSRWLockShared(*(_QWORD *)(a1 + 48));
  if ( v11 != v10 && (*(_DWORD *)(a1 + 152) || *(_DWORD *)(a1 + 156)) )
  {
    CrmRegistrationNotifyWindowClosedReasonChange(*(_QWORD *)(a1 + 48), a1);
    RtlReleaseSRWLockShared(*(_QWORD *)(a1 + 48));
    v14 = *(_DWORD *)(a1 + 100);
    v17 = v14;
    v16 = *(_DWORD *)(a1 + 104);
    v18 = v16;
  }
  else
  {
    RtlReleaseSRWLockShared(*(_QWORD *)(a1 + 48));
    v17 = *(_DWORD *)(a1 + 100);
    v14 = v17;
    v18 = *(_DWORD *)(a1 + 104);
    v16 = v18;
    if ( v36 == v28 )
    {
      v21 = v35;
      goto LABEL_13;
    }
  }
  v21 = v35;
  if ( v35 )
    ++v17;
  else
    --v17;
  *(_DWORD *)(a1 + 100) = v17;
LABEL_13:
  if ( v13 != v12 )
  {
    if ( v21 == 1 )
      ++v18;
    else
      --v18;
    *(_DWORD *)(a1 + 104) = v18;
  }
  v22 = *(_DWORD *)(a1 + 96);
  v15 = 0;
  if ( v17 != v22 && v14 != v22 )
    goto LABEL_4;
  v32 = *(_QWORD *)(a1 + 136);
  v19 = MEMORY[0x7FFE0008];
  *(_QWORD *)(a1 + 136) = MEMORY[0x7FFE0008];
  if ( v17 == *(_DWORD *)(a1 + 96) )
  {
    if ( !v18 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        RtlQueryUnbiasedInterruptTime(a1 + 168);
        *(_QWORD *)(a1 + 176) = MEMORY[0x7FFE0008];
        v29 = 0LL;
        if ( *(_DWORD *)(a1 + 160) )
        {
          RtlQueryUnbiasedInterruptTime(&v29);
          v23 = v29;
          *(_QWORD *)(a1 + 208) += v29 - *(_QWORD *)(a1 + 192);
          *(_QWORD *)(a1 + 192) = v23;
        }
        if ( *(_DWORD *)(a1 + 120) && (*(_DWORD *)(a1 + 144) || *(_DWORD *)(a1 + 148)) )
          CrmRegistrationReadyQueueAdd(a1);
        else
          CrmRegistrationReadyQueueRemoveAndNotify(a1, 0LL, 0LL);
      }
      goto LABEL_5;
    }
    v15 = CrmRegistrationReadyQueueRemove(a1, 0LL);
  }
  else
  {
    LOBYTE(v15) = *(_DWORD *)(a1 + 124) == 0;
    RtlAcquireSRWLockExclusive(&unk_1800E9A40);
    dword_1800E9A48 = GetCurrentThreadId();
    v24 = CrmRegistrationReadyQueueRemove(a1, 1LL);
    v25 = *(_QWORD *)(a1 + 48);
    LODWORD(v29) = v24;
    if ( (unsigned int)CrmRegistrationNotify(v25, a1, 1LL) )
      *(_QWORD *)(a1 + 128) = CempQueryUnbiasedInterruptTimeMs64();
    dword_1800E9A48 = 0;
    RtlReleaseSRWLockExclusive(&unk_1800E9A40);
    v15 |= v29;
  }
  if ( v15 )
  {
    v26 = *(_DWORD *)(a1 + 160) == 0;
    *(_QWORD *)(a1 + 168) = -1LL;
    *(_QWORD *)(a1 + 176) = -1LL;
    v29 = 0LL;
    if ( !v26 )
    {
      RtlQueryUnbiasedInterruptTime(&v29);
      v27 = v29;
      *(_QWORD *)(a1 + 200) += v29 - *(_QWORD *)(a1 + 192);
      *(_QWORD *)(a1 + 192) = v27;
    }
  }
LABEL_5:
  *(_DWORD *)(a1 + 88) = 0;
  RtlReleaseSRWLockExclusive(a1 + 80);
  return CrmLogActivityUpdate(v34, v31, v33, a3, v30, v35, v28, v36, v14, v17, v16, v18, v15, v32, v19);
}
