/*
 * XREFs of IrtRemapNewMsiAssignments @ 0x1400B2850
 * Callers:
 *     IrqArbCommitAllocation @ 0x1400B1CB0 (IrqArbCommitAllocation.c)
 * Callees:
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IrtRemapNewMsiAssignments(__int64 a1)
{
  struct _RTL_RANGE_LIST *v1; // rcx
  _DWORD *UserData; // rbx
  int v3; // eax
  PVOID Owner; // rdi
  int v5; // edi
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 result; // rax
  _BYTE v10[4]; // [rsp+68h] [rbp+7h] BYREF
  unsigned int v11; // [rsp+6Ch] [rbp+Bh] BYREF
  unsigned int v12; // [rsp+70h] [rbp+Fh] BYREF
  PRTL_RANGE Range; // [rsp+78h] [rbp+17h] BYREF
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+80h] [rbp+1Fh] BYREF
  __int64 v15; // [rsp+A0h] [rbp+3Fh] BYREF
  int v16; // [rsp+A8h] [rbp+47h]

  v1 = *(struct _RTL_RANGE_LIST **)(a1 + 48);
  v15 = 0LL;
  v16 = 0;
  Range = 0LL;
  memset(&Iterator, 0, sizeof(Iterator));
  v10[0] = 0;
  RtlGetFirstRange(v1, &Iterator, &Range);
  while ( Range )
  {
    if ( Range->Owner )
    {
      if ( (Range->Attributes & 1) == 0 )
      {
        UserData = Range->UserData;
        if ( UserData )
        {
          v3 = UserData[1];
          if ( (v3 & 4) != 0 && UserData[2] == 3 )
          {
            v11 = 0;
            UserData[1] = v3 & 0xFFFFFFFB;
            v12 = 0;
            Owner = Range->Owner;
            KeEnterCriticalRegion();
            ExAcquireResourceSharedLite(&PciRouteInterfaceLock, 1u);
            if ( InterruptRouting )
            {
              v11 = -1;
              v12 = -1;
              v5 = (*((__int64 (__fastcall **)(PVOID, unsigned int *, unsigned int *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _BYTE *, __int64 *))InterruptRouting
                    + 4))(
                     Owner,
                     &v11,
                     &v12,
                     0LL,
                     0LL,
                     0LL,
                     0LL,
                     0LL,
                     0LL,
                     v10,
                     &v15);
            }
            else
            {
              v5 = -1073741275;
              v12 = 0;
              v11 = 0;
            }
            ExReleaseResourceLite(&PciRouteInterfaceLock);
            KeLeaveCriticalRegion();
            if ( v5 >= 0 )
            {
              v7 = v11;
              v8 = v12;
              LOBYTE(v6) = v10[0];
            }
            else
            {
              v10[0] = 0;
              v15 = 0LL;
              v7 = 0LL;
              v16 = 0;
              v8 = 0LL;
              LOBYTE(v6) = 0;
            }
            result = ((__int64 (__fastcall *)(__int64, __int64, __int64 *, __int64, _DWORD *, _DWORD))HalPrivateDispatchTable[64])(
                       v7,
                       v8,
                       &v15,
                       v6,
                       UserData + 8,
                       *((unsigned __int8 *)UserData + 26));
            if ( (int)result < 0 )
              return result;
          }
        }
      }
    }
    RtlGetNextRange(&Iterator, &Range, 1u);
  }
  return 0LL;
}
