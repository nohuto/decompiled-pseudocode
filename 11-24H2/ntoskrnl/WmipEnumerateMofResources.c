/*
 * XREFs of WmipEnumerateMofResources @ 0x140A75B00
 * Callers:
 *     WmipIoControl @ 0x1409B1150 (WmipIoControl.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402DEA60 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     RtlStringCbCopyW @ 0x140425B00 (RtlStringCbCopyW.c)
 */

__int64 __fastcall WmipEnumerateMofResources(unsigned int *a1, unsigned int a2, _DWORD *a3)
{
  unsigned __int64 v4; // rdi
  unsigned int v6; // r9d
  __int64 v7; // rbx
  _QWORD *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // r10
  __int64 v11; // rcx
  _QWORD *v12; // r8
  unsigned __int64 v13; // rbx
  unsigned __int64 v15; // rbp
  __int64 v16; // r14
  unsigned int v17; // r13d
  _QWORD *v18; // rdi
  __int64 v19; // rax
  __int64 v20; // r12
  __int64 v21; // rax
  __int64 v22; // r14
  __int64 v23; // rax

  v4 = a2;
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v6 = 0;
  v7 = 0LL;
  v8 = *(_QWORD **)WmipMRHeadPtr;
  if ( *(_QWORD *)WmipMRHeadPtr == WmipMRHeadPtr )
    goto LABEL_8;
  do
  {
    v9 = -1LL;
    v10 = v6++;
    do
      ++v9;
    while ( *(_WORD *)(v8[6] + 2 * v9) );
    v11 = -1LL;
    do
      ++v11;
    while ( *(_WORD *)(v8[5] + 2 * v11) );
    v8 = (_QWORD *)*v8;
    v12 = (_QWORD *)WmipMRHeadPtr;
    v7 += 2 * (v11 + v9) + 4;
  }
  while ( v8 != (_QWORD *)WmipMRHeadPtr );
  if ( v6 )
  {
    v15 = v4;
    v16 = 12 * v10 + 16;
    v13 = v16 + v7;
    if ( v4 < v13 )
    {
      *a1 = v13;
      LODWORD(v13) = 4;
    }
    else
    {
      *a1 = v6;
      v17 = 0;
      v18 = (_QWORD *)*v12;
      if ( (_QWORD *)*v12 != v12 )
      {
        do
        {
          v19 = v17++;
          v20 = 3 * v19;
          LODWORD(v19) = v18[2] & 1;
          a1[v20 + 1] = v16;
          a1[v20 + 3] = v19;
          RtlStringCbCopyW((NTSTRSAFE_PWSTR)((char *)a1 + v16), v15 - v16, (NTSTRSAFE_PCWSTR)v18[5]);
          v21 = -1LL;
          do
            ++v21;
          while ( *(_WORD *)(v18[5] + 2 * v21) );
          v22 = v16 + 2 * v21 + 2;
          a1[v20 + 2] = v22;
          RtlStringCbCopyW((NTSTRSAFE_PWSTR)((char *)a1 + v22), v15 - v22, (NTSTRSAFE_PCWSTR)v18[6]);
          v23 = -1LL;
          do
            ++v23;
          while ( *(_WORD *)(v18[6] + 2 * v23) );
          v18 = (_QWORD *)*v18;
          v16 = v22 + 2 * v23 + 2;
        }
        while ( v18 != (_QWORD *)WmipMRHeadPtr );
      }
    }
  }
  else
  {
LABEL_8:
    *a1 = 0;
    LODWORD(v13) = 16;
  }
  *a3 = v13;
  KeReleaseMutex((PRKMUTEX)&WmipSMMutex, 0);
  return 0LL;
}
