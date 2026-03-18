/*
 * XREFs of ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1C007D860
 * Callers:
 *     GreCombineRgn @ 0x1C005C1D0 (GreCombineRgn.c)
 * Callees:
 *     ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x1C003C6B0 (-bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C003D9E0 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C003E0F4 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C004C7D0 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C007D990 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C007DD10 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 */

__int64 __fastcall RGNOBJAPI::iCombine(RGNOBJAPI *this, struct RGNOBJ *a2, struct RGNOBJ *a3, int a4)
{
  unsigned int v8; // edx
  unsigned int v9; // ebx
  PVOID v11; // [rsp+30h] [rbp+8h] BYREF

  v8 = *(_DWORD *)(*(_QWORD *)this + 48LL);
  v11 = 0LL;
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v11, v8);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v11);
  if ( !v11
    || (RGNOBJ::vCopy((RGNOBJ *)&v11, this), (v9 = RGNOBJ::iCombine((RGNOBJ *)&v11, a2, a3, a4)) == 0)
    || !(unsigned int)RGNOBJAPI::bSwap((struct OBJECT **)this, (struct RGNOBJ *)&v11) )
  {
    v9 = 0;
  }
  RGNMEMOBJTMP::~RGNMEMOBJTMP(&v11);
  return v9;
}
