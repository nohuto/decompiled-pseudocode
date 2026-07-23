/*
 * XREFs of PipInitComputerIds @ 0x140C65CF0
 * Callers:
 *     PipInitializeCoreDriversAndElam @ 0x140C65540 (PipInitializeCoreDriversAndElam.c)
 * Callees:
 *     MiUnmapContiguousMemory @ 0x1402929E8 (MiUnmapContiguousMemory.c)
 *     MmMapIoSpaceEx @ 0x14034B090 (MmMapIoSpaceEx.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     RtlStringCchPrintfExW @ 0x140418B60 (RtlStringCchPrintfExW.c)
 *     RtlStringCchPrintfW @ 0x140472F38 (RtlStringCchPrintfW.c)
 *     McTemplateK0d_EtwWriteTransfer @ 0x14047CDE4 (McTemplateK0d_EtwWriteTransfer.c)
 *     RtlUnicodeStringCopyStringEx @ 0x1405A0F00 (RtlUnicodeStringCopyStringEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwSetValueKey @ 0x1406A7FB0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x1406A8F90 (ZwDeleteValueKey.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PiSwStartCreate @ 0x14072EFAC (PiSwStartCreate.c)
 *     PnpUnicodeStringToWstrFree @ 0x1408B4E80 (PnpUnicodeStringToWstrFree.c)
 *     _PnpSetObjectProperty @ 0x1408B6258 (_PnpSetObjectProperty.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     RtlUpcaseUnicodeString @ 0x140949F30 (RtlUpcaseUnicodeString.c)
 *     RtlStringFromGUIDEx @ 0x1409A3470 (RtlStringFromGUIDEx.c)
 *     PnpUnicodeStringToWstr @ 0x1409C5120 (PnpUnicodeStringToWstr.c)
 *     _PnpCtxRegCloseKey @ 0x140A1004C (_PnpCtxRegCloseKey.c)
 *     IopCreateRegistryKeyEx @ 0x140A6AFFC (IopCreateRegistryKeyEx.c)
 *     _PnpCtxRegDeleteTree @ 0x140A7F11C (_PnpCtxRegDeleteTree.c)
 *     PipHardwareConfigOpenKey @ 0x140ABA270 (PipHardwareConfigOpenKey.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     PipCreateComputerId @ 0x140C22418 (PipCreateComputerId.c)
 *     PipSmBiosFindStruct @ 0x140C24348 (PipSmBiosFindStruct.c)
 *     PipSmBiosGetString @ 0x140C243BC (PipSmBiosGetString.c)
 */

__int64 __fastcall PipInitComputerIds(__int64 a1)
{
  unsigned __int64 v2; // r14
  unsigned int v3; // r12d
  __int64 v4; // rcx
  int v5; // eax
  HANDLE v6; // r13
  int ComputerId; // ebx
  __int64 v8; // rdx
  __int64 v9; // r13
  UNICODE_STRING *v10; // rdi
  __int64 v11; // rcx
  HANDLE v12; // r15
  __int64 v14; // rcx
  unsigned int v15; // r13d
  _BYTE *v16; // rax
  _BYTE *v17; // r12
  unsigned __int8 *Struct; // rax
  unsigned __int8 *v19; // rdi
  unsigned __int8 *v20; // r15
  NTSTATUS String; // eax
  NTSTATUS v22; // eax
  NTSTATUS v23; // eax
  NTSTATUS v24; // eax
  NTSTATUS v25; // eax
  _BYTE *v26; // rax
  __int64 v27; // rdi
  unsigned __int8 *v28; // r14
  NTSTATUS v29; // eax
  NTSTATUS v30; // eax
  unsigned __int8 *v31; // rax
  unsigned __int8 *v32; // rdi
  unsigned __int8 *v33; // r14
  NTSTATUS v34; // eax
  NTSTATUS v35; // eax
  NTSTATUS v36; // eax
  unsigned __int64 v37; // rdx
  _BYTE *v38; // rax
  int v39; // eax
  UNICODE_STRING *p_UnicodeString; // rdi
  unsigned int v41; // r14d
  unsigned int v42; // edi
  UNICODE_STRING *v43; // r14
  PCWSTR *v44; // r15
  PVOID v45; // r12
  __int64 v46; // rax
  wchar_t *Buffer; // rax
  HANDLE v48; // r15
  unsigned int v49; // esi
  void *v50; // rdi
  UNICODE_STRING *v51; // rcx
  __int64 v52; // rdx
  __int128 *v53; // rax
  int v54; // eax
  __int64 v55; // rsi
  UNICODE_STRING *v56; // rcx
  __int64 v57; // rdx
  __int128 *v58; // rax
  __int128 *v59; // rax
  __int64 v60; // rdx
  UNICODE_STRING *v61; // rcx
  __int64 v62; // rdx
  UNICODE_STRING *v63; // rcx
  __int128 *v64; // rax
  int v65; // eax
  __int64 v66; // rdx
  UNICODE_STRING *v67; // rcx
  __int128 *v68; // rax
  int v69; // eax
  int v70; // eax
  __int64 v71; // rdx
  UNICODE_STRING *v72; // rcx
  __int128 *v73; // rax
  int v74; // eax
  int v75; // eax
  __int64 v76; // rdx
  UNICODE_STRING *v77; // rcx
  _QWORD *v78; // rax
  int v79; // eax
  wchar_t *Pool2; // rax
  wchar_t *v81; // r12
  unsigned int v82; // r14d
  void *v83; // rax
  char *v84; // rsi
  char *v85; // r14
  wchar_t *v86; // rcx
  unsigned int v87; // edi
  unsigned __int16 *v88; // r14
  __int64 v89; // rax
  char *v90; // rax
  unsigned __int16 Length; // cx
  __int16 v92; // dx
  char *v93; // r8
  char *v94; // rax
  char *v95; // rdi
  unsigned __int16 v96; // cx
  PVOID v97; // r9
  int v98; // eax
  __int64 v99; // rcx
  __int64 v100; // r8
  PVOID Data; // [rsp+28h] [rbp-E0h]
  unsigned int ValueName; // [rsp+78h] [rbp-90h]
  UNICODE_STRING ValueName_8; // [rsp+80h] [rbp-88h] BYREF
  _BYTE *v104; // [rsp+90h] [rbp-78h]
  unsigned __int8 v105; // [rsp+98h] [rbp-70h]
  unsigned __int8 v106; // [rsp+99h] [rbp-6Fh]
  size_t pcchRemaining; // [rsp+A0h] [rbp-68h] BYREF
  char *v108; // [rsp+A8h] [rbp-60h]
  PVOID v109; // [rsp+B0h] [rbp-58h] BYREF
  int v110; // [rsp+B8h] [rbp-50h] BYREF
  HANDLE Handle; // [rsp+C0h] [rbp-48h] BYREF
  HANDLE KeyHandle; // [rsp+C8h] [rbp-40h] BYREF
  unsigned int v113; // [rsp+D0h] [rbp-38h]
  PVOID P; // [rsp+D8h] [rbp-30h]
  void *v115; // [rsp+E0h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+E8h] [rbp-20h] BYREF
  UNICODE_STRING v117; // [rsp+F8h] [rbp-10h] BYREF
  _GUID fmtid; // [rsp+108h] [rbp+0h] BYREF
  __int128 pid; // [rsp+118h] [rbp+10h]
  __int128 v120; // [rsp+128h] [rbp+20h]
  __int128 v121; // [rsp+138h] [rbp+30h] BYREF
  __int128 v122; // [rsp+148h] [rbp+40h] BYREF
  __int128 v123; // [rsp+158h] [rbp+50h] BYREF
  UNICODE_STRING *p_DestinationString; // [rsp+168h] [rbp+60h]
  UNICODE_STRING UnicodeString; // [rsp+178h] [rbp+70h] BYREF
  UNICODE_STRING v126; // [rsp+188h] [rbp+80h] BYREF
  UNICODE_STRING v127; // [rsp+198h] [rbp+90h] BYREF
  UNICODE_STRING v128; // [rsp+1A8h] [rbp+A0h] BYREF
  UNICODE_STRING v129; // [rsp+1B8h] [rbp+B0h] BYREF
  UNICODE_STRING v130; // [rsp+1C8h] [rbp+C0h] BYREF
  UNICODE_STRING v131; // [rsp+1D8h] [rbp+D0h] BYREF
  UNICODE_STRING v132; // [rsp+1E8h] [rbp+E0h] BYREF
  UNICODE_STRING v133; // [rsp+1F8h] [rbp+F0h] BYREF
  UNICODE_STRING v134; // [rsp+208h] [rbp+100h] BYREF
  GUID v135[15]; // [rsp+218h] [rbp+110h] BYREF
  _WORD v136[16]; // [rsp+308h] [rbp+200h] BYREF
  wchar_t SourceString; // [rsp+328h] [rbp+220h] BYREF
  wchar_t pszDest[8]; // [rsp+330h] [rbp+228h] BYREF

  KeyHandle = 0LL;
  v2 = 0LL;
  Handle = 0LL;
  v3 = 0;
  v115 = 0LL;
  v106 = 0;
  v105 = 0;
  v110 = 0;
  v113 = 0;
  P = 0LL;
  v108 = 0LL;
  v109 = 0LL;
  DestinationString = 0LL;
  p_DestinationString = 0LL;
  v117 = 0LL;
  v121 = 0LL;
  v122 = 0LL;
  v123 = 0LL;
  fmtid = 0LL;
  pid = 0LL;
  v120 = 0LL;
  ValueName_8 = 0LL;
  memset_0(&UnicodeString, 0, 0xA0uLL);
  v5 = PipHardwareConfigOpenKey(v4, 0xF003Fu, &KeyHandle);
  v6 = KeyHandle;
  ComputerId = v5;
  if ( v5 < 0 )
    goto LABEL_6;
  PnpCtxRegDeleteTree(*(__int64 *)&PiPnpRtlCtx, (__int64)KeyHandle, L"ComputerIds");
  *(_DWORD *)&ValueName_8.Length = 1572886;
  ValueName_8.Buffer = L"ComputerIds";
  ComputerId = IopCreateRegistryKeyEx(&Handle, v6, &ValueName_8, 0xF003Fu, 0, 0LL);
  if ( ComputerId < 0 )
    goto LABEL_6;
  PnpCtxRegDeleteTree(*(__int64 *)&PiPnpRtlCtx, (__int64)v6, L"ProductIds");
  *(_DWORD *)&ValueName_8.Length = 1441812;
  ValueName_8.Buffer = L"ProductIds";
  ComputerId = IopCreateRegistryKeyEx(&v115, v6, &ValueName_8, 0xF003Fu, 0, 0LL);
  if ( ComputerId < 0 )
    goto LABEL_6;
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 240) + 56LL);
  if ( v8 )
  {
    v14 = *(_QWORD *)(v8 + 16);
    if ( v14 )
    {
      v15 = *(_DWORD *)(v8 + 12);
      ValueName = v15;
      v16 = (_BYTE *)MmMapIoSpaceEx(v14, v15, 2LL);
      v104 = v16;
      v17 = v16;
      if ( !v16 )
      {
        ComputerId = -1073741670;
        v2 = 0LL;
LABEL_19:
        v3 = v15;
        goto LABEL_6;
      }
      Struct = PipSmBiosFindStruct(1, 0, v16, v15);
      v19 = Struct;
      if ( Struct )
      {
        v20 = Struct + 5;
        if ( Struct + 5 <= &Struct[Struct[1]] )
        {
          String = PipSmBiosGetString((__int64)Struct, Struct[4], (__int64)v17, v15, &UnicodeString);
          ComputerId = String;
          if ( String == -1073741275 )
          {
            ComputerId = 0;
          }
          else if ( String < 0 )
          {
            goto LABEL_33;
          }
        }
        if ( v19 + 27 <= &v19[v19[1]] )
        {
          v22 = PipSmBiosGetString((__int64)v19, v19[26], (__int64)v17, v15, &v126);
          ComputerId = v22;
          if ( v22 == -1073741275 )
          {
            ComputerId = 0;
          }
          else if ( v22 < 0 )
          {
            goto LABEL_33;
          }
        }
        if ( v19 + 6 <= &v19[v19[1]] )
        {
          v23 = PipSmBiosGetString((__int64)v19, *v20, (__int64)v17, v15, &v127);
          ComputerId = v23;
          if ( v23 == -1073741275 )
          {
            ComputerId = 0;
          }
          else if ( v23 < 0 )
          {
            goto LABEL_33;
          }
        }
        if ( v19 + 26 <= &v19[v19[1]] )
        {
          v24 = PipSmBiosGetString((__int64)v19, v19[25], (__int64)v17, v15, &v128);
          ComputerId = v24;
          if ( v24 == -1073741275 )
          {
            ComputerId = 0;
          }
          else if ( v24 < 0 )
          {
            goto LABEL_33;
          }
        }
        if ( v19 + 7 <= &v19[v19[1]] )
        {
          v25 = PipSmBiosGetString((__int64)v19, v19[6], (__int64)v17, v15, &v134);
          ComputerId = v25;
          if ( v25 == -1073741275 )
          {
            ComputerId = 0;
          }
          else if ( v25 < 0 )
          {
            goto LABEL_33;
          }
        }
      }
      v26 = PipSmBiosFindStruct(2, 10, v17, v15);
      v27 = (__int64)v26;
      if ( v26 )
      {
        v28 = v26 + 5;
        if ( v26 + 5 <= &v26[(unsigned __int8)v26[1]] )
        {
          v29 = PipSmBiosGetString((__int64)v26, v26[4], (__int64)v17, v15, &v131);
          ComputerId = v29;
          if ( v29 == -1073741275 )
          {
            ComputerId = 0;
          }
          else if ( v29 < 0 )
          {
            goto LABEL_33;
          }
        }
        if ( v27 + 6 <= v27 + (unsigned __int64)*(unsigned __int8 *)(v27 + 1) )
        {
          v30 = PipSmBiosGetString(v27, *v28, (__int64)v17, v15, &v132);
          ComputerId = v30;
          if ( v30 == -1073741275 )
          {
            ComputerId = 0;
          }
          else if ( v30 < 0 )
          {
            goto LABEL_33;
          }
        }
      }
      v31 = PipSmBiosFindStruct(0, 0, v17, v15);
      v32 = v31;
      if ( !v31 )
        goto LABEL_68;
      v33 = v31 + 5;
      if ( v31 + 5 <= &v31[v31[1]] )
      {
        v34 = PipSmBiosGetString((__int64)v31, v31[4], (__int64)v17, v15, &v129);
        ComputerId = v34;
        if ( v34 == -1073741275 )
        {
          ComputerId = 0;
        }
        else if ( v34 < 0 )
        {
          goto LABEL_33;
        }
      }
      if ( v32 + 6 <= &v32[v32[1]] )
      {
        v35 = PipSmBiosGetString((__int64)v32, *v33, (__int64)v17, v15, &v130);
        ComputerId = v35;
        if ( v35 == -1073741275 )
        {
          ComputerId = 0;
        }
        else if ( v35 < 0 )
        {
          goto LABEL_33;
        }
      }
      if ( v32 + 9 > &v32[v32[1]] )
      {
LABEL_64:
        v37 = (unsigned __int64)&v32[v32[1]];
        if ( (unsigned __int64)(v32 + 21) <= v37 )
          v106 = v32[20];
        if ( (unsigned __int64)(v32 + 22) <= v37 )
          v105 = v32[21];
LABEL_68:
        v38 = PipSmBiosFindStruct(3, 0, v17, v15);
        if ( v38 && v38 + 6 <= &v38[(unsigned __int8)v38[1]] )
        {
          v39 = v38[5] & 0x7F;
          v110 = v39;
        }
        else
        {
          v39 = v110;
        }
        if ( v39 )
        {
          ValueName_8.Buffer = L"EnclosureType";
          *(_DWORD *)&ValueName_8.Length = 1835034;
          ZwSetValueKey(KeyHandle, &ValueName_8, 0, 4u, &v110, 4u);
        }
        p_UnicodeString = &UnicodeString;
        v41 = 0;
        v9 = 10LL;
        do
        {
          if ( p_UnicodeString->Buffer && !p_UnicodeString->Length )
            RtlFreeAnsiString(&UnicodeString + v41);
          ++v41;
          ++p_UnicodeString;
        }
        while ( v41 < 0xA );
        v42 = 0;
        v43 = &UnicodeString;
        v44 = (PCWSTR *)&off_140009F30;
        do
        {
          RtlInitUnicodeString(&ValueName_8, *v44);
          if ( v43->Length )
          {
            if ( (int)PnpUnicodeStringToWstr(&v109, 0LL, &UnicodeString.Length + 8 * v42) >= 0 )
            {
              v45 = v109;
              v46 = -1LL;
              do
                ++v46;
              while ( *((_WORD *)v109 + v46) );
              ZwSetValueKey(KeyHandle, &ValueName_8, 0, 1u, v109, 2 * v46 + 2);
              PnpUnicodeStringToWstrFree(v45, (__int64)(&UnicodeString + v42));
            }
            v9 = 10LL;
          }
          else
          {
            ZwDeleteValueKey(KeyHandle, &ValueName_8);
          }
          ++v42;
          ++v44;
          ++v43;
        }
        while ( v42 < 0xA );
        Buffer = UnicodeString.Buffer;
        v48 = Handle;
        v49 = v113;
        if ( UnicodeString.Buffer )
        {
          v50 = v115;
          if ( v127.Buffer && v129.Buffer && v130.Buffer )
          {
            LODWORD(Data) = v105;
            ComputerId = RtlStringCchPrintfW(pszDest, 8uLL, L"%02x&%02x", v106, Data);
            if ( ComputerId < 0 )
              goto LABEL_154;
            RtlInitUnicodeString(&DestinationString, pszDest);
            if ( v128.Buffer )
            {
              *(_QWORD *)&v121 = &UnicodeString;
              v51 = &v127;
              *((_QWORD *)&v121 + 1) = &v126;
              v52 = 4LL;
              v53 = &v122;
              do
              {
                *(_QWORD *)v53 = v51++;
                v53 = (__int128 *)((char *)v53 + 8);
                --v52;
              }
              while ( v52 );
              v136[0] = 0;
              p_DestinationString = &DestinationString;
              ComputerId = PipCreateComputerId(v48, v50, (unsigned __int16 **)&v121, 7u, (int *)v135);
              v49 = 1;
              if ( ComputerId < 0 )
                goto LABEL_154;
            }
            *(_QWORD *)&v121 = &UnicodeString;
            *((_QWORD *)&v121 + 1) = &v126;
            *(_QWORD *)&v122 = &v127;
            *((_QWORD *)&v122 + 1) = &v129;
            *(_QWORD *)&v123 = &v130;
            *((_QWORD *)&v123 + 1) = &DestinationString;
            v136[v49] = 1;
            v54 = PipCreateComputerId(v48, v50, (unsigned __int16 **)&v121, 6u, (int *)&v135[v49]);
            v55 = v49 + 1;
            ComputerId = v54;
            if ( v54 < 0 )
              goto LABEL_154;
            *(_QWORD *)&v121 = &UnicodeString;
            v136[v55] = 2;
            *((_QWORD *)&v121 + 1) = &v127;
            *(_QWORD *)&v122 = &v129;
            *((_QWORD *)&v122 + 1) = &v130;
            *(_QWORD *)&v123 = &DestinationString;
            ComputerId = PipCreateComputerId(v48, v50, (unsigned __int16 **)&v121, 5u, (int *)&v135[(unsigned int)v55]);
            v49 = v55 + 1;
            if ( ComputerId < 0 )
              goto LABEL_154;
            Buffer = UnicodeString.Buffer;
          }
          if ( Buffer )
          {
            if ( v127.Buffer )
            {
              if ( v128.Buffer )
              {
                if ( v131.Buffer )
                {
                  if ( v132.Buffer )
                  {
                    *(_QWORD *)&v121 = &UnicodeString;
                    v56 = &v127;
                    v57 = 2LL;
                    *((_QWORD *)&v121 + 1) = &v126;
                    v58 = &v122;
                    do
                    {
                      *(_QWORD *)v58 = v56++;
                      v58 = (__int128 *)((char *)v58 + 8);
                      --v57;
                    }
                    while ( v57 );
                    v59 = &v123;
                    v60 = 2LL;
                    v61 = &v131;
                    do
                    {
                      *(_QWORD *)v59 = v61++;
                      v59 = (__int128 *)((char *)v59 + 8);
                      --v60;
                    }
                    while ( v60 );
                    v136[v49] = 3;
                    ComputerId = PipCreateComputerId(v48, v50, (unsigned __int16 **)&v121, 6u, (int *)&v135[v49++]);
                    if ( ComputerId < 0 )
                      goto LABEL_154;
                  }
                }
                v62 = 2LL;
                *(_QWORD *)&v121 = &UnicodeString;
                v63 = &v127;
                *((_QWORD *)&v121 + 1) = &v126;
                v64 = &v122;
                do
                {
                  *(_QWORD *)v64 = v63++;
                  v64 = (__int128 *)((char *)v64 + 8);
                  --v62;
                }
                while ( v62 );
                v136[v49] = 4;
                v65 = PipCreateComputerId(v48, v50, (unsigned __int16 **)&v121, 4u, (int *)&v135[v49++]);
                ComputerId = v65;
                if ( v65 < 0 )
                  goto LABEL_154;
              }
              *(_QWORD *)&v121 = &UnicodeString;
              *((_QWORD *)&v121 + 1) = &v126;
              *(_QWORD *)&v122 = &v127;
              v136[v49] = 5;
              ComputerId = PipCreateComputerId(v48, v50, (unsigned __int16 **)&v121, 3u, (int *)&v135[v49++]);
              if ( ComputerId < 0 )
                goto LABEL_154;
              Buffer = UnicodeString.Buffer;
            }
            if ( Buffer )
            {
              if ( v128.Buffer )
              {
                if ( v131.Buffer )
                {
                  if ( v132.Buffer )
                  {
                    v66 = 2LL;
                    *(_QWORD *)&v121 = &UnicodeString;
                    v67 = &v131;
                    *((_QWORD *)&v121 + 1) = &v128;
                    v68 = &v122;
                    do
                    {
                      *(_QWORD *)v68 = v67++;
                      v68 = (__int128 *)((char *)v68 + 8);
                      --v66;
                    }
                    while ( v66 );
                    v136[v49] = 6;
                    v69 = PipCreateComputerId(v48, v50, (unsigned __int16 **)&v121, 4u, (int *)&v135[v49++]);
                    ComputerId = v69;
                    if ( v69 < 0 )
                      goto LABEL_154;
                  }
                }
                *(_QWORD *)&v121 = &UnicodeString;
                *((_QWORD *)&v121 + 1) = &v128;
                v136[v49] = 7;
                ComputerId = PipCreateComputerId(v48, v50, (unsigned __int16 **)&v121, 2u, (int *)&v135[v49++]);
                if ( ComputerId < 0 )
                  goto LABEL_154;
                Buffer = UnicodeString.Buffer;
              }
              if ( Buffer )
              {
                if ( v127.Buffer )
                {
                  if ( v131.Buffer )
                  {
                    if ( v132.Buffer )
                    {
                      *(_QWORD *)&v121 = &UnicodeString;
                      *((_QWORD *)&v121 + 1) = &v127;
                      *(_QWORD *)&v122 = &v131;
                      *((_QWORD *)&v122 + 1) = &v132;
                      v136[v49] = 8;
                      v70 = PipCreateComputerId(v48, v50, (unsigned __int16 **)&v121, 4u, (int *)&v135[v49++]);
                      ComputerId = v70;
                      if ( v70 < 0 )
                        goto LABEL_154;
                    }
                  }
                  *(_QWORD *)&v121 = &UnicodeString;
                  *((_QWORD *)&v121 + 1) = &v127;
                  v136[v49] = 9;
                  ComputerId = PipCreateComputerId(v48, v50, (unsigned __int16 **)&v121, 2u, (int *)&v135[v49++]);
                  if ( ComputerId < 0 )
                    goto LABEL_154;
                  Buffer = UnicodeString.Buffer;
                }
                if ( Buffer )
                {
                  if ( v126.Buffer )
                  {
                    if ( v132.Buffer )
                    {
                      if ( v131.Buffer )
                      {
                        v71 = 2LL;
                        *(_QWORD *)&v121 = &UnicodeString;
                        v72 = &v131;
                        *((_QWORD *)&v121 + 1) = &v126;
                        v73 = &v122;
                        do
                        {
                          *(_QWORD *)v73 = v72++;
                          v73 = (__int128 *)((char *)v73 + 8);
                          --v71;
                        }
                        while ( v71 );
                        v136[v49] = 10;
                        v74 = PipCreateComputerId(v48, v50, (unsigned __int16 **)&v121, 4u, (int *)&v135[v49++]);
                        ComputerId = v74;
                        if ( v74 < 0 )
                          goto LABEL_154;
                      }
                    }
                    *(_QWORD *)&v121 = &UnicodeString;
                    *((_QWORD *)&v121 + 1) = &v126;
                    v136[v49] = 11;
                    v75 = PipCreateComputerId(v48, v50, (unsigned __int16 **)&v121, 2u, (int *)&v135[v49++]);
                    ComputerId = v75;
                    if ( v75 < 0 )
                      goto LABEL_154;
                    Buffer = UnicodeString.Buffer;
                  }
                  if ( Buffer )
                  {
                    if ( v110 )
                    {
                      ComputerId = RtlStringCchPrintfW(&SourceString, 4uLL, L"%x");
                      if ( ComputerId < 0 )
                        goto LABEL_154;
                      RtlInitUnicodeString(&v117, &SourceString);
                      *(_QWORD *)&v121 = &UnicodeString;
                      *((_QWORD *)&v121 + 1) = &v117;
                      v136[v49] = 12;
                      ComputerId = PipCreateComputerId(v48, 0LL, (unsigned __int16 **)&v121, 2u, (int *)&v135[v49++]);
                      if ( ComputerId < 0 )
                        goto LABEL_154;
                      Buffer = UnicodeString.Buffer;
                    }
                    if ( Buffer )
                    {
                      if ( v132.Buffer )
                      {
                        if ( v131.Buffer )
                        {
                          v76 = 2LL;
                          *(_QWORD *)&v121 = &UnicodeString;
                          v77 = &v131;
                          v78 = (_QWORD *)&v121 + 1;
                          do
                          {
                            *v78++ = v77++;
                            --v76;
                          }
                          while ( v76 );
                          v136[v49] = 13;
                          ComputerId = PipCreateComputerId(
                                         v48,
                                         0LL,
                                         (unsigned __int16 **)&v121,
                                         3u,
                                         (int *)&v135[v49++]);
                          if ( ComputerId < 0 )
                            goto LABEL_154;
                        }
                      }
                      *(_QWORD *)&v121 = &UnicodeString;
                      v136[v49] = 14;
                      v79 = PipCreateComputerId(v48, 0LL, (unsigned __int16 **)&v121, 1u, (int *)&v135[v49++]);
                      ComputerId = v79;
                      if ( v79 < 0 )
                        goto LABEL_154;
                    }
                  }
                }
              }
            }
          }
        }
        Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL, 112 * v49 + 2, 0x6E697050uLL);
        v81 = Pool2;
        if ( !Pool2 )
        {
          ComputerId = -1073741670;
LABEL_154:
          v2 = (unsigned __int64)v104;
          v3 = ValueName;
          goto LABEL_7;
        }
        ValueName_8.Buffer = Pool2;
        v82 = 0;
        ValueName_8.MaximumLength = 112 * v49 + 2;
        if ( v49 )
        {
          while ( 1 )
          {
            ValueName_8.Length = 0;
            ComputerId = RtlUnicodeStringCopyStringEx(&ValueName_8, L"ComputerMetadata\\", &ValueName_8, 0);
            if ( ComputerId < 0 )
              break;
            ComputerId = RtlStringFromGUIDEx(&v135[v82], &ValueName_8, 0);
            if ( ComputerId < 0 )
              goto LABEL_215;
            ComputerId = RtlUpcaseUnicodeString(&ValueName_8, &ValueName_8, 0);
            if ( ComputerId < 0 )
              break;
            ValueName_8.MaximumLength -= 78;
            Pool2 = ValueName_8.Buffer + 39;
            ++v82;
            ValueName_8.Buffer += 39;
            if ( v82 >= v49 )
              goto LABEL_160;
          }
          v84 = 0LL;
          v85 = 0LL;
          goto LABEL_217;
        }
LABEL_160:
        if ( ComputerId < 0 )
        {
          v84 = v108;
          v85 = v108;
          goto LABEL_217;
        }
        *Pool2 = 0;
        ++ValueName_8.Buffer;
        ComputerId = PnpSetObjectProperty(
                       *(__int64 *)&PiPnpRtlCtx,
                       (__int64)L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}",
                       5,
                       0LL,
                       0LL,
                       (__int64)&DEVPKEY_Device_HardwareIds,
                       8210,
                       (__int64)v81,
                       112 * v49 + 2,
                       0);
        if ( ComputerId < 0 )
        {
LABEL_215:
          v84 = 0LL;
          v85 = 0LL;
          goto LABEL_217;
        }
        v83 = (void *)ExAllocatePool2(0x100uLL, 96 * v49 + 2, 0x6E697050uLL);
        P = v83;
        if ( !v83 )
        {
          ComputerId = -1073741670;
LABEL_164:
          v84 = 0LL;
          v85 = 0LL;
          goto LABEL_217;
        }
        ValueName_8.Buffer = (wchar_t *)v83;
        v86 = (wchar_t *)v83;
        ValueName_8.MaximumLength = 96 * v49 + 2;
        v87 = 0;
        if ( v49 )
        {
          v88 = v136;
          do
          {
            v89 = *v88;
            ValueName_8.Length = 0;
            if ( *((_BYTE *)qword_140027AE0 + v89) )
            {
              ComputerId = RtlUnicodeStringCopyStringEx(&ValueName_8, L"COMPUTER\\", &ValueName_8, 0);
              if ( ComputerId < 0 )
                goto LABEL_215;
              ComputerId = RtlStringFromGUIDEx(&v135[v87], &ValueName_8, 0);
              if ( ComputerId < 0 )
                goto LABEL_215;
              ComputerId = RtlUpcaseUnicodeString(&ValueName_8, &ValueName_8, 0);
              if ( ComputerId < 0 )
                goto LABEL_164;
              v86 = ValueName_8.Buffer + 39;
              ValueName_8.MaximumLength -= 78;
              ValueName_8.Buffer += 39;
            }
            ++v87;
            ++v88;
          }
          while ( v87 < v49 );
        }
        *v86 = 0;
        ++ValueName_8.Buffer;
        v90 = (char *)ExAllocatePool2(0x100uLL, 0x190uLL, 0x6E697050uLL);
        v85 = v90;
        if ( !v90 )
        {
          ComputerId = -1073741670;
LABEL_175:
          v84 = 0LL;
LABEL_217:
          ExFreePoolWithTag(v81, 0);
          if ( P )
            ExFreePoolWithTag(P, 0);
          if ( v85 )
            ExFreePoolWithTag(v85, 0);
          if ( v84 )
            ExFreePoolWithTag(v84, 0);
          goto LABEL_154;
        }
        v109 = v90;
        pcchRemaining = 200LL;
        if ( UnicodeString.Length <= 2u )
        {
          RtlInitUnicodeString(&ValueName_8, L"Unknown");
        }
        else
        {
          ValueName_8.Buffer = UnicodeString.Buffer;
          ValueName_8.MaximumLength = UnicodeString.MaximumLength;
          if ( UnicodeString.Length <= 0x46u )
            ValueName_8.Length = UnicodeString.Length;
          else
            ValueName_8.Length = 70;
        }
        ComputerId = RtlStringCchPrintfExW(
                       (NTSTRSAFE_PWSTR)v85,
                       0xC8uLL,
                       (NTSTRSAFE_PWSTR *)&v109,
                       &pcchRemaining,
                       0x800u,
                       L"MFG_%wZ",
                       &ValueName_8);
        if ( ComputerId < 0 )
          goto LABEL_175;
        if ( v126.Length > 2u )
        {
          ValueName_8.Buffer = v126.Buffer;
          ValueName_8.MaximumLength = v126.MaximumLength;
          ValueName_8.Length = 70;
          if ( v126.Length <= 0x46u )
            ValueName_8.Length = v126.Length;
          ComputerId = RtlStringCchPrintfExW(
                         (NTSTRSAFE_PWSTR)v109,
                         pcchRemaining,
                         (NTSTRSAFE_PWSTR *)&v109,
                         &pcchRemaining,
                         0x800u,
                         L"&FAM_%wZ",
                         &ValueName_8);
          if ( ComputerId < 0 )
            goto LABEL_175;
        }
        Length = v127.Length;
        if ( v127.Length > 2u )
        {
          ValueName_8.Buffer = v127.Buffer;
          ValueName_8.MaximumLength = v127.MaximumLength;
          ValueName_8.Length = 70;
          if ( v127.Length <= 0x46u )
            ValueName_8.Length = v127.Length;
          ComputerId = RtlStringCchPrintfExW(
                         (NTSTRSAFE_PWSTR)v109,
                         pcchRemaining,
                         (NTSTRSAFE_PWSTR *)&v109,
                         &pcchRemaining,
                         0x800u,
                         L"&PROD_%wZ",
                         &ValueName_8);
          if ( ComputerId < 0 )
            goto LABEL_175;
          Length = v127.Length;
        }
        if ( v128.Length > 2u )
        {
          ValueName_8.Buffer = v128.Buffer;
          ValueName_8.MaximumLength = v128.MaximumLength;
          ValueName_8.Length = 70;
          if ( v128.Length <= 0x46u )
            ValueName_8.Length = v128.Length;
          ComputerId = RtlStringCchPrintfExW(
                         (NTSTRSAFE_PWSTR)v109,
                         pcchRemaining,
                         (NTSTRSAFE_PWSTR *)&v109,
                         &pcchRemaining,
                         0x800u,
                         L"&SKU_%wZ",
                         &ValueName_8);
          if ( ComputerId < 0 )
            goto LABEL_175;
          Length = v127.Length;
        }
        v92 = *(_WORD *)v85;
        v93 = v85;
        if ( *(_WORD *)v85 )
        {
          do
          {
            if ( (unsigned __int16)(v92 - 33) > 0x5Eu || v92 == 44 || v92 == 92 )
              *(_WORD *)v93 = 95;
            v93 += 2;
            v92 = *(_WORD *)v93;
          }
          while ( *(_WORD *)v93 );
          Length = v127.Length;
        }
        v94 = (char *)ExAllocatePool2(0x100uLL, UnicodeString.Length + 4 + (unsigned int)Length, 0x6E697050uLL);
        v84 = v94;
        if ( v94 )
        {
          v95 = v94;
          if ( UnicodeString.Length >= 2u )
          {
            memmove(v94, UnicodeString.Buffer, UnicodeString.Length);
            v94 = &v84[2 * ((unsigned __int64)UnicodeString.Length >> 1)];
            v95 = v94;
          }
          v96 = v127.Length;
          if ( v127.Length >= 2u )
          {
            if ( v95 != v84 )
            {
              *(_WORD *)v94 = 32;
              v95 += 2;
              v96 = v127.Length;
            }
            memmove(v95, v127.Buffer, v96);
            v94 = &v95[2 * ((unsigned __int64)v127.Length >> 1)];
            v95 = v94;
          }
          v97 = P;
          *(_WORD *)v94 = 0;
          pid = DEVPKEY_Device_FriendlyName.pid;
          fmtid = DEVPKEY_Device_FriendlyName.fmtid;
          LODWORD(v120) = 18;
          *((_QWORD *)&v120 + 1) = v84;
          DWORD1(v120) = 2 * ((v95 - v84) >> 1) + 2;
          v98 = PiSwStartCreate(
                  L"COMPUTER",
                  *((const wchar_t **)IopRootDeviceNode + 6),
                  (const wchar_t *)v85,
                  (__int64)v97,
                  (__int64)L"COMPUTER\\Generic",
                  0LL,
                  0,
                  (__int64)v84,
                  0LL,
                  0LL,
                  0,
                  (__int64)&fmtid,
                  1);
          if ( v98 < 0 && (byte_140EEFF64 & 0x10) != 0 )
            McTemplateK0d_EtwWriteTransfer(v99, (const EVENT_DESCRIPTOR *)KMPnPEvt_CreateOemDevice_Failure, v100, v98);
        }
        else
        {
          ComputerId = -1073741670;
        }
        goto LABEL_217;
      }
      v36 = PipSmBiosGetString((__int64)v32, v32[8], (__int64)v17, v15, &v133);
      ComputerId = v36;
      if ( v36 == -1073741275 )
      {
        ComputerId = 0;
        goto LABEL_64;
      }
      if ( v36 >= 0 )
        goto LABEL_64;
LABEL_33:
      v2 = (unsigned __int64)v17;
      goto LABEL_19;
    }
  }
  ComputerId = -1073741637;
LABEL_6:
  v9 = 10LL;
LABEL_7:
  v10 = &UnicodeString;
  do
  {
    RtlFreeAnsiString(v10++);
    --v9;
  }
  while ( v9 );
  v12 = Handle;
  if ( v2 )
    MiUnmapContiguousMemory(v2, v3, 1);
  if ( v12 )
    ZwClose(v12);
  if ( KeyHandle )
    PnpCtxRegCloseKey(v11, KeyHandle);
  return (unsigned int)ComputerId;
}
