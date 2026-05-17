/*
 * XREFs of PsspCaptureThreadInformation @ 0x1800C2CCC
 * Callers:
 *     PssNtCaptureSnapshot @ 0x1800C3790 (PssNtCaptureSnapshot.c)
 * Callees:
 *     PsspDumpThread @ 0x1800C30B4 (PsspDumpThread.c)
 *     RtlGetExtendedContextLength @ 0x1800C3600 (RtlGetExtendedContextLength.c)
 *     PsspFreeLinkedHandleList @ 0x1800C36F4 (PsspFreeLinkedHandleList.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x180161F90 (ZwAllocateVirtualMemory.c)
 *     ZwQueryInformationThread @ 0x180162130 (ZwQueryInformationThread.c)
 *     ZwMapViewOfSection @ 0x180162190 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1801621D0 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x1801625D0 (NtCreateSection.c)
 *     ZwGetNextThread @ 0x180163CA0 (ZwGetNextThread.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall PsspCaptureThreadInformation(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
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
  int v24; // [rsp+20h] [rbp-E0h]
  unsigned int v25; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v27; // [rsp+60h] [rbp-A0h]
  unsigned int v28; // [rsp+64h] [rbp-9Ch]
  __int64 *v29; // [rsp+68h] [rbp-98h] BYREF
  __int64 v30; // [rsp+70h] [rbp-90h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-88h] BYREF
  __int64 v32; // [rsp+80h] [rbp-80h] BYREF
  int v33; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v34[12]; // [rsp+8Ch] [rbp-74h] BYREF
  _BYTE v35[24]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v36; // [rsp+B0h] [rbp-50h]
  _WORD v37[264]; // [rsp+C0h] [rbp-40h] BYREF

  v4 = 0LL;
  v27 = a3;
  v36 = a2;
  v29 = 0LL;
  Handle = 0LL;
  *(_DWORD *)&v34[8] = 0;
  v30 = 0LL;
  v26 = 0LL;
  memset(v35, 0, sizeof(v35));
  v32 = 0LL;
  v28 = a4;
  memset_thunk_772440563353939046(v37, 0, 0x210uLL);
  v33 = 0;
  v7 = 0LL;
  *(_QWORD *)v34 = a3 & 0x100;
  v8 = 0LL;
  v9 = 0;
  v10 = 0;
  v11 = (a3 >> 7) & 8 | (*(_DWORD *)v34 != 0 ? 72 : 64);
  v25 = v11;
  while ( 1 )
  {
    NextThread = ZwGetNextThread(v36, v4, v11, 0LL, 0, &v32);
    v4 = v32;
    v13 = NextThread;
    if ( NextThread == -2147483622 )
      break;
    if ( NextThread < 0 )
      goto LABEL_19;
    if ( (int)ZwQueryInformationThread(v32, 38LL, v37, 528LL, &v33) >= 0 )
      v10 += (v37[0] + 15) & 0xFFFFFFF0;
    if ( !v8 || *((_WORD *)v8 + 5) >= *((_WORD *)v8 + 4) )
    {
      v29 = 0LL;
      v26 = 1LL;
      v13 = ZwAllocateVirtualMemory(-1LL, &v29, 0LL, &v26, 4096, 4);
      if ( v13 < 0 )
        goto LABEL_19;
      if ( v7 )
      {
        *v8 = (__int64)v29;
        v8 = v29;
      }
      else
      {
        v8 = v29;
        v7 = (__int64 **)v29;
      }
      v14 = v26 - 16;
      *((_WORD *)v8 + 5) = 0;
      *((_WORD *)v8 + 4) = v14 >> 2;
    }
    *((_DWORD *)v8 + (unsigned __int16)(*((_WORD *)v8 + 5))++ + 3) = v32;
    v11 = v25;
    ++v9;
  }
  if ( v9 )
  {
    v15 = 0;
    v16 = v27;
    v25 = 0;
    if ( *(_DWORD *)v34 )
    {
      if ( (v27 & 0x200) == 0
        || (ExtendedContextLength = RtlGetExtendedContextLength(v28, &v25), v15 = v25, ExtendedContextLength < 0) )
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
    *(_QWORD *)&v34[4] = v18;
    v13 = NtCreateSection(&Handle, 983047LL, &unk_18017F790, &v34[4]);
    if ( v13 < 0 )
    {
LABEL_19:
      PsspFreeLinkedHandleList(v7);
      return (unsigned int)v13;
    }
    v30 = 0LL;
    v26 = 0LL;
    v13 = ZwMapViewOfSection(Handle, -1LL, &v30, 0LL, 0LL, 0LL, &v26, 1, 0, 4, v25);
    if ( v13 < 0 )
    {
LABEL_18:
      NtClose(Handle);
      goto LABEL_19;
    }
    v21 = v7;
    *(_QWORD *)v35 = v30;
    *(_DWORD *)&v35[8] = v26;
    *(_QWORD *)&v35[12] = 0LL;
    while ( v21 )
    {
      while ( v19 < *((unsigned __int16 *)v21 + 5) )
      {
        v32 = *((unsigned int *)v21 + v19 + 3);
        v22 = PsspDumpThread((unsigned int)v35, v16, v28, v15, v24, v32);
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
    *(_DWORD *)(a1 + 992) = *(_DWORD *)&v35[16];
    *(_QWORD *)(a1 + 1000) = *(unsigned int *)&v35[12];
    *(_QWORD *)(a1 + 1008) = Handle;
    *(_QWORD *)(a1 + 1016) = MEMORY[0x7FFE0014];
  }
  return 0LL;
}
