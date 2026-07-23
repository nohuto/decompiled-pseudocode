/*
 * XREFs of EtwTiLogProtectExecVm @ 0x1408F8258
 * Callers:
 *     NtProtectVirtualMemory @ 0x1408F7510 (NtProtectVirtualMemory.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140257AF0 (EtwWrite.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     EtwpTiFillProcessIdentity @ 0x1403BCF74 (EtwpTiFillProcessIdentity.c)
 *     EtwProviderEnabled @ 0x1403BE620 (EtwProviderEnabled.c)
 *     EtwpTiFillZeroVad @ 0x140461964 (EtwpTiFillZeroVad.c)
 *     EtwpTiFillVad @ 0x1404619CC (EtwpTiFillVad.c)
 *     EtwpTiFillThreadIdentity @ 0x14046931C (EtwpTiFillThreadIdentity.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwQueryVirtualMemory @ 0x14069B5A0 (ZwQueryVirtualMemory.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void EtwTiLogProtectExecVm(_KPROCESS *BugCheckParameter1, char a2, __int64 a3, __int64 a4, ...)
{
  int v6; // r15d
  int v7; // r14d
  __int64 v8; // rdx
  _KPROCESS *Process; // r12
  const EVENT_DESCRIPTOR *v10; // r13
  ULONGLONG v11; // r8
  BOOLEAN v12; // di
  PVOID v13; // rbx
  void *Pool2; // rax
  int v15; // eax
  int v16; // eax
  int v17; // r11d
  int v18; // eax
  int v19; // r11d
  int v20; // eax
  int v21; // r11d
  __int64 v22; // rax
  unsigned int v23; // r11d
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned int v27; // r11d
  int v28; // eax
  int v29; // r11d
  unsigned int v30; // r9d
  __int64 v31; // rax
  __int64 v32; // rax
  REGHANDLE v33; // rcx
  _KPROCESS *v34; // [rsp+38h] [rbp-D0h]
  NTSTATUS VirtualMemory; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE MemoryInformation[40]; // [rsp+50h] [rbp-B8h] BYREF
  PVOID v37; // [rsp+80h] [rbp-88h]
  _OWORD v38[3]; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v39; // [rsp+B8h] [rbp-50h] BYREF
  unsigned __int64 v40; // [rsp+C0h] [rbp-48h] BYREF
  unsigned __int64 v41; // [rsp+C8h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[33]; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v43; // [rsp+348h] [rbp+240h] BYREF
  __int64 v44; // [rsp+350h] [rbp+248h] BYREF
  PVOID BaseAddress; // [rsp+358h] [rbp+250h] BYREF
  va_list BaseAddressa; // [rsp+358h] [rbp+250h]
  __int64 v47; // [rsp+360h] [rbp+258h] BYREF
  va_list va1; // [rsp+360h] [rbp+258h]
  __int64 v49; // [rsp+368h] [rbp+260h] BYREF
  va_list va2; // [rsp+368h] [rbp+260h]
  va_list va3; // [rsp+370h] [rbp+268h] BYREF

  va_start(va3, a4);
  va_start(va2, a4);
  va_start(va1, a4);
  va_start(BaseAddressa, a4);
  BaseAddress = va_arg(va1, PVOID);
  va_copy(va2, va1);
  v47 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v49 = va_arg(va3, _QWORD);
  v44 = a4;
  v43 = a3;
  memset_0(&VirtualMemory, 0, 0x40uLL);
  v6 = 0;
  v7 = 0;
  if ( EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0xF0uLL) )
  {
    v8 = 0LL;
    Process = KeGetCurrentThread()->ApcState.Process;
    v34 = KeGetCurrentThread()->Process;
    if ( Process == BugCheckParameter1 )
      v8 = 8LL;
    v10 = *(const EVENT_DESCRIPTOR **)((char *)off_140002528 + (a2 == 0 ? 0x10 : 0) + v8);
    if ( Process == BugCheckParameter1 )
    {
      v11 = 0x800000000LL;
      if ( a2 )
        v11 = 0x400000000LL;
    }
    else if ( a2 )
    {
      v11 = 0x1000000000LL;
    }
    else
    {
      v11 = 0x2000000000LL;
    }
    v12 = EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, v11);
    if ( EtwEventEnabled(EtwThreatIntProvRegHandle, v10) )
    {
      if ( v12 )
      {
        v13 = BaseAddress;
        memset(v38, 0, sizeof(v38));
        if ( BugCheckParameter1 != KeGetCurrentThread()->ApcState.Process )
        {
          KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v38);
          v6 = 1;
        }
        VirtualMemory = ZwQueryVirtualMemory(
                          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                          v13,
                          MemoryRegionInformation,
                          MemoryInformation,
                          0x30uLL,
                          0LL);
        if ( VirtualMemory >= 0 )
        {
          v7 = 1;
          Pool2 = (void *)ExAllocatePool2(0x100uLL);
          v37 = Pool2;
          if ( Pool2 )
          {
            if ( ZwQueryVirtualMemory(
                   (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                   v13,
                   MemoryMappedFilenameInformation,
                   Pool2,
                   0x200uLL,
                   0LL) < 0 )
            {
              ExFreePoolWithTag(v37, 0);
              v37 = 0LL;
            }
          }
        }
        if ( v6 )
          KiUnstackDetachProcess((__int64)v38, 0LL);
      }
      v15 = EtwpTiFillProcessIdentity(UserData, (__int64)Process, &v39);
      v16 = EtwpTiFillThreadIdentity((__int64)&UserData[v15], (__int64)KeGetCurrentThread());
      v18 = EtwpTiFillProcessIdentity(&UserData[v16 + v17].Ptr, (__int64)BugCheckParameter1, &v40);
      v20 = EtwpTiFillProcessIdentity(&UserData[v18 + v19].Ptr, (__int64)v34, &v41);
      v22 = (unsigned int)(v20 + v21);
      v23 = v22 + 1;
      v22 *= 2LL;
      *(&UserData[0].Ptr + v22) = (ULONGLONG)BaseAddressa;
      *((_QWORD *)&UserData[0].Size + v22) = 8LL;
      v24 = v23;
      UserData[v24].Ptr = (ULONGLONG)&v44;
      *(_QWORD *)&UserData[v24].Size = 8LL;
      v25 = v23 + 1;
      UserData[v25].Ptr = (ULONGLONG)va2;
      *(_QWORD *)&UserData[v25].Size = 4LL;
      v26 = v23 + 2;
      v27 = v23 + 3;
      v26 *= 2LL;
      *(&UserData[0].Ptr + v26) = (ULONGLONG)va3;
      *((_QWORD *)&UserData[0].Size + v26) = 4LL;
      if ( v12 && v7 )
        v28 = EtwpTiFillVad((__int64)&UserData[v27], (__int64)&VirtualMemory);
      else
        v28 = EtwpTiFillZeroVad(&UserData[v27].Ptr);
      v30 = v29 + v28 + 1;
      v31 = (unsigned int)(v29 + v28);
      UserData[v31].Ptr = (ULONGLONG)&v43;
      *(_QWORD *)&UserData[v31].Size = 8LL;
      v32 = v30;
      UserData[v32].Ptr = (ULONGLONG)va1;
      v33 = EtwThreatIntProvRegHandle;
      *(_QWORD *)&UserData[v32].Size = 8LL;
      EtwWrite(v33, v10, 0LL, v30 + 1, UserData);
      if ( v7 )
      {
        if ( v37 )
          ExFreePoolWithTag(v37, 0);
      }
    }
  }
}
