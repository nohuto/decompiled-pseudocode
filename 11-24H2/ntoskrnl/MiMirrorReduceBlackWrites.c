/*
 * XREFs of MiMirrorReduceBlackWrites @ 0x14041D3B0
 * Callers:
 *     MiMirrorBlackPhase @ 0x140673E6C (MiMirrorBlackPhase.c)
 * Callees:
 *     MiIsDecayPfn @ 0x1403028E0 (MiIsDecayPfn.c)
 *     MiMirrorOmitPagesFromCopy @ 0x14041D540 (MiMirrorOmitPagesFromCopy.c)
 *     MiMirrorNodeFreeZeroPages @ 0x1404F8568 (MiMirrorNodeFreeZeroPages.c)
 */

__int64 __fastcall MiMirrorReduceBlackWrites(__int64 a1, __int64 *a2)
{
  int v2; // eax
  __int64 *v3; // rsi
  int v4; // r15d
  __int64 v6; // r13
  unsigned int v8; // ebp
  unsigned __int64 v9; // r8
  ULONG_PTR v10; // rdi
  _QWORD *v11; // r14
  unsigned __int64 v12; // rbx
  __int64 v13; // rbx
  int v15; // [rsp+70h] [rbp+18h]

  v2 = *((_DWORD *)a2 + 2);
  v3 = a2;
  v4 = *((_DWORD *)a2 + 3);
  v6 = *a2;
  v15 = v4;
  if ( (v2 & 8) == 0 && (v2 & 0x400) == 0 )
  {
    v8 = 0;
    if ( v4 )
    {
      v9 = 0xFFFFDE0000000000uLL;
      do
      {
        v10 = *(_QWORD *)(88LL * v8 + a1 + 3280);
        if ( v10 != 0x3FFFFFFFFFLL )
        {
          do
          {
            v11 = (_QWORD *)(v9 + 48 * v10);
            if ( MiIsDecayPfn(v10) )
            {
              v12 = v11[2];
              if ( qword_140E2DCC0 && (v12 & 0x10) == 0 )
                v12 &= ~qword_140E2DCC0;
              v13 = (v12 >> 12) & 0xFFFFFFFFFFLL;
              if ( v13 != v10 )
              {
                do
                {
                  MiMirrorOmitPagesFromCopy(v6, v13, 1LL);
                  v13 = *(_QWORD *)(48 * v13 - 0x220000000000LL) & 0xFFFFFFFFFFLL;
                }
                while ( v13 != v10 );
                v9 = 0xFFFFDE0000000000uLL;
              }
            }
            else
            {
              MiMirrorOmitPagesFromCopy(v6, v10, 1LL);
              v9 = 0xFFFFDE0000000000uLL;
            }
            v10 = *v11 & 0xFFFFFFFFFFLL;
          }
          while ( v10 != 0x3FFFFFFFFFLL );
          v4 = v15;
        }
        ++v8;
      }
      while ( v8 != v4 );
      v3 = a2;
    }
  }
  return MiMirrorNodeFreeZeroPages(v3, a1, 1LL);
}
