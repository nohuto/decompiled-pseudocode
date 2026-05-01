/*
 * XREFs of ?LogPendingEnd@ResourceSet@ExecutionModel@@AEAAXXZ @ 0x18002C438
 * Callers:
 *     ?CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x18002B8E4 (-CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 * Callees:
 *     CempQueryUnbiasedInterruptTimeMs64 @ 0x18002C79C (CempQueryUnbiasedInterruptTimeMs64.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

void __fastcall ExecutionModel::ResourceSet::LogPendingEnd(ExecutionModel::ResourceSet *this)
{
  unsigned __int64 *v2; // rax
  char *v3; // rcx
  __int64 v4; // rdx
  unsigned int v5; // edi
  unsigned int v6; // ebx
  int UnbiasedInterruptTimeMs64; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // r8d
  int v11; // r9d
  int v12; // eax
  __int64 v13; // rbx
  __int64 v14; // rcx
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // r14
  __int64 PageCount64; // rax
  __int64 v18; // r8
  __int64 v19; // r15
  unsigned __int64 v20; // r15
  int v21; // [rsp+38h] [rbp-D0h] BYREF
  int v22; // [rsp+3Ch] [rbp-CCh] BYREF
  int v23; // [rsp+40h] [rbp-C8h] BYREF
  _DWORD v24[3]; // [rsp+44h] [rbp-C4h] BYREF
  unsigned __int64 v25; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 v26; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v27; // [rsp+60h] [rbp-A8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+68h] [rbp-A0h] BYREF
  _DWORD v29[6]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v30; // [rsp+90h] [rbp-78h]
  __int64 v31; // [rsp+98h] [rbp-70h]
  __int64 v32; // [rsp+A8h] [rbp-60h]
  __int64 v33; // [rsp+B8h] [rbp-50h]
  __int64 v34; // [rsp+C0h] [rbp-48h]
  char v35[64]; // [rsp+D0h] [rbp-38h] BYREF
  char v36; // [rsp+110h] [rbp+8h] BYREF
  __int64 v37; // [rsp+150h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+168h] [rbp+60h] BYREF
  unsigned __int64 v39; // [rsp+178h] [rbp+70h]
  __int64 v40; // [rsp+180h] [rbp+78h]
  __int64 *v41; // [rsp+188h] [rbp+80h]
  unsigned __int64 v42; // [rsp+190h] [rbp+88h]
  _DWORD *v43; // [rsp+198h] [rbp+90h]
  __int64 v44; // [rsp+1A0h] [rbp+98h]
  unsigned __int64 *v45; // [rsp+1A8h] [rbp+A0h]
  int v46; // [rsp+1B0h] [rbp+A8h]
  int v47; // [rsp+1B4h] [rbp+ACh]
  unsigned __int64 *v48; // [rsp+1B8h] [rbp+B0h]
  int v49; // [rsp+1C0h] [rbp+B8h]
  int v50; // [rsp+1C4h] [rbp+BCh]
  int *v51; // [rsp+1C8h] [rbp+C0h]
  int v52; // [rsp+1D0h] [rbp+C8h]
  int v53; // [rsp+1D4h] [rbp+CCh]
  int *v54; // [rsp+1D8h] [rbp+D0h]
  int v55; // [rsp+1E0h] [rbp+D8h]
  int v56; // [rsp+1E4h] [rbp+DCh]
  int *v57; // [rsp+1E8h] [rbp+E0h]
  int v58; // [rsp+1F0h] [rbp+E8h]
  int v59; // [rsp+1F4h] [rbp+ECh]

  if ( dword_1800E7278 )
  {
    v13 = *(_QWORD *)(*((_QWORD *)this + 165) + 56LL);
    memset_0(v29, 0, 0xF0uLL);
    v14 = *(_QWORD *)(v13 + 32);
    v29[1] = -1;
    v29[2] = -1;
    NtManagePartition(v14, 0LL, 0LL, v29, 240);
    memset_0(&UserData, 0, 0x50uLL);
    v15 = RmpPageSize * v32;
    UserData.Ptr = RmpPageSize * v37;
    *(_QWORD *)&UserData.Size = RmpPageSize * v31;
    v16 = RmpPageSize * v31 - RmpPageSize * v30;
    v39 = RmpPageSize * v30;
    v40 = v16;
    v42 = RmpPageSize * v32;
    PageCount64 = SwGetPageCount64(v35, 0LL, 5LL);
    v3 = &v36;
    v4 = 8LL;
    v19 = PageCount64 + v34 + v33;
    v2 = v45;
    v20 = RmpPageSize * v19;
    v43 = (_DWORD *)v20;
    v44 = v15 - v20;
    do
    {
      v2 = (unsigned __int64 *)((char *)v2 + *(_QWORD *)v3);
      v3 += 8;
      --v4;
    }
    while ( v4 );
    v5 = *((_DWORD *)this + 433);
    v6 = *((_DWORD *)this + 434);
    v45 = v2;
    UnbiasedInterruptTimeMs64 = CempQueryUnbiasedInterruptTimeMs64(v3, 0LL, v18);
    v8 = *((_DWORD *)this + 432);
    if ( v5 <= v6 )
      v5 = v6;
    v9 = UnbiasedInterruptTimeMs64 - v5;
    v10 = *((_DWORD *)this + 433) - v8;
    v11 = *((_DWORD *)this + 434) - v8;
    if ( (unsigned int)dword_1800E7278 > 4 && (byte_1800E7288 & 1) != 0 && (qword_1800E7290 & 1) == qword_1800E7290 )
    {
      v12 = *((_DWORD *)this + 334);
      v59 = 0;
      v56 = 0;
      v53 = 0;
      v50 = 0;
      v47 = 0;
      v24[0] = v12;
      v27 = *((_QWORD *)this + 215);
      v57 = &v21;
      v54 = &v22;
      v51 = &v23;
      v48 = &v25;
      v45 = &v26;
      v43 = v24;
      v41 = &v27;
      *(_DWORD *)&EventDescriptor.Level = 4;
      UserData.Ptr = (ULONGLONG)off_1800E7280;
      v21 = v11;
      v22 = v9;
      v23 = v10;
      v25 = v16;
      v26 = v20;
      v58 = 4;
      v55 = 4;
      v52 = 4;
      v49 = 8;
      v46 = 8;
      v44 = 4LL;
      v42 = 8LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 1LL;
      UserData.Size = *(unsigned __int16 *)off_1800E7280;
      v39 = (unsigned __int64)&unk_1800D8988;
      UserData.Reserved = 2;
      v40 = 0x1000000A0LL;
      v24[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(qword_1800E7298, &EventDescriptor, 0LL, 0LL, 9u, &UserData);
    }
  }
}
