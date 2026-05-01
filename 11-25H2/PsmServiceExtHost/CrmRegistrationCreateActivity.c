/*
 * XREFs of CrmRegistrationCreateActivity @ 0x180031620
 * Callers:
 *     CrmSrvActivityAllocate @ 0x180030EE8 (CrmSrvActivityAllocate.c)
 *     CrmRpcSrvActivityAllocate @ 0x180031280 (CrmRpcSrvActivityAllocate.c)
 *     CrmRegistrationStartWithActivity @ 0x18006E604 (CrmRegistrationStartWithActivity.c)
 * Callees:
 *     CrmActivityStart @ 0x18002D920 (CrmActivityStart.c)
 *     CrmActivityDereference @ 0x180032160 (CrmActivityDereference.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

__int64 __fastcall CrmRegistrationCreateActivity(__int64 a1, unsigned int a2, _BYTE *a3, _QWORD *a4)
{
  _QWORD *Heap; // rax
  _QWORD *v9; // rdi
  int v10; // ebx
  int v11; // ebx
  _QWORD *v12; // rdx
  _DWORD v14[2]; // [rsp+30h] [rbp-69h] BYREF
  __int64 v15; // [rsp+38h] [rbp-61h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-49h] BYREF
  void *v18; // [rsp+60h] [rbp-39h]
  int v19; // [rsp+68h] [rbp-31h]
  int v20; // [rsp+6Ch] [rbp-2Dh]
  UUID *v21; // [rsp+70h] [rbp-29h]
  __int64 v22; // [rsp+78h] [rbp-21h]
  __int64 *v23; // [rsp+80h] [rbp-19h]
  __int64 v24; // [rsp+88h] [rbp-11h]
  _DWORD *v25; // [rsp+90h] [rbp-9h]
  __int64 v26; // [rsp+98h] [rbp-1h]

  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x178uLL);
  v9 = Heap;
  if ( Heap )
  {
    memset_0(Heap, 0, 0x178uLL);
    v9[5] = -1LL;
    *((_OWORD *)v9 + 5) = 0LL;
    RtlInitializeSRWLock(v9 + 10);
    *((_DWORD *)v9 + 22) = 0;
    v9[2] = 1LL;
    v9[6] = a1;
    *((_DWORD *)v9 + 31) = 4;
    v9[21] = -1LL;
    v9[22] = -1LL;
    *((_DWORD *)v9 + 46) = 3;
    v9[27] = -1LL;
    v9[31] = -1LL;
    v9[34] = -1LL;
    v9[32] = -1LL;
    v9[35] = -1LL;
    v9[33] = -1LL;
    v9[36] = -1LL;
    v10 = CrmActivityStart((__int64)v9, a1, a2, a3, (void *)(a1 + 72));
    if ( v10 < 0 )
    {
      CrmActivityDereference(v9);
    }
    else
    {
      if ( a4 )
      {
        if ( _InterlockedIncrement64(v9 + 2) <= 1 )
          __fastfail(0xEu);
        *a4 = v9;
      }
      v11 = *((_DWORD *)v9 + 17);
      RtlAcquireSRWLockExclusive(a1);
      *(_DWORD *)(a1 + 8) = GetCurrentThreadId();
      v12 = *(_QWORD **)(a1 + 64);
      if ( *v12 != a1 + 56 )
        __fastfail(3u);
      *v9 = a1 + 56;
      v9[1] = v12;
      *v12 = v9;
      *(_QWORD *)(a1 + 64) = v9;
      *(_DWORD *)(a1 + 8) = 0;
      RtlReleaseSRWLockExclusive(a1);
      if ( (unsigned int)dword_1800E72E8 > 5 && (qword_1800E72F8 & 2) != 0 && (qword_1800E7300 & 2) == qword_1800E7300 )
      {
        v22 = 16LL;
        v21 = &Uuid;
        v15 = *(_QWORD *)(a1 + 16);
        v24 = 8LL;
        v23 = &v15;
        v14[0] = v11;
        v25 = v14;
        *(_DWORD *)&EventDescriptor.Level = 5;
        UserData.Ptr = (ULONGLONG)off_1800E72F0;
        v26 = 4LL;
        *(_DWORD *)&EventDescriptor.Id = 184549376;
        EventDescriptor.Keyword = 2LL;
        UserData.Size = *(unsigned __int16 *)off_1800E72F0;
        v18 = &unk_1800D23E9;
        UserData.Reserved = 2;
        v19 = 67;
        v20 = 1;
        v14[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
        EventWriteTransfer(qword_1800E7308, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
      }
      return 0;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v10;
}
