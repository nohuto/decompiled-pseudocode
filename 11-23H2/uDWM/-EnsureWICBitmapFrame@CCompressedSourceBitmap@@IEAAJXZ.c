/*
 * XREFs of ?EnsureWICBitmapFrame@CCompressedSourceBitmap@@IEAAJXZ @ 0x180017034
 * Callers:
 *     ?GetSize@CCompressedSourceBitmap@@UEAAJPEAI0@Z @ 0x180016F70 (-GetSize@CCompressedSourceBitmap@@UEAAJPEAI0@Z.c)
 *     ?DecompressBitmap@CCompressedSourceBitmap@@IEAAJXZ @ 0x180059E1C (-DecompressBitmap@CCompressedSourceBitmap@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompressedSourceBitmap::EnsureWICBitmapFrame(CCompressedSourceBitmap *this)
{
  unsigned int v1; // edi
  _QWORD *v2; // r14
  int v4; // eax
  unsigned int v6; // [rsp+20h] [rbp-28h]
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0;
  v2 = (_QWORD *)((char *)this + 256);
  v7 = 0LL;
  v8 = 0LL;
  if ( *((_QWORD *)this + 32) )
    return v1;
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 36) + 112LL))(*((_QWORD *)this + 36), &v7);
  v1 = v4;
  if ( v4 < 0 )
  {
    v6 = 263;
LABEL_21:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, v6, 0LL);
    goto LABEL_9;
  }
  if ( !v7 )
  {
    v1 = -2147024890;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024890, 0x108u, 0LL);
    goto LABEL_9;
  }
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v7 + 128LL))(
         v7,
         *((_QWORD *)this + 34),
         *((unsigned int *)this + 70));
  v1 = v4;
  if ( v4 < 0 )
  {
    v6 = 267;
    goto LABEL_21;
  }
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v7 + 40LL))(v7, 0LL, 0LL, 0LL);
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, GUID *, _QWORD, __int64 *))(**((_QWORD **)this + 36) + 32LL))(
         *((_QWORD *)this + 36),
         v7,
         &GUID_VendorMicrosoft,
         0LL,
         &v8);
  v1 = v4;
  if ( v4 < 0 )
  {
    v6 = 274;
    goto LABEL_21;
  }
  if ( !v8 )
  {
    v1 = -2147024890;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024890, 0x113u, 0LL);
    goto LABEL_9;
  }
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *))(*(_QWORD *)v8 + 104LL))(v8, 0LL, v2);
  v1 = v4;
  if ( v4 < 0 )
  {
    v6 = 277;
    goto LABEL_21;
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD, char *, char *))(*(_QWORD *)*v2 + 24LL))(
         *v2,
         (char *)this + 184,
         (char *)this + 188);
  v1 = v4;
  if ( v4 < 0 )
  {
    v6 = 282;
    goto LABEL_21;
  }
LABEL_9:
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v1;
}
