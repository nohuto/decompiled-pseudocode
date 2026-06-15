/*
 * XREFs of ?Resume@CAudioPump@@UEAAJXZ @ 0x14002C010
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x140015F00 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x14001E110 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?Log_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x14001E9A8 (-Log_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 *     ?IsOffload@CAudioPump@@QEAA_NXZ @ 0x140021810 (-IsOffload@CAudioPump@@QEAA_NXZ.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x140021E30 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?SetTimer@CAudioPump@@AEAAJPEAX_J_N@Z @ 0x14002C1E0 (-SetTimer@CAudioPump@@AEAAJPEAX_J_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioPump::Resume(CAudioPump *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbp
  __int32 v3; // esi
  int v4; // edi
  void *v5; // rdx
  CAudioPump *v6; // rcx
  void *v7; // rdx
  void *v8; // rdx
  _DWORD *v9; // rcx
  const char *v11; // [rsp+28h] [rbp-20h]
  HANDLE Handles[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 128);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
  *((_DWORD *)this + 85) = 40;
  v3 = _InterlockedExchange((volatile __int32 *)this + 84, 2);
  if ( v3 == 2 )
    goto LABEL_2;
  if ( CAudioPump::IsOffload((__int64 (__fastcall **)(CAudioPump *))this) )
    *((_BYTE *)this + 4681) = 0;
  v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 26) + 48LL))(*((_QWORD *)this + 26));
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Log_IfFailedMsg(
      retaddr,
      (void *)0x52F,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp",
      (const char *)(unsigned int)v4,
      (__int64)"SetPinActive failed",
      v11);
    if ( v4 != -2147467259 )
      _InterlockedExchange((volatile __int32 *)this + 84, v3);
  }
  else if ( CAudioPump::IsOffload((__int64 (__fastcall **)(CAudioPump *))this) )
  {
    wil::details::ResetEvent(*((wil::details **)this + 54), v5);
    wil::details::SetEvent(*((wil::details **)this + 36), v7);
    Handles[0] = *((HANDLE *)this + 35);
    Handles[1] = *((HANDLE *)this + 54);
    WaitForMultipleObjects(2u, Handles, 0, 0xFFFFFFFF);
    if ( *((_BYTE *)this + 4682) )
    {
      v9 = (_DWORD *)*((_QWORD *)this + 596);
      if ( *v9 > 5u )
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
          (int)v9,
          (int)&unk_1400B0651,
          0);
      *((_BYTE *)this + 4682) = 0;
      wil::details::SetEvent(*((wil::details **)this + 39), v8);
    }
  }
  else
  {
    if ( CAudioPump::SetTimer(
           v6,
           *((void **)this + 37),
           *((_QWORD *)this + 13) * ((*((_QWORD *)this + 39) != 0LL) + 1LL),
           1) >= 0 )
    {
LABEL_2:
      v4 = 0;
      goto LABEL_16;
    }
    if ( (*(int (__fastcall **)(_QWORD))(**((_QWORD **)this + 26) + 40LL))(*((_QWORD *)this + 26)) >= 0 )
      _InterlockedExchange((volatile __int32 *)this + 84, 0);
  }
LABEL_16:
  if ( v2 )
    LeaveCriticalSection(v2);
  return (unsigned int)v4;
}
