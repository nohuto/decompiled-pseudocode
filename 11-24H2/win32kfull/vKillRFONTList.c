/*
 * XREFs of vKillRFONTList @ 0x140200E28
 * Callers:
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1400FD81C (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 *     ?bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z @ 0x140145D50 (-bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14005CE04 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x14005D30C (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAUHDEV__@@PEAVPFFOBJ@@H@Z @ 0x140200EE0 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAUHDEV__@@PEAVPFFOBJ@@H@Z.c)
 */

__int64 *__fastcall vKillRFONTList(PFFOBJ *this, __int64 *a2)
{
  __int64 *result; // rax
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  _OWORD v8[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 *v9; // [rsp+58h] [rbp+10h] BYREF

  while ( 1 )
  {
    result = (__int64 *)*a2;
    if ( (__int64 *)*a2 == a2 )
      break;
    v5 = *result;
    v9 = result - 84;
    memset(v8, 0, sizeof(v8));
    PushThreadGuardedObject(v8, a2, vRestartKillEudcRFONTs);
    RFONTOBJ::vDeleteRFONT((RFONTOBJ *)&v9, 0LL, 0LL, 1);
    PopThreadGuardedObject(v8);
    *a2 = v5;
    *(_QWORD *)(v5 + 8) = a2;
    PFFOBJ::vDeleteRFONTRef(this, v6, v7);
    v9 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v9);
  }
  return result;
}
