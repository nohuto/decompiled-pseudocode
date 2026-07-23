/*
 * XREFs of EtwTiLogReadWriteVm @ 0x140992E08
 * Callers:
 *     MiReadWriteVirtualMemory @ 0x140992B20 (MiReadWriteVirtualMemory.c)
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
  __int64 v17; // r8
  __int64 v18; // r9
  void *Pool2; // rax
  int v20; // eax
  int v21; // eax
  int v22; // r11d
  int v23; // eax
  int v24; // r11d
  unsigned int v25; // r11d
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned int v28; // r11d
  int v29; // eax
  int v30; // r11d
  unsigned __int64 v31; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v32; // [rsp+38h] [rbp-C8h] BYREF
  NTSTATUS VirtualMemory; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE MemoryInformation[48]; // [rsp+48h] [rbp-B8h] BYREF
  PVOID P; // [rsp+78h] [rbp-88h]
  struct _EVENT_DATA_DESCRIPTOR v36[3]; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v38[46]; // [rsp+C0h] [rbp-40h] BYREF
  int v39; // [rsp+280h] [rbp+180h] BYREF

  v39 = a1;
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
          memset(v36, 0, sizeof(v36));
          if ( a3 == KeGetCurrentThread()->ApcState.Process )
          {
            v16 = 0;
          }
          else
          {
            KiStackAttachProcess(a3, 0, (__int64)v36);
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
            Pool2 = (void *)ExAllocatePool2(0x100uLL, 0x200uLL, 0x6E734954u);
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
            KiUnstackDetachProcess((__int64)v36, 0, v17, v18);
        }
        UserData.Reserved = 0;
        UserData.Ptr = (ULONGLONG)&v39;
        UserData.Size = 4;
        v20 = EtwpTiFillProcessIdentity(v38, a2, &v31);
        v21 = EtwpTiFillThreadIdentity((__int64)(&UserData + (unsigned int)(v20 + 1)), (__int64)KeGetCurrentThread());
        v23 = EtwpTiFillProcessIdentity(&UserData.Ptr + 2 * (unsigned int)(v21 + v22), (__int64)a3, &v32);
        v25 = v23 + v24;
        v26 = 2LL * v25;
        *(&UserData.Reserved + 2 * v26) = 0;
        *(&UserData.Ptr + v26) = (ULONGLONG)&BaseAddress;
        *(&UserData.Size + 2 * v26) = 8;
        v27 = v25 + 1;
        v28 = v25 + 2;
        v27 *= 2LL;
        *(&UserData.Reserved + 2 * v27) = 0;
        *(&UserData.Ptr + v27) = (ULONGLONG)&a6;
        *(&UserData.Size + 2 * v27) = 8;
        if ( v12 && v9 )
          v29 = EtwpTiFillVad((__int64)(&UserData + v28), (__int64)&VirtualMemory);
        else
          v29 = EtwpTiFillZeroVad(&UserData.Ptr + 2 * v28);
        EtwWrite(EtwThreatIntProvRegHandle, (PCEVENT_DESCRIPTOR)v13, 0LL, v29 + v30, &UserData);
        if ( v9 )
        {
          if ( P )
            ExFreePoolWithTag(P, 0);
        }
      }
    }
  }
}
