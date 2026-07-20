/*
 * XREFs of SmpReleaseControlBlock @ 0x140005FF0
 * Callers:
 *     SmpStartCsr @ 0x140004120 (SmpStartCsr.c)
 *     SmpApiCallback @ 0x140005960 (SmpApiCallback.c)
 *     SmpHandleConnectionRequest @ 0x1400061A0 (SmpHandleConnectionRequest.c)
 *     SmpStopCsr @ 0x140007B00 (SmpStopCsr.c)
 *     SmpDestroyControlBlock @ 0x140007BF4 (SmpDestroyControlBlock.c)
 * Callees:
 *     memset_0 @ 0x14001EF9F (memset_0.c)
 *     __security_check_cookie @ 0x14001EFC0 (__security_check_cookie.c)
 */

BOOLEAN __fastcall SmpReleaseControlBlock(char *BaseAddress)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  signed __int32 v4; // eax
  bool v5; // cc
  BOOLEAN result; // al
  void *v7; // rdi
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  _OWORD v10[2]; // [rsp+40h] [rbp-168h] BYREF
  __int64 v11; // [rsp+60h] [rbp-148h]
  int v12; // [rsp+68h] [rbp-140h]
  int v13; // [rsp+6Ch] [rbp-13Ch]
  int v14; // [rsp+70h] [rbp-138h]

  memset_0(v10, 0, 0x148uLL);
  v4 = _InterlockedExchangeAdd((volatile signed __int32 *)BaseAddress + 1, 0xFFFFFFFF);
  v5 = v4 <= 1;
  result = v4 - 1;
  if ( v5 )
  {
    v7 = (void *)*((_QWORD *)BaseAddress + 6);
    if ( v7 )
    {
      if ( (*BaseAddress & 1) == 0 && *((_QWORD *)BaseAddress + 9) != SmpUniqueProcessId )
      {
        v8 = *((_OWORD *)BaseAddress + 4);
        v9 = *((_OWORD *)BaseAddress + 5);
        v14 = *((_DWORD *)BaseAddress + 2);
        v10[0] = v8;
        v11 = *((_QWORD *)BaseAddress + 12);
        v10[1] = v9;
        v12 = 5;
        v13 = -1073741823;
        ((void (__fastcall *)(__int64, __int64, _OWORD *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))NtAlpcSendWaitReceivePort)(
          SmpApiConnectionPort,
          0x10000LL,
          v10,
          0LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      RtlAcquireSRWLockExclusive(&SmpControlLock, v2, v3);
      RtlDeleteNoSplay((PRTL_SPLAY_LINKS)(BaseAddress + 104), &SmpControlBlockRoot);
      RtlReleaseSRWLockExclusive(&SmpControlLock);
      NtClose(v7);
    }
    NtClose(*((HANDLE *)BaseAddress + 4));
    NtClose(*((HANDLE *)BaseAddress + 5));
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, *((PVOID *)BaseAddress + 2));
    NtClose(*((HANDLE *)BaseAddress + 3));
    return RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, BaseAddress);
  }
  return result;
}
