/*
 * XREFs of ??0CPreComputeContext@@QEAA@XZ @ 0x18003F6E4
 * Callers:
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x18003C140 (-CleanTrees@CComposition@@IEAAJXZ.c)
 *     ?Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z @ 0x18003D370 (-Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z.c)
 *     ??$make_unique@VCPreComputeContext@@$$V$0A@@std@@YA?AV?$unique_ptr@VCPreComputeContext@@U?$default_delete@VCPreComputeContext@@@std@@@0@XZ @ 0x18003F840 (--$make_unique@VCPreComputeContext@@$$V$0A@@std@@YA-AV-$unique_ptr@VCPreComputeContext@@U-$defau.c)
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x1800EFA80 (-Initialize@CComposition@@MEAAJXZ.c)
 * Callees:
 *     <none>
 */

CPreComputeContext *__fastcall CPreComputeContext::CPreComputeContext(CPreComputeContext *this)
{
  CPreComputeContext *result; // rax

  *(_QWORD *)this = (char *)this + 24;
  *((_QWORD *)this + 1) = (char *)this + 24;
  *((_QWORD *)this + 2) = (char *)this + 1080;
  *((_QWORD *)this + 136) = 0LL;
  *((_QWORD *)this + 135) = 0LL;
  *((_QWORD *)this + 137) = 0LL;
  *((_QWORD *)this + 139) = 0LL;
  *((_QWORD *)this + 138) = 0LL;
  *((_QWORD *)this + 140) = 0LL;
  *((_QWORD *)this + 142) = 0LL;
  *((_QWORD *)this + 141) = 0LL;
  *((_QWORD *)this + 143) = 0LL;
  *((_QWORD *)this + 145) = 0LL;
  *((_QWORD *)this + 144) = 0LL;
  *((_QWORD *)this + 146) = 0LL;
  *((_QWORD *)this + 147) = 0LL;
  *((_QWORD *)this + 148) = (char *)this + 1216;
  *((_QWORD *)this + 149) = (char *)this + 1216;
  *((_DWORD *)this + 300) = 4;
  *(_QWORD *)((char *)this + 1204) = 4LL;
  *((_QWORD *)this + 160) = (char *)this + 1312;
  *((_QWORD *)this + 161) = (char *)this + 1312;
  *((_DWORD *)this + 324) = 3;
  *(_QWORD *)((char *)this + 1300) = 3LL;
  result = this;
  *((_QWORD *)this + 175) = 0LL;
  *((_QWORD *)this + 177) = 0LL;
  *((_QWORD *)this + 176) = 0LL;
  *((_QWORD *)this + 178) = 0LL;
  *((_QWORD *)this + 179) = 0LL;
  *((_QWORD *)this + 180) = 0LL;
  *((_QWORD *)this + 181) = 0LL;
  *((_DWORD *)this + 364) = 0;
  *((_QWORD *)this + 183) = 0LL;
  *((_QWORD *)this + 184) = 0LL;
  *((_QWORD *)this + 185) = 0LL;
  *((_DWORD *)this + 372) = 0;
  *((_QWORD *)this + 192) = 0LL;
  *((_QWORD *)this + 191) = 0LL;
  *((_QWORD *)this + 193) = 0LL;
  *((_DWORD *)this + 381) = 1;
  *((_DWORD *)this + 375) = 0;
  *((_QWORD *)this + 188) = 0LL;
  *((_QWORD *)this + 189) = 0LL;
  *((_DWORD *)this + 384) = 0;
  *((_BYTE *)this + 1568) = 0;
  return result;
}
