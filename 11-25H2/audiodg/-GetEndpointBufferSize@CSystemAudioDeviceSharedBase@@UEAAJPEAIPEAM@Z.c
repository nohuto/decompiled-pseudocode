/*
 * XREFs of ?GetEndpointBufferSize@CSystemAudioDeviceSharedBase@@UEAAJPEAIPEAM@Z @ 0x140074090
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002CC20 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 *     WPP_SF_D @ 0x140065A6C (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140065D4C (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::GetEndpointBufferSize(
        CSystemAudioDeviceSharedBase *this,
        unsigned int *a2,
        float *a3)
{
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+20h] [rbp-48h] BYREF
  __int128 v11; // [rsp+28h] [rbp-40h]
  __int128 v12; // [rsp+38h] [rbp-30h] BYREF

  v11 = *(_OWORD *)((char *)this + 104);
  v12 = v11;
  EtwEventActivityIdControl(4LL, &v12);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 1);
  v6 = *((_QWORD *)this + 23);
  v10 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 40);
  v7 = (*(__int64 (__fastcall **)(__int64, unsigned int *, float *))(*(_QWORD *)v6 + 40LL))(v6, a2, a3);
  v8 = v7;
  if ( v7 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x12u,
        (__int64)&WPP_14fbdab4759831348651410bb2c6c307_Traceguids,
        v7);
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceSharedBase::GetEndpointBufferSize", 263, v8);
  }
  else if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x11u, (__int64)&WPP_14fbdab4759831348651410bb2c6c307_Traceguids, *a2);
  }
  CSAutoLock<1>::~CSAutoLock<1>(&v10);
  EtwEventActivityIdControl(4LL, &v12);
  return v8;
}
