/*
 * XREFs of RtlCreateEnclaveReturnFrame @ 0x1404F44BC
 * Callers:
 *     PsCallEnclave @ 0x140AD0080 (PsCallEnclave.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlCreateEnclaveReturnFrame(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        char a10)
{
  unsigned __int64 v12; // rcx
  unsigned __int64 v15; // rcx
  _QWORD *v17; // [rsp+30h] [rbp+8h]
  unsigned __int64 v18; // [rsp+30h] [rbp+8h]

  if ( *(_WORD *)(a1 + 368) != 51 || *(_QWORD *)(a1 + 360) != a3 )
  {
    v12 = *(_QWORD *)(a1 + 384) - 80LL;
    v17 = (_QWORD *)v12;
    if ( (v12 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v12 >= 0x7FFFFFFF0000LL )
      v12 = 0x7FFFFFFF0000LL;
    *(_BYTE *)v12 = *(_BYTE *)v12;
    *(_BYTE *)(v12 + 79) = *(_BYTE *)(v12 + 79);
    v17[5] = *(_QWORD *)(a1 + 80);
    v17[7] = *(_QWORD *)(a1 + 360);
    v17[8] = *(_QWORD *)(a1 + 344);
    *(_QWORD *)(a1 + 384) = v17;
    _R9 = *(_QWORD *)(a1 + 360);
    if ( a10 )
    {
      _RAX = __readmsr(0x6A7u) - 8;
      __asm { wrussq  qword ptr [rax], r9 }
      __writemsr(0x6A7u, _RAX);
    }
  }
  if ( a7 )
  {
    v15 = *(_QWORD *)(a1 + 384);
    v18 = v15;
    if ( (v15 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v15 >= 0x7FFFFFFF0000LL )
      v15 = 0x7FFFFFFF0000LL;
    *(_BYTE *)v15 = *(_BYTE *)v15;
    *(_BYTE *)(v15 + 79) = *(_BYTE *)(v15 + 79);
    *(_QWORD *)(v18 + 64) = a8;
    *(_QWORD *)(v18 + 72) = a7;
  }
  *(_QWORD *)(a1 + 56) = a4;
  *(_QWORD *)(a1 + 64) = a5;
  *(_QWORD *)(a1 + 72) = a6;
  *(_QWORD *)(a1 + 80) = a9;
  *(_QWORD *)(a1 + 360) = a2;
  *(_WORD *)(a1 + 368) = 51;
  return 0LL;
}
