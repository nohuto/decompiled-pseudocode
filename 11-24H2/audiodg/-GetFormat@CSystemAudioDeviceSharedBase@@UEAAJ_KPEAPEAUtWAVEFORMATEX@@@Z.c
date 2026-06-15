/*
 * XREFs of ?GetFormat@CSystemAudioDeviceSharedBase@@UEAAJ_KPEAPEAUtWAVEFORMATEX@@@Z @ 0x140071C80
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002C920 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 *     WPP_SF_D @ 0x1400659FC (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140065CDC (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::GetFormat(
        CSystemAudioDeviceSharedBase *this,
        __int64 a2,
        struct tWAVEFORMATEX **a3)
{
  __int64 v5; // rcx
  __int64 v6; // rdx
  int v7; // ebx
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+20h] [rbp-38h] BYREF
  __int128 v10; // [rsp+28h] [rbp-30h]
  __int128 v11; // [rsp+38h] [rbp-20h] BYREF

  v10 = *(_OWORD *)((char *)this + 104);
  v11 = v10;
  EtwEventActivityIdControl(4LL, &v11);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 1);
  v5 = *((_QWORD *)this + 23);
  v6 = *((_QWORD *)this + 21);
  v9 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 40);
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, struct tWAVEFORMATEX **))(*(_QWORD *)v5 + 104LL))(v5, v6, a3);
  if ( v7 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x16u,
        (__int64)&WPP_14fbdab4759831348651410bb2c6c307_Traceguids,
        v7);
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceSharedBase::GetFormat", 437, v7);
  }
  CSAutoLock<1>::~CSAutoLock<1>(&v9);
  EtwEventActivityIdControl(4LL, &v11);
  return (unsigned int)v7;
}
