/*
 * XREFs of ?bCurrentTlDriverCall@@YAHAEAVPDEVOBJ@@@Z @ 0x1400D5A0C
 * Callers:
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1400579FC (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1400D5640 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x140060BD4 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 */

__int64 __fastcall bCurrentTlDriverCall(struct PDEVOBJ *a1, __int64 a2)
{
  unsigned int v3; // edi
  struct _GRETHREAD *CurrentThread; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx

  v3 = 0;
  CurrentThread = GreGetCurrentThread((__int64)a1, a2);
  if ( !CurrentThread
    || !PDEVOBJ::bAllowShareAccess(a1)
    || !*((_DWORD *)CurrentThread + 87) && !*((_DWORD *)CurrentThread + 88) )
  {
    return 0LL;
  }
  v7 = *(_QWORD *)a1 + 80LL;
  v9 = *((_QWORD *)GreGetCurrentThread(v6, v5) + 34);
  if ( *(_QWORD *)(v9 + 32) == v7 )
    return **((unsigned int **)GreGetCurrentThread(v9, v8) + 34);
  return v3;
}
