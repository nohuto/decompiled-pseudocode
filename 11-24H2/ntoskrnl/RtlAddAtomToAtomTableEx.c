/*
 * XREFs of RtlAddAtomToAtomTableEx @ 0x1404242E0
 * Callers:
 *     NtAddAtomEx @ 0x1408F4440 (NtAddAtomEx.c)
 *     RtlAddAtomToAtomTable @ 0x140A52240 (RtlAddAtomToAtomTable.c)
 * Callees:
 *     RtlpAllocateAtomTableEntry @ 0x14042455C (RtlpAllocateAtomTableEntry.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     RtlpFreeAtom @ 0x140856F58 (RtlpFreeAtom.c)
 *     RtlpLockAtomTable @ 0x1408F4C90 (RtlpLockAtomTable.c)
 *     RtlpUnlockAtomTable @ 0x1408F4D0C (RtlpUnlockAtomTable.c)
 *     RtlGetIntegerAtom @ 0x14097E340 (RtlGetIntegerAtom.c)
 *     RtlpHashStringToAtom @ 0x140986FF0 (RtlpHashStringToAtom.c)
 *     RtlpInsertStringAtom @ 0x140A249F0 (RtlpInsertStringAtom.c)
 */

__int64 __fastcall RtlAddAtomToAtomTableEx(__int64 a1, WCHAR *a2, USHORT *a3, unsigned int a4)
{
  int v8; // edi
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int16 v11; // ax
  __int64 *v12; // r13
  __int64 v13; // rax
  __int64 v14; // rsi
  unsigned __int64 v15; // rbx
  __int64 v16; // rax
  __int16 v17; // ax
  USHORT v18; // cx
  USHORT IntegerAtom[2]; // [rsp+40h] [rbp-58h] BYREF
  int v21; // [rsp+44h] [rbp-54h]
  size_t Size; // [rsp+48h] [rbp-50h] BYREF
  __int64 v23; // [rsp+50h] [rbp-48h] BYREF
  __int64 v24; // [rsp+58h] [rbp-40h] BYREF
  __int64 *v25; // [rsp+60h] [rbp-38h] BYREF

  v24 = 0LL;
  v25 = 0LL;
  LODWORD(Size) = 0;
  IntegerAtom[0] = 0;
  v23 = 0LL;
  if ( (unsigned __int8)RtlpLockAtomTable() )
  {
    if ( RtlGetIntegerAtom(a2, IntegerAtom) )
    {
      v18 = IntegerAtom[0];
      if ( IntegerAtom[0] >= 0xC000u )
      {
        v18 = 0;
        IntegerAtom[0] = 0;
        v8 = -1073741811;
        v21 = -1073741811;
      }
      else
      {
        v8 = 0;
        v21 = 0;
      }
      if ( a3 )
        *a3 = v18;
      goto LABEL_35;
    }
    if ( *a2 )
    {
      v8 = RtlpHashStringToAtom(a1, a2, 0LL, &v25, &Size, &v23, &v24);
      v21 = v8;
      if ( v8 < 0 )
      {
LABEL_35:
        RtlpUnlockAtomTable(a1);
        return (unsigned int)v8;
      }
      v9 = v24;
      if ( v24 )
      {
        v10 = v23;
        if ( v23 != v24 + 16 && !*(_WORD *)(v23 + 20) )
        {
          v17 = *(_WORD *)(v24 + 36);
          if ( v17 == -1 )
            *(_WORD *)(v24 + 38) |= 1u;
          else
            *(_WORD *)(v24 + 36) = v17 + 1;
        }
        v11 = *(_WORD *)(v10 + 20);
        if ( v11 == -1 )
          *(_WORD *)(v10 + 22) |= 1u;
        else
          *(_WORD *)(v10 + 20) = v11 + 1;
        if ( a3 )
          *a3 = *(_WORD *)(v9 + 10);
        v8 = 0;
        v21 = 0;
        goto LABEL_35;
      }
      v12 = v25;
      if ( v25 )
      {
        v8 = -1073741801;
        v21 = -1073741801;
        v13 = RtlpAllocateAtomTableEntry((unsigned int)Size, &v23, a4);
        v14 = v13;
        v24 = v13;
        if ( v13 )
        {
          v15 = (unsigned int)Size;
          memmove((void *)(v13 + 42), a2, (unsigned int)Size);
          v16 = (unsigned __int8)(v15 >> 1);
          *(_BYTE *)(v14 + 40) = v16;
          *(_WORD *)(v14 + 2 * v16 + 42) = 0;
          if ( (unsigned __int8)RtlpInsertStringAtom(a1, v14) )
          {
            *(_WORD *)(v14 + 10) = *(_WORD *)(v14 + 8) | 0xC000;
            *v12 = v14;
            if ( a3 )
              *a3 = *(_WORD *)(v14 + 10);
            v8 = 0;
            v21 = 0;
          }
          else
          {
            if ( v23 && v23 != v14 + 16 )
              ((void (*)(void))RtlpFreeAtom)();
            RtlpFreeAtom(v14);
          }
        }
        goto LABEL_35;
      }
      v8 = -1073741811;
    }
    else
    {
      v8 = -1073741773;
    }
    v21 = v8;
    goto LABEL_35;
  }
  return 3221225485LL;
}
