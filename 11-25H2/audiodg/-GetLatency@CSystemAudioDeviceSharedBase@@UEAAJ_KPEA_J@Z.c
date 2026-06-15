/*
 * XREFs of ?GetLatency@CSystemAudioDeviceSharedBase@@UEAAJ_KPEA_J@Z @ 0x140074310
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002CC20 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 *     WPP_SF_D @ 0x140065A6C (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140065D4C (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::GetLatency(
        CSystemAudioDeviceSharedBase *this,
        __int64 a2,
        __int64 *a3)
{
  __int64 v6; // rcx
  int v7; // ebx
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+20h] [rbp-48h] BYREF
  __int128 v10; // [rsp+28h] [rbp-40h]
  __int128 v11; // [rsp+38h] [rbp-30h] BYREF

  v10 = *(_OWORD *)((char *)this + 104);
  v11 = v10;
  EtwEventActivityIdControl(4LL, &v11);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 1);
  v6 = *((_QWORD *)this + 23);
  v9 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 40);
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v6 + 48LL))(v6, a2, a3);
  if ( v7 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x13u,
        (__int64)&WPP_14fbdab4759831348651410bb2c6c307_Traceguids,
        v7);
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceSharedBase::GetLatency", 320, v7);
  }
  CSAutoLock<1>::~CSAutoLock<1>(&v9);
  EtwEventActivityIdControl(4LL, &v11);
  return (unsigned int)v7;
}
