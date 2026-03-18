/*
 * XREFs of NtDCompositionGetFrameLegacyTokens @ 0x1C0090220
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C0083E50 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00D6F00 (memmove.c)
 */

__int64 __fastcall NtDCompositionGetFrameLegacyTokens(ULONG64 a1, ULONG64 a2, _DWORD *a3)
{
  _DWORD *v4; // r15
  int v5; // r13d
  int v6; // r12d
  DirectComposition::CConnection *v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v11; // rax
  struct _ERESOURCE *v12; // rbx
  int v13; // eax
  __int64 v14; // rcx
  struct _ERESOURCE *v16; // rsi
  signed int v17; // [rsp+30h] [rbp-68h]
  void *v18; // [rsp+38h] [rbp-60h] BYREF
  unsigned __int64 v19; // [rsp+40h] [rbp-58h] BYREF
  __int64 v20; // [rsp+48h] [rbp-50h] BYREF
  __int64 v21; // [rsp+50h] [rbp-48h]
  void *Src; // [rsp+58h] [rbp-40h] BYREF
  size_t Size; // [rsp+A0h] [rbp+8h] BYREF
  ULONG64 v24; // [rsp+A8h] [rbp+10h]
  _DWORD *v25; // [rsp+B0h] [rbp+18h]
  int v26; // [rsp+B8h] [rbp+20h] BYREF

  v25 = a3;
  v24 = a2;
  v4 = (_DWORD *)a2;
  v5 = 0;
  LODWORD(Size) = 0;
  v6 = 0;
  v21 = 0LL;
  if ( a1 )
  {
    a2 = a1 + 8;
    if ( a1 + 8 < a1 || a2 > MmUserProbeAddress )
      a1 = MmUserProbeAddress;
    v21 = *(_QWORD *)a1;
    a1 = v21 == 0 ? 0xC000000D : 0;
    v17 = v21 == 0 ? 0xC000000D : 0;
  }
  else
  {
    v17 = -1073741811;
  }
  if ( v17 >= 0 )
  {
    if ( PsGetCurrentProcess(a1, a2, a3) == *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
    {
      KeEnterCriticalRegion();
      v7 = 0LL;
      v8 = 0LL;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9);
      if ( CurrentProcessWin32Process )
      {
        v11 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
        if ( v11 )
          v8 = *(_QWORD *)(v11 + 256);
      }
      if ( v8 )
      {
        v12 = *(struct _ERESOURCE **)(v8 + 32);
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite(v12, 1u);
        v7 = *(DirectComposition::CConnection **)(v8 + 24);
        if ( v7 )
          _InterlockedIncrement((volatile signed __int32 *)v7);
        ExReleaseResourceLite(*(PERESOURCE *)(v8 + 32));
        KeLeaveCriticalRegion();
      }
      if ( v7 )
        goto LABEL_16;
      v16 = DirectComposition::CConnection::s_pSessionConnectionLock;
      if ( DirectComposition::CConnection::s_pSessionConnectionLock )
      {
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite(v16, 1u);
        v7 = DirectComposition::CConnection::s_pSessionConnection;
        if ( DirectComposition::CConnection::s_pSessionConnection )
          _InterlockedIncrement((volatile signed __int32 *)DirectComposition::CConnection::s_pSessionConnection);
        ExReleaseResourceLite(DirectComposition::CConnection::s_pSessionConnectionLock);
        KeLeaveCriticalRegion();
      }
      if ( v7 )
      {
LABEL_16:
        v20 = 0LL;
        v13 = -1073741275;
        v14 = *((_QWORD *)v7 + 23);
        if ( v14 )
          v13 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v14 + 32LL))(v14, v21, &v20);
        v17 = v13;
        if ( v13 >= 0 )
        {
          v18 = 0LL;
          v19 = 0LL;
          v17 = (*(__int64 (__fastcall **)(_QWORD, void **, unsigned __int64 *))(**((_QWORD **)v7 + 33) + 56LL))(
                  *((_QWORD *)v7 + 33),
                  &v18,
                  &v19);
          if ( v17 >= 0 )
          {
            do
            {
              Src = 0LL;
              LODWORD(Size) = 0;
              v26 = 0;
              v6 = (*(unsigned __int8 (__fastcall **)(__int64, void **, size_t *, int *))(*(_QWORD *)v20 + 40LL))(
                     v20,
                     &Src,
                     &Size,
                     &v26);
              if ( (_DWORD)Size )
              {
                memmove(v18, Src, (unsigned int)Size);
                v18 = (char *)v18 + (unsigned int)Size;
                v19 -= (unsigned int)Size;
                v5 += v26;
              }
            }
            while ( v6 && v19 >= 0x800 );
          }
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
        }
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v7, 0xFFFFFFFF) == 1 )
          DirectComposition::CConnection::`scalar deleting destructor'(v7);
      }
      else
      {
        v17 = -1073741790;
      }
      KeLeaveCriticalRegion();
    }
    else
    {
      v17 = -1073741790;
    }
  }
  if ( v4 + 1 < v4 || (unsigned __int64)(v4 + 1) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *v4 = v5;
  if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *a3 = v6;
  return (unsigned int)v17;
}
