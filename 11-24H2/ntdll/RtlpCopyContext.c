/*
 * XREFs of RtlpCopyContext @ 0x180046BB0
 * Callers:
 *     RtlUnwindEx @ 0x180041E80 (RtlUnwindEx.c)
 *     RtlDispatchException @ 0x180045A60 (RtlDispatchException.c)
 * Callees:
 *     RtlLocateExtendedFeature @ 0x180045900 (RtlLocateExtendedFeature.c)
 */

__int64 __fastcall RtlpCopyContext(__int64 a1, __int64 a2)
{
  int v4; // ecx
  __int64 result; // rax
  _OWORD *v6; // rbx
  _OWORD *ExtendedFeature; // rsi
  _OWORD *v8; // rax

  if ( a2 == a1 )
  {
    result = *(_DWORD *)(a2 + 48) & 0x10004F;
    *(_DWORD *)(a1 + 48) = result;
  }
  else
  {
    v4 = *(_DWORD *)(a1 + 48);
    *(_DWORD *)(a1 + 48) = 0;
    if ( (*(_DWORD *)(a2 + 48) & 0x100040) == 0x100040 && (v4 & 0x100040) == 0x100040 )
    {
      *(_DWORD *)(a1 + 48) = 1048640;
      ExtendedFeature = RtlLocateExtendedFeature((PCONTEXT_EX)(a2 + 1232), 0xBu, 0LL);
      v8 = RtlLocateExtendedFeature((PCONTEXT_EX)(a1 + 1232), 0xBu, 0LL);
      if ( ExtendedFeature )
      {
        if ( v8 )
        {
          *v8 = *ExtendedFeature;
          *(_QWORD *)(*(int *)(a1 + 1248) + a1 + 1232) |= *(_DWORD *)(*(int *)(a2 + 1248) + a2 + 1232) & 0x800;
        }
      }
    }
    *(_DWORD *)(a1 + 48) |= *(_DWORD *)(a2 + 48) & 0x10000F;
    *(_QWORD *)(a1 + 248) = *(_QWORD *)(a2 + 248);
    *(_QWORD *)(a1 + 144) = *(_QWORD *)(a2 + 144);
    *(_QWORD *)(a1 + 152) = *(_QWORD *)(a2 + 152);
    *(_QWORD *)(a1 + 160) = *(_QWORD *)(a2 + 160);
    *(_QWORD *)(a1 + 168) = *(_QWORD *)(a2 + 168);
    *(_QWORD *)(a1 + 176) = *(_QWORD *)(a2 + 176);
    *(_QWORD *)(a1 + 216) = *(_QWORD *)(a2 + 216);
    *(_QWORD *)(a1 + 224) = *(_QWORD *)(a2 + 224);
    *(_QWORD *)(a1 + 232) = *(_QWORD *)(a2 + 232);
    *(_QWORD *)(a1 + 240) = *(_QWORD *)(a2 + 240);
    *(_OWORD *)(a1 + 512) = *(_OWORD *)(a2 + 512);
    *(_OWORD *)(a1 + 528) = *(_OWORD *)(a2 + 528);
    *(_OWORD *)(a1 + 544) = *(_OWORD *)(a2 + 544);
    *(_OWORD *)(a1 + 560) = *(_OWORD *)(a2 + 560);
    *(_OWORD *)(a1 + 576) = *(_OWORD *)(a2 + 576);
    *(_OWORD *)(a1 + 592) = *(_OWORD *)(a2 + 592);
    *(_OWORD *)(a1 + 608) = *(_OWORD *)(a2 + 608);
    *(_OWORD *)(a1 + 624) = *(_OWORD *)(a2 + 624);
    *(_OWORD *)(a1 + 640) = *(_OWORD *)(a2 + 640);
    *(_OWORD *)(a1 + 656) = *(_OWORD *)(a2 + 656);
    *(_WORD *)(a1 + 56) = *(_WORD *)(a2 + 56);
    *(_WORD *)(a1 + 66) = *(_WORD *)(a2 + 66);
    *(_DWORD *)(a1 + 52) = *(_DWORD *)(a2 + 52);
    *(_DWORD *)(a1 + 68) = *(_DWORD *)(a2 + 68);
    result = a2 + 256;
    v6 = (_OWORD *)(a1 + 256);
    *v6 = *(_OWORD *)(a2 + 256);
    v6[1] = *(_OWORD *)(a2 + 272);
    v6[2] = *(_OWORD *)(a2 + 288);
    v6[3] = *(_OWORD *)(a2 + 304);
    v6[4] = *(_OWORD *)(a2 + 320);
    v6[5] = *(_OWORD *)(a2 + 336);
    v6[6] = *(_OWORD *)(a2 + 352);
    v6[7] = *(_OWORD *)(a2 + 368);
    v6[8] = *(_OWORD *)(a2 + 384);
    v6[9] = *(_OWORD *)(a2 + 400);
  }
  return result;
}
