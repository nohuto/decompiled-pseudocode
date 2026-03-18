/*
 * XREFs of EngCreatePath @ 0x1C02868E0
 * Callers:
 *     EngLineTo @ 0x1C028CCA0 (EngLineTo.c)
 *     VerifierEngCreatePath @ 0x1C02A67D0 (VerifierEngCreatePath.c)
 * Callees:
 *     ?vLock@EPATHOBJ@@QEAAXPEAUHPATH__@@@Z @ 0x1C0158F0A (-vLock@EPATHOBJ@@QEAAXPEAUHPATH__@@@Z.c)
 */

PATHOBJ *EngCreatePath(void)
{
  EPATHOBJ *v0; // rax
  PATHOBJ *v1; // rbx
  _BYTE v3[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v4; // [rsp+28h] [rbp-80h]

  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v3);
  if ( v4 && (v0 = (EPATHOBJ *)Win32AllocPoolZInit(80LL, 1952542791LL), (v1 = (PATHOBJ *)v0) != 0LL) )
  {
    *(_QWORD *)(v4 + 312) = v0;
    EPATHOBJ::vLock(v0, *(struct HPATH__ **)v4);
  }
  else
  {
    v1 = 0LL;
  }
  PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v3);
  return v1;
}
