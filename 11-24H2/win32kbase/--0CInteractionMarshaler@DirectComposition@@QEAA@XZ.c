/*
 * XREFs of ??0CInteractionMarshaler@DirectComposition@@QEAA@XZ @ 0x140072F84
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x140076C18 (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 *     ?GeneratedCreateSharedWriteMarshaler@DirectComposition@@YAJIPEBVCSharedSystemResource@1@PEAPEAVCResourceMarshaler@1@@Z @ 0x1401959BC (-GeneratedCreateSharedWriteMarshaler@DirectComposition@@YAJIPEBVCSharedSystemResource@1@PEAPEAVC.c)
 * Callees:
 *     ??0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140073264 (--0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall DirectComposition::CInteractionMarshaler::CInteractionMarshaler(
        DirectComposition::CInteractionMarshaler *this)
{
  __int64 v1; // rcx
  __int64 result; // rax

  DirectComposition::CResourceMarshaler::CResourceMarshaler(this, 89LL);
  *(_QWORD *)v1 = &DirectComposition::CInteractionMarshaler::`vftable';
  *(_DWORD *)(v1 + 64) = 0;
  *(_QWORD *)(v1 + 56) = v1;
  *(_QWORD *)(v1 + 72) = 0LL;
  *(_QWORD *)(v1 + 80) = 0LL;
  *(_QWORD *)(v1 + 96) = 0LL;
  *(_QWORD *)(v1 + 104) = 0LL;
  *(_QWORD *)(v1 + 120) = 0LL;
  *(_QWORD *)(v1 + 128) = 0LL;
  *(_QWORD *)(v1 + 160) = v1;
  *(_DWORD *)(v1 + 168) = 1;
  *(_QWORD *)(v1 + 176) = 0LL;
  *(_QWORD *)(v1 + 184) = 0LL;
  *(_QWORD *)(v1 + 200) = 0LL;
  *(_QWORD *)(v1 + 208) = 0LL;
  *(_QWORD *)(v1 + 224) = 0LL;
  *(_QWORD *)(v1 + 232) = 0LL;
  *(_QWORD *)(v1 + 280) = 0LL;
  *(_QWORD *)(v1 + 288) = 0LL;
  *(_QWORD *)(v1 + 296) = 0LL;
  *(_QWORD *)(v1 + 304) = 0LL;
  result = v1;
  *(_BYTE *)(v1 + 332) |= 0xC0u;
  *(_DWORD *)(v1 + 328) = 4;
  return result;
}
