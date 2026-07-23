/*
 * XREFs of EtwTiLogReadWriteVm @ 0x1409C4FE0
 * Callers:
 *     MiReadWriteVirtualMemory @ 0x1409C4CE0 (MiReadWriteVirtualMemory.c)
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

void __fastcall EtwTiLogReadWriteVm(int a1, __int64 a2, _KPROCESS *a3, int a4, PVOID BaseAddress, char a6)
{
  int v9; // esi
  ULONGLONG v10; // r8
  ULONGLONG v11; // r8
  int v12; // r12d
  __int64 *v13; // rdi
  __int64 *v14; // rax
  PVOID v15; // rbx
  int v16; // r15d
  void *Pool2; // rax
  int v18; // eax
  int v19; // eax
  int v20; // r11d
  int v21; // eax
  int v22; // r11d
  unsigned int v23; // r11d
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned int v26; // r11d
  int v27; // eax
  int v28; // r11d
  unsigned __int64 v29; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v30; // [rsp+38h] [rbp-C8h] BYREF
  NTSTATUS VirtualMemory; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE MemoryInformation[48]; // [rsp+48h] [rbp-B8h] BYREF
  PVOID P; // [rsp+78h] [rbp-88h]
  struct _EVENT_DATA_DESCRIPTOR v34[3]; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v36[46]; // [rsp+C0h] [rbp-40h] BYREF
  int v37; // [rsp+280h] [rbp+180h] BYREF

  v37 = a1;
  memset_0(&VirtualMemory, 0, 0x40uLL);
  v9 = 0;
  if ( KeGetCurrentThread()->PreviousMode == 1 )
  {
    v10 = 196608LL;
    if ( a4 != 16 )
      v10 = 786432LL;
    if ( EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, v10) )
    {
      if ( (_KPROCESS *)a2 == a3 )
      {
        v12 = 0;
        v13 = THREATINT_READVM_LOCAL;
        v14 = THREATINT_WRITEVM_LOCAL;
      }
      else
      {
        v11 = 0x100000000LL;
        if ( a4 != 16 )
          v11 = 0x200000000LL;
        v12 = EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, v11);
        v13 = THREATINT_READVM_REMOTE;
        v14 = (__int64 *)&THREATINT_WRITEVM_REMOTE;
      }
      if ( a4 != 16 )
        v13 = v14;
      if ( EtwEventEnabled(EtwThreatIntProvRegHandle, (PCEVENT_DESCRIPTOR)v13) )
      {
        if ( v12 )
        {
          v15 = BaseAddress;
          memset(v34, 0, sizeof(v34));
          if ( a3 == KeGetCurrentThread()->ApcState.Process )
          {
            v16 = 0;
          }
          else
          {
            KiStackAttachProcess(a3, 0, (__int64)v34);
            v16 = 1;
          }
          VirtualMemory = ZwQueryVirtualMemory(
                            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                            v15,
                            MemoryRegionInformation,
                            MemoryInformation,
                            0x30uLL,
                            0LL);
          if ( VirtualMemory >= 0 )
          {
            v9 = 1;
            Pool2 = (void *)ExAllocatePool2(0x100uLL);
            P = Pool2;
            if ( Pool2 )
            {
              if ( ZwQueryVirtualMemory(
                     (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                     v15,
                     MemoryMappedFilenameInformation,
                     Pool2,
                     0x200uLL,
                     0LL) < 0 )
              {
                ExFreePoolWithTag(P, 0);
                P = 0LL;
              }
            }
          }
          if ( v16 )
            KiUnstackDetachProcess((__int64)v34, 0LL);
        }
        UserData.Reserved = 0;
        UserData.Ptr = (ULONGLONG)&v37;
        UserData.Size = 4;
        v18 = EtwpTiFillProcessIdentity(v36, a2, &v29);
        v19 = EtwpTiFillThreadIdentity((__int64)(&UserData + (unsigned int)(v18 + 1)), (__int64)KeGetCurrentThread());
        v21 = EtwpTiFillProcessIdentity(&UserData.Ptr + 2 * (unsigned int)(v19 + v20), (__int64)a3, &v30);
        v23 = v21 + v22;
        v24 = 2LL * v23;
        *(&UserData.Reserved + 2 * v24) = 0;
        *(&UserData.Ptr + v24) = (ULONGLONG)&BaseAddress;
        *(&UserData.Size + 2 * v24) = 8;
        v25 = v23 + 1;
        v26 = v23 + 2;
        v25 *= 2LL;
        *(&UserData.Reserved + 2 * v25) = 0;
        *(&UserData.Ptr + v25) = (ULONGLONG)&a6;
        *(&UserData.Size + 2 * v25) = 8;
        if ( v12 && v9 )
          v27 = EtwpTiFillVad((__int64)(&UserData + v26), (__int64)&VirtualMemory);
        else
          v27 = EtwpTiFillZeroVad(&UserData.Ptr + 2 * v26);
        EtwWrite(EtwThreatIntProvRegHandle, (PCEVENT_DESCRIPTOR)v13, 0LL, v27 + v28, &UserData);
        if ( v9 )
        {
          if ( P )
            ExFreePoolWithTag(P, 0);
        }
      }
    }
  }
}
