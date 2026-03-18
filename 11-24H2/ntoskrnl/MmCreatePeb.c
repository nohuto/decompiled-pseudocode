/*
 * XREFs of MmCreatePeb @ 0x140AE79AC
 * Callers:
 *     PspAllocateProcess @ 0x140A1C4C0 (PspAllocateProcess.c)
 * Callees:
 *     KeFindFirstSetRightGroupMask @ 0x140208F44 (KeFindFirstSetRightGroupMask.c)
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347D10 (PsGetCurrentServerSiloGlobals.c)
 *     PsGetSessionId @ 0x1403D5E10 (PsGetSessionId.c)
 *     RtlImageDirectoryEntryToData @ 0x14042CAF0 (RtlImageDirectoryEntryToData.c)
 *     RtlImageNtHeader @ 0x14043E310 (RtlImageNtHeader.c)
 *     KeQueryGroupAffinity @ 0x140467A20 (KeQueryGroupAffinity.c)
 *     KeQueryGroupMaskProcess @ 0x140483990 (KeQueryGroupMaskProcess.c)
 *     Feature_FixContainerBuildNumber__private_IsEnabledDeviceUsageNoInline @ 0x140667EE4 (Feature_FixContainerBuildNumber__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     MmMapViewOfSection @ 0x1409071A0 (MmMapViewOfSection.c)
 *     MiInitializeWowPeb @ 0x1409C2B2C (MiInitializeWowPeb.c)
 *     MiCreatePebOrTeb @ 0x1409C3014 (MiCreatePebOrTeb.c)
 */

__int64 __fastcall MmCreatePeb(ULONG_PTR BugCheckParameter1, char *a2, _QWORD *a3, __int64 a4)
{
  __int64 v6; // r13
  __int64 v7; // rdx
  int v8; // ebx
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rbx
  unsigned __int64 v11; // rsi
  int v12; // r15d
  __int16 v13; // r14
  char v14; // bl
  unsigned __int64 v15; // rdi
  __int16 v16; // r12
  __int64 v17; // rax
  __int64 v18; // rcx
  int v19; // esi
  int v20; // edx
  __int64 v21; // rax
  __int64 *v22; // rcx
  __int64 v23; // rbx
  char v24; // di
  char v25; // di
  __int64 v26; // rbx
  __int64 v27; // rbx
  int v28; // edi
  USHORT FirstSetRightGroupMask; // [rsp+58h] [rbp-180h]
  unsigned __int64 v31; // [rsp+68h] [rbp-170h]
  int v32; // [rsp+70h] [rbp-168h] BYREF
  __int64 v33; // [rsp+74h] [rbp-164h]
  __int64 v34; // [rsp+7Ch] [rbp-15Ch]
  unsigned int v35; // [rsp+84h] [rbp-154h]
  __int16 Blink; // [rsp+88h] [rbp-150h]
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
  unsigned __int64 v51; // [rsp+E0h] [rbp-F8h]
  __int16 v52; // [rsp+E8h] [rbp-F0h]
  __int16 v53; // [rsp+EAh] [rbp-EEh]
  __int16 v54; // [rsp+ECh] [rbp-ECh]
  unsigned __int64 v55; // [rsp+F0h] [rbp-E8h]
  int v56; // [rsp+F8h] [rbp-E0h]
  __int64 v57; // [rsp+100h] [rbp-D8h] BYREF
  unsigned __int64 v58; // [rsp+108h] [rbp-D0h] BYREF
  __int64 v59; // [rsp+110h] [rbp-C8h] BYREF
  int v60; // [rsp+118h] [rbp-C0h] BYREF
  __int64 v61; // [rsp+120h] [rbp-B8h] BYREF
  __int64 v62; // [rsp+128h] [rbp-B0h]
  ULONG_PTR v63; // [rsp+130h] [rbp-A8h]
  unsigned __int64 v64; // [rsp+138h] [rbp-A0h]
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
  v8 = MmMapViewOfSection(ExLeapSecondDataSectionPointer, v6, &v58, 0LL, 0LL, &v57, &v61, 1, 5242880, 2);
  if ( v8 < 0 || (v8 = MiCreatePebOrTeb(0LL, v7, &v59), v8 < 0) )
  {
    KiUnstackDetachProcess((__int64)v67, 0);
    return (unsigned int)v8;
  }
  else
  {
    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
    v11 = *(_QWORD *)(v6 + 688);
    v64 = v11;
    v12 = 10;
    v34 = 10LL;
    if ( (unsigned int)Feature_FixContainerBuildNumber__private_IsEnabledDeviceUsageNoInline() )
      Blink = (__int16)CurrentServerSiloGlobals[83].Blink;
    else
      Blink = NtBuildNumber;
    v35 = 2;
    v13 = CmNtCSDVersion;
    v37 = CmNtCSDVersion;
    v38 = qword_140FC4238;
    v39 = qword_140FC4230;
    v40 = KeNumberProcessors_0;
    v41 = NtGlobalFlag;
    v42 = NtGlobalFlag2;
    v44 = qword_140E2DA50;
    v45 = (unsigned int)dword_140FC4218;
    v46 = qword_140FC4228;
    v47 = qword_140FC4220;
    v48 = *a2;
    v49 = a2[3];
    v50 = *((_QWORD *)a2 + 1);
    v51 = v11;
    v52 = (__int16)CurrentServerSiloGlobals[64].Blink;
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
    v14 = 0;
    if ( (*(_BYTE *)(v6 + 368) & 1) != 0 )
    {
      v19 = 3;
      v32 = 3;
      v16 = 34;
      v33 = 10LL;
      v15 = 0LL;
      v31 = 0LL;
      v22 = (__int64 *)a4;
    }
    else
    {
      v15 = RtlImageNtHeader(v11);
      v31 = v15;
      v16 = *(_WORD *)(v15 + 22);
      v17 = RtlImageDirectoryEntryToData(v11, 1, 0xAu, &v60);
      v18 = v17;
      v62 = v17;
      if ( v17 )
      {
        if ( (v17 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v18 = v62;
        v13 = v37;
        v14 = 0;
      }
      v19 = *(unsigned __int16 *)(v15 + 92);
      v32 = v19;
      v12 = *(unsigned __int16 *)(v15 + 72);
      LODWORD(v33) = v12;
      HIDWORD(v33) = *(unsigned __int16 *)(v15 + 74);
      v20 = *(_DWORD *)(v15 + 76);
      if ( v20 )
      {
        if ( v18 )
        {
          if ( *(_WORD *)(v18 + 76) )
            v13 = *(_WORD *)(v18 + 76);
          v37 = v13;
        }
        LODWORD(v34) = (unsigned __int8)v20;
        HIDWORD(v34) = BYTE1(v20);
        Blink = HIWORD(v20);
        v35 = (v20 ^ 0xBFFFFFFF) >> 30;
      }
      if ( v18 )
      {
        v21 = *(_QWORD *)(v18 + 64);
        v22 = (__int64 *)a4;
        *(_QWORD *)a4 = v21;
        v14 = 1;
      }
      else
      {
        v22 = (__int64 *)a4;
      }
    }
    if ( v14 )
    {
      v23 = *v22;
      if ( (v23 & KeQueryGroupAffinity(FirstSetRightGroupMask)) != v23 )
        *(_QWORD *)a4 = 0LL;
    }
    if ( (v16 & 0x4000) != 0 )
    {
      v24 = _InterlockedExchangeAdd(&dword_140E2DA4C, 1u) + 1;
      do
      {
        v25 = v24 & 0x3F;
        v26 = 1LL << v25;
        *(_QWORD *)a4 = 1LL << v25;
        v24 = v25 + 1;
      }
      while ( (KeQueryGroupAffinity(FirstSetRightGroupMask) & v26) == 0 );
      v15 = v31;
      v13 = v37;
      v12 = v33;
      v19 = v32;
      v6 = v63;
    }
    v27 = v59;
    *(_QWORD *)(v59 + 280) = v34;
    *(_WORD *)(v27 + 288) = Blink;
    *(_DWORD *)(v27 + 292) = v35;
    *(_WORD *)(v27 + 290) = v13;
    *(_QWORD *)(v27 + 200) = v38;
    *(_QWORD *)(v27 + 208) = v39;
    *(_DWORD *)(v27 + 184) = KeNumberProcessors_0;
    *(_DWORD *)(v27 + 188) = NtGlobalFlag;
    *(_DWORD *)(v27 + 1988) = NtGlobalFlag2;
    *(_QWORD *)(v27 + 192) = qword_140E2DA50;
    *(_QWORD *)(v27 + 792) = (unsigned int)dword_140FC4218;
    *(_QWORD *)(v27 + 216) = qword_140FC4228;
    *(_QWORD *)(v27 + 224) = qword_140FC4220;
    *(_DWORD *)(v27 + 704) = SessionId;
    *(_DWORD *)(v27 + 296) = v19;
    *(_DWORD *)(v27 + 300) = v12;
    *(_DWORD *)(v27 + 304) = HIDWORD(v33);
    *(_BYTE *)v27 = v48;
    *(_BYTE *)(v27 + 3) = v49;
    *(_QWORD *)(v27 + 8) = v50;
    *(_QWORD *)(v27 + 16) = v64;
    *(_WORD *)(v27 + 844) = v52;
    *(_WORD *)(v27 + 846) = v53;
    *(_WORD *)(v27 + 848) = v54;
    *(_QWORD *)(v27 + 1976) = v55;
    *(_DWORD *)(v27 + 1984) = 0;
    if ( *(_QWORD *)(v6 + 784) && (v28 = MiInitializeWowPeb((__int64)&v32, v15, v6, a4), v28 < 0) )
    {
      KiUnstackDetachProcess((__int64)v67, 0);
      return (unsigned int)v28;
    }
    else
    {
      KiUnstackDetachProcess((__int64)v67, 0);
      *v65 = v27;
      return 0LL;
    }
  }
}
