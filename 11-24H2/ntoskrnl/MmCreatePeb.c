/*
 * XREFs of MmCreatePeb @ 0x1408DDBA4
 * Callers:
 *     PspAllocateProcess @ 0x1409FACD0 (PspAllocateProcess.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     RtlImageDirectoryEntryToData @ 0x1402EEB70 (RtlImageDirectoryEntryToData.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     KeFindFirstSetRightGroupMask @ 0x140330524 (KeFindFirstSetRightGroupMask.c)
 *     PsGetSessionId @ 0x1403C1560 (PsGetSessionId.c)
 *     RtlImageNtHeader @ 0x140432E80 (RtlImageNtHeader.c)
 *     KeQueryGroupAffinity @ 0x14045F4C0 (KeQueryGroupAffinity.c)
 *     KeQueryGroupMaskProcess @ 0x14047EEAC (KeQueryGroupMaskProcess.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     MiInitializeWowPeb @ 0x1408DCF04 (MiInitializeWowPeb.c)
 *     MmMapViewOfSection @ 0x1408DE270 (MmMapViewOfSection.c)
 *     MiCreatePebOrTeb @ 0x1408DE464 (MiCreatePebOrTeb.c)
 */

__int64 __fastcall MmCreatePeb(ULONG_PTR BugCheckParameter1, char *a2, _QWORD *a3, __int64 a4)
{
  __int64 v6; // r13
  __int64 v7; // rdx
  int v8; // ebx
  __int64 v9; // r8
  __int64 v10; // r9
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  __int64 MinorSubsystemVersion; // r8
  void *v13; // rsi
  int MajorSubsystemVersion; // r15d
  __int16 v15; // r14
  char v16; // bl
  PIMAGE_NT_HEADERS v17; // rdi
  __int16 Characteristics; // r12
  _WORD *v19; // rax
  __int64 v20; // r9
  _WORD *v21; // rcx
  int Subsystem; // esi
  unsigned int Win32VersionValue; // edx
  __int64 v24; // rax
  __int64 *v25; // rcx
  __int64 v26; // rbx
  __int64 v28; // rbx
  int v29; // edi
  char v30; // di
  char v31; // di
  __int64 v32; // rbx
  USHORT FirstSetRightGroupMask; // [rsp+58h] [rbp-180h]
  _IMAGE_NT_HEADERS64 *v35; // [rsp+68h] [rbp-170h]
  int v36; // [rsp+70h] [rbp-168h] BYREF
  __int64 v37; // [rsp+74h] [rbp-164h]
  __int64 v38; // [rsp+7Ch] [rbp-15Ch]
  unsigned int v39; // [rsp+84h] [rbp-154h]
  __int16 Blink; // [rsp+88h] [rbp-150h]
  __int16 v41; // [rsp+8Ah] [rbp-14Eh]
  __int64 v42; // [rsp+90h] [rbp-148h]
  __int64 v43; // [rsp+98h] [rbp-140h]
  int v44; // [rsp+A0h] [rbp-138h]
  ULONG v45; // [rsp+A4h] [rbp-134h]
  ULONG v46; // [rsp+A8h] [rbp-130h]
  int SessionId; // [rsp+ACh] [rbp-12Ch]
  __int64 v48; // [rsp+B0h] [rbp-128h]
  __int64 v49; // [rsp+B8h] [rbp-120h]
  __int64 v50; // [rsp+C0h] [rbp-118h]
  __int64 v51; // [rsp+C8h] [rbp-110h]
  char v52; // [rsp+D0h] [rbp-108h]
  char v53; // [rsp+D1h] [rbp-107h]
  __int64 v54; // [rsp+D8h] [rbp-100h]
  void *v55; // [rsp+E0h] [rbp-F8h]
  __int16 v56; // [rsp+E8h] [rbp-F0h]
  __int16 v57; // [rsp+EAh] [rbp-EEh]
  __int16 v58; // [rsp+ECh] [rbp-ECh]
  __int64 v59; // [rsp+F0h] [rbp-E8h]
  int v60; // [rsp+F8h] [rbp-E0h]
  __int64 v61; // [rsp+100h] [rbp-D8h] BYREF
  __int64 v62; // [rsp+108h] [rbp-D0h] BYREF
  __int64 v63; // [rsp+110h] [rbp-C8h] BYREF
  ULONG Size; // [rsp+118h] [rbp-C0h] BYREF
  __int64 v65; // [rsp+120h] [rbp-B8h] BYREF
  _WORD *v66; // [rsp+128h] [rbp-B0h]
  ULONG_PTR v67; // [rsp+130h] [rbp-A8h]
  void *v68; // [rsp+138h] [rbp-A0h]
  _QWORD *v69; // [rsp+140h] [rbp-98h]
  __int128 v70; // [rsp+148h] [rbp-90h] BYREF
  _BYTE v71[48]; // [rsp+158h] [rbp-80h] BYREF
  __int128 v72; // [rsp+188h] [rbp-50h] BYREF

  v69 = a3;
  v6 = BugCheckParameter1;
  v67 = BugCheckParameter1;
  v63 = 0LL;
  memset(v71, 0, sizeof(v71));
  v72 = 0LL;
  memset_0(&v36, 0, 0x90uLL);
  *(_OWORD *)a4 = 0LL;
  v72 = *KeQueryGroupMaskProcess(&v70, v6);
  FirstSetRightGroupMask = KeFindFirstSetRightGroupMask((__int64 *)&v72);
  *(_WORD *)(a4 + 8) = FirstSetRightGroupMask;
  KiStackAttachProcess((_KPROCESS *)v6, 0, (__int64)v71);
  v62 = 0LL;
  v61 = 0LL;
  v65 = 0LL;
  v8 = MmMapViewOfSection(
         ExLeapSecondDataSectionPointer,
         v6,
         (unsigned int)&v62,
         0,
         0LL,
         (__int64)&v61,
         (__int64)&v65,
         1,
         5242880,
         2);
  if ( v8 < 0 || (v8 = MiCreatePebOrTeb(0LL, v7, &v63), v8 < 0) )
  {
    KiUnstackDetachProcess((__int64)v71, 0, v9, v10);
    return (unsigned int)v8;
  }
  else
  {
    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
    v13 = *(void **)(v6 + 688);
    v68 = v13;
    MajorSubsystemVersion = 10;
    v38 = 10LL;
    Blink = (__int16)CurrentServerSiloGlobals[83].Blink;
    v39 = 2;
    v15 = CmNtCSDVersion;
    v41 = CmNtCSDVersion;
    v42 = qword_140FC5238;
    v43 = qword_140FC5230;
    v44 = KeNumberProcessors_0;
    v45 = NtGlobalFlag;
    v46 = NtGlobalFlag2;
    v48 = qword_140E2DB90;
    v49 = (unsigned int)dword_140FC5218;
    v50 = qword_140FC5228;
    v51 = qword_140FC5220;
    v52 = *a2;
    v53 = a2[3];
    v54 = *((_QWORD *)a2 + 1);
    v55 = v13;
    v56 = (__int16)CurrentServerSiloGlobals[64].Blink;
    v57 = (__int16)CurrentServerSiloGlobals[68].Blink;
    if ( CurrentServerSiloGlobals[75].Flink )
      v58 = 1701;
    else
      v58 = 0;
    if ( *(_QWORD *)(v6 + 744) )
      SessionId = PsGetSessionId(v6);
    else
      SessionId = 0;
    v59 = v62;
    v60 = 0;
    v16 = 0;
    if ( (*(_BYTE *)(v6 + 368) & 1) != 0 )
    {
      Subsystem = 3;
      v36 = 3;
      Characteristics = 34;
      v37 = 10LL;
      v20 = 0LL;
      v17 = 0LL;
      v35 = 0LL;
      v25 = (__int64 *)a4;
    }
    else
    {
      v17 = RtlImageNtHeader(v13);
      v35 = v17;
      Characteristics = v17->FileHeader.Characteristics;
      v19 = RtlImageDirectoryEntryToData(v13, 1u, 0xAu, &Size);
      v21 = v19;
      v66 = v19;
      if ( v19 )
      {
        if ( ((unsigned __int8)v19 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v21 = v66;
        v15 = v41;
        v16 = 0;
      }
      Subsystem = v17->OptionalHeader.Subsystem;
      v36 = Subsystem;
      MajorSubsystemVersion = v17->OptionalHeader.MajorSubsystemVersion;
      LODWORD(v37) = MajorSubsystemVersion;
      MinorSubsystemVersion = v17->OptionalHeader.MinorSubsystemVersion;
      HIDWORD(v37) = v17->OptionalHeader.MinorSubsystemVersion;
      Win32VersionValue = v17->OptionalHeader.Win32VersionValue;
      if ( Win32VersionValue )
      {
        if ( v21 )
        {
          if ( v21[38] )
            v15 = v21[38];
          v41 = v15;
        }
        LODWORD(v38) = (unsigned __int8)Win32VersionValue;
        HIDWORD(v38) = BYTE1(Win32VersionValue);
        Blink = HIWORD(Win32VersionValue);
        v39 = (Win32VersionValue ^ 0xBFFFFFFF) >> 30;
      }
      if ( v21 )
      {
        v24 = *((_QWORD *)v21 + 8);
        v25 = (__int64 *)a4;
        *(_QWORD *)a4 = v24;
        v16 = 1;
      }
      else
      {
        v25 = (__int64 *)a4;
      }
    }
    if ( v16 )
    {
      v28 = *v25;
      if ( (v28 & KeQueryGroupAffinity(FirstSetRightGroupMask)) != v28 )
        *(_QWORD *)a4 = 0LL;
    }
    if ( (Characteristics & 0x4000) != 0 )
    {
      v30 = _InterlockedExchangeAdd(&dword_140E2DB8C, 1u) + 1;
      do
      {
        v31 = v30 & 0x3F;
        v32 = 1LL << v31;
        *(_QWORD *)a4 = 1LL << v31;
        v30 = v31 + 1;
      }
      while ( (KeQueryGroupAffinity(FirstSetRightGroupMask) & v32) == 0 );
      v17 = v35;
      v15 = v41;
      MajorSubsystemVersion = v37;
      Subsystem = v36;
      v6 = v67;
    }
    v26 = v63;
    *(_QWORD *)(v63 + 280) = v38;
    *(_WORD *)(v26 + 288) = Blink;
    *(_DWORD *)(v26 + 292) = v39;
    *(_WORD *)(v26 + 290) = v15;
    *(_QWORD *)(v26 + 200) = v42;
    *(_QWORD *)(v26 + 208) = v43;
    *(_DWORD *)(v26 + 184) = KeNumberProcessors_0;
    *(_DWORD *)(v26 + 188) = NtGlobalFlag;
    *(_DWORD *)(v26 + 1988) = NtGlobalFlag2;
    *(_QWORD *)(v26 + 192) = qword_140E2DB90;
    *(_QWORD *)(v26 + 792) = (unsigned int)dword_140FC5218;
    *(_QWORD *)(v26 + 216) = qword_140FC5228;
    *(_QWORD *)(v26 + 224) = qword_140FC5220;
    *(_DWORD *)(v26 + 704) = SessionId;
    *(_DWORD *)(v26 + 296) = Subsystem;
    *(_DWORD *)(v26 + 300) = MajorSubsystemVersion;
    *(_DWORD *)(v26 + 304) = HIDWORD(v37);
    *(_BYTE *)v26 = v52;
    *(_BYTE *)(v26 + 3) = v53;
    *(_QWORD *)(v26 + 8) = v54;
    *(_QWORD *)(v26 + 16) = v68;
    *(_WORD *)(v26 + 844) = v56;
    *(_WORD *)(v26 + 846) = v57;
    *(_WORD *)(v26 + 848) = v58;
    *(_QWORD *)(v26 + 1976) = v59;
    *(_DWORD *)(v26 + 1984) = 0;
    if ( *(_QWORD *)(v6 + 784) && (v29 = MiInitializeWowPeb((__int64)&v36, (__int64)v17, v6, a4), v29 < 0) )
    {
      KiUnstackDetachProcess((__int64)v71, 0, MinorSubsystemVersion, v20);
      return (unsigned int)v29;
    }
    else
    {
      KiUnstackDetachProcess((__int64)v71, 0, MinorSubsystemVersion, v20);
      *v69 = v26;
      return 0LL;
    }
  }
}
