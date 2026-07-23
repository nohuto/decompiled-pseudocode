/*
 * XREFs of NtProtectVirtualMemory @ 0x1408F7510
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     VslpEnterIumSecureMode @ 0x140282F50 (VslpEnterIumSecureMode.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     MiMakeProtectionMask @ 0x1402C2BF0 (MiMakeProtectionMask.c)
 *     PsIsProcessLoggingEnabled @ 0x14041D370 (PsIsProcessLoggingEnabled.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084FA30 (ObpReferenceObjectByHandleWithTag.c)
 *     MmProtectVirtualMemory @ 0x1408F78C8 (MmProtectVirtualMemory.c)
 *     EtwTiLogProtectExecVm @ 0x1408F8258 (EtwTiLogProtectExecVm.c)
 */

NTSTATUS __cdecl NtProtectVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        PSIZE_T RegionSize,
        ULONG NewProtect,
        PULONG OldProtect)
{
  __int64 v5; // r12
  PSIZE_T v6; // r9
  PVOID *v7; // r8
  HANDLE v8; // r10
  PULONG v9; // r11
  int v10; // ebx
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // r13
  char PreviousMode; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  char *v17; // rcx
  ULONG_PTR v18; // rdi
  NTSTATUS result; // eax
  _QWORD *v20; // r15
  __int64 v21; // r13
  NTSTATUS v22; // r13d
  int v23; // eax
  char v24; // r11
  ULONG v25; // [rsp+40h] [rbp-138h] BYREF
  char v26[8]; // [rsp+48h] [rbp-130h] BYREF
  PVOID BaseAddressa; // [rsp+50h] [rbp-128h] BYREF
  int ProtectionMask; // [rsp+58h] [rbp-120h]
  PVOID Object; // [rsp+60h] [rbp-118h] BYREF
  _KPROCESS *v30; // [rsp+68h] [rbp-110h]
  PSIZE_T v31; // [rsp+70h] [rbp-108h]
  PVOID *v32; // [rsp+78h] [rbp-100h]
  PULONG v33; // [rsp+80h] [rbp-F8h]
  _OWORD v34[3]; // [rsp+88h] [rbp-F0h] BYREF
  char v35[8]; // [rsp+C0h] [rbp-B8h] BYREF
  __int64 v36; // [rsp+C8h] [rbp-B0h]
  __int64 v37; // [rsp+D0h] [rbp-A8h]
  PVOID v38; // [rsp+D8h] [rbp-A0h]
  ULONG_PTR v39; // [rsp+E0h] [rbp-98h]
  __int64 v40; // [rsp+E8h] [rbp-90h]

  v5 = NewProtect;
  v6 = RegionSize;
  v31 = RegionSize;
  v7 = BaseAddress;
  v32 = BaseAddress;
  v8 = ProcessHandle;
  v9 = OldProtect;
  v33 = OldProtect;
  memset(v34, 0, sizeof(v34));
  v10 = 0;
  Object = 0LL;
  BaseAddressa = 0LL;
  *(_QWORD *)v26 = 0LL;
  v25 = 0;
  if ( (_DWORD)v5 == 0x80000000 || (_DWORD)v5 == 0x10000000 )
  {
    ProtectionMask = 24;
  }
  else
  {
    ProtectionMask = MiMakeProtectionMask(v5 & 0xFF807FF);
    if ( ProtectionMask == -1 )
      return -1073741755;
  }
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v30 = Process;
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v14 = 0x7FFFFFFF0000LL;
    v15 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v7 < 0x7FFFFFFF0000LL )
      v15 = (__int64)v7;
    *(_QWORD *)v15 = *(_QWORD *)v15;
    v16 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v6 < 0x7FFFFFFF0000LL )
      v16 = (__int64)v6;
    *(_QWORD *)v16 = *(_QWORD *)v16;
    if ( (unsigned __int64)v9 < 0x7FFFFFFF0000LL )
      v14 = (__int64)v9;
    *(_DWORD *)v14 = *(_DWORD *)v14;
    v17 = (char *)*v7;
    BaseAddressa = *v7;
    v18 = *v6;
    *(_QWORD *)v26 = *v6;
  }
  else
  {
    v18 = *v6;
    *(_QWORD *)v26 = *v6;
    v17 = (char *)*v7;
    BaseAddressa = *v7;
  }
  if ( !v18 || &v17[v18 - 1] < v17 || (unsigned __int64)&v17[v18 - 1] > 0x7FFFFFFEFFFFLL )
    return -1073741811;
  result = ObpReferenceObjectByHandleWithTag(
             (ULONG_PTR)v8,
             8,
             (__int64)PsProcessType,
             PreviousMode,
             0x76506D4Du,
             &Object,
             0LL,
             0LL);
  if ( result >= 0 )
  {
    v20 = Object;
    if ( Process != Object )
    {
      KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v34);
      v10 = 1;
    }
    v21 = v20[46];
    if ( (v21 & 1) != 0 )
    {
      memset_0(v35, 0, 0x68uLL);
      v36 = v21;
      v37 = (__int64)v30;
      v38 = BaseAddressa;
      v39 = *(_QWORD *)v26;
      v40 = v5;
      v22 = VslpEnterIumSecureMode(2u, 0x28u, 0, (__int64)v35);
      if ( v22 >= 0 )
      {
        BaseAddressa = v38;
        *(_QWORD *)v26 = v39;
        v25 = v40;
      }
    }
    else
    {
      v22 = MmProtectVirtualMemory(
              (_DWORD)v30,
              (_DWORD)v20,
              (unsigned int)&BaseAddressa,
              (unsigned int)v26,
              v5,
              (__int64)&v25);
    }
    LODWORD(Object) = v22;
    if ( v10 )
      KiUnstackDetachProcess((__int64)v34, 0LL);
    if ( v22 >= 0
      && (((unsigned __int8)MiMakeProtectionMask(v25 & 0xFFF807FF) | (unsigned __int8)ProtectionMask) & 2) != 0 )
    {
      LOBYTE(v23) = PsIsProcessLoggingEnabled((__int64)v30, (__int64)v20, 8);
      if ( v23 )
        EtwTiLogProtectExecVm((ULONG_PTR)v20, BaseAddressa, v26[0], v5, v24);
    }
    ObfDereferenceObjectWithTag(v20, 0x76506D4Du);
    *v31 = *(_QWORD *)v26;
    *v32 = BaseAddressa;
    *v33 = v25;
    return v22;
  }
  return result;
}
