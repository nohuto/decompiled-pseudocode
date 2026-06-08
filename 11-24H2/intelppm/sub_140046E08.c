/*
 * XREFs of sub_140046E08 @ 0x140046E08
 * Callers:
 *     sub_140038BD4 @ 0x140038BD4 (sub_140038BD4.c)
 *     sub_140039A78 @ 0x140039A78 (sub_140039A78.c)
 *     sub_140039E1C @ 0x140039E1C (sub_140039E1C.c)
 *     sub_14003A240 @ 0x14003A240 (sub_14003A240.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140046E08(__int64 a1, int a2, unsigned int a3, __int64 a4)
{
  unsigned int v7; // ebx
  __int64 Pool2; // rax
  _WORD *v9; // rdi
  __int64 v10; // rcx
  _WORD *v11; // rax
  __int64 v12; // r8
  __int16 v13; // cx
  _OWORD v15[2]; // [rsp+20h] [rbp-28h] BYREF

  v15[0] = 0LL;
  LODWORD(v15[0]) = a2;
  v7 = PoFxProcessorNotification(*(_QWORD *)(a1 + 1120), a3, v15);
  if ( !v7 )
  {
    Pool2 = ExAllocatePool2(64LL, 2 * (unsigned int)WORD2(v15[0]) + 2, 1919119952LL);
    v9 = (_WORD *)Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    v10 = *(_QWORD *)(a1 + 1120);
    *((_QWORD *)&v15[0] + 1) = Pool2;
    v7 = PoFxProcessorNotification(v10, a3, v15);
    if ( !v7 )
    {
      v11 = v9;
      *(_OWORD *)a4 = 0LL;
      v12 = 0x7FFFLL;
      do
      {
        if ( !*v11 )
          break;
        ++v11;
        --v12;
      }
      while ( v12 );
      v7 = -1073741811;
      if ( v12 )
      {
        if ( !a4 )
          goto LABEL_12;
        v13 = 2 * (0x7FFF - v12);
        *(_QWORD *)(a4 + 8) = v9;
        *(_WORD *)a4 = v13;
        *(_WORD *)(a4 + 2) = v13 + 2;
      }
      v7 = v12 == 0 ? 0xC000000D : 0;
      if ( !v7 )
        return v7;
    }
LABEL_12:
    ExFreePoolWithTag(v9, 0x72637250u);
  }
  return v7;
}
