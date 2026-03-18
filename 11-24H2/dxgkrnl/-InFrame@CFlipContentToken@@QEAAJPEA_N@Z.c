/*
 * XREFs of ?InFrame@CFlipContentToken@@QEAAJPEA_N@Z @ 0x14004DFE4
 * Callers:
 *     ?ConsumerDwmProcessUpdateTokens@CFlipManager@@QEAAJPEAVCFlipPresentUpdate@@PEAVCFlipManagerToken@@PEAU_LIST_ENTRY@@@Z @ 0x14005F734 (-ConsumerDwmProcessUpdateTokens@CFlipManager@@QEAAJPEAVCFlipPresentUpdate@@PEAVCFlipManagerToken.c)
 *     ?InFrame@CFlipContentToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z @ 0x1400A1610 (-InFrame@CFlipContentToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z.c)
 * Callees:
 *     ?NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N_K@Z @ 0x14009BE80 (-NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N_K@Z.c)
 */

int __fastcall CFlipContentToken::InFrame(CFlipContentToken *this, bool *a2)
{
  CompositionSurfaceObject *v3; // rcx
  int result; // eax
  bool v6; // [rsp+30h] [rbp+8h] BYREF

  *((_DWORD *)this + 6) = 3;
  v3 = (CompositionSurfaceObject *)*((_QWORD *)this + 6);
  v6 = 0;
  result = CompositionSurfaceObject::NotifyTokenInFrame(v3, this, &v6, 0LL);
  if ( result >= 0 )
  {
    *((_BYTE *)this + 224) = v6 | *((_BYTE *)this + 224) & 0xFE;
    *a2 = 1;
  }
  return result;
}
