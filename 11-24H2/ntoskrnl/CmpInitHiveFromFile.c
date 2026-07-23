/*
 * XREFs of CmpInitHiveFromFile @ 0x140930D5C
 * Callers:
 *     CmpLoadHiveThread @ 0x1407CB550 (CmpLoadHiveThread.c)
 *     CmpCmdHiveOpen @ 0x140930A5C (CmpCmdHiveOpen.c)
 * Callees:
 *     EtwWriteTransfer @ 0x140410100 (EtwWriteTransfer.c)
 *     SetFailureLocation @ 0x14045B110 (SetFailureLocation.c)
 *     CmSiAllocateMemory @ 0x14048071C (CmSiAllocateMemory.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x1406A75D0 (ZwQueryInformationFile.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     CmpOpenHiveFiles @ 0x1409312F0 (CmpOpenHiveFiles.c)
 *     CmpCreateHive @ 0x140931678 (CmpCreateHive.c)
 *     CmpLogEvent @ 0x140931EEC (CmpLogEvent.c)
 *     CmpFlushHive @ 0x140965AC4 (CmpFlushHive.c)
 *     CmpAttachToRegistryProcess @ 0x140BBB8E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BBB920 (CmpDetachFromRegistryProcess.c)
 *     CmpAcquireHiveLoadUnloadRundown @ 0x140BBBAD0 (CmpAcquireHiveLoadUnloadRundown.c)
 *     CmpReleaseHiveLoadUnloadRundown @ 0x140BBBB10 (CmpReleaseHiveLoadUnloadRundown.c)
 *     CmpIsHiveLoadUnloadRundownActive @ 0x140BBBE48 (CmpIsHiveLoadUnloadRundownActive.c)
 */

__int64 __fastcall CmpInitHiveFromFile(
        unsigned __int16 *a1,
        int a2,
        __int64 a3,
        _BYTE *a4,
        int a5,
        __int64 a6,
        int a7,
        int a8,
        __int64 a9,
        void *a10)
{
  char UnloadRundown; // r15
  __int64 v12; // r8
  __int64 v14; // rax
  int v15; // ecx
  char v16; // al
  int v17; // eax
  __int64 v18; // rcx
  unsigned int v19; // ebx
  char v22; // r13
  int v23; // esi
  int Hive; // eax
  __int64 v25; // rcx
  int v26; // ebx
  _BYTE v27[8]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v28; // [rsp+78h] [rbp-88h] BYREF
  int v29; // [rsp+80h] [rbp-80h]
  unsigned int v30; // [rsp+84h] [rbp-7Ch] BYREF
  __int64 v31; // [rsp+88h] [rbp-78h] BYREF
  _BYTE *v32; // [rsp+90h] [rbp-70h]
  __int64 v33; // [rsp+98h] [rbp-68h]
  EVENT_DESCRIPTOR v34; // [rsp+A0h] [rbp-60h] BYREF
  HANDLE Handle[2]; // [rsp+B0h] [rbp-50h] BYREF
  HANDLE v36[2]; // [rsp+C0h] [rbp-40h]
  __int64 v37; // [rsp+D0h] [rbp-30h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+D8h] [rbp-28h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+E8h] [rbp-18h] BYREF
  __int128 FileInformation; // [rsp+F8h] [rbp-8h] BYREF
  __int128 v41; // [rsp+108h] [rbp+8h]
  __int64 v42; // [rsp+118h] [rbp+18h]
  struct _KAPC_STATE ApcState; // [rsp+120h] [rbp+20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+150h] [rbp+50h] BYREF
  char *v45; // [rsp+160h] [rbp+60h]
  int v46; // [rsp+168h] [rbp+68h]
  int v47; // [rsp+16Ch] [rbp+6Ch]
  __int64 *v48; // [rsp+170h] [rbp+70h]
  int v49; // [rsp+178h] [rbp+78h]
  int v50; // [rsp+17Ch] [rbp+7Ch]
  __int64 v51; // [rsp+180h] [rbp+80h]
  _DWORD v52[2]; // [rsp+188h] [rbp+88h] BYREF

  v30 = 0;
  v28 = 0LL;
  v37 = a9;
  UnloadRundown = 0;
  *(_QWORD *)&v34.Id = a3;
  v12 = a6;
  v32 = a4;
  v29 = a2;
  v33 = a6;
  FileInformation = 0LL;
  v42 = 0LL;
  v41 = 0LL;
  IoStatusBlock = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  *(_OWORD *)Handle = 0LL;
  *(_OWORD *)v36 = 0LL;
  if ( (unsigned int)dword_140E09F58 > 4 && (qword_140E09F68 & 8) != 0 && (qword_140E09F70 & 8) == qword_140E09F70 )
  {
    v14 = *((_QWORD *)a1 + 1);
    v15 = *a1;
    v50 = 0;
    v52[1] = 0;
    v51 = v14;
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_140E09F60;
    v48 = (__int64 *)v52;
    v52[0] = v15;
    v49 = 2;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 8LL;
    UserData.Size = *(unsigned __int16 *)off_140E09F60;
    v45 = &byte_14005658F;
    UserData.Reserved = 2;
    v46 = 31;
    v47 = 1;
    LODWORD(v31) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwWriteTransfer(qword_140E09F78, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
    a2 = v29;
    v12 = v33;
    a4 = v32;
  }
  while ( 1 )
  {
    v16 = *a4;
    v31 = 0LL;
    v27[0] = v16;
    v17 = CmpOpenHiveFiles(
            (_DWORD)a1,
            a2,
            a5,
            (unsigned int)&v30,
            (__int64)v27,
            (__int64)Handle,
            v12,
            (__int64)&v31,
            (__int64)a10);
    v19 = v17;
    if ( v17 < 0 )
    {
      SetFailureLocation((__int64)a10, 0, 28, v17, 16);
      goto LABEL_8;
    }
    if ( !UnloadRundown )
      break;
    if ( (unsigned __int8)CmpIsHiveLoadUnloadRundownActive(v18) )
    {
      v19 = -1073741431;
LABEL_9:
      CmpReleaseHiveLoadUnloadRundown();
      goto LABEL_10;
    }
LABEL_24:
    v22 = v27[0];
    v23 = v27[0] == 0 ? 5 : 0;
    memset_0(a10, 0, 0x1B0uLL);
    Hive = CmpCreateHive(
             (unsigned int)&v28,
             v23,
             v29,
             v30,
             0LL,
             (__int64)Handle,
             (__int64)a1,
             a5,
             0LL,
             0LL,
             0LL,
             v37,
             (__int64)a10);
    v19 = Hive;
    if ( Hive != -1073741267 )
    {
      if ( Hive < 0 )
      {
        SetFailureLocation((__int64)a10, 0, 28, Hive, 32);
      }
      else
      {
        if ( v23 )
        {
          if ( (*(_DWORD *)(v28 + 4112) & 0x800) != 0 )
          {
            CmpAttachToRegistryProcess(&ApcState);
            v26 = CmpFlushHive(v28, 12LL);
            CmpDetachFromRegistryProcess(&ApcState);
            if ( v26 < 0 )
              SetFailureLocation((__int64)a10, 1, 28, v26, 48);
          }
        }
        *(_QWORD *)(v28 + 1848) = CmSiAllocateMemory(*a1, 0x624E4D43u);
        v25 = v28;
        if ( *(_QWORD *)(v28 + 1848) )
        {
          *(_WORD *)(v28 + 1840) = *a1;
          *(_WORD *)(v28 + 1842) = *a1;
          memmove(*(void **)(v28 + 1848), *((const void **)a1 + 1), *a1);
          v25 = v28;
        }
        if ( (*(_DWORD *)(*(_QWORD *)(v25 + 64) + 4088LL) & 4) != 0 )
          CmpLogEvent(&REG_EVENT_SELFHEAL);
        if ( ZwQueryInformationFile(Handle[0], &IoStatusBlock, &FileInformation, 0x28u, FileBasicInformation) >= 0 )
          *(_QWORD *)(v28 + 4184) = v41;
        v19 = 0;
        *(_DWORD *)(v28 + 188) = HIDWORD(v31);
        **(_QWORD **)&v34.Id = v28;
        *v32 = v22;
      }
LABEL_8:
      if ( !UnloadRundown )
        goto LABEL_10;
      goto LABEL_9;
    }
    ZwClose(Handle[0]);
    if ( Handle[1] )
      ZwClose(Handle[1]);
    a2 = v29;
    v12 = v33;
    a4 = v32;
    if ( v36[0] )
    {
      ZwClose(v36[0]);
      a2 = v29;
      v12 = v33;
      a4 = v32;
    }
  }
  UnloadRundown = CmpAcquireHiveLoadUnloadRundown();
  if ( UnloadRundown )
    goto LABEL_24;
  v19 = -1073741431;
LABEL_10:
  if ( Handle[0] )
    ZwClose(Handle[0]);
  if ( Handle[1] )
    ZwClose(Handle[1]);
  if ( v36[0] )
    ZwClose(v36[0]);
  if ( (unsigned int)dword_140E09F58 > 4 && (qword_140E09F68 & 8) != 0 && (qword_140E09F70 & 8) == qword_140E09F70 )
  {
    v50 = 0;
    v48 = &v31;
    *(_DWORD *)&v34.Level = 516;
    UserData.Ptr = (ULONGLONG)off_140E09F60;
    LODWORD(v31) = v19;
    v49 = 4;
    *(_DWORD *)&v34.Id = 184549376;
    v34.Keyword = 8LL;
    UserData.Size = *(unsigned __int16 *)off_140E09F60;
    v45 = byte_140056565;
    UserData.Reserved = 2;
    v46 = 30;
    v47 = 1;
    v30 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwWriteTransfer(qword_140E09F78, &v34, 0LL, 0LL, 3u, &UserData);
  }
  return v19;
}
