/*
 * XREFs of PspGetContext @ 0x140988970
 * Callers:
 *     PspGetSetContextInternal @ 0x1409882C0 (PspGetSetContextInternal.c)
 * Callees:
 *     RtlXSaveS @ 0x1403D2DB0 (RtlXSaveS.c)
 *     RtlCopyXStateArea @ 0x1403FFF70 (RtlCopyXStateArea.c)
 *     KeCopyLastBranchInformation @ 0x14042D2F0 (KeCopyLastBranchInformation.c)
 *     KiGetAllocatedXSaveArea @ 0x14043A050 (KiGetAllocatedXSaveArea.c)
 */

int __fastcall PspGetContext(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // esi
  int result; // eax
  __int64 v8; // r14
  _QWORD *AllocatedXSaveArea; // r8
  __int64 v10; // rcx
  char v11; // cl

  v5 = *(_DWORD *)(a3 + 48);
  if ( (v5 & 0x100001) == 0x100001 )
  {
    *(_QWORD *)(a3 + 248) = *(_QWORD *)(a1 + 360);
    *(_WORD *)(a3 + 56) = *(_WORD *)(a1 + 368);
    *(_WORD *)(a3 + 66) = *(_WORD *)(a1 + 392);
    *(_QWORD *)(a3 + 152) = *(_QWORD *)(a1 + 384);
    *(_DWORD *)(a3 + 68) = *(_DWORD *)(a1 + 376);
  }
  if ( (v5 & 0x100004) == 0x100004 )
  {
    *(_DWORD *)(a3 + 58) = 2818091;
    *(_DWORD *)(a3 + 62) = 2818131;
  }
  if ( (v5 & 0x100002) == 0x100002 )
  {
    *(_QWORD *)(a3 + 120) = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(a3 + 128) = *(_QWORD *)(a1 + 56);
    *(_QWORD *)(a3 + 136) = *(_QWORD *)(a1 + 64);
    *(_QWORD *)(a3 + 184) = *(_QWORD *)(a1 + 72);
    *(_QWORD *)(a3 + 192) = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(a3 + 200) = *(_QWORD *)(a1 + 88);
    *(_QWORD *)(a3 + 208) = *(_QWORD *)(a1 + 96);
    *(_QWORD *)(a3 + 144) = **(_QWORD **)(a2 + 152);
    *(_QWORD *)(a3 + 160) = **(_QWORD **)(a2 + 168);
    *(_QWORD *)(a3 + 168) = **(_QWORD **)(a2 + 176);
    *(_QWORD *)(a3 + 176) = **(_QWORD **)(a2 + 184);
    *(_QWORD *)(a3 + 216) = **(_QWORD **)(a2 + 224);
    *(_QWORD *)(a3 + 224) = **(_QWORD **)(a2 + 232);
    *(_QWORD *)(a3 + 232) = **(_QWORD **)(a2 + 240);
    *(_QWORD *)(a3 + 240) = **(_QWORD **)(a2 + 248);
  }
  if ( (v5 & 0x100040) == 0x100040 )
  {
    if ( (*(_BYTE *)(a1 + 368) & 1) != 0 )
    {
      v8 = *(int *)(a3 + 1248);
      AllocatedXSaveArea = KiGetAllocatedXSaveArea((__int64)KeGetCurrentThread());
      v10 = v8 + a3 + 720;
      if ( AllocatedXSaveArea )
        RtlCopyXStateArea(v10, MEMORY[0xFFFFF780000003D8] & 0xFFFFFFFFFFFFFFFCuLL, (__int64)AllocatedXSaveArea);
      else
        RtlXSaveS(v10, (MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708]) & 0xFFFFFFFFFFFFFFFCuLL);
    }
    *(_DWORD *)(a3 + 52) = *(_DWORD *)(a1 + 44);
    *(_DWORD *)(a3 + 280) = *(_DWORD *)(a1 + 44);
  }
  if ( (v5 & 0x100008) == 0x100008 )
  {
    *(_OWORD *)(a3 + 416) = *(_OWORD *)(a1 + 112);
    *(_OWORD *)(a3 + 432) = *(_OWORD *)(a1 + 128);
    *(_OWORD *)(a3 + 448) = *(_OWORD *)(a1 + 144);
    *(_OWORD *)(a3 + 464) = *(_OWORD *)(a1 + 160);
    *(_OWORD *)(a3 + 480) = *(_OWORD *)(a1 + 176);
    *(_OWORD *)(a3 + 496) = *(_OWORD *)(a1 + 192);
    *(_OWORD *)(a3 + 512) = *(_OWORD *)*(_QWORD *)(a2 + 48);
    *(_OWORD *)(a3 + 528) = *(_OWORD *)*(_QWORD *)(a2 + 56);
    *(_OWORD *)(a3 + 544) = *(_OWORD *)*(_QWORD *)(a2 + 64);
    *(_OWORD *)(a3 + 560) = *(_OWORD *)*(_QWORD *)(a2 + 72);
    *(_OWORD *)(a3 + 576) = *(_OWORD *)*(_QWORD *)(a2 + 80);
    *(_OWORD *)(a3 + 592) = *(_OWORD *)*(_QWORD *)(a2 + 88);
    *(_OWORD *)(a3 + 608) = *(_OWORD *)*(_QWORD *)(a2 + 96);
    *(_OWORD *)(a3 + 624) = *(_OWORD *)*(_QWORD *)(a2 + 104);
    *(_OWORD *)(a3 + 640) = *(_OWORD *)*(_QWORD *)(a2 + 112);
    *(_OWORD *)(a3 + 656) = *(_OWORD *)*(_QWORD *)(a2 + 120);
    *(_DWORD *)(a3 + 52) = *(_DWORD *)(a1 + 44);
    *(_DWORD *)(a3 + 280) = *(_DWORD *)(a1 + 44);
  }
  result = v5 & 0x100010;
  if ( (v5 & 0x100010) == 0x100010 )
  {
    if ( (*(_DWORD *)(a1 + 256) & 0x355LL) != 0 )
    {
      *(_QWORD *)(a3 + 72) = *(_QWORD *)(a1 + 216);
      *(_QWORD *)(a3 + 80) = *(_QWORD *)(a1 + 224);
      *(_QWORD *)(a3 + 88) = *(_QWORD *)(a1 + 232);
      *(_QWORD *)(a3 + 96) = *(_QWORD *)(a1 + 240);
      *(_QWORD *)(a3 + 104) = *(_QWORD *)(a1 + 248);
      *(_QWORD *)(a3 + 112) = *(_QWORD *)(a1 + 256);
    }
    else
    {
      *(_QWORD *)(a3 + 72) = 0LL;
      *(_QWORD *)(a3 + 80) = 0LL;
      *(_QWORD *)(a3 + 88) = 0LL;
      *(_QWORD *)(a3 + 96) = 0LL;
      *(_QWORD *)(a3 + 104) = 0LL;
      *(_QWORD *)(a3 + 112) = 0LL;
    }
    result = KeCopyLastBranchInformation(a3, a1);
  }
  if ( (v5 & 0x40000000) != 0 )
  {
    result = *(_DWORD *)(a3 + 48) & 0x67FFFFFF | 0x80000000;
    *(_DWORD *)(a3 + 48) = result;
    v11 = *(_BYTE *)(a1 + 43);
    if ( v11 == 1 )
    {
      result |= 0x8000000u;
      *(_DWORD *)(a3 + 48) = result;
    }
    else if ( v11 == 2 )
    {
      result |= 0x10000000u;
      *(_DWORD *)(a3 + 48) = result;
    }
  }
  return result;
}
