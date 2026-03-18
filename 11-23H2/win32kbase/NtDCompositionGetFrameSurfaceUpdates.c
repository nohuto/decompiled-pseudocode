/*
 * XREFs of NtDCompositionGetFrameSurfaceUpdates @ 0x1C0090510
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C0083E50 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionGetFrameSurfaceUpdates(ULONG64 a1, ULONG64 a2, _DWORD *a3)
{
  _DWORD *v4; // r15
  int v5; // r12d
  DirectComposition::CConnection *v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v10; // rax
  struct _ERESOURCE *v11; // rbx
  int v12; // eax
  __int64 v13; // rcx
  struct _ERESOURCE *v15; // rsi
  signed int v16; // [rsp+30h] [rbp-58h]
  __int64 v17; // [rsp+38h] [rbp-50h] BYREF
  __int64 v18; // [rsp+40h] [rbp-48h]
  unsigned __int64 v19; // [rsp+48h] [rbp-40h] BYREF
  _QWORD v20[7]; // [rsp+50h] [rbp-38h] BYREF
  int v21; // [rsp+90h] [rbp+8h] BYREF
  ULONG64 v22; // [rsp+98h] [rbp+10h]
  _DWORD *v23; // [rsp+A0h] [rbp+18h]
  int v24; // [rsp+A8h] [rbp+20h]

  v23 = a3;
  v22 = a2;
  v4 = (_DWORD *)a2;
  v21 = 0;
  v5 = 0;
  v24 = 0;
  v18 = 0LL;
  if ( a1 )
  {
    a2 = a1 + 8;
    if ( a1 + 8 < a1 || a2 > MmUserProbeAddress )
      a1 = MmUserProbeAddress;
    v18 = *(_QWORD *)a1;
    a1 = v18 == 0 ? 0xC000000D : 0;
    v16 = v18 == 0 ? 0xC000000D : 0;
  }
  else
  {
    v16 = -1073741811;
  }
  if ( v16 >= 0 )
  {
    if ( PsGetCurrentProcess(a1, a2, a3) == *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
    {
      KeEnterCriticalRegion();
      v6 = 0LL;
      v7 = 0LL;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
      if ( CurrentProcessWin32Process )
      {
        v10 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
        if ( v10 )
          v7 = *(_QWORD *)(v10 + 256);
      }
      if ( v7 )
      {
        v11 = *(struct _ERESOURCE **)(v7 + 32);
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite(v11, 1u);
        v6 = *(DirectComposition::CConnection **)(v7 + 24);
        if ( v6 )
          _InterlockedIncrement((volatile signed __int32 *)v6);
        ExReleaseResourceLite(*(PERESOURCE *)(v7 + 32));
        KeLeaveCriticalRegion();
      }
      if ( v6 )
        goto LABEL_16;
      v15 = DirectComposition::CConnection::s_pSessionConnectionLock;
      if ( DirectComposition::CConnection::s_pSessionConnectionLock )
      {
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite(v15, 1u);
        v6 = DirectComposition::CConnection::s_pSessionConnection;
        if ( DirectComposition::CConnection::s_pSessionConnection )
          _InterlockedIncrement((volatile signed __int32 *)DirectComposition::CConnection::s_pSessionConnection);
        ExReleaseResourceLite(DirectComposition::CConnection::s_pSessionConnectionLock);
        KeLeaveCriticalRegion();
      }
      if ( v6 )
      {
LABEL_16:
        v17 = 0LL;
        v12 = -1073741275;
        v13 = *((_QWORD *)v6 + 23);
        if ( v13 )
          v12 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v13 + 32LL))(v13, v18, &v17);
        v16 = v12;
        if ( v12 >= 0 )
        {
          v20[0] = 0LL;
          v19 = 0LL;
          v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, unsigned __int64 *))(**((_QWORD **)v6 + 33) + 56LL))(
                  *((_QWORD *)v6 + 33),
                  v20,
                  &v19);
          if ( v16 >= 0 )
            v5 = (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, unsigned __int64, int *))(*(_QWORD *)v17 + 48LL))(
                   v17,
                   v20[0],
                   v19 / 0xE0,
                   &v21);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
        }
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v6, 0xFFFFFFFF) == 1 )
          DirectComposition::CConnection::`scalar deleting destructor'(v6);
      }
      else
      {
        v16 = -1073741790;
      }
      KeLeaveCriticalRegion();
    }
    else
    {
      v16 = -1073741790;
    }
  }
  if ( v4 + 1 < v4 || (unsigned __int64)(v4 + 1) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *v4 = v21;
  if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *a3 = v5;
  return (unsigned int)v16;
}
