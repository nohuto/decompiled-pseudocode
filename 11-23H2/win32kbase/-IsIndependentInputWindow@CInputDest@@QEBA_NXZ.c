/*
 * XREFs of ?IsIndependentInputWindow@CInputDest@@QEBA_NXZ @ 0x1C01B5720
 * Callers:
 *     ?DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z @ 0x1C0059464 (-DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z.c)
 *     ?DoesBelongToForegroundThread@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z @ 0x1C01B54A4 (-DoesBelongToForegroundThread@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z.c)
 *     ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x1C01CC394 (-HandlePointerNodeWithTarget@CTouchProcessor@@AEAA-AW4PointerNodeWithTargetHandling@1@PEBUCPoint.c)
 * Callees:
 *     ?IsCompositionInput@CInputDest@@QEBA_NXZ @ 0x1C0057334 (-IsCompositionInput@CInputDest@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CInputDest::IsIndependentInputWindow(CInputDest *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  char v5; // bl
  __int64 v6; // rcx
  int v7; // ecx
  bool v8; // al

  v5 = 0;
  if ( CInputDest::IsCompositionInput(this) )
  {
    if ( *((_DWORD *)this + 23) == 2 && (v6 = *((_QWORD *)this + 10)) != 0 )
    {
      if ( qword_1C02964D8 )
        v7 = qword_1C02964D8(v6, v2, v3, v4);
      else
        v7 = 0;
      v8 = v7 != 0;
    }
    else
    {
      v8 = 0;
    }
    if ( v8 )
      return 1;
  }
  return v5;
}
