/*
 * XREFs of ?vRestartbRealizeFont@@YAXPEAVRFONT@@@Z @ 0x14030E760
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14005CE04 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x14005D30C (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0DKAAA@$0DKA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1400B6C18 (--$FreeIsolatedType@V-$CTypeIsolation@$0DKAAA@$0DKA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ?vDestroyFont@RFONTOBJ@@QEAAXH@Z @ 0x140215BC8 (-vDestroyFont@RFONTOBJ@@QEAAXH@Z.c)
 */

void __fastcall vRestartbRealizeFont(struct RFONT *a1)
{
  __int64 v1; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF
  struct _FONTOBJ *v6; // [rsp+40h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 16);
  v6 = (struct _FONTOBJ *)a1;
  v5[0] = v1;
  RFONTOBJ::vDestroyFont(&v6, 0LL);
  PFFOBJ::vDeleteRFONTRef((PFFOBJ *)v5, v3, v4);
  FreeIsolatedType<NSInstrumentation::CTypeIsolation<237568,928>>(a1);
  v6 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v6);
}
