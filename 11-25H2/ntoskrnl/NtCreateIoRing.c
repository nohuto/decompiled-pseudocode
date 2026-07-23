/*
 * XREFs of NtCreateIoRing @ 0x14070B060
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     _tlgWriteAgg @ 0x1403BAC2C (_tlgWriteAgg.c)
 *     KeInitializeEvent @ 0x140401B80 (KeInitializeEvent.c)
 *     _tlgCreate1Sz_char @ 0x140428104 (_tlgCreate1Sz_char.c)
 *     _tlgKeywordOn @ 0x14042F500 (_tlgKeywordOn.c)
 *     PsGetProcessImageFileName @ 0x14044CF60 (PsGetProcessImageFileName.c)
 *     IopExceptionFilter @ 0x140592C78 (IopExceptionFilter.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     IopAllocateAndLockMdl @ 0x14070584C (IopAllocateAndLockMdl.c)
 *     ObCreateObjectEx @ 0x14085BE20 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1408A05E0 (ObInsertObjectEx.c)
 *     MmMapViewInSessionSpace @ 0x1408BA360 (MmMapViewInSessionSpace.c)
 *     ObCloseHandle @ 0x1408EFEC0 (ObCloseHandle.c)
 *     MmMapViewOfSection @ 0x1408FBFC0 (MmMapViewOfSection.c)
 *     ProbeForWrite @ 0x140934CF0 (ProbeForWrite.c)
 *     MmCreateSection @ 0x14093C290 (MmCreateSection.c)
 */

NTSTATUS __cdecl NtCreateIoRing(
        PHANDLE IoRingHandle,
        ULONG CreateParametersLength,
        PVOID CreateParameters,
        ULONG OutputParametersLength,
        PVOID OutputParameters)
{
  char v7; // r15
  NTSTATUS inserted; // edi
  __int64 v9; // rcx
  int v10; // r12d
  unsigned int v11; // esi
  char v12; // dl
  unsigned int v13; // r14d
  char v14; // cl
  unsigned __int64 v15; // r12
  unsigned __int64 v16; // rdx
  char *v17; // rax
  const CHAR *v18; // rdx
  const CHAR *v19; // r9
  _DWORD *v20; // r8
  PVOID Object; // [rsp+50h] [rbp-228h] BYREF
  __int64 PreviousMode; // [rsp+58h] [rbp-220h]
  __int128 v24; // [rsp+60h] [rbp-218h]
  int v25; // [rsp+70h] [rbp-208h]
  unsigned __int64 v26; // [rsp+78h] [rbp-200h] BYREF
  int v27; // [rsp+80h] [rbp-1F8h] BYREF
  int v28; // [rsp+84h] [rbp-1F4h] BYREF
  int v29; // [rsp+88h] [rbp-1F0h] BYREF
  __int64 v30; // [rsp+8Ch] [rbp-1ECh] BYREF
  int v31; // [rsp+94h] [rbp-1E4h] BYREF
  int v32; // [rsp+98h] [rbp-1E0h] BYREF
  int v33; // [rsp+9Ch] [rbp-1DCh] BYREF
  int v34; // [rsp+A0h] [rbp-1D8h] BYREF
  __int64 v35; // [rsp+A8h] [rbp-1D0h] BYREF
  __int64 v36; // [rsp+B0h] [rbp-1C8h] BYREF
  HANDLE Handle; // [rsp+B8h] [rbp-1C0h] BYREF
  PHANDLE v38; // [rsp+C0h] [rbp-1B8h]
  __int64 v39; // [rsp+C8h] [rbp-1B0h] BYREF
  __int64 v40; // [rsp+D0h] [rbp-1A8h] BYREF
  _QWORD v41[4]; // [rsp+D8h] [rbp-1A0h] BYREF
  __int128 v42; // [rsp+F8h] [rbp-180h]
  char v43[32]; // [rsp+110h] [rbp-168h] BYREF
  __int64 *v44; // [rsp+130h] [rbp-148h]
  __int64 v45; // [rsp+138h] [rbp-140h]
  char v46[16]; // [rsp+140h] [rbp-138h] BYREF
  char v47[16]; // [rsp+150h] [rbp-128h] BYREF
  int *v48; // [rsp+160h] [rbp-118h]
  __int64 v49; // [rsp+168h] [rbp-110h]
  int *v50; // [rsp+170h] [rbp-108h]
  __int64 v51; // [rsp+178h] [rbp-100h]
  int *v52; // [rsp+180h] [rbp-F8h]
  __int64 v53; // [rsp+188h] [rbp-F0h]
  __int64 *v54; // [rsp+190h] [rbp-E8h]
  __int64 v55; // [rsp+198h] [rbp-E0h]
  char *v56; // [rsp+1A0h] [rbp-D8h]
  __int64 v57; // [rsp+1A8h] [rbp-D0h]
  int *v58; // [rsp+1B0h] [rbp-C8h]
  __int64 v59; // [rsp+1B8h] [rbp-C0h]
  int *v60; // [rsp+1C0h] [rbp-B8h]
  __int64 v61; // [rsp+1C8h] [rbp-B0h]
  int *v62; // [rsp+1D0h] [rbp-A8h]
  __int64 v63; // [rsp+1D8h] [rbp-A0h]
  int *v64; // [rsp+1E0h] [rbp-98h]
  __int64 v65; // [rsp+1E8h] [rbp-90h]
  __int64 *v66; // [rsp+1F0h] [rbp-88h]
  __int64 v67; // [rsp+1F8h] [rbp-80h]
  __int64 *v68; // [rsp+200h] [rbp-78h]
  __int64 v69; // [rsp+208h] [rbp-70h]
  unsigned __int64 *v70; // [rsp+210h] [rbp-68h]
  __int64 v71; // [rsp+218h] [rbp-60h]
  __int64 *v72; // [rsp+220h] [rbp-58h]
  __int64 v73; // [rsp+228h] [rbp-50h]

  v38 = IoRingHandle;
  HIDWORD(PreviousMode) = 0;
  v7 = KeGetCurrentThread()->PreviousMode;
  LOBYTE(PreviousMode) = v7;
  v24 = 0LL;
  v25 = 0;
  Object = 0LL;
  if ( CreateParametersLength < 0x14 )
  {
    inserted = -1073741584;
    goto LABEL_51;
  }
  if ( OutputParametersLength < 0x30 )
  {
    inserted = -1073741789;
    goto LABEL_51;
  }
  if ( v7 )
  {
    v9 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoRingHandle < 0x7FFFFFFF0000LL )
      v9 = (__int64)IoRingHandle;
    *(_QWORD *)v9 = *(_QWORD *)v9;
    ProbeForWrite(OutputParameters, OutputParametersLength, 1u);
  }
  v24 = *(_OWORD *)CreateParameters;
  v25 = *((_DWORD *)CreateParameters + 4);
  v10 = v24;
  if ( (unsigned int)(v24 - 1) > 0x18F )
  {
    inserted = -1069154301;
    goto LABEL_51;
  }
  if ( !DWORD1(v24) )
  {
    v11 = 32;
LABEL_12:
    v12 = -1;
    goto LABEL_13;
  }
  v11 = DWORD1(v24);
  if ( DWORD1(v24) < 8 )
  {
    v11 = 8;
    goto LABEL_12;
  }
  if ( DWORD1(v24) > 0x10000 )
  {
    inserted = -1069154300;
    goto LABEL_51;
  }
  if ( ((DWORD1(v24) - 1) & DWORD1(v24)) == 0 )
    goto LABEL_12;
  v12 = -1;
  v14 = -1;
  do
  {
    ++v14;
    v11 >>= 1;
  }
  while ( v11 );
  v11 = 1 << (v14 + 1);
LABEL_13:
  DWORD1(v24) = v11;
  v13 = DWORD2(v24);
  if ( DWORD2(v24) > 0x20000 )
  {
    inserted = -1069154299;
    goto LABEL_51;
  }
  if ( DWORD2(v24) <= 2 * v11 )
  {
    v13 = 2 * v11;
    DWORD2(v24) = 2 * v11;
  }
  else
  {
    if ( ((DWORD2(v24) - 1) & DWORD2(v24)) != 0 )
    {
      if ( DWORD2(v24) )
      {
        do
        {
          ++v12;
          v13 >>= 1;
        }
        while ( v13 );
      }
      v13 = 1 << (v12 + 1);
    }
    DWORD2(v24) = v13;
  }
  if ( HIDWORD(v24) )
  {
    inserted = -1069154303;
    goto LABEL_51;
  }
  v41[0] = 48LL;
  memset(&v41[1], 0, 24);
  v42 = 0LL;
  LOBYTE(OutputParametersLength) = v7;
  inserted = ObCreateObjectEx(0, (_DWORD)IoRingObjectType, (unsigned int)v41, OutputParametersLength);
  HIDWORD(PreviousMode) = inserted;
  if ( inserted < 0 )
    goto LABEL_43;
  memset_0(Object, 0, 0xD0uLL);
  *(_WORD *)Object = 14;
  *((_WORD *)Object + 1) = 208;
  *((_DWORD *)Object + 2) = v10;
  *((_DWORD *)Object + 5) = v11;
  *((_DWORD *)Object + 7) = v13;
  *((_DWORD *)Object + 3) = 0;
  *((_DWORD *)Object + 4) = 0;
  *((_DWORD *)Object + 6) = v11 - 1;
  *((_DWORD *)Object + 8) = v13 - 1;
  *((_QWORD *)Object + 13) = 0LL;
  KeInitializeEvent((PRKEVENT)((char *)Object + 136), SynchronizationEvent, 0);
  v15 = (((unsigned __int64)v11 << 6) + 87) & 0xFFFFFFFFFFFFFFF8uLL;
  v26 = v15 + 8 * (v13 + 2 * (v13 + 2LL));
  inserted = ((__int64 (__fastcall *)(char *, __int64, _QWORD, unsigned __int64 *, int, int, _QWORD, _QWORD, PVOID *, _QWORD, PVOID, __int64, _QWORD, _QWORD, int))MmCreateSection)(
               (char *)Object + 56,
               6LL,
               0LL,
               &v26,
               4,
               0x8000000,
               0LL,
               0LL,
               &Object,
               0LL,
               Object,
               PreviousMode,
               v24,
               *((_QWORD *)&v24 + 1),
               v25);
  HIDWORD(PreviousMode) = inserted;
  if ( inserted < 0 )
    goto LABEL_43;
  inserted = MmMapViewInSessionSpace(*((PVOID *)Object + 7), (PVOID *)Object + 8, (PSIZE_T)Object + 11);
  HIDWORD(PreviousMode) = inserted;
  if ( inserted < 0 )
    goto LABEL_43;
  inserted = IopAllocateAndLockMdl(
               (void *)(v15 + *((_QWORD *)Object + 8)),
               *((_DWORD *)Object + 22) - (int)v15,
               0,
               (__int64)Object + 72,
               (struct _MDL **)Object + 9,
               (_QWORD *)Object + 10);
  HIDWORD(PreviousMode) = inserted;
  if ( inserted < 0 )
    goto LABEL_43;
  if ( v7 )
  {
    v35 = 0LL;
    v36 = 0LL;
    v26 = 0LL;
    inserted = MmMapViewOfSection(
                 *((_QWORD *)Object + 7),
                 KeGetCurrentThread()->ApcState.Process,
                 (unsigned int)&v26,
                 0,
                 0LL,
                 (__int64)&v35,
                 (__int64)&v36,
                 1,
                 0,
                 4);
    HIDWORD(PreviousMode) = inserted;
    if ( inserted < 0 )
      goto LABEL_43;
    v16 = v26 + v15;
    *((_QWORD *)Object + 5) = v26;
    *((_QWORD *)Object + 6) = v16;
  }
  Handle = 0LL;
  inserted = ObInsertObjectEx(Object, 0LL, 0, (__int64)&Object, (__int64)&Handle);
  HIDWORD(PreviousMode) = inserted;
  if ( inserted >= 0 )
  {
    *v38 = Handle;
    v17 = (char *)Object;
    *(_OWORD *)OutputParameters = *(_OWORD *)((char *)Object + 8);
    *((_OWORD *)OutputParameters + 1) = *(_OWORD *)(v17 + 24);
    *((_OWORD *)OutputParameters + 2) = *(_OWORD *)(v17 + 40);
  }
  else
  {
    Object = 0LL;
  }
LABEL_43:
  if ( inserted >= 0 && Object )
  {
    PsGetProcessImageFileName((__int64)KeGetCurrentThread()->ApcState.Process);
    if ( (unsigned int)dword_140E06E48 > 5 && tlgKeywordOn((__int64)&dword_140E06E48, 0x400000000000LL) )
    {
      v39 = 1LL;
      v44 = &v39;
      v45 = 8LL;
      v18 = "UserMode";
      if ( !v7 )
        v18 = "KernelMode";
      tlgCreate1Sz_char((__int64)v46, v18);
      tlgCreate1Sz_char((__int64)v47, v19);
      v27 = v24;
      v48 = &v27;
      v49 = 4LL;
      v28 = HIDWORD(v24);
      v50 = &v28;
      v51 = 4LL;
      v29 = v25;
      v52 = &v29;
      v53 = 4LL;
      v30 = *(_QWORD *)((char *)&v24 + 4);
      v54 = &v30;
      v55 = 4LL;
      v56 = (char *)&v30 + 4;
      v57 = 4LL;
      v31 = v20[2];
      v58 = &v31;
      v59 = 4LL;
      v32 = v20[3];
      v60 = &v32;
      v61 = 4LL;
      v33 = v20[4];
      v62 = &v33;
      v63 = 4LL;
      v34 = v20[5];
      v64 = &v34;
      v65 = 4LL;
      LODWORD(v35) = v20[6];
      v66 = &v35;
      v67 = 4LL;
      LODWORD(v36) = v20[7];
      v68 = &v36;
      v69 = 4LL;
      LODWORD(v26) = v20[8];
      v70 = &v26;
      v71 = 4LL;
      v40 = 0x1000000LL;
      v72 = &v40;
      v73 = 8LL;
      tlgWriteAgg((__int64)&dword_140E06E48, (unsigned __int8 *)&byte_140044F77, (__int64)v20, 0x12u, (__int64)v43);
    }
    inserted = HIDWORD(PreviousMode);
  }
LABEL_51:
  if ( Object )
    ObfDereferenceObject(Object);
  return inserted;
}
