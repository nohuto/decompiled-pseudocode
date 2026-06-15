/*
 * XREFs of ?NewNode@?$CAtlList@PEAVCSubmixImpl@@V?$CElementTraits@PEAVCSubmixImpl@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCSubmixImpl@@PEAV312@1@Z @ 0x14002854C
 * Callers:
 *     ?Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@PEAUIAudioGraphCallback@@@Z @ 0x140026610 (-Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@PEAUIAudioGraphCallback@@@Z.c)
 * Callees:
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x140026274 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14005626C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 *__fastcall ATL::CAtlList<CSubmixImpl *,ATL::CElementTraits<CSubmixImpl *>>::NewNode(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 *result; // rax
  struct ATL::CAtlPlex *v7; // r9
  __int64 v8; // r8
  __int64 *i; // rdx
  __int64 v10; // rdx

  result = (__int64 *)qword_1400C3C78;
  if ( !qword_1400C3C78 )
  {
    v7 = ATL::CAtlPlex::Create(&qword_1400C3C70, (unsigned int)dword_1400C3C80, 0x18uLL);
    if ( !v7 )
      ATL::AtlThrowImpl(-2147024882);
    v8 = (unsigned int)(dword_1400C3C80 - 1);
    result = (__int64 *)qword_1400C3C78;
    for ( i = (__int64 *)((char *)v7 + 16 * v8 + 8 * v8 + 8); (int)v8 >= 0; LODWORD(v8) = v8 - 1 )
    {
      *i = (__int64)result;
      result = i;
      qword_1400C3C78 = (__int64)i;
      i -= 3;
    }
  }
  v10 = *result;
  result[2] = *a2;
  qword_1400C3C78 = v10;
  result[1] = 0LL;
  *result = a4;
  ++qword_1400C3C68;
  return result;
}
