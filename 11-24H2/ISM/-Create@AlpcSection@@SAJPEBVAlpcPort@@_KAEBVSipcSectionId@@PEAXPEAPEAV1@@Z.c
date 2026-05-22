/*
 * XREFs of ?Create@AlpcSection@@SAJPEBVAlpcPort@@_KAEBVSipcSectionId@@PEAXPEAPEAV1@@Z @ 0x18010DA34
 * Callers:
 *     ?CreateSection@AlpcPort@@UEAAJ_K0PEBXPEAPEAX@Z @ 0x18010E860 (-CreateSection@AlpcPort@@UEAAJ_K0PEBXPEAPEAX@Z.c)
 * Callees:
 *     ?ProtectExtraMemory@SipcSection@@IEBAXXZ @ 0x1800859B4 (-ProtectExtraMemory@SipcSection@@IEBAXXZ.c)
 *     ?Reset@SipcWin32Handle@@QEAAXXZ @ 0x180094EA0 (-Reset@SipcWin32Handle@@QEAAXXZ.c)
 *     ?Attach@SipcWin32Handle@@QEAAXPEAX@Z @ 0x180096D04 (-Attach@SipcWin32Handle@@QEAAXPEAX@Z.c)
 *     ?Reset@SipcFileHandle@@QEAAXXZ @ 0x18009BAC8 (-Reset@SipcFileHandle@@QEAAXXZ.c)
 *     memset_0 @ 0x18009D598 (memset_0.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E848 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Unmap@AlpcSection@@CAJPEAX00@Z @ 0x180110818 (-Unmap@AlpcSection@@CAJPEAX00@Z.c)
 */

__int64 __fastcall AlpcSection::Create(
        const struct AlpcPort *a1,
        unsigned __int64 a2,
        const struct SipcSectionId *a3,
        void *a4,
        struct AlpcSection **a5)
{
  PWSTR Buffer; // r14
  HANDLE CurrentProcess; // rbx
  HANDLE v11; // rax
  signed int LastError; // eax
  int v13; // ebx
  void *v14; // rbx
  unsigned __int64 v15; // rdi
  HANDLE FileW; // rax
  signed int v17; // eax
  int PortSection; // eax
  int v19; // eax
  int SectionView; // edi
  unsigned __int64 i; // rcx
  char *v22; // rbx
  char *v23; // rax
  struct AlpcSection *v24; // r10
  void *v25; // rcx
  void *v26; // rdx
  HANDLE v27; // r8
  void *v28; // r9
  __int128 v29; // xmm1
  void *v31; // [rsp+48h] [rbp-31h] BYREF
  DWORD BytesReturned; // [rsp+50h] [rbp-29h] BYREF
  HANDLE TargetHandle; // [rsp+58h] [rbp-21h] BYREF
  HANDLE v34; // [rsp+60h] [rbp-19h] BYREF
  void *v35[2]; // [rsp+68h] [rbp-11h] BYREF
  void *v36[2]; // [rsp+78h] [rbp-1h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+88h] [rbp+Fh] BYREF
  unsigned __int64 InBuffer; // [rsp+98h] [rbp+1Fh] BYREF

  Buffer = 0LL;
  TargetHandle = 0LL;
  CurrentProcess = GetCurrentProcess();
  v11 = GetCurrentProcess();
  if ( !DuplicateHandle(v11, a4, CurrentProcess, &TargetHandle, 0, 0, 2u) )
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    v13 = -2147418113;
    if ( LastError < 0 )
      v13 = LastError;
    goto LABEL_32;
  }
  v14 = 0LL;
  LODWORD(v34) = 0;
  BytesReturned = 0;
  v31 = 0LL;
  v15 = (a2 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"Kernel-ProductInfo");
  if ( (int)NtQueryLicenseValue(&DestinationString, 0LL, &v34, 4LL, &BytesReturned) >= 0 && (_DWORD)v34 == 192 )
  {
    FileW = CreateFileW(L"\\\\.\\XVmCtrl", 0xC0000000, 3u, 0LL, 3u, 0, 0LL);
    v34 = FileW;
    if ( FileW == (HANDLE)-1LL
      || (BytesReturned = 0,
          InBuffer = (v15 + 65575) & 0xFFFFFFFFFFFF0000uLL,
          DestinationString = 0LL,
          !DeviceIoControl(FileW, 0x15026Cu, &InBuffer, 8u, &DestinationString, 0x10u, &BytesReturned, 0LL)) )
    {
      v17 = GetLastError();
      if ( v17 > 0 )
        v17 = (unsigned __int16)v17 | 0x80070000;
      v13 = -2147418113;
      if ( v17 < 0 )
        v13 = v17;
      SipcFileHandle::Reset(&v34);
      goto LABEL_31;
    }
    SipcWin32Handle::Attach(&v31, *(void **)&DestinationString.Length);
    Buffer = DestinationString.Buffer;
    SipcFileHandle::Reset(&v34);
    v14 = v31;
  }
  *(_OWORD *)v35 = 0LL;
  *(_OWORD *)v36 = 0LL;
  PortSection = NtAlpcCreatePortSection(TargetHandle, 0LL, v14, v15 + 40, &v35[1], &v36[1]);
  if ( PortSection < 0 )
  {
    v19 = PortSection | 0x10000000;
    v13 = -2147418113;
    if ( v19 < 0 )
      v13 = v19;
    goto LABEL_31;
  }
  SectionView = NtAlpcCreateSectionView(TargetHandle, 0LL, v35);
  if ( SectionView >= 0 )
  {
    for ( i = 0LL; i < a2; i += 4096LL )
      *((_BYTE *)v36[0] + i) = 0;
    memset_0((char *)v36[0] + a2, 204, (size_t)v36[1] - a2);
    v22 = (char *)v36[0] + (((unsigned __int64)v36[1] - 40) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)v22 = a2;
    *(_OWORD *)(v22 + 8) = *(_OWORD *)a3;
    *(_OWORD *)(v22 + 24) = *((_OWORD *)a3 + 1);
    v23 = (char *)operator new(0x78uLL, (const struct std::nothrow_t *)&std::nothrow);
    v24 = (struct AlpcSection *)v23;
    if ( v23 )
    {
      v25 = v36[0];
      v26 = v36[1];
      v27 = TargetHandle;
      v28 = v35[1];
      *(_QWORD *)v23 = &SipcSection::`vftable';
      *((_QWORD *)v23 + 4) = v25;
      *((_QWORD *)v23 + 5) = v26;
      *((_QWORD *)v23 + 3) = a1;
      *((_QWORD *)v23 + 6) = *(_QWORD *)v22;
      *(_OWORD *)(v23 + 56) = *(_OWORD *)(v22 + 8);
      v29 = *(_OWORD *)(v22 + 24);
      *((_DWORD *)v23 + 22) = 0;
      *(_QWORD *)v23 = &AlpcSection::`vftable';
      *(_OWORD *)(v23 + 72) = v29;
      *((_QWORD *)v23 + 12) = v27;
      *((_QWORD *)v23 + 13) = v28;
      *((_QWORD *)v23 + 14) = Buffer;
    }
    else
    {
      v24 = 0LL;
    }
    *a5 = v24;
    if ( v24 )
    {
      TargetHandle = 0LL;
      SipcSection::ProtectExtraMemory(v24);
      SipcWin32Handle::Reset(&v31);
      v13 = 0;
LABEL_32:
      SipcWin32Handle::Reset(&TargetHandle);
      return (unsigned int)v13;
    }
    SectionView = -1073741801;
  }
  v13 = AlpcSection::Unmap(v36[0], a4, v35[1]);
  if ( v13 < 0 )
  {
LABEL_31:
    SipcWin32Handle::Reset(&v31);
    goto LABEL_32;
  }
  SipcWin32Handle::Reset(&v31);
  SipcWin32Handle::Reset(&TargetHandle);
  return SectionView | 0x10000000u;
}
