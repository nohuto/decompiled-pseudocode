/*
 * XREFs of ?CalcSurfaceSyncRefreshTime@CFlipToken@@UEBA_K_K00@Z @ 0x14003B650
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CFlipToken::CalcSurfaceSyncRefreshTime(
        CFlipToken *this,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  int v4; // eax

  v4 = *((_DWORD *)this + 32);
  if ( !v4 )
    return 0LL;
  if ( !*((_BYTE *)this + 576) )
    a4 = a3;
  return (a4 >> 1) + a2 + a4 * (unsigned int)(v4 - 1);
}
