/*
 * XREFs of ?bConcurrent@@YAHPEAU_SPRITESTATE@@@Z @ 0x140329AF0
 * Callers:
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x14004F4C0 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1400500B4 (-vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x14032D444 (-vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x14032D89C (-vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpWriteToExMirror@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x14032E800 (-vSpWriteToExMirror@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x140060BD4 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 */

__int64 __fastcall bConcurrent(struct _SPRITESTATE *a1, __int64 a2)
{
  struct _GRETHREAD *CurrentThread; // rax
  __int64 v4; // rcx
  struct _GRETHREAD *v5; // rdi
  unsigned int v6; // ebx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  CurrentThread = GreGetCurrentThread((__int64)a1, a2);
  v4 = *(_QWORD *)a1;
  v5 = CurrentThread;
  v6 = 0;
  v8 = v4;
  if ( !CurrentThread || !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v8) )
    return 0LL;
  if ( *((_DWORD *)v5 + 87) )
    return 1LL;
  LOBYTE(v6) = *((_DWORD *)v5 + 88) != 0;
  return v6;
}
