/*
 * XREFs of HalpMcaExtendedLogInitialize @ 0x14053FA0C
 * Callers:
 *     HalpInitializeMce @ 0x140B4BBE4 (HalpInitializeMce.c)
 * Callees:
 *     MiUnmapContiguousMemory @ 0x140263178 (MiUnmapContiguousMemory.c)
 *     MmMapIoSpaceEx @ 0x1402E9A50 (MmMapIoSpaceEx.c)
 *     HalpMcaExtendedLogGetL1DirectoryBase @ 0x14053F900 (HalpMcaExtendedLogGetL1DirectoryBase.c)
 */

__int64 HalpMcaExtendedLogInitialize()
{
  unsigned __int64 v0; // rbp
  __int64 v1; // rdi
  __int64 v2; // rax
  unsigned __int64 v3; // rsi
  unsigned int v4; // ebx
  unsigned __int64 v5; // rax
  __int64 v6; // rax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  v0 = 4096LL;
  if ( HalpMcaExtendedLogGetL1DirectoryBase(&v8) < 0 || (v1 = v8) == 0 )
  {
    v4 = -1073741637;
    goto LABEL_18;
  }
  v2 = MmMapIoSpaceEx(v8, 4096LL, 0x204u);
  v3 = v2;
  if ( !v2 )
  {
LABEL_4:
    v4 = -1073741670;
LABEL_18:
    HalpMcaExtendedLoggingSupported = 0;
LABEL_19:
    memset(&qword_140E3EAF0, 0, 0x30uLL);
    return v4;
  }
  if ( *(_DWORD *)v2 != 256 )
    goto LABEL_6;
  if ( *(_DWORD *)(v2 + 4) != 64 )
    goto LABEL_6;
  v5 = *(_QWORD *)(v2 + 8);
  if ( v5 <= 0x40 )
    goto LABEL_6;
  v0 = v5;
  MiUnmapContiguousMemory(v3, 0x1000uLL, 1);
  v6 = MmMapIoSpaceEx(v1, v0, 0x204u);
  v3 = v6;
  if ( !v6 )
    goto LABEL_4;
  qword_140E3EAF0 = v6;
  dword_140E3EB00 = *(_DWORD *)(v6 + 48);
  qword_140E3EAF8 = (*(_QWORD *)(v6 + 8) - (unsigned __int64)*(unsigned int *)(v6 + 4)) >> 3;
  if ( qword_140E3EAF8 < (unsigned __int64)(unsigned int)dword_140E3EB00 )
  {
LABEL_6:
    v4 = -1073741637;
LABEL_13:
    HalpMcaExtendedLoggingSupported = 0;
    if ( qword_140E3EB10 )
      MiUnmapContiguousMemory(qword_140E3EB10, *(_QWORD *)(v3 + 24), 1);
    MiUnmapContiguousMemory(v3, v0, 1);
    goto LABEL_19;
  }
  qword_140E3EB10 = MmMapIoSpaceEx(*(_QWORD *)(v6 + 16), *(_QWORD *)(v6 + 24), 0x204u);
  if ( !qword_140E3EB10 )
  {
    v4 = -1073741670;
    goto LABEL_13;
  }
  qword_140E3EB08 = *(_QWORD *)(v3 + 16);
  qword_140E3EB18 = *(_QWORD *)(v3 + 24);
  *(_DWORD *)(v3 + 32) |= 1u;
  return 0;
}
