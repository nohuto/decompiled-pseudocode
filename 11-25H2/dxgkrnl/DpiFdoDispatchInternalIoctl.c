/*
 * XREFs of DpiFdoDispatchInternalIoctl @ 0x140236D00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     DpiSharedPowerRegister @ 0x140242310 (DpiSharedPowerRegister.c)
 */

__int64 __fastcall DpiFdoDispatchInternalIoctl(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // r15
  unsigned int *v5; // rbx
  int v6; // edi
  unsigned int v7; // r8d
  unsigned int v8; // edx
  __int64 *v9; // rsi
  int v10; // eax
  __int64 v11; // r12
  __int64 v12; // r13
  _QWORD *v13; // rax
  _QWORD *v14; // rsi
  _QWORD *v15; // r15
  __int64 v16; // rdx
  __int64 v17; // r12
  __int64 v18; // r13
  unsigned int i; // esi
  __int64 (__fastcall *v20)(__int64, unsigned int **); // rax
  PRKMUTEX Mutex; // [rsp+90h] [rbp+48h] BYREF
  unsigned int *v23; // [rsp+98h] [rbp+50h] BYREF
  _QWORD *v24; // [rsp+A0h] [rbp+58h]
  PERESOURCE Resource; // [rsp+A8h] [rbp+60h]

  v2 = *(_QWORD *)(a2 + 184);
  v4 = *(_QWORD *)(a1 + 64);
  v5 = 0LL;
  v6 = -1073741637;
  v23 = 0LL;
  v7 = *(_DWORD *)(v2 + 24);
  v8 = *(_DWORD *)(v2 + 16);
  v9 = *(__int64 **)(v2 + 32);
  switch ( v7 )
  {
    case 0x23204Fu:
      if ( v8 >= 0x10 && v9 )
      {
        Mutex = (PRKMUTEX)(v4 + 3720);
        KeWaitForSingleObject((PVOID)(v4 + 3720), Executive, 0, 0, 0LL);
        v17 = v9[1];
        v6 = 0;
        v18 = *v9;
        for ( i = 0; i < *(_DWORD *)(v4 + 2708); ++i )
        {
          v20 = *(__int64 (__fastcall **)(__int64, unsigned int **))v17;
          v23 = 0LL;
          v6 = v20(v18, &v23);
          if ( v6 < 0 )
            break;
          *v23 = i;
          v23[1] = 0;
          v6 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(v17 + 8))(v18, v23);
          if ( v6 < 0 )
          {
            (*(void (__fastcall **)(__int64, unsigned int *))(v17 + 16))(v18, v23);
            break;
          }
        }
        KeReleaseMutex(Mutex, 0);
      }
      else
      {
        v6 = -1073741789;
        WdLogSingleEntry1(2LL, -1073741789LL);
        WdLogGlobalForLineNumber = 2394;
      }
      break;
    case 0x232053u:
      if ( v8 >= 0x10 && v9 )
      {
        v11 = v9[1];
        v6 = 0;
        v12 = *v9;
        KeEnterCriticalRegion();
        Resource = (PERESOURCE)(v4 + 3440);
        ExAcquireResourceSharedLite((PERESOURCE)(v4 + 3440), 1u);
        v13 = (_QWORD *)(v4 + 3600);
        v14 = *(_QWORD **)(v4 + 3600);
        v24 = (_QWORD *)(v4 + 3600);
        while ( v14 != v13 )
        {
          v15 = v14 - 4;
          v14 = (_QWORD *)*v14;
          Mutex = 0LL;
          if ( *(_DWORD *)v15 == 1 )
          {
            v6 = (*(__int64 (__fastcall **)(__int64, PRKMUTEX *))v11)(v12, &Mutex);
            if ( v6 < 0 )
              break;
            v16 = *((int *)v15 + 4);
            if ( *((_DWORD *)v15 + 4) == 1 || (unsigned int)(*((_DWORD *)v15 + 4) - 3) < 2 )
            {
              LODWORD(Mutex->Header.WaitListHead.Flink) = v16;
            }
            else
            {
              WdLogSingleEntry2(2LL, v16, -1073741811LL);
              WdLogGlobalForLineNumber = 2566;
            }
            Mutex->Header.LockNV = *((_DWORD *)v15 + 6);
            Mutex->Header.SignalState = *((_DWORD *)v15 + 1);
            HIDWORD(Mutex->Header.WaitListHead.Flink) = *((_DWORD *)v15 + 2);
            LOBYTE(Mutex->Header.WaitListHead.Blink) = *((_BYTE *)v15 + 12);
            v6 = (*(__int64 (__fastcall **)(__int64, PRKMUTEX))(v11 + 8))(v12, Mutex);
            v13 = v24;
            if ( v6 < 0 )
            {
              (*(void (__fastcall **)(__int64, PRKMUTEX))(v11 + 16))(v12, Mutex);
              break;
            }
          }
        }
        ExReleaseResourceLite(Resource);
        KeLeaveCriticalRegion();
      }
      else
      {
        v6 = -1073741789;
        WdLogSingleEntry1(2LL, -1073741789LL);
        WdLogGlobalForLineNumber = 2491;
      }
      break;
    case 0x232807u:
      v10 = DpiSharedPowerRegister(a1, v8, (_DWORD)v9, v8, *(_QWORD *)(a2 + 112), *(_DWORD *)(v2 + 8), (__int64)&v23);
      v5 = v23;
      v6 = v10;
      break;
    default:
      WdLogSingleEntry1(3LL, v7);
      WdLogGlobalForLineNumber = 2617;
      break;
  }
  *(_DWORD *)(a2 + 48) = v6;
  *(_QWORD *)(a2 + 56) = v5;
  IofCompleteRequest((PIRP)a2, 1);
  return (unsigned int)v6;
}
