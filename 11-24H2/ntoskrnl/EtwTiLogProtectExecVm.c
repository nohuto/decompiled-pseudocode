/*
 * XREFs of EtwTiLogProtectExecVm @ 0x1408DB660
 * Callers:
 *     NtProtectVirtualMemory @ 0x1408DA8B0 (NtProtectVirtualMemory.c)
 * Callees:
 *     EtwProviderEnabled @ 0x140262770 (EtwProviderEnabled.c)
 *     EtwpTiFillProcessIdentity @ 0x1402633C0 (EtwpTiFillProcessIdentity.c)
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     EtwpTiFillZeroVad @ 0x1404552C8 (EtwpTiFillZeroVad.c)
 *     EtwpTiFillVad @ 0x140455330 (EtwpTiFillVad.c)
 *     EtwpTiFillThreadIdentity @ 0x14045F510 (EtwpTiFillThreadIdentity.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwQueryVirtualMemory @ 0x1406A7810 (ZwQueryVirtualMemory.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  __int64 v14; // r8
  __int64 v15; // r9
  void *Pool2; // rax
  int v17; // eax
  int v18; // eax
  int v19; // r11d
  int v20; // eax
  int v21; // r11d
  int v22; // eax
  int v23; // r11d
  __int64 v24; // rax
  unsigned int v25; // r11d
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned int v29; // r11d
  int v30; // eax
  int v31; // r11d
  unsigned int v32; // r9d
  __int64 v33; // rax
  __int64 v34; // rax
  REGHANDLE v35; // rcx
  _KPROCESS *v36; // [rsp+38h] [rbp-D0h]
  NTSTATUS VirtualMemory; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE MemoryInformation[40]; // [rsp+50h] [rbp-B8h] BYREF
  PVOID v39; // [rsp+80h] [rbp-88h]
  _OWORD v40[3]; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v41; // [rsp+B8h] [rbp-50h] BYREF
  unsigned __int64 v42; // [rsp+C0h] [rbp-48h] BYREF
  unsigned __int64 v43; // [rsp+C8h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[33]; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v45; // [rsp+348h] [rbp+240h] BYREF
  __int64 v46; // [rsp+350h] [rbp+248h] BYREF
  PVOID BaseAddress; // [rsp+358h] [rbp+250h] BYREF
  va_list BaseAddressa; // [rsp+358h] [rbp+250h]
  __int64 v49; // [rsp+360h] [rbp+258h] BYREF
  va_list va1; // [rsp+360h] [rbp+258h]
  __int64 v51; // [rsp+368h] [rbp+260h] BYREF
  va_list va2; // [rsp+368h] [rbp+260h]
  va_list va3; // [rsp+370h] [rbp+268h] BYREF

  va_start(va3, a4);
  va_start(va2, a4);
  va_start(va1, a4);
  va_start(BaseAddressa, a4);
  BaseAddress = va_arg(va1, PVOID);
  va_copy(va2, va1);
  v49 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v51 = va_arg(va3, _QWORD);
  v46 = a4;
  v45 = a3;
  memset_0(&VirtualMemory, 0, 0x40uLL);
  v6 = 0;
  v7 = 0;
  if ( EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0xF0uLL) )
  {
    v8 = 0LL;
    Process = KeGetCurrentThread()->ApcState.Process;
    v36 = KeGetCurrentThread()->Process;
    if ( Process == BugCheckParameter1 )
      v8 = 8LL;
    v10 = *(const EVENT_DESCRIPTOR **)((char *)off_140002088 + (a2 == 0 ? 0x10 : 0) + v8);
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
        memset(v40, 0, sizeof(v40));
        if ( BugCheckParameter1 != KeGetCurrentThread()->ApcState.Process )
        {
          KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v40);
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
          Pool2 = (void *)ExAllocatePool2(0x100uLL, 0x200uLL, 0x6E734954u);
          v39 = Pool2;
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
              ExFreePoolWithTag(v39, 0);
              v39 = 0LL;
            }
          }
        }
        if ( v6 )
          KiUnstackDetachProcess((__int64)v40, 0, v14, v15);
      }
      v17 = EtwpTiFillProcessIdentity(UserData, (__int64)Process, &v41);
      v18 = EtwpTiFillThreadIdentity((__int64)&UserData[v17], (__int64)KeGetCurrentThread());
      v20 = EtwpTiFillProcessIdentity(&UserData[v18 + v19].Ptr, (__int64)BugCheckParameter1, &v42);
      v22 = EtwpTiFillProcessIdentity(&UserData[v20 + v21].Ptr, (__int64)v36, &v43);
      v24 = (unsigned int)(v22 + v23);
      v25 = v24 + 1;
      v24 *= 2LL;
      *(&UserData[0].Ptr + v24) = (ULONGLONG)BaseAddressa;
      *((_QWORD *)&UserData[0].Size + v24) = 8LL;
      v26 = v25;
      UserData[v26].Ptr = (ULONGLONG)&v46;
      *(_QWORD *)&UserData[v26].Size = 8LL;
      v27 = v25 + 1;
      UserData[v27].Ptr = (ULONGLONG)va2;
      *(_QWORD *)&UserData[v27].Size = 4LL;
      v28 = v25 + 2;
      v29 = v25 + 3;
      v28 *= 2LL;
      *(&UserData[0].Ptr + v28) = (ULONGLONG)va3;
      *((_QWORD *)&UserData[0].Size + v28) = 4LL;
      if ( v12 && v7 )
        v30 = EtwpTiFillVad((__int64)&UserData[v29], (__int64)&VirtualMemory);
      else
        v30 = EtwpTiFillZeroVad(&UserData[v29].Ptr);
      v32 = v31 + v30 + 1;
      v33 = (unsigned int)(v31 + v30);
      UserData[v33].Ptr = (ULONGLONG)&v45;
      *(_QWORD *)&UserData[v33].Size = 8LL;
      v34 = v32;
      UserData[v34].Ptr = (ULONGLONG)va1;
      v35 = EtwThreatIntProvRegHandle;
      *(_QWORD *)&UserData[v34].Size = 8LL;
      EtwWrite(v35, v10, 0LL, v32 + 1, UserData);
      if ( v7 )
      {
        if ( v39 )
          ExFreePoolWithTag(v39, 0);
      }
    }
  }
}
