/*
 * XREFs of ?GetActivePpiPreference@CRotationMgr@@SA?AW4ORIENTATION_PREFERENCE@@PEAK@Z @ 0x1C01A6578
 * Callers:
 *     ?xxxApplyOrientationPreference@CLegacyRotationMgr@@AEAAXXZ @ 0x1C00D9354 (-xxxApplyOrientationPreference@CLegacyRotationMgr@@AEAAXXZ.c)
 *     ?IsOrientationWithinPreferences@CLegacyRotationMgr@@AEAAHK@Z @ 0x1C01A6800 (-IsOrientationWithinPreferences@CLegacyRotationMgr@@AEAAHK@Z.c)
 * Callees:
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00C7D10 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C00C9A30 (--1PUSHLOCKEX@@QEAA@XZ.c)
 */

__int64 __fastcall CRotationMgr::GetActivePpiPreference(_DWORD *a1)
{
  PEPROCESS *v2; // rcx
  unsigned int v3; // ebx
  char v5; // [rsp+38h] [rbp+10h] BYREF

  PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v5, gRotationProcessLock);
  if ( grpdeskRitInput && (v2 = *(PEPROCESS **)(grpdeskRitInput + 256LL)) != 0LL )
  {
    if ( a1 )
      *a1 = (unsigned int)PsGetProcessId(*v2);
    v3 = *(_DWORD *)(*(_QWORD *)(grpdeskRitInput + 256LL) + 936LL);
  }
  else
  {
    v3 = 0;
  }
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v5);
  return v3;
}
