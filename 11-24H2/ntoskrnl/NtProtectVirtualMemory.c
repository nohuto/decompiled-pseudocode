/*
 * XREFs of NtProtectVirtualMemory @ 0x1408DA8B0
 * Callers:
 *     <none>
 * Callees:
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     MiMakeProtectionMask @ 0x14034C5B0 (MiMakeProtectionMask.c)
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 *     PsIsProcessLoggingEnabled @ 0x14040A430 (PsIsProcessLoggingEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 *     MmProtectVirtualMemory @ 0x1408DAC60 (MmProtectVirtualMemory.c)
 *     EtwTiLogProtectExecVm @ 0x1408DB660 (EtwTiLogProtectExecVm.c)
 */

NTSTATUS __cdecl NtProtectVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        PSIZE_T RegionSize,
        ULONG NewProtect,
        PULONG OldProtect)
{
  __int64 v5; // r13
  PSIZE_T v6; // r9
  PVOID *v7; // r8
  HANDLE v8; // r11
  PULONG v9; // r10
  int v10; // ebx
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // r12
  char PreviousMode; // dl
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  char *v17; // rcx
  ULONG_PTR v18; // r14
  NTSTATUS result; // eax
  _QWORD *v20; // rdi
  __int64 v21; // rsi
  NTSTATUS v22; // esi
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // eax
  char v26; // r11
  char v27; // [rsp+40h] [rbp-128h]
  ULONG v28; // [rsp+44h] [rbp-124h] BYREF
  char v29[8]; // [rsp+48h] [rbp-120h] BYREF
  PVOID BaseAddressa; // [rsp+50h] [rbp-118h] BYREF
  int ProtectionMask; // [rsp+58h] [rbp-110h]
  PVOID Object; // [rsp+60h] [rbp-108h] BYREF
  PSIZE_T v33; // [rsp+68h] [rbp-100h]
  PVOID *v34; // [rsp+70h] [rbp-F8h]
  PULONG v35; // [rsp+78h] [rbp-F0h]
  _OWORD v36[3]; // [rsp+80h] [rbp-E8h] BYREF
  char v37[8]; // [rsp+B0h] [rbp-B8h] BYREF
  __int64 v38; // [rsp+B8h] [rbp-B0h]
  _KPROCESS *v39; // [rsp+C0h] [rbp-A8h]
  PVOID v40; // [rsp+C8h] [rbp-A0h]
  ULONG_PTR v41; // [rsp+D0h] [rbp-98h]
  __int64 v42; // [rsp+D8h] [rbp-90h]

  v5 = NewProtect;
  v6 = RegionSize;
  v33 = RegionSize;
  v7 = BaseAddress;
  v34 = BaseAddress;
  v8 = ProcessHandle;
  v9 = OldProtect;
  v35 = OldProtect;
  memset(v36, 0, sizeof(v36));
  v10 = 0;
  Object = 0LL;
  BaseAddressa = 0LL;
  *(_QWORD *)v29 = 0LL;
  v28 = 0;
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
  PreviousMode = CurrentThread->PreviousMode;
  v27 = PreviousMode;
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
    *(_QWORD *)v29 = *v6;
    PreviousMode = v27;
  }
  else
  {
    v18 = *v6;
    *(_QWORD *)v29 = *v6;
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
      KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v36);
      v10 = 1;
    }
    v21 = v20[46];
    if ( (v21 & 1) != 0 )
    {
      memset_0(v37, 0, 0x68uLL);
      v38 = v21;
      v39 = Process;
      v40 = BaseAddressa;
      v41 = *(_QWORD *)v29;
      v42 = v5;
      v22 = VslpEnterIumSecureMode(2u, 0x28u, 0, (__int64)v37);
      if ( v22 >= 0 )
      {
        BaseAddressa = v40;
        *(_QWORD *)v29 = v41;
        v28 = v42;
      }
    }
    else
    {
      v22 = MmProtectVirtualMemory(
              (_DWORD)Process,
              (_DWORD)v20,
              (unsigned int)&BaseAddressa,
              (unsigned int)v29,
              v5,
              (__int64)&v28);
    }
    LODWORD(Object) = v22;
    if ( v10 )
      KiUnstackDetachProcess((__int64)v36, 0, v23, v24);
    if ( v22 >= 0
      && (((unsigned __int8)MiMakeProtectionMask(v28 & 0xFFF807FF) | (unsigned __int8)ProtectionMask) & 2) != 0 )
    {
      LOBYTE(v25) = PsIsProcessLoggingEnabled((__int64)Process, (__int64)v20, 8);
      if ( v25 )
        EtwTiLogProtectExecVm((ULONG_PTR)v20, BaseAddressa, v29[0], v5, v26);
    }
    ObfDereferenceObjectWithTag(v20, 0x76506D4Du);
    *v33 = *(_QWORD *)v29;
    *v34 = BaseAddressa;
    *v35 = v28;
    return v22;
  }
  return result;
}
