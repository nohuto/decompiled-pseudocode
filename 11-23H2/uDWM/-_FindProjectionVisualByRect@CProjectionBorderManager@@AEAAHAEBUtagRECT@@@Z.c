/*
 * XREFs of ?_FindProjectionVisualByRect@CProjectionBorderManager@@AEAAHAEBUtagRECT@@@Z @ 0x1800D3F4C
 * Callers:
 *     ?UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@@@Z @ 0x1800D2C40 (-UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@.c)
 * Callees:
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 */

__int64 __fastcall CProjectionBorderManager::_FindProjectionVisualByRect(
        CProjectionBorderManager *this,
        const struct tagRECT *a2)
{
  unsigned int v2; // edi
  unsigned int v3; // ebx
  struct tagRECT rcDst; // [rsp+20h] [rbp-38h] BYREF

  v2 = -1;
  v3 = 0;
  if ( *((_DWORD *)this + 106) )
  {
    while ( !IntersectRect(&rcDst, a2, (const RECT *)(*((_QWORD *)this + 50) + 56LL * v3 + 8)) )
    {
      if ( ++v3 >= *((_DWORD *)this + 106) )
        return v2;
    }
    return v3;
  }
  return v2;
}
