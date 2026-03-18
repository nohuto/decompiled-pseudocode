/*
 * XREFs of GreSetBitmapOwner @ 0x140036530
 * Callers:
 *     GreSetBrushOwner @ 0x1400857A0 (GreSetBrushOwner.c)
 * Callees:
 *     HmgSetOwner @ 0x14002DC20 (HmgSetOwner.c)
 *     HmgShareLockCheck @ 0x14002F820 (HmgShareLockCheck.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x140036A58 (--1SURFREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x140036A88 (--0SURFREF@@QEAA@XZ.c)
 */

__int64 __fastcall GreSetBitmapOwner(__int64 a1, int a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  _BYTE v7[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+40h] [rbp-18h]

  v4 = 0;
  SURFREF::SURFREF((SURFREF *)v7);
  v5 = HmgShareLockCheck(a1, 5);
  v8 = v5;
  if ( v5 && (*(_WORD *)(v5 + 100) || !*(_QWORD *)(v5 + 192) || a2) && (a1 & 0x800000) == 0 )
    v4 = HmgSetOwner(a1, a2, 5);
  SURFREF::~SURFREF((SURFREF *)v7);
  return v4;
}
