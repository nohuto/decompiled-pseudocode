/*
 * XREFs of DbgkCreateThread @ 0x14090B274
 * Callers:
 *     PspNotifyThreadCreation @ 0x14090B188 (PspNotifyThreadCreation.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x1402930B0 (ObFastDereferenceObject.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     RtlImageNtHeader @ 0x14043DFA0 (RtlImageNtHeader.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PsWow64GetProcessNtdllType @ 0x14083CB84 (PsWow64GetProcessNtdllType.c)
 *     ObCloseHandle @ 0x1408EFEC0 (ObCloseHandle.c)
 *     PsIsImageNotifyEnabled @ 0x14090409C (PsIsImageNotifyEnabled.c)
 *     PsQuerySystemDllInfo @ 0x1409075D8 (PsQuerySystemDllInfo.c)
 *     PsReferenceProcessFilePointer @ 0x14090B800 (PsReferenceProcessFilePointer.c)
 *     MmGetFileObjectForSection @ 0x14090B870 (MmGetFileObjectForSection.c)
 *     PspReferenceSystemDll @ 0x14090BA68 (PspReferenceSystemDll.c)
 *     PsCallImageNotifyRoutines @ 0x14090BC00 (PsCallImageNotifyRoutines.c)
 *     DbgkSendSystemDllMessages @ 0x1409B9DBC (DbgkSendSystemDllMessages.c)
 *     DbgkpPostModuleMessages @ 0x140A4772C (DbgkpPostModuleMessages.c)
 *     DbgkpSendApiMessage @ 0x140A60270 (DbgkpSendApiMessage.c)
 *     DbgkpSectionToFileHandle @ 0x140A7F280 (DbgkpSectionToFileHandle.c)
 */

char __fastcall DbgkCreateThread(__int64 a1)
{
  __int64 v2; // rdi
  __int64 SystemDllInfo; // rax
  char v4; // r12
  __int16 v5; // ax
  char v6; // al
  unsigned __int64 v7; // rax
  int i; // esi
  __int64 v9; // r15
  unsigned __int64 v10; // rax
  ULONG_PTR v11; // r13
  unsigned __int64 v12; // rax
  char v14; // [rsp+20h] [rbp-1A8h]
  PVOID Object; // [rsp+28h] [rbp-1A0h] BYREF
  int v16; // [rsp+30h] [rbp-198h]
  __int64 v17; // [rsp+38h] [rbp-190h]
  __int64 v18; // [rsp+40h] [rbp-188h]
  __int128 v19; // [rsp+48h] [rbp-180h]
  __int128 v20; // [rsp+58h] [rbp-170h]
  __int128 v21; // [rsp+68h] [rbp-160h]
  __int64 v22; // [rsp+78h] [rbp-150h]
  _QWORD *v23; // [rsp+80h] [rbp-148h]
  __int64 v24; // [rsp+88h] [rbp-140h]
  int v25; // [rsp+90h] [rbp-138h] BYREF
  int v26; // [rsp+94h] [rbp-134h]
  int v27; // [rsp+B8h] [rbp-110h]
  HANDLE Handle; // [rsp+C8h] [rbp-100h]
  __int64 v29; // [rsp+D0h] [rbp-F8h]
  int v30; // [rsp+D8h] [rbp-F0h]
  int v31; // [rsp+DCh] [rbp-ECh]
  __int64 v32; // [rsp+E8h] [rbp-E0h]

  v18 = a1;
  memset_0(&v25, 0, 0x110uLL);
  v2 = *(_QWORD *)(a1 + 184);
  v17 = v2;
  v23 = (_QWORD *)(v2 + 784);
  if ( !*(_QWORD *)(v2 + 784)
    || ((v5 = *(_WORD *)(v2 + 1772), v5 == 332) || v5 == 452 ? (v6 = 1) : (v6 = 0), v14 = 1, !v6) )
  {
    v14 = 0;
  }
  _m_prefetchw((const void *)(v2 + 500));
  LODWORD(SystemDllInfo) = _InterlockedOr((volatile signed __int32 *)(v2 + 500), 0x400001u);
  v4 = SystemDllInfo;
  v16 = SystemDllInfo;
  if ( (SystemDllInfo & 0x400000) == 0 )
  {
    LOBYTE(SystemDllInfo) = PsIsImageNotifyEnabled();
    if ( (_BYTE)SystemDllInfo )
    {
      v19 = 0LL;
      v20 = 0LL;
      v21 = 0LL;
      v22 = 0LL;
      Object = 0LL;
      BYTE8(v19) = 3;
      *(_QWORD *)&v20 = *(_QWORD *)(v2 + 688);
      *(_QWORD *)&v21 = 0LL;
      v7 = RtlImageNtHeader(v20);
      if ( v7 )
        *(_QWORD *)&v21 = *(unsigned int *)(v7 + 80);
      DWORD2(v20) = 0;
      DWORD2(v21) = 0;
      PsReferenceProcessFilePointer(v2, &Object);
      PsCallImageNotifyRoutines(*(PUNICODE_STRING *)(v2 + 848));
      LOBYTE(SystemDllInfo) = ObfDereferenceObject(Object);
      for ( i = 0; ; ++i )
      {
        LODWORD(Object) = i;
        if ( i >= 6 )
          break;
        SystemDllInfo = PsQuerySystemDllInfo(i);
        v9 = SystemDllInfo;
        v24 = SystemDllInfo;
        if ( SystemDllInfo )
        {
          if ( i <= 0
            || (*(_DWORD *)SystemDllInfo & 8) != 0
            && *v23
            && (LODWORD(SystemDllInfo) = PsWow64GetProcessNtdllType(v2), i == (_DWORD)SystemDllInfo) )
          {
            DWORD2(v19) = 3;
            *(_QWORD *)&v20 = *(_QWORD *)(v9 + 24);
            *(_QWORD *)&v21 = 0LL;
            v10 = RtlImageNtHeader(*(_QWORD *)(v9 + 24));
            if ( v10 )
              *(_QWORD *)&v21 = *(unsigned int *)(v10 + 80);
            DWORD2(v20) = 0;
            DWORD2(v21) = 0;
            v11 = PspReferenceSystemDll(*(_QWORD *)(v9 - 8));
            Object = (PVOID)MmGetFileObjectForSection(v11);
            if ( v11 )
              ObFastDereferenceObject(*(__int64 **)(v9 - 8), v11, 1683190608LL);
            PsCallImageNotifyRoutines((PUNICODE_STRING)(v9 + 8));
            LOBYTE(SystemDllInfo) = ObfDereferenceObject(Object);
          }
        }
      }
    }
  }
  if ( *(_QWORD *)(v2 + 776) )
  {
    if ( (v4 & 1) != 0 )
    {
      if ( (*(_DWORD *)(a1 + 1440) & 4) == 0 )
      {
        memset_0(&v25, 0, 0x40uLL);
        Handle = *(HANDLE *)(a1 + 1376);
        v25 = 4194328;
        v26 = 8;
        v27 = 1;
        DbgkpSendApiMessage((PVOID)v2);
      }
    }
    else
    {
      memset_0(&v25, 0, 0x60uLL);
      Handle = (HANDLE)DbgkpSectionToFileHandle(*(_QWORD *)(v2 + 680));
      v29 = *(_QWORD *)(v2 + 688);
      v32 = 0LL;
      v30 = 0;
      v31 = 0;
      v12 = RtlImageNtHeader(*(_QWORD *)(v2 + 688));
      if ( v12 )
      {
        if ( v14 )
          v32 = (unsigned int)(*(_DWORD *)(v12 + 40) + *(_DWORD *)(v12 + 52));
        else
          v32 = *(_QWORD *)(v12 + 48) + *(unsigned int *)(v12 + 40);
        v30 = *(_DWORD *)(v12 + 12);
        v31 = *(_DWORD *)(v12 + 16);
      }
      v25 = 6291512;
      v26 = 8;
      v27 = 2;
      DbgkpSendApiMessage((PVOID)v2);
      if ( Handle )
        ObCloseHandle(Handle, 0);
      DbgkSendSystemDllMessages(0LL);
    }
    LODWORD(SystemDllInfo) = *(_DWORD *)(a1 + 1444);
    if ( (SystemDllInfo & 0x10) != 0 )
      LOBYTE(SystemDllInfo) = DbgkpPostModuleMessages(v2, a1, 0LL);
  }
  return SystemDllInfo;
}
