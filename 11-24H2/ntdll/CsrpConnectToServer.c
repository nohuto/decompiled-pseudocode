/*
 * XREFs of CsrpConnectToServer @ 0x1800A7080
 * Callers:
 *     CsrClientConnectToServer @ 0x1800A67A0 (CsrClientConnectToServer.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlpCreateHeap @ 0x1800A7550 (RtlpCreateHeap.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     ZwMapViewOfSection @ 0x180162190 (ZwMapViewOfSection.c)
 *     NtOpenSection @ 0x180162370 (NtOpenSection.c)
 *     NtCreateSection @ 0x1801625D0 (NtCreateSection.c)
 *     ZwConnectPort @ 0x180163100 (ZwConnectPort.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memmove @ 0x180167400 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall CsrpConnectToServer(_WORD *Src, int a2, _QWORD *a3, int a4, _DWORD *a5)
{
  __int64 v9; // rax
  size_t v10; // rdi
  unsigned __int64 v11; // r8
  char *Heap; // rax
  char *v14; // rbx
  size_t v15; // rbx
  int v16; // edi
  int v17; // ebx
  HANDLE v18; // rcx
  struct _PEB *v19; // rcx
  HANDLE v20; // rcx
  HANDLE v21; // [rsp+50h] [rbp-B0h] BYREF
  int v22; // [rsp+58h] [rbp-A8h] BYREF
  int v23; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v24; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  char *v26; // [rsp+70h] [rbp-90h] BYREF
  __int128 v27; // [rsp+78h] [rbp-88h] BYREF
  __int128 v28; // [rsp+88h] [rbp-78h]
  __int128 v29; // [rsp+98h] [rbp-68h]
  __int128 v30; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v31; // [rsp+B8h] [rbp-48h]
  __int64 v32; // [rsp+C0h] [rbp-40h] BYREF
  _DWORD v33[2]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v34; // [rsp+D0h] [rbp-30h]
  __int16 *v35; // [rsp+D8h] [rbp-28h]
  int v36; // [rsp+E0h] [rbp-20h]
  int v37; // [rsp+E4h] [rbp-1Ch]
  __int128 v38; // [rsp+E8h] [rbp-18h]
  __int128 v39; // [rsp+F8h] [rbp-8h] BYREF
  __int128 v40; // [rsp+108h] [rbp+8h]
  __int128 v41; // [rsp+118h] [rbp+18h]
  _DWORD v42[14]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v43; // [rsp+168h] [rbp+68h]
  __int64 v44; // [rsp+170h] [rbp+70h]
  __int64 (__fastcall *v45)(); // [rsp+178h] [rbp+78h]
  __int64 v46; // [rsp+190h] [rbp+90h] BYREF
  int v47; // [rsp+198h] [rbp+98h]

  LODWORD(v31) = 0;
  v46 = 0LL;
  v23 = 0;
  v22 = 0;
  v47 = 0;
  Handle = 0LL;
  *(_QWORD *)&v29 = 0LL;
  DWORD2(v29) = 0;
  v42[1] = 0;
  v30 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  memset_thunk_772440563353939046(v42, 0, 0x5CuLL);
  v21 = 0LL;
  v33[1] = 0;
  v37 = 0;
  v26 = 0LL;
  v32 = 0LL;
  if ( !Src )
    return 3221225485LL;
  v9 = -1LL;
  do
    ++v9;
  while ( Src[v9] );
  v10 = 2 * v9;
  v11 = 2 * v9 + 28;
  if ( v11 > 0xFFFF )
    return 3221225734LL;
  word_1801D4E42 = 2 * v9 + 28;
  Heap = (char *)RtlAllocateHeap(CsrHeap, NtdllBaseTag, v11);
  qword_1801D4E48 = (__int64)Heap;
  v14 = Heap;
  if ( !Heap )
    return 3221225495LL;
  memmove(Heap, Src, v10);
  *(_WORD *)&v14[v10] = 92;
  v15 = (size_t)&v14[v10 + 2];
  *(_OWORD *)v15 = *(_OWORD *)L"SharedSection";
  *(_QWORD *)(v15 + 16) = *(_QWORD *)L"ction";
  *(_WORD *)(v15 + 24) = aSharedsection[12];
  v33[0] = 48;
  CsrPortName = v15 - qword_1801D4E48 + 26;
  v35 = &CsrPortName;
  v34 = 0LL;
  v36 = 64;
  v38 = 0LL;
  v16 = NtOpenSection(&v21, 4LL, v33);
  if ( v16 >= 0 )
  {
    *(_QWORD *)v15 = *(_QWORD *)L"ApiPort";
    *(_DWORD *)(v15 + 8) = *(_DWORD *)L"ort";
    *(_WORD *)(v15 + 12) = aApiport[6];
    CsrPortName = v15 - qword_1801D4E48 + 14;
    HIDWORD(v46) = 2;
    LOWORD(v47) = 257;
    v24 = 0x10000LL;
    v17 = NtCreateSection(&Handle, 983071LL, 0LL, &v24);
    if ( v17 < 0 )
      goto LABEL_24;
    *((_QWORD *)&v27 + 1) = Handle;
    *((_QWORD *)&v28 + 1) = (unsigned int)v24;
    LODWORD(v27) = 48;
    LODWORD(v28) = 0;
    LODWORD(v30) = 24;
    *((_QWORD *)&v30 + 1) = 0LL;
    v31 = 0LL;
    v22 = 48;
    v29 = 0LL;
    if ( a4 != 8 )
      goto LABEL_16;
    if ( a2 == 1 )
    {
      *((_QWORD *)&v41 + 1) = *a3;
      LODWORD(v41) = 1;
    }
    else
    {
LABEL_16:
      DWORD1(v41) = -1073741811;
    }
    v17 = ZwConnectPort(&CsrPortHandle, &CsrPortName, &v46, &v27, &v30, &v23, &v39, &v22);
    NtClose(Handle);
    if ( v17 < 0 )
    {
LABEL_24:
      v20 = v21;
    }
    else
    {
      v18 = v21;
      *a5 = DWORD1(v41);
      v17 = ZwMapViewOfSection(v18, -1LL, &v26, 0LL, 0LL, 0LL, &v32, 2, 5242880, 2, (_DWORD)v21);
      NtClose(v21);
      v21 = 0LL;
      if ( v17 >= 0 )
      {
        v19 = NtCurrentPeb();
        v19->CsrServerReadOnlySharedMemoryBase = v39;
        v19->ReadOnlySharedMemoryBase = v26;
        v19->ReadOnlyStaticServerData = (void **)&v26[*((_QWORD *)&v39 + 1) - v39];
        CsrProcessId = v40;
        CsrPortMemoryRemoteDelta = *((_QWORD *)&v29 + 1) - v29;
        memset_thunk_772440563353939046(v42, 0, 0x60uLL);
        v45 = WinSqmCheckEscalationSetString;
        v42[0] = 96;
        v43 = 4096LL;
        v44 = *((_QWORD *)&v28 + 1);
        CsrPortHeap = RtlpCreateHeap(0x8000, v29, DWORD2(v28), 1, 0LL, (__int64)v42, 0);
        if ( CsrPortHeap )
        {
          CsrPortBaseTag = 0;
          return 0LL;
        }
        v17 = -1073741801;
      }
      NtClose(CsrPortHandle);
      v20 = v21;
      CsrPortHandle = 0LL;
      if ( !v21 )
        goto LABEL_21;
    }
    NtClose(v20);
LABEL_21:
    RtlFreeHeap(CsrHeap, 0, qword_1801D4E48);
    return (unsigned int)v17;
  }
  RtlFreeHeap(CsrHeap, 0, qword_1801D4E48);
  return (unsigned int)v16;
}
