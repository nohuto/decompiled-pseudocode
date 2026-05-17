/*
 * XREFs of PsspCaptureThreadInformation @ 0x1800C73DC
 * Callers:
 *     PssNtCaptureSnapshot @ 0x1800C7F80 (PssNtCaptureSnapshot.c)
 * Callees:
 *     RtlGetExtendedContextLength @ 0x180074950 (RtlGetExtendedContextLength.c)
 *     PsspDumpThread @ 0x1800C77C4 (PsspDumpThread.c)
 *     PsspFreeLinkedHandleList @ 0x1800C7CE8 (PsspFreeLinkedHandleList.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x180163520 (ZwAllocateVirtualMemory.c)
 *     ZwQueryInformationThread @ 0x1801636C0 (ZwQueryInformationThread.c)
 *     ZwMapViewOfSection @ 0x180163720 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x180163760 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x180163B60 (NtCreateSection.c)
 *     ZwGetNextThread @ 0x180165230 (ZwGetNextThread.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall PsspCaptureThreadInformation(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v4; // r12
  __int64 **v7; // rbx
  __int64 *v8; // rdi
  unsigned int v9; // r14d
  int v10; // r15d
  unsigned int v11; // ecx
  int NextThread; // eax
  int v13; // esi
  unsigned __int64 v14; // rax
  int v15; // edi
  unsigned int v16; // r12d
  unsigned __int64 v17; // rcx
  __int64 v18; // rcx
  unsigned int v19; // r15d
  __int64 **v21; // r14
  int v22; // eax
  int ExtendedContextLength; // eax
  int *v24; // [rsp+20h] [rbp-E0h]
  int v25; // [rsp+20h] [rbp-E0h]
  unsigned int v26; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v27; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v28; // [rsp+60h] [rbp-A0h]
  int v29; // [rsp+64h] [rbp-9Ch]
  __int64 *v30; // [rsp+68h] [rbp-98h] BYREF
  __int64 v31; // [rsp+70h] [rbp-90h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-88h] BYREF
  __int64 v33; // [rsp+80h] [rbp-80h] BYREF
  int v34; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v35[12]; // [rsp+8Ch] [rbp-74h]
  _BYTE v36[24]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v37; // [rsp+B0h] [rbp-50h]
  _WORD v38[264]; // [rsp+C0h] [rbp-40h] BYREF

  v4 = 0LL;
  v28 = a3;
  v37 = a2;
  v30 = 0LL;
  Handle = 0LL;
  *(_DWORD *)&v35[8] = 0;
  v31 = 0LL;
  v27 = 0LL;
  memset(v36, 0, sizeof(v36));
  v33 = 0LL;
  v29 = a4;
  memset_thunk_772440563353939046(v38, 0, 0x210uLL);
  v34 = 0;
  v7 = 0LL;
  *(_QWORD *)v35 = a3 & 0x100;
  v8 = 0LL;
  v9 = 0;
  v10 = 0;
  v11 = (a3 >> 7) & 8 | (*(_DWORD *)v35 != 0 ? 72 : 64);
  v26 = v11;
  while ( 1 )
  {
    LODWORD(v24) = 0;
    NextThread = ZwGetNextThread(v37, v4, v11, 0LL, v24, &v33);
    v4 = v33;
    v13 = NextThread;
    if ( NextThread == -2147483622 )
      break;
    if ( NextThread < 0 )
      goto LABEL_19;
    v24 = &v34;
    if ( (int)ZwQueryInformationThread(v33, 38LL, v38) >= 0 )
      v10 += (v38[0] + 15) & 0xFFFFFFF0;
    if ( !v8 || *((_WORD *)v8 + 5) >= *((_WORD *)v8 + 4) )
    {
      v30 = 0LL;
      v27 = 1LL;
      v13 = ZwAllocateVirtualMemory(-1LL, &v30, 0LL, &v27, 4096, 4);
      if ( v13 < 0 )
        goto LABEL_19;
      if ( v7 )
      {
        *v8 = (__int64)v30;
        v8 = v30;
      }
      else
      {
        v8 = v30;
        v7 = (__int64 **)v30;
      }
      v14 = v27 - 16;
      *((_WORD *)v8 + 5) = 0;
      *((_WORD *)v8 + 4) = v14 >> 2;
    }
    *((_DWORD *)v8 + (unsigned __int16)(*((_WORD *)v8 + 5))++ + 3) = v33;
    v11 = v26;
    ++v9;
  }
  if ( v9 )
  {
    v15 = 0;
    v16 = v28;
    v26 = 0;
    if ( *(_DWORD *)v35 )
    {
      if ( (v28 & 0x200) == 0
        || (ExtendedContextLength = RtlGetExtendedContextLength(v29, &v26), v15 = v26, ExtendedContextLength < 0) )
      {
        v15 = 1232;
      }
    }
    *(_DWORD *)(a1 + 1024) = v15;
    v17 = v9 * (unsigned __int64)(((v15 + 15) & 0xFFFFFFF0) + 128);
    if ( v17 > 0xFFFFFFFF )
    {
      PsspFreeLinkedHandleList(v7);
      return 3221225621LL;
    }
    v18 = (unsigned int)(v10 + v17);
    v19 = 0;
    *(_QWORD *)&v35[4] = v18;
    v13 = NtCreateSection(&Handle, 983047LL, &unk_180180910);
    if ( v13 < 0 )
    {
LABEL_19:
      PsspFreeLinkedHandleList(v7);
      return (unsigned int)v13;
    }
    v31 = 0LL;
    v27 = 0LL;
    v13 = ZwMapViewOfSection(Handle, -1LL, &v31, 0LL, 0LL, 0LL, &v27, 1, 0, 4);
    if ( v13 < 0 )
    {
LABEL_18:
      NtClose(Handle);
      goto LABEL_19;
    }
    v21 = v7;
    *(_QWORD *)v36 = v31;
    *(_DWORD *)&v36[8] = v27;
    *(_QWORD *)&v36[12] = 0LL;
    while ( v21 )
    {
      while ( v19 < *((unsigned __int16 *)v21 + 5) )
      {
        v33 = *((unsigned int *)v21 + v19 + 3);
        v22 = PsspDumpThread((unsigned int)v36, v16, v29, v15, v25, v33);
        v13 = v22;
        if ( v22 == -1073741789 )
          break;
        if ( v22 < 0 )
        {
          NtUnmapViewOfSection(-1LL);
          goto LABEL_18;
        }
        ++v19;
      }
      v19 = 0;
      if ( v13 < 0 )
        break;
      v21 = (__int64 **)*v21;
    }
    NtUnmapViewOfSection(-1LL);
    PsspFreeLinkedHandleList(v7);
    *(_DWORD *)(a1 + 992) = *(_DWORD *)&v36[16];
    *(_QWORD *)(a1 + 1000) = *(unsigned int *)&v36[12];
    *(_QWORD *)(a1 + 1008) = Handle;
    *(_QWORD *)(a1 + 1016) = MEMORY[0x7FFE0014];
  }
  return 0LL;
}
