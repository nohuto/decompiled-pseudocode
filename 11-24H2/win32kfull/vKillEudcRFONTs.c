/*
 * XREFs of vKillEudcRFONTs @ 0x1400FE4F4
 * Callers:
 *     bUnloadEudcFont @ 0x1400FE308 (bUnloadEudcFont.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14005CE04 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAUHDEV__@@PEAVPFFOBJ@@H@Z @ 0x140200EE0 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAUHDEV__@@PEAVPFFOBJ@@H@Z.c)
 */

void __fastcall vKillEudcRFONTs(_QWORD **a1)
{
  _QWORD *v2; // rdx
  _QWORD *v3; // rbx
  __int64 v4; // [rsp+20h] [rbp-38h] BYREF
  _OWORD v5[2]; // [rsp+30h] [rbp-28h] BYREF
  _QWORD *v6; // [rsp+60h] [rbp+8h] BYREF

  while ( 1 )
  {
    v2 = *a1;
    if ( *a1 == a1 )
      break;
    v3 = (_QWORD *)*v2;
    v4 = *(v2 - 68);
    v6 = v2 - 84;
    memset(v5, 0, sizeof(v5));
    PushThreadGuardedObject(v5, a1, vRestartKillEudcRFONTs);
    RFONTOBJ::vDeleteRFONT((RFONTOBJ *)&v6, 0LL, (struct PFFOBJ *)&v4, 1);
    PopThreadGuardedObject(v5);
    v6 = 0LL;
    *a1 = v3;
    v3[1] = a1;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v6);
  }
}
