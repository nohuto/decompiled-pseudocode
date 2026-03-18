/*
 * XREFs of EngCreatePath @ 0x140007240
 * Callers:
 *     EngLineTo @ 0x140007EE0 (EngLineTo.c)
 *     VerifierEngCreatePath @ 0x140330090 (VerifierEngCreatePath.c)
 * Callees:
 *     ?vLock@EPATHOBJ@@QEAAXPEAUHPATH__@@@Z @ 0x1400DA9EC (-vLock@EPATHOBJ@@QEAAXPEAUHPATH__@@@Z.c)
 */

PATHOBJ *EngCreatePath(void)
{
  EPATHOBJ *v0; // rax
  PATHOBJ *v1; // rbx
  _BYTE v3[8]; // [rsp+20h] [rbp-88h] BYREF
  struct HPATH__ **v4; // [rsp+28h] [rbp-80h]

  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v3);
  if ( v4 && (v0 = (EPATHOBJ *)Win32AllocPoolZInit(80LL, 1952542791LL), (v1 = (PATHOBJ *)v0) != 0LL) )
    EPATHOBJ::vLock(v0, *v4);
  else
    v1 = 0LL;
  PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v3);
  return v1;
}
