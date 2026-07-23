/*
 * XREFs of PfpLogApplicationEvent @ 0x1402627C0
 * Callers:
 *     PfCalculateProcessHash @ 0x140949AC0 (PfCalculateProcessHash.c)
 *     PfProcessExitNotification @ 0x14094BDC4 (PfProcessExitNotification.c)
 * Callees:
 *     PfLogEvent @ 0x14020DB78 (PfLogEvent.c)
 *     PsDereferencePartition @ 0x14022B3F0 (PsDereferencePartition.c)
 *     PsReferencePartitionSafe @ 0x140262AE0 (PsReferencePartitionSafe.c)
 *     PsGetSessionId @ 0x1403C1560 (PsGetSessionId.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     MmGetDirectoryFrameFromProcess @ 0x140A99AD0 (MmGetDirectoryFrameFromProcess.c)
 */

__int64 __fastcall PfpLogApplicationEvent(__int64 a1)
{
  __int64 v1; // rdi
  char v3; // r8
  __int128 *v4; // r9
  __int64 v5; // r14
  unsigned int v6; // ebx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int128 *v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  __int64 DirectoryFrameFromProcess; // rax
  unsigned __int16 *v14; // rdx
  __int64 v15; // r9
  __int64 v16; // rdx
  unsigned int v17; // ebx
  unsigned int SessionId; // eax
  int v19; // edx
  int v20; // ebx
  __int64 v21; // rcx
  int v22; // eax
  size_t Size; // [rsp+20h] [rbp-E0h]
  __int128 v24; // [rsp+38h] [rbp-C8h] BYREF
  int v25[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+58h] [rbp-A8h]
  PVOID v27; // [rsp+60h] [rbp-A0h]
  int v28; // [rsp+68h] [rbp-98h]
  int v29; // [rsp+6Ch] [rbp-94h]
  __int64 v30; // [rsp+70h] [rbp-90h]
  __int64 v31; // [rsp+78h] [rbp-88h]
  __int64 v32; // [rsp+80h] [rbp-80h]
  int v33; // [rsp+88h] [rbp-78h]
  unsigned __int16 v34; // [rsp+8Ch] [rbp-74h]
  _WORD v35[989]; // [rsp+8Eh] [rbp-72h] BYREF
  __int64 v36; // [rsp+848h] [rbp+748h]

  v1 = *(_QWORD *)(a1 + 1880);
  v24 = 0LL;
  if ( (unsigned __int8)PsReferencePartitionSafe(v1) )
  {
    v5 = *(_QWORD *)(v1 + 32);
    if ( v1 && v5 && *(_DWORD *)(v5 + 600) < *(_DWORD *)(v5 + 604) )
    {
      v8 = *(unsigned int *)(a1 + 464);
      v9 = *(_QWORD *)(a1 + 504);
      v36 = 0LL;
      if ( v3 )
      {
        v21 = *(_QWORD *)(a1 + 464) ^ v9;
        v19 = 14;
        *(_QWORD *)v25 = v8;
        LODWORD(v27) = v8;
        v22 = *(_DWORD *)(a1 + 900);
        v26 = v21 & 0x1FFFFFFFFFFFFFFFLL;
        v20 = 24;
        HIDWORD(v27) = v22;
      }
      else
      {
        v32 = v8;
        v10 = &v24;
        v29 = v8;
        v25[1] = 0;
        if ( v4 )
          v10 = v4;
        v33 = 0;
        v11 = (*(_QWORD *)(a1 + 464) ^ v9) & 0x1FFFFFFFFFFFFFFFLL;
        v35[0] = 0;
        v12 = *(_DWORD *)(a1 + 900);
        v30 = v11;
        v28 = v12;
        DirectoryFrameFromProcess = MmGetDirectoryFrameFromProcess(a1, v10);
        v15 = *v14;
        v16 = *((_QWORD *)v14 + 1);
        v17 = v15;
        v31 = DirectoryFrameFromProcess;
        if ( (unsigned int)v15 > 0x7C0 )
          v17 = 1984;
        v34 = v17 >> 1;
        memmove(v35, (const void *)(v15 + v16 - v17), v17);
        v35[v34] = 0;
        v25[0] = PsGetSessionId(a1);
        SessionId = PsGetSessionId(a1);
        v19 = 1;
        v20 = v17 + 64;
        v27 = PsIdleProcess;
        v26 = SessionId;
      }
      LODWORD(Size) = v20;
      v6 = PfLogEvent(
             v5,
             v19,
             dword_140E66FCC
           + (unsigned int)((((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
                           + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)) >> 10),
             v25,
             Size);
      goto LABEL_5;
    }
  }
  else
  {
    v1 = 0LL;
  }
  v6 = -1073741637;
  if ( v1 )
LABEL_5:
    PsDereferencePartition(v1);
  return v6;
}
