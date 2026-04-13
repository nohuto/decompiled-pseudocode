/*
 * XREFs of ?Run@?$functor_wrapper_void@AEAV_lambda_62158d46a05af21ae3d227fe228597be_@@@details@wil@@UEAAJXZ @ 0x18009D4A0
 * Callers:
 *     <none>
 * Callees:
 *     ?PinWebsite@PinnedWebsiteManager@Actions@CreativeFramework@@YAXPEB_W00@Z @ 0x1800A5080 (-PinWebsite@PinnedWebsiteManager@Actions@CreativeFramework@@YAXPEB_W00@Z.c)
 */

__int64 __fastcall wil::details::functor_wrapper_void<_lambda_62158d46a05af21ae3d227fe228597be_ &>::Run(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4)
{
  __int64 *v4; // rax
  __int64 v5; // rcx
  const wchar_t *v6; // r8
  const wchar_t *v7; // rdx
  CreativeFramework::Actions::PinnedWebsiteManager *v8; // rcx

  v4 = *(__int64 **)(a1 + 8);
  v5 = *v4;
  v6 = (const wchar_t *)(*v4 + 72);
  if ( *(_QWORD *)(*v4 + 96) >= 8uLL )
    v6 = *(const wchar_t **)v6;
  v7 = (const wchar_t *)(v5 + 40);
  if ( *(_QWORD *)(v5 + 64) >= 8uLL )
    v7 = *(const wchar_t **)v7;
  v8 = (CreativeFramework::Actions::PinnedWebsiteManager *)(v5 + 8);
  if ( *((_QWORD *)v8 + 3) >= 8uLL )
    v8 = *(CreativeFramework::Actions::PinnedWebsiteManager **)v8;
  CreativeFramework::Actions::PinnedWebsiteManager::PinWebsite(v8, v7, v6, a4);
  return 0LL;
}
