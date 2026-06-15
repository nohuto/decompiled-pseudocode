/*
 * XREFs of ?GetClientReleaseEvent@CSystemAudioDeviceSharedBase@@UEAAJIPEAUCP_EVENT_METADATA_BLOB@@0@Z @ 0x140071A30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002C920 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::GetClientReleaseEvent(
        CSystemAudioDeviceSharedBase *this,
        unsigned int a2,
        struct CP_EVENT_METADATA_BLOB *a3,
        struct CP_EVENT_METADATA_BLOB *a4)
{
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // ebx
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+30h] [rbp-58h] BYREF
  __int128 v13; // [rsp+38h] [rbp-50h]
  __int128 v14; // [rsp+48h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v13 = *(_OWORD *)((char *)this + 104);
  v14 = v13;
  EtwEventActivityIdControl(4LL, &v14);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 1);
  v8 = *((_QWORD *)this + 23);
  v12 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 40);
  v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct CP_EVENT_METADATA_BLOB *, struct CP_EVENT_METADATA_BLOB *))(*(_QWORD *)v8 + 32LL))(
         v8,
         a2,
         a3,
         a4);
  v10 = v9;
  if ( v9 >= 0 )
    v10 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD8,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodevicesharedbase.cpp",
      (const char *)(unsigned int)v9);
  CSAutoLock<1>::~CSAutoLock<1>(&v12);
  EtwEventActivityIdControl(4LL, &v14);
  return v10;
}
