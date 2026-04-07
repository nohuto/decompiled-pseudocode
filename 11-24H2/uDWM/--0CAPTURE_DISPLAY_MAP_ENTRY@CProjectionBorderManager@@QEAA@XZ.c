/*
 * XREFs of ??0CAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@QEAA@XZ @ 0x18009A420
 * Callers:
 *     ?FindElement@?$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@@@QEAAPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@T_LARGE_INTEGER@@@Z @ 0x1800CBADC (-FindElement@-$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CProjection.c)
 * Callees:
 *     ??0CBitmapSourceArray@@QEAA@XZ @ 0x18000C2D0 (--0CBitmapSourceArray@@QEAA@XZ.c)
 */

__int64 __fastcall CProjectionBorderManager::CAPTURE_DISPLAY_MAP_ENTRY::CAPTURE_DISPLAY_MAP_ENTRY(
        CProjectionBorderManager::CAPTURE_DISPLAY_MAP_ENTRY *this)
{
  __int64 v1; // r9
  __int64 result; // rax

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  CBitmapSourceArray::CBitmapSourceArray((CProjectionBorderManager::CAPTURE_DISPLAY_MAP_ENTRY *)((char *)this + 24));
  result = v1;
  *(_BYTE *)(v1 + 56) = 1;
  return result;
}
