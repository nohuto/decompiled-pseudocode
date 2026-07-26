/*
 * XREFs of ?NdisPDSetupBufferFromPdBuffer@@YAXPEAU_PD_BUFFER@@PEBU1@KK@Z @ 0x1400AC140
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x140096020 (-ndisBugCheckEx@@YAX_K000@Z.c)
 */

void __fastcall NdisPDSetupBufferFromPdBuffer(
        ULONG_PTR BugCheckParameter4,
        ULONG_PTR BugCheckParameter3,
        unsigned int a3,
        unsigned int a4)
{
  unsigned int v6; // ecx
  unsigned int v7; // eax
  unsigned int v8; // eax
  __int64 v9; // rcx

  if ( (*(_BYTE *)(BugCheckParameter4 + 54) & 1) != 0
    || (v6 = *(unsigned __int16 *)(BugCheckParameter3 + 58), v7 = *(_DWORD *)(BugCheckParameter3 + 48), v6 > v7)
    || (v8 = v7 - v6, a3 >= v8)
    || a4 > v8 - a3 )
  {
    ndisBugCheckEx(0x23uLL, 7uLL, BugCheckParameter3, BugCheckParameter4);
  }
  *(_QWORD *)(BugCheckParameter4 + 32) = a3
                                       + *(unsigned __int16 *)(BugCheckParameter3 + 58)
                                       + *(_QWORD *)(BugCheckParameter3 + 32);
  v9 = *(unsigned __int16 *)(BugCheckParameter3 + 58) + *(_QWORD *)(BugCheckParameter3 + 40);
  *(_DWORD *)(BugCheckParameter4 + 48) = a4;
  *(_QWORD *)(BugCheckParameter4 + 40) = a3 + v9;
  *(_WORD *)(BugCheckParameter4 + 58) = 0;
  *(_DWORD *)(BugCheckParameter4 + 60) = 0;
}
