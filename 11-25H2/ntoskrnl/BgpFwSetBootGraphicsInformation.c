/*
 * XREFs of BgpFwSetBootGraphicsInformation @ 0x14068D070
 * Callers:
 *     BgkSetBootGraphicsInformation @ 0x140BA0424 (BgkSetBootGraphicsInformation.c)
 * Callees:
 *     BgpFwMapFrameBuffer @ 0x14068CFD0 (BgpFwMapFrameBuffer.c)
 */

__int64 __fastcall BgpFwSetBootGraphicsInformation(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( (_BYTE)BgInternal )
    return (unsigned int)-1073741637;
  xmmword_140EEFD70 = *(_OWORD *)a2;
  xmmword_140EEFD80 = *(_OWORD *)(a2 + 16);
  DWORD2(BgInternal) = *(_DWORD *)(a2 + 8);
  DWORD1(BgInternal) = *(_DWORD *)(a2 + 12);
  HIDWORD(BgInternal) = *(_DWORD *)(a2 + 16);
  if ( *(_DWORD *)(a2 + 24) == 3 )
  {
    LODWORD(xmmword_140EEFD30) = 4;
    goto LABEL_7;
  }
  if ( *(_DWORD *)(a2 + 24) == 4 )
  {
    LODWORD(xmmword_140EEFD30) = 5;
LABEL_7:
    LOWORD(BgInternal) = 1;
    qword_140EEFD40 = *(PVOID *)a2;
    BgpFwMapFrameBuffer((__int64)&BgInternal);
    return v2;
  }
  return (unsigned int)-1073741637;
}
