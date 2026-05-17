/*
 * XREFs of RtlWow64GetProcessMachines @ 0x1800696C0
 * Callers:
 *     LdrpGetModuleName @ 0x18006A990 (LdrpGetModuleName.c)
 *     DbgUiIssueRemoteBreakin @ 0x180134550 (DbgUiIssueRemoteBreakin.c)
 * Callees:
 *     NtQuerySystemInformationEx @ 0x180165FD0 (NtQuerySystemInformationEx.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1801678D0 (_alloca_probe.c)
 */

__int64 __fastcall RtlWow64GetProcessMachines(__int64 a1, _WORD *a2, __int16 *a3)
{
  __int64 v3; // rbx
  int v6; // r9d
  __int16 v7; // dx
  __int16 v8; // cx
  __int64 result; // rax
  unsigned int *v10; // r14
  unsigned int v11; // r8d
  bool v12; // zf
  struct _TEB *v13; // rcx
  __int64 WowTebOffset; // rax
  _WORD *v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  void *v18; // rsp
  void *v19; // rsp
  unsigned int v20; // [rsp+30h] [rbp+0h] BYREF
  __int64 v21; // [rsp+38h] [rbp+8h] BYREF
  _BYTE v22[24]; // [rsp+40h] [rbp+10h] BYREF

  LODWORD(v3) = 0;
  v21 = a1;
  v6 = 0;
  if ( a1 == -1 )
  {
    if ( !NtCurrentTeb()->WowTebOffset )
    {
      v7 = 0;
      v8 = -31132;
      goto LABEL_4;
    }
    v13 = NtCurrentTeb();
    WowTebOffset = v13->WowTebOffset;
    if ( (int)WowTebOffset < 0 )
      v13 = (struct _TEB *)((char *)v13 + WowTebOffset);
    if ( (_DWORD)v13 == LODWORD(v13->NtTib.SubSystemTib) )
      v15 = (_WORD *)LODWORD(v13->glDispatchTable[137]);
    else
      v15 = v13->TlsSlots[10];
    if ( v15 )
    {
      v7 = v15[17];
      if ( v7 )
      {
        v8 = v15[16];
        if ( v8 )
          goto LABEL_4;
      }
    }
  }
  v20 = 20;
  v10 = (unsigned int *)v22;
  v6 = ((__int64 (__fastcall *)(__int64, __int64 *, __int64, _BYTE *, int, unsigned int *))NtQuerySystemInformationEx)(
         230LL,
         &v21,
         8LL,
         v22,
         20,
         &v20);
  if ( v6 == -1073741789 )
  {
    v16 = v20 + 15LL;
    if ( v16 <= v20 )
      v16 = 0xFFFFFFFFFFFFFF0LL;
    v17 = v16 & 0xFFFFFFFFFFFFFFF0uLL;
    v18 = alloca(v17);
    v19 = alloca(v17);
    v10 = &v20;
    v6 = ((__int64 (__fastcall *)(__int64, __int64 *, __int64, unsigned int *, unsigned int, unsigned int *))NtQuerySystemInformationEx)(
           230LL,
           &v21,
           8LL,
           &v20,
           v20,
           &v20);
  }
  if ( v6 < 0 )
    return (unsigned int)v6;
  v11 = *v10;
  v7 = 0;
  v8 = 0;
  while ( (_WORD)v11 )
  {
    if ( (v11 & 0x80000) != 0 )
    {
      v12 = (v11 & 0x40000) == 0;
      if ( (v11 & 0x40000) != 0 )
        goto LABEL_13;
      if ( (v11 & 0x100000) != 0 )
        v7 = v11;
    }
    v12 = (v11 & 0x40000) == 0;
LABEL_13:
    if ( v12 )
      LOWORD(v11) = v8;
    v3 = (unsigned int)(v3 + 1);
    v8 = v11;
    v11 = v10[v3];
  }
LABEL_4:
  *a2 = v7;
  result = (unsigned int)v6;
  if ( a3 )
    *a3 = v8;
  return result;
}
