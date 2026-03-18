/*
 * XREFs of ?InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z @ 0x1C007E494
 * Callers:
 *     ?InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C007D318 (-InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z.c)
 *     ?AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z @ 0x1C007E390 (-AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z.c)
 *     ?Create@CRegion@@SAJAEBUtagRECT@@PEAPEAV1@@Z @ 0x1C016D530 (-Create@CRegion@@SAJAEBUtagRECT@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?vSet@RGNCOREOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x1C003F180 (-vSet@RGNCOREOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     ?vDeleteRGNCOREOBJ@RGNCOREOBJ@@QEAAXXZ @ 0x1C007D23C (-vDeleteRGNCOREOBJ@RGNCOREOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall CRegion::InitializeFromRect(CRegion *this, struct _RECTL *a2)
{
  unsigned int v4; // edi
  __int64 Pool2; // rbx
  _DWORD *v6; // rax
  struct _RECTL *v8; // [rsp+20h] [rbp-38h] BYREF
  struct _RECTL v9; // [rsp+28h] [rbp-30h] BYREF

  v4 = -1073741801;
  Pool2 = ExAllocatePool2(258LL, 48LL, 1852273223LL);
  if ( Pool2 )
  {
    v6 = (_DWORD *)ExAllocatePool2(258LL, 112LL, 1852011335LL);
    v8 = (struct _RECTL *)Pool2;
    *(_QWORD *)(Pool2 + 8) = v6;
    if ( v6 )
    {
      *(_DWORD *)(Pool2 + 24) = 16;
      *(_DWORD *)(Pool2 + 28) = 1;
      *(_OWORD *)(Pool2 + 32) = 0LL;
      *v6 = 0;
      v6[3] = 0;
      v6[1] = 0x80000000;
      v6[2] = 0x7FFFFFFF;
      *(_QWORD *)(Pool2 + 16) = v6 + 4;
      *(_DWORD *)Pool2 = 112;
      v9 = *a2;
      RGNCOREOBJ::vSet(&v8, &v9);
      v4 = 0;
      *((_QWORD *)this + 2) = Pool2;
      *((_DWORD *)this + 3) = 2;
    }
    else
    {
      RGNCOREOBJ::vDeleteRGNCOREOBJ((PVOID *)&v8);
    }
  }
  return v4;
}
