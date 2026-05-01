/*
 * XREFs of CrmStateMonitorSystemDiskUsageTimerCallback @ 0x18002CEE0
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateMonitorStateSizeGet @ 0x18002D45C (CrmStateMonitorStateSizeGet.c)
 *     CrmLogStateMonitorStateSet @ 0x18002D580 (CrmLogStateMonitorStateSet.c)
 *     StringCbPrintfW @ 0x18002D898 (StringCbPrintfW.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800557F0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     memcpy_0 @ 0x1800A7802 (memcpy_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A8010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CrmStateMonitorSystemDiskUsageTimerCallback(__int64 a1, unsigned int *a2)
{
  __int64 v2; // r9
  __int64 v4; // r14
  HANDLE FileW; // rbx
  signed int LastError; // edi
  unsigned __int64 v7; // r8
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // ebx
  __int64 v14; // rax
  unsigned int *i; // rbx
  __int64 result; // rax
  int Src; // [rsp+40h] [rbp-C0h] BYREF
  signed int v18; // [rsp+44h] [rbp-BCh] BYREF
  __int64 InBuffer; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+50h] [rbp-B0h] BYREF
  __int128 OutBuffer; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v22; // [rsp+70h] [rbp-90h]
  __int128 v23; // [rsp+80h] [rbp-80h] BYREF
  __int128 v24; // [rsp+90h] [rbp-70h]
  __int128 v25; // [rsp+A0h] [rbp-60h]
  __int128 v26; // [rsp+B0h] [rbp-50h]
  __int64 v27; // [rsp+C0h] [rbp-40h]
  char v28[32]; // [rsp+D0h] [rbp-30h] BYREF
  UUID *v29; // [rsp+F0h] [rbp-10h]
  __int64 v30; // [rsp+F8h] [rbp-8h]
  signed int *v31; // [rsp+100h] [rbp+0h]
  __int64 v32; // [rsp+108h] [rbp+8h]
  wchar_t pszDest[264]; // [rsp+110h] [rbp+10h] BYREF

  v2 = a2[24];
  v20 = 0LL;
  InBuffer = 0LL;
  v4 = 0LL;
  *(_QWORD *)&v26 = 0LL;
  OutBuffer = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  StringCbPrintfW(pszDest, 0x208uLL, L"\\\\.\\PhysicalDrive%u", v2);
  FileW = CreateFileW(pszDest, 0, 3u, 0LL, 3u, 0, 0LL);
  if ( FileW == (HANDLE)-1LL )
  {
    if ( (int)GetLastError() > 0 )
    {
LABEL_26:
      LastError = (unsigned __int16)GetLastError() | 0xC0070000;
      goto LABEL_5;
    }
  }
  else
  {
    InBuffer = 8LL;
    if ( DeviceIoControl(FileW, 0x70224u, &InBuffer, 8u, &OutBuffer, 0x58u, 0LL, 0LL) )
    {
      v4 = *((_QWORD *)&v24 + 1);
      LastError = 0;
LABEL_7:
      CloseHandle(FileW);
      goto LABEL_8;
    }
    if ( (int)GetLastError() > 0 )
      goto LABEL_26;
  }
  LastError = GetLastError();
LABEL_5:
  if ( LastError < 0 && (unsigned int)dword_1800E72E8 > 5 )
  {
    v30 = 16LL;
    v29 = &Uuid;
    v18 = LastError;
    v31 = &v18;
    v32 = 4LL;
    tlgWriteTransfer_EventWriteTransfer(&dword_1800E72E8, &unk_1800D1CFA, 0LL, 0LL, 4, v28);
  }
  if ( FileW != (HANDLE)-1LL )
    goto LABEL_7;
LABEL_8:
  if ( LastError < 0 )
    v4 = -1LL;
  RtlQueryUnbiasedInterruptTime(&v20);
  v7 = v20 - *((_QWORD *)a2 + 13);
  v8 = *((_QWORD *)a2 + 14);
  if ( v8 == -1 || v4 == -1 )
    v9 = 0LL;
  else
    v9 = v4 - v8;
  if ( v7 )
  {
    v10 = v7 - v9;
    if ( v7 < v9 )
      v10 = 0LL;
    v11 = 100 * v10 / v7;
  }
  else
  {
    LODWORD(v11) = 100;
  }
  Src = v11;
  RtlAcquireSRWLockExclusive(a2 + 2);
  a2[4] = GetCurrentThreadId();
  v12 = *a2;
  v27 = 0LL;
  OutBuffer = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v13 = CrmStateMonitorStateSizeGet(v12);
  memcpy_0((char *)&v23 + 8, *((const void **)a2 + 5), v13);
  memcpy_0(&OutBuffer, &Src, v13);
  if ( *a2 != 5 )
  {
    *((_QWORD *)&v26 + 1) = *((_QWORD *)a2 + 6);
    v14 = MEMORY[0x7FFE0008];
    *(_QWORD *)&v26 = MEMORY[0x7FFE0008];
LABEL_18:
    *((_QWORD *)a2 + 6) = v14;
    goto LABEL_19;
  }
  *((_QWORD *)&v26 + 1) = *((_QWORD *)a2 + 6);
  v14 = MEMORY[0x7FFE0008];
  *(_QWORD *)&v26 = MEMORY[0x7FFE0008];
  if ( (_DWORD)OutBuffer == 20 * ((unsigned int)OutBuffer / 0x14) )
    goto LABEL_18;
  LODWORD(v27) = 1;
LABEL_19:
  **((_DWORD **)a2 + 5) = Src;
  for ( i = (unsigned int *)*((_QWORD *)a2 + 3); i != a2 + 6; i = *(unsigned int **)i )
    (*((void (__fastcall **)(unsigned int *, _QWORD, int *))i - 1))(i - 2, *a2, &Src);
  a2[4] = 0;
  RtlReleaseSRWLockExclusive(a2 + 2);
  CrmLogStateMonitorStateSet(a2, &OutBuffer);
  result = v20;
  *((_QWORD *)a2 + 13) = v20;
  *((_QWORD *)a2 + 14) = v4;
  return result;
}
