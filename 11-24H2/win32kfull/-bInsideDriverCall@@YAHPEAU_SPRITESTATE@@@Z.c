/*
 * XREFs of ?bInsideDriverCall@@YAHPEAU_SPRITESTATE@@@Z @ 0x1400DEC24
 * Callers:
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1400579FC (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1400DE040 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x140060BD4 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 */

__int64 __fastcall bInsideDriverCall(struct _SPRITESTATE *a1, __int64 a2)
{
  struct _GRETHREAD *CurrentThread; // rax
  struct _GRETHREAD *v4; // rdi
  Gre::Base *v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  CurrentThread = GreGetCurrentThread((__int64)a1, a2);
  v12 = *(_QWORD *)a1;
  v4 = CurrentThread;
  v6 = 0;
  if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v12) )
    Gre::Base::Globals(v5);
  if ( !v4 || !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v12) || !*((_DWORD *)v4 + 87) && !*((_DWORD *)v4 + 88) )
    return *((unsigned int *)a1 + 22);
  v10 = *((_QWORD *)GreGetCurrentThread(v8, v7) + 34);
  if ( *(struct _SPRITESTATE **)(v10 + 32) == a1 )
    return **((unsigned int **)GreGetCurrentThread(v10, v9) + 34);
  return v6;
}
