/*
 * XREFs of ?SetReferenceProperty@CCaptureControllerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x140194B40
 * Callers:
 *     <none>
 * Callees:
 *     ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEAV12@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x140080028 (-SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2.c)
 */

__int64 __fastcall DirectComposition::CCaptureControllerMarshaler::SetReferenceProperty(
        DirectComposition::CCaptureControllerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  struct DirectComposition::CResourceMarshaler **v6; // r8
  int v7; // [rsp+38h] [rbp-20h]
  bool *v8; // [rsp+48h] [rbp-10h]

  *a5 = 0;
  if ( a3 )
  {
    if ( a3 == 3 )
      return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
               (__int64)this,
               a2,
               (struct DirectComposition::CResourceMarshaler **)this + 10,
               (unsigned int *)a4,
               1,
               175,
               (int *)this + 4,
               256,
               0,
               a5);
    if ( a3 != 6 )
      return 3221225485LL;
    v8 = a5;
    v6 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 96);
    v7 = 2048;
  }
  else
  {
    v8 = a5;
    v6 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 56);
    v7 = 32;
  }
  return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
           (__int64)this,
           a2,
           v6,
           (unsigned int *)a4,
           1,
           184,
           (int *)this + 4,
           v7,
           0,
           v8);
}
