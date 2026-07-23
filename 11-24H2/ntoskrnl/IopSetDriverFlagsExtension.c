/*
 * XREFs of IopSetDriverFlagsExtension @ 0x14025DC34
 * Callers:
 *     IoMakeAssociatedIrpPriv @ 0x14025D5A8 (IoMakeAssociatedIrpPriv.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall IopSetDriverFlagsExtension(__int64 a1, __int64 a2)
{
  _WORD *v2; // r8
  _WORD *v6; // rax
  __int64 Pool2; // rax
  char v8; // al

  v2 = *(_WORD **)(a1 + 200);
  if ( v2 )
  {
    if ( *(char *)(a1 + 71) >= 0 )
    {
      v2[1] |= 0x100u;
LABEL_5:
      *((_QWORD *)v2 + 7) = a2;
      return 0LL;
    }
    Pool2 = ExAllocatePool2(0x40uLL, 0x50uLL, 0x58707249u);
    v2 = (_WORD *)Pool2;
    if ( Pool2 )
    {
      *(_WORD *)(Pool2 + 2) = 260;
      *(_DWORD *)(Pool2 + 4) = *(_DWORD *)(a1 + 200);
      v8 = *(_BYTE *)(a1 + 71) & 0x3F;
      *(_QWORD *)(a1 + 200) = v2;
      *(_BYTE *)(a1 + 71) = v8 | 0x40;
      *v2 |= 1u;
      goto LABEL_5;
    }
  }
  else
  {
    v6 = (_WORD *)ExAllocatePool2(0x40uLL, 0x50uLL, 0x58707249u);
    v2 = v6;
    if ( v6 )
    {
      v6[1] = 256;
      *(_BYTE *)(a1 + 71) |= 0x40u;
      *(_QWORD *)(a1 + 200) = v6;
      *v6 |= 1u;
      goto LABEL_5;
    }
  }
  if ( v2 )
    goto LABEL_5;
  return 3221225626LL;
}
