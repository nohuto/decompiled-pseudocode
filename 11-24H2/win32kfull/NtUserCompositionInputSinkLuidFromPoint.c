/*
 * XREFs of NtUserCompositionInputSinkLuidFromPoint @ 0x1401BEFD0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x14019552C (-IsCurrentProcessDwm@@YAHXZ.c)
 *     RequestInputSinkInfoFromPoint @ 0x1401C30E4 (RequestInputSinkInfoFromPoint.c)
 *     LeaveDitCompositionInputSinkQueryCrit_ @ 0x1401F7A94 (LeaveDitCompositionInputSinkQueryCrit_.c)
 *     EnterDitCompositionInputSinkQueryCrit_ @ 0x1401FADC0 (EnterDitCompositionInputSinkQueryCrit_.c)
 *     RtlCopyFromUser @ 0x14026E428 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140340280 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall NtUserCompositionInputSinkLuidFromPoint(
        int a1,
        void *a2,
        volatile void *a3,
        _QWORD *a4,
        _OWORD *Address)
{
  void *v9; // rsi
  __int64 v10; // rcx
  int v11; // ecx
  int v12; // ebx
  ULONG64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 CurrentProcessWow64Process; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  char v22; // al
  _QWORD v24[7]; // [rsp+38h] [rbp-130h] BYREF
  _OWORD v25[4]; // [rsp+70h] [rbp-F8h] BYREF
  int v26; // [rsp+B0h] [rbp-B8h] BYREF
  __int64 v27; // [rsp+B4h] [rbp-B4h]
  int v28; // [rsp+BCh] [rbp-ACh]
  _BYTE Src[12]; // [rsp+C4h] [rbp-A4h] BYREF
  __int64 v30; // [rsp+D0h] [rbp-98h]
  _BYTE v31[72]; // [rsp+D8h] [rbp-90h] BYREF

  v9 = Address;
  EnterDitCompositionInputSinkQueryCrit_();
  EnterCrit(0LL, 0LL);
  memset_0(&v26, 0, 0x70uLL);
  if ( a1 != 6 && a1 )
  {
    v11 = 87;
LABEL_4:
    v12 = 0;
    UserSetLastError(v11);
    goto LABEL_22;
  }
  if ( (unsigned int)IsCurrentProcessDwm(v10) )
  {
    v11 = 5;
    goto LABEL_4;
  }
  v24[0] = 0LL;
  RtlCopyFromUser(v24, a2, 8uLL);
  v27 = v24[0];
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v15, v14, v16);
  ProbeForWrite(a3, 8uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
  v26 |= 1u;
  if ( a4 )
  {
    ProbeForWrite(a4, 8uLL, 8u);
    v26 |= 2u;
    *a4 = 0LL;
  }
  if ( Address )
  {
    v21 = PsGetCurrentProcessWow64Process(v19, v18, v20);
    ProbeForWrite(Address, 0x40uLL, v21 != 0 ? 1 : 4);
    v26 |= 4u;
    memset_0(v25, 0, sizeof(v25));
    *Address = v25[0];
    Address[1] = v25[1];
    Address[2] = v25[2];
    Address[3] = v25[3];
  }
  v28 = a1;
  v12 = RequestInputSinkInfoFromPoint(&v26);
  if ( v12 )
  {
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      a3 = (volatile void *)MmUserProbeAddress;
    RtlCopyVolatileMemory((void *)a3, Src, 8uLL);
    v22 = v26;
    v13 = MmUserProbeAddress;
    if ( (v26 & 2) != 0 )
    {
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        a4 = (_QWORD *)MmUserProbeAddress;
      *a4 = v30;
      v22 = v26;
    }
    if ( (v22 & 4) != 0 )
    {
      if ( (unsigned __int64)Address >= MmUserProbeAddress )
        v9 = (void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(v9, v31, 0x40uLL);
    }
  }
LABEL_22:
  UserSessionSwitchLeaveCrit(v13);
  LeaveDitCompositionInputSinkQueryCrit_();
  return v12;
}
