/*
 * XREFs of MiInitializeDpcGroupAffinity @ 0x140271B88
 * Callers:
 *     MiComputeIdealDpcGang @ 0x14026F84C (MiComputeIdealDpcGang.c)
 *     MiInitializeAffinityWalker @ 0x1402717A8 (MiInitializeAffinityWalker.c)
 *     MiAbsorbPossibleEngineChanges @ 0x140690174 (MiAbsorbPossibleEngineChanges.c)
 * Callees:
 *     <none>
 */

void __fastcall MiInitializeDpcGroupAffinity(_OWORD *a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v4; // rbx
  __int64 v5; // r11
  _OWORD *v6; // r10
  __int64 v7; // r8
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  __int64 v10; // rcx
  __int128 v11; // [rsp+0h] [rbp-28h]

  if ( a3 )
  {
    v4 = a3;
    v5 = a2 - (_QWORD)a1;
    v6 = a1;
    do
    {
      v7 = 0LL;
      v8 = *(_QWORD *)((char *)v6 + v5);
      *(_QWORD *)&v11 = 0LL;
      if ( v8 )
      {
        do
        {
          _BitScanForward64(&v9, v8);
          v10 = KiProcessorBlock[*((unsigned int *)qword_140F22998
                                 + 64 * (unsigned __int16)*(_QWORD *)((char *)v6 + v5 + 8)
                                 + (int)v9)];
          if ( !a4 || (*(_BYTE *)(v10 + 35336) != 1) + 1 == a4 )
            v7 |= *(_QWORD *)(v10 + 200);
          v8 &= ~*(_QWORD *)(v10 + 200);
        }
        while ( v8 );
        *(_QWORD *)&v11 = v7;
      }
      *((_QWORD *)&v11 + 1) = *(_QWORD *)((char *)v6 + v5 + 8);
      *v6++ = v11;
      --v4;
    }
    while ( v4 );
  }
}
