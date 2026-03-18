/*
 * XREFs of DpMapMemory @ 0x1403F3E90
 * Callers:
 *     <none>
 * Callees:
 *     DpiVerifyResources @ 0x1403D9D80 (DpiVerifyResources.c)
 */

__int64 __fastcall DpMapMemory(
        __int64 a1,
        union _LARGE_INTEGER a2,
        unsigned int a3,
        char a4,
        PLARGE_INTEGER Timeout,
        int a6,
        PVOID *BaseAddress)
{
  ULONG_PTR CommitSize; // r12
  PVOID *v10; // r15
  __int64 v11; // r13
  __int64 v12; // rdi
  union _LARGE_INTEGER v13; // rbx
  char v14; // r14
  NTSTATUS v15; // eax
  int v16; // eax
  __int64 v17; // rcx
  unsigned int v18; // ebx
  __int64 v19; // r8
  __int64 Pool2; // rax
  __int64 v21; // rcx
  __int64 v22; // rsi
  __int64 *v23; // rax
  __int64 v24; // rdx
  PVOID v25; // rcx
  int v27; // [rsp+58h] [rbp-51h]
  void *SectionHandle; // [rsp+60h] [rbp-49h] BYREF
  union _LARGE_INTEGER SectionOffset; // [rsp+68h] [rbp-41h] BYREF
  ULONG_PTR ViewSize; // [rsp+70h] [rbp-39h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-31h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-21h] BYREF
  unsigned int v33; // [rsp+F8h] [rbp+4Fh]
  union _LARGE_INTEGER v34; // [rsp+100h] [rbp+57h] BYREF
  char v35; // [rsp+110h] [rbp+67h]

  v35 = a4;
  v34 = a2;
  CommitSize = a3;
  if ( !a1 || (v10 = BaseAddress) == 0LL || !a3 )
  {
    LODWORD(v12) = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 1820;
    return (unsigned int)v12;
  }
  v11 = *(_QWORD *)(a1 + 64);
  if ( !v11 || *(_DWORD *)(v11 + 16) != 1953656900 || (unsigned int)(*(_DWORD *)(v11 + 20) - 2) > 1 )
  {
    LODWORD(v12) = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 1833;
    return (unsigned int)v12;
  }
  if ( KeGetCurrentIrql() )
  {
    WdLogSingleEntry1(3LL, -1073741811LL);
    WdLogGlobalForLineNumber = 1843;
  }
  *v10 = 0LL;
  LODWORD(v12) = DpiVerifyResources(a1, &v34, (unsigned int)CommitSize, a4, (char)Timeout, &a6, v10);
  if ( (int)v12 >= 0 && !*v10 )
  {
    v27 = a6;
    if ( v35 == 1 )
    {
      v13 = v34;
      v14 = 0;
      *v10 = (PVOID)v34.QuadPart;
LABEL_40:
      Pool2 = ExAllocatePool2(256LL, 80LL, 1953656900LL);
      v22 = Pool2;
      if ( Pool2 )
      {
        *(_DWORD *)(Pool2 + 16) = 1953656900;
        *(_DWORD *)(Pool2 + 20) = 8;
        *(_DWORD *)(Pool2 + 24) = 1;
        *(union _LARGE_INTEGER *)(Pool2 + 32) = v13;
        *(_DWORD *)(Pool2 + 40) = CommitSize;
        *(_BYTE *)(Pool2 + 44) = v35;
        *(_BYTE *)(Pool2 + 45) = (_BYTE)Timeout;
        *(_QWORD *)(Pool2 + 48) = PsGetCurrentProcess(v21);
        *(_DWORD *)(v22 + 56) = v27;
        *(_QWORD *)(v22 + 64) = *v10;
        *(_BYTE *)(v22 + 72) = v14;
        KeWaitForSingleObject((PVOID)(v11 + 2544), Executive, 0, 0, 0LL);
        v23 = (__int64 *)(v11 + 2528);
        v24 = *(_QWORD *)(v11 + 2528);
        if ( *(_QWORD *)(v24 + 8) != v11 + 2528 )
          __fastfail(3u);
        *(_QWORD *)(v24 + 8) = v22;
        *(_QWORD *)v22 = v24;
        *(_QWORD *)(v22 + 8) = v23;
        *v23 = v22;
        KeReleaseMutex((PRKMUTEX)(v11 + 2544), 0);
        WdLogSingleEntry1(4LL, v22);
        WdLogGlobalForLineNumber = 2116;
      }
      else
      {
        LODWORD(v12) = -1073741801;
        WdLogSingleEntry1(6LL, -1073741801LL);
        WdLogGlobalForLineNumber = 2084;
        if ( v14 == 1 )
        {
          *(_DWORD *)(v11 + 2600) -= ((unsigned int)CommitSize + (unsigned __int64)(*(_DWORD *)v10 & 0xFFF) + 4095) >> 12;
          v25 = *v10;
          if ( (_BYTE)Timeout == 1 )
            ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v25);
          else
            MmUnmapIoSpace(v25, (unsigned int)CommitSize);
        }
      }
      return (unsigned int)v12;
    }
    v33 = 0;
    if ( (_BYTE)Timeout == 1 )
    {
      *(&ObjectAttributes.Length + 1) = 0;
      *(&ObjectAttributes.Attributes + 1) = 0;
      SectionHandle = 0LL;
      DestinationString = 0LL;
      ViewSize = CommitSize;
      RtlInitUnicodeString(&DestinationString, L"\\Device\\PhysicalMemory");
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v15 = ZwOpenSection(&SectionHandle, 0xF001Fu, &ObjectAttributes);
      LODWORD(v12) = v15;
      if ( v15 < 0 )
      {
        WdLogSingleEntry1(2LL, v15);
        WdLogGlobalForLineNumber = 1926;
        return (unsigned int)v12;
      }
      v13 = v34;
      SectionOffset = v34;
      if ( byte_140160D10 == 1 || !v27 )
      {
        v16 = 512;
      }
      else
      {
        if ( v27 != 2 )
        {
          v16 = 0;
          goto LABEL_23;
        }
        v16 = 1024;
      }
      v33 = v16;
LABEL_23:
      v12 = ZwMapViewOfSection(
              SectionHandle,
              (HANDLE)0xFFFFFFFFFFFFFFFFLL,
              v10,
              0LL,
              CommitSize,
              &SectionOffset,
              &ViewSize,
              ViewUnmap,
              0,
              v16 | 4);
      ZwClose(SectionHandle);
      if ( (int)v12 < 0 )
      {
        WdLogSingleEntry1(2LL, v12);
        WdLogGlobalForLineNumber = 1971;
        return (unsigned int)v12;
      }
      if ( v13.LowPart < SectionOffset.LowPart )
      {
        LODWORD(v12) = -1073741823;
        WdLogSingleEntry3(0LL, 275LL, 21LL, -1073741823LL);
        WdLogGlobalForLineNumber = 1990;
        return (unsigned int)v12;
      }
      LODWORD(CommitSize) = SectionOffset.LowPart + ViewSize - v13.LowPart;
      v17 = (__int64)*v10 + v13.QuadPart - SectionOffset.QuadPart;
      goto LABEL_37;
    }
    v18 = 4;
    v33 = 4;
    if ( !a6 || byte_140160D10 )
    {
      v18 = 516;
    }
    else
    {
      if ( a6 == 1 )
      {
LABEL_36:
        v19 = v18;
        v13 = v34;
        v17 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))MmMapIoSpaceEx)(
                (union _LARGE_INTEGER)v34.QuadPart,
                CommitSize,
                v19);
LABEL_37:
        *v10 = (PVOID)v17;
        if ( !v17 )
        {
          LODWORD(v12) = -1073741811;
          WdLogSingleEntry2(2LL, (unsigned int)CommitSize, v33);
          WdLogGlobalForLineNumber = 2051;
          return (unsigned int)v12;
        }
        v14 = 1;
        *(_DWORD *)(v11 + 2600) += ((unsigned int)CommitSize + (unsigned __int64)(*(_DWORD *)v10 & 0xFFF) + 4095) >> 12;
        goto LABEL_40;
      }
      if ( a6 != 2 )
      {
        WdLogSingleEntry2(2LL, a6, v11);
        WdLogGlobalForLineNumber = 2036;
        goto LABEL_36;
      }
      v18 = 1028;
    }
    v33 = v18;
    goto LABEL_36;
  }
  return (unsigned int)v12;
}
