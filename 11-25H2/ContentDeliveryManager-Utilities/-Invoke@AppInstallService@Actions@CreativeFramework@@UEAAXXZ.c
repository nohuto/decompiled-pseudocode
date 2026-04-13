/*
 * XREFs of ?Invoke@AppInstallService@Actions@CreativeFramework@@UEAAXXZ @ 0x180091BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InstallAppByProductAndSku@Actions@CreativeFramework@@YAXPEB_W00_N11100@Z @ 0x1800917A0 (-InstallAppByProductAndSku@Actions@CreativeFramework@@YAXPEB_W00_N11100@Z.c)
 *     ?InstallAppByStoreId@Actions@CreativeFramework@@YAXPEB_W0_N1110000@Z @ 0x180091920 (-InstallAppByStoreId@Actions@CreativeFramework@@YAXPEB_W0_N1110000@Z.c)
 */

void __fastcall CreativeFramework::Actions::AppInstallService::Invoke(
        CreativeFramework::Actions::AppInstallService *this,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4)
{
  const wchar_t *v4; // rax
  const WCHAR *v5; // rdx
  const wchar_t *v6; // r8
  char v7; // r11
  char v8; // bl
  char v9; // di
  const wchar_t *v10; // r10
  char *v11; // rcx
  const wchar_t *v12; // rdx
  const wchar_t *v13; // r8
  const WCHAR *v14; // r9
  char v15; // r11
  const wchar_t *v16; // r10
  char v17; // bl
  char v18; // di
  char v19; // si
  char *v20; // rcx
  bool v21; // [rsp+30h] [rbp-28h]
  wchar_t *v22; // [rsp+38h] [rbp-20h]

  v4 = (const wchar_t *)((char *)this + 240);
  if ( *((_QWORD *)this + 12) )
  {
    if ( *((_QWORD *)this + 33) >= 8uLL )
      v4 = *(const wchar_t **)v4;
    v12 = (const wchar_t *)((char *)this + 208);
    if ( *((_QWORD *)this + 29) >= 8uLL )
      v12 = *(const wchar_t **)v12;
    v13 = (const wchar_t *)((char *)this + 176);
    if ( *((_QWORD *)this + 25) >= 8uLL )
      v13 = *(const wchar_t **)v13;
    v14 = (const WCHAR *)((char *)this + 144);
    if ( *((_QWORD *)this + 21) >= 8uLL )
      v14 = *(const WCHAR **)v14;
    v15 = *((_BYTE *)this + 74);
    v16 = (const wchar_t *)((char *)this + 112);
    v17 = *((_BYTE *)this + 75);
    v18 = *((_BYTE *)this + 73);
    v19 = *((_BYTE *)this + 72);
    if ( *((_QWORD *)this + 17) >= 8uLL )
      v16 = *(const wchar_t **)v16;
    v20 = (char *)this + 80;
    if ( *((_QWORD *)v20 + 3) >= 8uLL )
      v20 = *(char **)v20;
    v22 = (wchar_t *)v13;
    LOBYTE(v13) = v19;
    CreativeFramework::Actions::InstallAppByStoreId((const WCHAR *)v20, v16, v13, v18, v17, v15, v14, v22, v12, v4);
  }
  else
  {
    if ( *((_QWORD *)this + 33) >= 8uLL )
      v4 = *(const wchar_t **)v4;
    v5 = (const WCHAR *)((char *)this + 208);
    if ( *((_QWORD *)this + 29) >= 8uLL )
      v5 = *(const WCHAR **)v5;
    LOBYTE(a4) = *((_BYTE *)this + 74);
    v6 = (const wchar_t *)((char *)this + 112);
    v7 = *((_BYTE *)this + 75);
    v8 = *((_BYTE *)this + 73);
    v9 = *((_BYTE *)this + 72);
    if ( *((_QWORD *)this + 17) >= 8uLL )
      v6 = *(const wchar_t **)v6;
    v10 = (const wchar_t *)((char *)this + 40);
    if ( *((_QWORD *)this + 8) >= 8uLL )
      v10 = *(const wchar_t **)v10;
    v11 = (char *)this + 8;
    if ( *((_QWORD *)v11 + 3) >= 8uLL )
      v11 = *(char **)v11;
    v21 = (char)a4;
    LOBYTE(a4) = v9;
    CreativeFramework::Actions::InstallAppByProductAndSku((const WCHAR *)v11, v10, v6, a4, v8, v7, v21, v5, v4);
  }
}
