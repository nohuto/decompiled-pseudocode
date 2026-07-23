/*
 * XREFs of WmipProbeAndCaptureGuidObjectAttributes @ 0x1409B0F78
 * Callers:
 *     WmipIoControl @ 0x1409B1150 (WmipIoControl.c)
 * Callees:
 *     IoIs32bitProcess @ 0x140402530 (IoIs32bitProcess.c)
 *     RtlCopyVolatileMemory @ 0x1406B6C90 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall WmipProbeAndCaptureGuidObjectAttributes(
        _QWORD *a1,
        unsigned __int16 *a2,
        _WORD *a3,
        unsigned int *a4)
{
  unsigned int v8; // ebx
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  __int128 v13; // [rsp+28h] [rbp-30h]

  v8 = 0;
  if ( IoIs32bitProcess(0LL) )
  {
    if ( ((unsigned __int8)a4 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    *(_DWORD *)a1 = 48;
    a1[1] = a4[1];
    *((_DWORD *)a1 + 6) = a4[3];
    a1[4] = a4[4];
    a1[5] = a4[5];
    v11 = a4[2];
    if ( !a4[2] )
      return (unsigned int)-1073741811;
    if ( (v11 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v11 + 8 < v11 )
      v11 = a4[2];
    *a2 = *(_WORD *)v11;
    a2[1] = *(_WORD *)(v11 + 2);
    *((_QWORD *)a2 + 1) = *(unsigned int *)(v11 + 4);
  }
  else
  {
    v9 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
      v9 = (__int64)a4;
    RtlCopyVolatileMemory(a1, (const void *)v9, 0x30uLL);
    v10 = a1[2];
    if ( !v10 )
      return (unsigned int)-1073741811;
    DWORD1(v13) = 0;
    if ( v10 >= 0x7FFFFFFF0000LL )
      v10 = 0x7FFFFFFF0000LL;
    LODWORD(v13) = *(_DWORD *)v10;
    *((_QWORD *)&v13 + 1) = *(_QWORD *)(v10 + 8);
    *(_OWORD *)a2 = v13;
  }
  if ( a1[4] || a1[5] )
  {
    return (unsigned int)-1073741811;
  }
  else if ( *a2 == 90 )
  {
    memmove(a3, *((const void **)a2 + 1), *a2);
    a3[45] = 0;
    *((_QWORD *)a2 + 1) = a3;
    a1[2] = a2;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v8;
}
