/*
 * XREFs of DrvIsUniformSpaceMapping @ 0x14000B9A0
 * Callers:
 *     DrvGetUniformSpaceMapping @ 0x14000B784 (DrvGetUniformSpaceMapping.c)
 *     ?TransformPointWithUniformSpaceMapping@@YAHPEAU_MDEV@@PEAH1H@Z @ 0x14000B848 (-TransformPointWithUniformSpaceMapping@@YAHPEAU_MDEV@@PEAH1H@Z.c)
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x14000C568 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DrvIsUniformSpaceMapping(__int64 a1)
{
  __int64 SessionState; // rax
  unsigned int v3; // r8d

  SessionState = W32GetSessionState();
  v3 = 0;
  if ( *(_DWORD *)(*(_QWORD *)(SessionState + 88) + 1160LL) && a1 )
    return (*(_DWORD *)(a1 + 16) & 2) != 0;
  return v3;
}
