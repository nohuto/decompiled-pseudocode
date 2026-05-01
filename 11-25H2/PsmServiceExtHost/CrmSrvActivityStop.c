/*
 * XREFs of CrmSrvActivityStop @ 0x1800336F0
 * Callers:
 *     CrmpInProcActivityStop @ 0x180034600 (CrmpInProcActivityStop.c)
 * Callees:
 *     CrmActivityCleanup @ 0x180032E80 (CrmActivityCleanup.c)
 *     CrmLogSrvActivityStopStop @ 0x180033C20 (CrmLogSrvActivityStopStop.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800557F0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

char __fastcall CrmSrvActivityStop(__int64 a1, __int64 a2)
{
  int v2; // r13d
  __int64 v4; // r15
  int v6; // r14d
  int v7; // ebp
  __int64 v8; // rbx
  __int64 i; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  bool v12; // zf
  int v13; // eax
  signed __int64 v14; // rax
  signed __int64 v15; // rax
  bool v16; // cc
  __int64 v18; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v19[32]; // [rsp+38h] [rbp-70h] BYREF
  UUID *v20; // [rsp+58h] [rbp-50h]
  int v21; // [rsp+60h] [rbp-48h]
  int v22; // [rsp+64h] [rbp-44h]

  v2 = 0;
  v4 = -1LL;
  v6 = 3;
  if ( (unsigned int)dword_1800E72E8 > 5 && (qword_1800E72F8 & 1) != 0 && (qword_1800E7300 & 1) == qword_1800E7300 )
  {
    v22 = 0;
    v20 = &Uuid;
    v21 = 16;
    tlgWriteTransfer_EventWriteTransfer(&dword_1800E72E8, &unk_1800D1A80, 0LL, 0LL, 3, v19);
  }
  v7 = 1;
  RtlAcquireSRWLockShared(a2);
  v8 = 0LL;
  for ( i = *(_QWORD *)(a2 + 56); i != a2 + 56; i = *(_QWORD *)i )
  {
    if ( *(_QWORD *)(i + 56) == a1 )
    {
      v8 = i;
      if ( _InterlockedIncrement64((volatile signed __int64 *)(i + 16)) <= 1 )
        __fastfail(0xEu);
      break;
    }
  }
  if ( v8 )
  {
    RtlReleaseSRWLockShared(a2);
    v7 = 0;
    v2 = 1;
    RtlAcquireSRWLockExclusive(v8 + 80);
    v18 = 0LL;
    *(_DWORD *)(v8 + 88) = GetCurrentThreadId();
    if ( *(_DWORD *)(v8 + 160) )
    {
      RtlQueryUnbiasedInterruptTime(&v18);
      v10 = v18;
      v11 = v18 - *(_QWORD *)(v8 + 192);
      if ( *(_DWORD *)(v8 + 100) == *(_DWORD *)(v8 + 96) )
        *(_QWORD *)(v8 + 200) += v11;
      else
        *(_QWORD *)(v8 + 208) += v11;
      *(_QWORD *)(v8 + 192) = v10;
    }
    v12 = (*(_DWORD *)(v8 + 160))-- == 1;
    v4 = *(_QWORD *)(v8 + 216);
    v6 = *(_DWORD *)(v8 + 184);
    if ( v12 )
    {
      *(_QWORD *)(v8 + 216) = -1LL;
      *(_DWORD *)(v8 + 184) = 3;
    }
    v13 = 0;
  }
  else
  {
    v13 = -1073741811;
  }
  LOBYTE(v14) = CrmLogSrvActivityStopStop(a2, a1, v8, v6, v4, v13);
  if ( v2 )
  {
    *(_DWORD *)(v8 + 88) = 0;
    LOBYTE(v14) = RtlReleaseSRWLockExclusive(v8 + 80);
  }
  if ( v7 )
    LOBYTE(v14) = RtlReleaseSRWLockShared(a2);
  if ( v8 )
  {
    v15 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 16), 0xFFFFFFFFFFFFFFFFuLL);
    v16 = v15 <= 1;
    v14 = v15 - 1;
    if ( v16 )
    {
      if ( v14 )
        __fastfail(0xEu);
      CrmActivityCleanup(v8);
      LOBYTE(v14) = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)v8);
    }
  }
  return v14;
}
