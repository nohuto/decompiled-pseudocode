/*
 * XREFs of ?Invoke@PinToStartService@Actions@CreativeFramework@@UEAAXXZ @ 0x180095780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CreativeFramework::Actions::PinToStartService::Invoke(
        CreativeFramework::Actions::PinToStartService *this,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        bool a5)
{
  const wchar_t *v5; // r8
  const wchar_t *v6; // rdx
  CreativeFramework::Actions *v7; // rcx

  LOBYTE(a4) = *((_BYTE *)this + 104);
  v5 = (const wchar_t *)((char *)this + 72);
  if ( *((_QWORD *)this + 12) >= 8uLL )
    v5 = *(const wchar_t **)v5;
  v6 = (const wchar_t *)((char *)this + 40);
  if ( *((_QWORD *)this + 8) >= 8uLL )
    v6 = *(const wchar_t **)v6;
  v7 = (CreativeFramework::Actions::PinToStartService *)((char *)this + 8);
  if ( *((_QWORD *)v7 + 3) >= 8uLL )
    v7 = *(CreativeFramework::Actions **)v7;
  CreativeFramework::Actions::PinToStart(v7, v6, v5, a4, a5);
}
