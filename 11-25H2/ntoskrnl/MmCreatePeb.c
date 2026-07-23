/*
 * XREFs of MmCreatePeb @ 0x1408FA99C
 * Callers:
 *     PspAllocateProcess @ 0x1409BE78C (PspAllocateProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     KeFindFirstSetRightGroupMask @ 0x140305380 (KeFindFirstSetRightGroupMask.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     RtlImageDirectoryEntryToData @ 0x14040FE90 (RtlImageDirectoryEntryToData.c)
 *     PsGetSessionId @ 0x140433C80 (PsGetSessionId.c)
 *     RtlImageNtHeader @ 0x14043DFA0 (RtlImageNtHeader.c)
 *     KeQueryGroupAffinity @ 0x1404692D0 (KeQueryGroupAffinity.c)
 *     KeQueryGroupMaskProcess @ 0x140488E54 (KeQueryGroupMaskProcess.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     MiInitializeWowPeb @ 0x1408F97C8 (MiInitializeWowPeb.c)
 *     MiCreatePebOrTeb @ 0x1408FA354 (MiCreatePebOrTeb.c)
 *     MmMapViewOfSection @ 0x1408FBFC0 (MmMapViewOfSection.c)
 */

__int64 __fastcall MmCreatePeb(ULONG_PTR BugCheckParameter1, char *a2, _QWORD *a3, __int64 a4)
{
  __int64 v6; // r13
  __int64 v7; // rdx
  int v8; // ebx
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  void *v10; // rsi
  int MajorSubsystemVersion; // r15d
  __int16 v12; // r14
  char v13; // bl
  PIMAGE_NT_HEADERS v14; // rdi
  __int16 Characteristics; // r12
  _WORD *v16; // rax
  _WORD *v17; // rcx
  int Subsystem; // esi
  unsigned int Win32VersionValue; // edx
  __int64 v20; // rax
  __int64 *v21; // rcx
  __int64 v22; // rbx
  __int64 v24; // rbx
  int v25; // edi
  char v26; // di
  char v27; // di
  __int64 v28; // rbx
  USHORT FirstSetRightGroupMask; // [rsp+58h] [rbp-180h]
  _IMAGE_NT_HEADERS64 *v31; // [rsp+68h] [rbp-170h]
  int v32; // [rsp+70h] [rbp-168h] BYREF
  __int64 v33; // [rsp+74h] [rbp-164h]
  __int64 v34; // [rsp+7Ch] [rbp-15Ch]
  unsigned int v35; // [rsp+84h] [rbp-154h]
  __int16 v36; // [rsp+88h] [rbp-150h]
  __int16 v37; // [rsp+8Ah] [rbp-14Eh]
  __int64 v38; // [rsp+90h] [rbp-148h]
  __int64 v39; // [rsp+98h] [rbp-140h]
  int v40; // [rsp+A0h] [rbp-138h]
  ULONG v41; // [rsp+A4h] [rbp-134h]
  ULONG v42; // [rsp+A8h] [rbp-130h]
  int SessionId; // [rsp+ACh] [rbp-12Ch]
  __int64 v44; // [rsp+B0h] [rbp-128h]
  __int64 v45; // [rsp+B8h] [rbp-120h]
  __int64 v46; // [rsp+C0h] [rbp-118h]
  __int64 v47; // [rsp+C8h] [rbp-110h]
  char v48; // [rsp+D0h] [rbp-108h]
  char v49; // [rsp+D1h] [rbp-107h]
  __int64 v50; // [rsp+D8h] [rbp-100h]
  void *v51; // [rsp+E0h] [rbp-F8h]
  __int16 Blink; // [rsp+E8h] [rbp-F0h]
  __int16 v53; // [rsp+EAh] [rbp-EEh]
  __int16 v54; // [rsp+ECh] [rbp-ECh]
  __int64 v55; // [rsp+F0h] [rbp-E8h]
  int v56; // [rsp+F8h] [rbp-E0h]
  __int64 v57; // [rsp+100h] [rbp-D8h] BYREF
  __int64 v58; // [rsp+108h] [rbp-D0h] BYREF
  __int64 v59; // [rsp+110h] [rbp-C8h] BYREF
  ULONG Size; // [rsp+118h] [rbp-C0h] BYREF
  __int64 v61; // [rsp+120h] [rbp-B8h] BYREF
  _WORD *v62; // [rsp+128h] [rbp-B0h]
  ULONG_PTR v63; // [rsp+130h] [rbp-A8h]
  void *v64; // [rsp+138h] [rbp-A0h]
  _QWORD *v65; // [rsp+140h] [rbp-98h]
  __int128 v66; // [rsp+148h] [rbp-90h] BYREF
  _BYTE v67[48]; // [rsp+158h] [rbp-80h] BYREF
  __int128 v68; // [rsp+188h] [rbp-50h] BYREF

  v65 = a3;
  v6 = BugCheckParameter1;
  v63 = BugCheckParameter1;
  v59 = 0LL;
  memset(v67, 0, sizeof(v67));
  v68 = 0LL;
  memset_0(&v32, 0, 0x90uLL);
  *(_OWORD *)a4 = 0LL;
  v68 = *KeQueryGroupMaskProcess(&v66, v6);
  FirstSetRightGroupMask = KeFindFirstSetRightGroupMask((__int64 *)&v68);
  *(_WORD *)(a4 + 8) = FirstSetRightGroupMask;
  KiStackAttachProcess((_KPROCESS *)v6, 0, (__int64)v67);
  v58 = 0LL;
  v57 = 0LL;
  v61 = 0LL;
  v8 = MmMapViewOfSection(
         ExLeapSecondDataSectionPointer,
         v6,
         (unsigned int)&v58,
         0,
         0LL,
         (__int64)&v57,
         (__int64)&v61,
         1,
         5242880,
         2);
  if ( v8 < 0 || (v8 = MiCreatePebOrTeb(0LL, v7, &v59), v8 < 0) )
  {
    KiUnstackDetachProcess((__int64)v67, 0LL);
    return (unsigned int)v8;
  }
  else
  {
    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
    v10 = *(void **)(v6 + 688);
    v64 = v10;
    MajorSubsystemVersion = 10;
    v34 = 10LL;
    v36 = NtBuildNumber;
    v35 = 2;
    v12 = CmNtCSDVersion;
    v37 = CmNtCSDVersion;
    v38 = qword_140FC4228;
    v39 = qword_140FC4220;
    v40 = KeNumberProcessors_0;
    v41 = NtGlobalFlag;
    v42 = NtGlobalFlag2;
    v44 = qword_140E2D810;
    v45 = (unsigned int)dword_140FC4208;
    v46 = qword_140FC4218;
    v47 = qword_140FC4210;
    v48 = *a2;
    v49 = a2[3];
    v50 = *((_QWORD *)a2 + 1);
    v51 = v10;
    Blink = (__int16)CurrentServerSiloGlobals[64].Blink;
    v53 = (__int16)CurrentServerSiloGlobals[68].Blink;
    if ( CurrentServerSiloGlobals[75].Flink )
      v54 = 1701;
    else
      v54 = 0;
    if ( *(_QWORD *)(v6 + 744) )
      SessionId = PsGetSessionId(v6);
    else
      SessionId = 0;
    v55 = v58;
    v56 = 0;
    v13 = 0;
    if ( (*(_BYTE *)(v6 + 368) & 1) != 0 )
    {
      Subsystem = 3;
      v32 = 3;
      Characteristics = 34;
      v33 = 10LL;
      v14 = 0LL;
      v31 = 0LL;
      v21 = (__int64 *)a4;
    }
    else
    {
      v14 = RtlImageNtHeader(v10);
      v31 = v14;
      Characteristics = v14->FileHeader.Characteristics;
      v16 = RtlImageDirectoryEntryToData(v10, 1u, 0xAu, &Size);
      v17 = v16;
      v62 = v16;
      if ( v16 )
      {
        if ( ((unsigned __int8)v16 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v17 = v62;
        v12 = v37;
        v13 = 0;
      }
      Subsystem = v14->OptionalHeader.Subsystem;
      v32 = Subsystem;
      MajorSubsystemVersion = v14->OptionalHeader.MajorSubsystemVersion;
      LODWORD(v33) = MajorSubsystemVersion;
      HIDWORD(v33) = v14->OptionalHeader.MinorSubsystemVersion;
      Win32VersionValue = v14->OptionalHeader.Win32VersionValue;
      if ( Win32VersionValue )
      {
        if ( v17 )
        {
          if ( v17[38] )
            v12 = v17[38];
          v37 = v12;
        }
        LODWORD(v34) = (unsigned __int8)Win32VersionValue;
        HIDWORD(v34) = BYTE1(Win32VersionValue);
        v36 = HIWORD(Win32VersionValue);
        v35 = (Win32VersionValue ^ 0xBFFFFFFF) >> 30;
      }
      if ( v17 )
      {
        v20 = *((_QWORD *)v17 + 8);
        v21 = (__int64 *)a4;
        *(_QWORD *)a4 = v20;
        v13 = 1;
      }
      else
      {
        v21 = (__int64 *)a4;
      }
    }
    if ( v13 )
    {
      v24 = *v21;
      if ( (v24 & KeQueryGroupAffinity(FirstSetRightGroupMask)) != v24 )
        *(_QWORD *)a4 = 0LL;
    }
    if ( (Characteristics & 0x4000) != 0 )
    {
      v26 = _InterlockedExchangeAdd(&dword_140E2D80C, 1u) + 1;
      do
      {
        v27 = v26 & 0x3F;
        v28 = 1LL << v27;
        *(_QWORD *)a4 = 1LL << v27;
        v26 = v27 + 1;
      }
      while ( (KeQueryGroupAffinity(FirstSetRightGroupMask) & v28) == 0 );
      v14 = v31;
      v12 = v37;
      MajorSubsystemVersion = v33;
      Subsystem = v32;
      v6 = v63;
    }
    v22 = v59;
    *(_QWORD *)(v59 + 280) = v34;
    *(_WORD *)(v22 + 288) = v36;
    *(_DWORD *)(v22 + 292) = v35;
    *(_WORD *)(v22 + 290) = v12;
    *(_QWORD *)(v22 + 200) = v38;
    *(_QWORD *)(v22 + 208) = v39;
    *(_DWORD *)(v22 + 184) = KeNumberProcessors_0;
    *(_DWORD *)(v22 + 188) = NtGlobalFlag;
    *(_DWORD *)(v22 + 1988) = NtGlobalFlag2;
    *(_QWORD *)(v22 + 192) = qword_140E2D810;
    *(_QWORD *)(v22 + 792) = (unsigned int)dword_140FC4208;
    *(_QWORD *)(v22 + 216) = qword_140FC4218;
    *(_QWORD *)(v22 + 224) = qword_140FC4210;
    *(_DWORD *)(v22 + 704) = SessionId;
    *(_DWORD *)(v22 + 296) = Subsystem;
    *(_DWORD *)(v22 + 300) = MajorSubsystemVersion;
    *(_DWORD *)(v22 + 304) = HIDWORD(v33);
    *(_BYTE *)v22 = v48;
    *(_BYTE *)(v22 + 3) = v49;
    *(_QWORD *)(v22 + 8) = v50;
    *(_QWORD *)(v22 + 16) = v64;
    *(_WORD *)(v22 + 844) = Blink;
    *(_WORD *)(v22 + 846) = v53;
    *(_WORD *)(v22 + 848) = v54;
    *(_QWORD *)(v22 + 1976) = v55;
    *(_DWORD *)(v22 + 1984) = 0;
    if ( *(_QWORD *)(v6 + 784) && (v25 = MiInitializeWowPeb((__int64)&v32, (__int64)v14, v6, a4), v25 < 0) )
    {
      KiUnstackDetachProcess((__int64)v67, 0LL);
      return (unsigned int)v25;
    }
    else
    {
      KiUnstackDetachProcess((__int64)v67, 0LL);
      *v65 = v22;
      return 0LL;
    }
  }
}
