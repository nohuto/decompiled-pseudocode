/*
 * XREFs of BindCtx_RegisterFolderEnumMode @ 0x1806C8C94
 * Callers:
 *     SimpleToRealIDListWithContext @ 0x1806C982C (SimpleToRealIDListWithContext.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Release@CDummyUnknown@@UEAAKXZ @ 0x180562050 (-Release@CDummyUnknown@@UEAAKXZ.c)
 *     ??0CDummyUnknown@@QEAA@W4FOLDER_ENUM_MODE@@@Z @ 0x1806C8A78 (--0CDummyUnknown@@QEAA@W4FOLDER_ENUM_MODE@@@Z.c)
 *     BindCtx_RegisterObjectParam @ 0x1806C8D0C (BindCtx_RegisterObjectParam.c)
 */

__int64 __fastcall BindCtx_RegisterFolderEnumMode(__int64 a1, __int64 a2, _QWORD *a3)
{
  CDummyUnknown *v5; // rax
  enum FOLDER_ENUM_MODE v6; // edx
  CDummyUnknown *v7; // rax
  __int64 v8; // rdx
  CDummyUnknown *v9; // rdi
  unsigned int v10; // ebx

  *a3 = 0LL;
  v5 = (CDummyUnknown *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 && (v7 = CDummyUnknown::CDummyUnknown(v5, v6), (v9 = v7) != 0LL) )
  {
    v10 = BindCtx_RegisterObjectParam(a1, v8, v7, a3);
    CDummyUnknown::Release(v9);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v10;
}
