/*
 * XREFs of SmIssueIo @ 0x140602FC0
 * Callers:
 *     ?StDeviceIoIssue@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_PF_QUEUE@@@Z @ 0x1405FEC80 (-StDeviceIoIssue@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_PF_QUEUE@@@Z.c)
 * Callees:
 *     SmKmStoreDereference @ 0x14034AECC (SmKmStoreDereference.c)
 *     SmKmStoreReference @ 0x140435200 (SmKmStoreReference.c)
 *     ?SmKmIssueFileIo@@YAJPEAU_SMKM_FILE_INFO@@PEAU_SMKM_ISSUE_IO_PARAMS@@PEAT_LARGE_INTEGER@@P6AXPEAXPEAU_IO_STATUS_BLOCK@@K@Z3@Z @ 0x1406012B8 (-SmKmIssueFileIo@@YAJPEAU_SMKM_FILE_INFO@@PEAU_SMKM_ISSUE_IO_PARAMS@@PEAT_LARGE_INTEGER@@P6AXPEA.c)
 *     SmKmIssueVolumeIo @ 0x140601980 (SmKmIssueVolumeIo.c)
 */

__int64 __fastcall SmIssueIo(unsigned int *a1, unsigned int a2, int a3, int a4, __int64 a5, union _LARGE_INTEGER a6)
{
  int v6; // r14d
  _DWORD *QuadPart; // rbx
  int v8; // r15d
  int v9; // r13d
  __int64 v11; // rcx
  unsigned int v14; // ebx
  __int64 v15; // r10
  char *v16; // rax
  void (*v17)(void *, struct _IO_STATUS_BLOCK *, unsigned int); // r9
  int v18; // r11d
  struct _SMKM_FILE_INFO *v19; // rcx
  __int64 v20; // r8
  int v21; // eax
  _QWORD v23[2]; // [rsp+30h] [rbp-30h] BYREF
  int v24; // [rsp+40h] [rbp-20h]
  int v25; // [rsp+44h] [rbp-1Ch]
  unsigned int v26; // [rsp+48h] [rbp-18h]
  unsigned __int64 v27; // [rsp+4Ch] [rbp-14h]
  int v28; // [rsp+54h] [rbp-Ch]
  __int64 v29; // [rsp+A0h] [rbp+40h]
  unsigned int v30; // [rsp+B0h] [rbp+50h]

  v30 = a3;
  v6 = 0;
  QuadPart = (_DWORD *)(a6.QuadPart & 0xFFFFFFFFFFFFFFFEuLL);
  v8 = a6.LowPart & 1;
  v9 = 0;
  v11 = *((_QWORD *)a1 + 947);
  v29 = v11;
  if ( (a6.LowPart & 1) == 0 )
    QuadPart = (_DWORD *)a6.QuadPart;
  if ( (QuadPart[7] & 4) != 0 )
  {
    if ( (*((_BYTE *)a1 + 6837) & 1) != 0 )
      return (unsigned int)-1073741058;
  }
  else
  {
    if ( !SmKmStoreReference(v11, a1[1708]) )
      return (unsigned int)-1073741058;
    a3 = v30;
    v6 = 1;
  }
  if ( v8 )
  {
    _InterlockedIncrement((volatile signed __int32 *)a1 + 1732);
    v9 = 1;
  }
  v27 = 0LL;
  v28 = 0;
  v15 = a1[1754];
  v23[1] = a5;
  v26 = a2;
  v25 = a3;
  v27 = __PAIR64__(v8, v15);
  v24 = a4;
  if ( _bittest((const signed __int32 *)a1, 0xDu) )
  {
    v16 = (char *)(QuadPart + 8);
    QuadPart = a1;
    v17 = (void (*)(void *, struct _IO_STATUS_BLOCK *, unsigned int))SmpIoCompletionApc;
  }
  else
  {
    v16 = (char *)(QuadPart + 12);
    *((_QWORD *)QuadPart + 5) = a1;
    QuadPart[8] = a4;
    v17 = (void (*)(void *, struct _IO_STATUS_BLOCK *, unsigned int))SmpDeviceIoCompletion;
  }
  v18 = *a1;
  v19 = (struct _SMKM_FILE_INFO *)(a1 + 1756);
  v20 = *((_QWORD *)a1 + 884);
  v23[0] = v16;
  while ( a2 >= *(_DWORD *)v20 )
  {
    a2 -= *(_DWORD *)v20;
    v20 += 16LL;
  }
  a6.QuadPart = v30 + *(_QWORD *)(v20 + 8) + v15 * a2;
  if ( (v18 & 0x2000) != 0 )
    v21 = SmKmIssueFileIo(v19, (struct _SMKM_ISSUE_IO_PARAMS *)v23, &a6, v17, QuadPart);
  else
    v21 = SmKmIssueVolumeIo((__int64)v19, (__int64)v23, &a6, (IO_COMPLETION_ROUTINE *)v17, QuadPart);
  v14 = v21;
  if ( v21 < 0 )
  {
    if ( v9 )
      _InterlockedDecrement((volatile signed __int32 *)a1 + 1732);
    if ( v6 )
      SmKmStoreDereference(v29, a1[1708]);
  }
  return v14;
}
