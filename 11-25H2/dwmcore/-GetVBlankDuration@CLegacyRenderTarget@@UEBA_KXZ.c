/*
 * XREFs of ?GetVBlankDuration@CLegacyRenderTarget@@UEBA_KXZ @ 0x180213D80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacyRenderTarget::GetVBlankDuration(CLegacyRenderTarget *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 5);
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v1 + 24) + 256LL))(v1 + 24);
  else
    return 0LL;
}
