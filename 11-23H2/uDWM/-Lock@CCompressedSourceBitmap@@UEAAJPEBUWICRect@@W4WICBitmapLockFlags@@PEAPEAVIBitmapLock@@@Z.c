/*
 * XREFs of ?Lock@CCompressedSourceBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x18005ABA0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureUncompressedBitmap@CCompressedSourceBitmap@@IEAAJXZ @ 0x18005A788 (-EnsureUncompressedBitmap@CCompressedSourceBitmap@@IEAAJXZ.c)
 *     ??0CCompoundBitmapLock@@QEAA@PEAVCBitmapLock@@PEAVIBitmapUnlock@@@Z @ 0x18005A928 (--0CCompoundBitmapLock@@QEAA@PEAVCBitmapLock@@PEAVIBitmapUnlock@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompressedSourceBitmap::Lock(
        CCompressedSourceBitmap *this,
        const struct WICRect *a2,
        unsigned int a3,
        struct IBitmapLock **a4)
{
  char *v4; // rdi
  int v9; // eax
  unsigned int v10; // ebx
  CCompoundBitmapLock *v11; // rax
  struct CBitmapLock *v12; // rdx
  CCompoundBitmapLock *v13; // rax
  CCompoundBitmapLock *v14; // rdi
  int v16; // r9d
  unsigned int v17; // [rsp+20h] [rbp-38h]
  struct CBitmapLock *v18; // [rsp+30h] [rbp-28h] BYREF
  __int64 v19; // [rsp+60h] [rbp+8h] BYREF

  v19 = 0LL;
  v4 = (char *)this - 24;
  v18 = 0LL;
  v9 = CCompressedSourceBitmap::EnsureUncompressedBitmap((CCompressedSourceBitmap *)((char *)this - 24));
  v10 = v9;
  if ( v9 < 0 )
  {
    v17 = 184;
LABEL_17:
    v16 = v9;
    goto LABEL_20;
  }
  v9 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 30))(
         *((_QWORD *)this + 30),
         &GUID_14d094dc_1246_4784_b811_74305a3ecec8,
         &v19);
  v10 = v9;
  if ( v9 < 0 )
  {
    v17 = 187;
    goto LABEL_17;
  }
  v9 = (*(__int64 (__fastcall **)(__int64, const struct WICRect *, _QWORD, struct CBitmapLock **))(*(_QWORD *)v19 + 24LL))(
         v19,
         a2,
         a3,
         &v18);
  v10 = v9;
  if ( v9 < 0 )
  {
    v17 = 189;
    goto LABEL_17;
  }
  v11 = (CCompoundBitmapLock *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                 WPF::g_pProcessHeap,
                                 48LL);
  if ( v11 )
  {
    v12 = v18;
    if ( v18 )
      v12 = (struct CBitmapLock *)((char *)v18 - 72);
    v13 = CCompoundBitmapLock::CCompoundBitmapLock(
            v11,
            v12,
            (struct IBitmapUnlock *)(((unsigned __int64)this + 8) & -(__int64)(v4 != 0LL)));
    v14 = v13;
    if ( v13 )
    {
      (*(void (__fastcall **)(CCompoundBitmapLock *))(*(_QWORD *)v13 + 8LL))(v13);
      *a4 = (CCompoundBitmapLock *)((char *)v14 + 16);
      goto LABEL_9;
    }
  }
  v10 = -2147024882;
  v16 = -2147024882;
  v17 = 194;
LABEL_20:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, v17, 0LL);
LABEL_9:
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  if ( v18 )
    (*(void (__fastcall **)(struct CBitmapLock *))(*(_QWORD *)v18 + 16LL))(v18);
  return v10;
}
