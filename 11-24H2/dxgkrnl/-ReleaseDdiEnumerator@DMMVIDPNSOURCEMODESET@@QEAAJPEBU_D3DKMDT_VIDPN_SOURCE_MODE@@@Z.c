/*
 * XREFs of ?ReleaseDdiEnumerator@DMMVIDPNSOURCEMODESET@@QEAAJPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x14032D1C0
 * Callers:
 *     ?ReleaseModeInfo@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@QEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x14032D050 (-ReleaseModeInfo@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 */

__int64 __fastcall DMMVIDPNSOURCEMODESET::ReleaseDdiEnumerator(
        DMMVIDPNSOURCEMODESET *this,
        const struct _D3DKMDT_VIDPN_SOURCE_MODE *a2)
{
  char *v3; // r10
  char *v4; // r8
  DMMVIDPNSOURCEMODESET *v5; // rax
  char *v6; // r9
  char *v7; // rax
  char *v8; // rcx
  __int64 result; // rax

  if ( !a2 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    WdLogGlobalForLineNumber = 662;
    return 3223192336LL;
  }
  v3 = (char *)(&a2[-1].Format.Text + 4);
  if ( a2[-1].Format.Graphics.Stride != 305419896 )
  {
    WdLogSingleEntry1(2LL, &a2[-1].Format.Text + 4);
    WdLogGlobalForLineNumber = 676;
    return 3223192336LL;
  }
  v4 = (char *)*((_QWORD *)&a2[-1].Format.Text + 3);
  if ( v4 )
  {
    v5 = (DMMVIDPNSOURCEMODESET *)*((_QWORD *)this + 6);
    v6 = (char *)this + 48;
    if ( v5 == (DMMVIDPNSOURCEMODESET *)((char *)this + 48) || (v7 = (char *)v5 - 8) == 0LL )
    {
LABEL_10:
      WdLogSingleEntry2(2LL, v3, this);
      result = 3223192368LL;
      WdLogGlobalForLineNumber = 692;
      return result;
    }
    while ( v7 != v4 )
    {
      v8 = (char *)*((_QWORD *)v7 + 1);
      v7 = v8 - 8;
      if ( v8 == v6 )
        v7 = 0LL;
      if ( !v7 )
        goto LABEL_10;
    }
  }
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v3);
  return 0LL;
}
