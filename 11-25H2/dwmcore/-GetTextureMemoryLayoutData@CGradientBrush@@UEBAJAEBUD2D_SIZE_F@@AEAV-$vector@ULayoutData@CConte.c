/*
 * XREFs of ?GetTextureMemoryLayoutData@CGradientBrush@@UEBAJAEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x1802AC520
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ??$_Emplace_reallocate@AEBULayoutData@CContent@@@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEAAPEAULayoutData@CContent@@QEAU23@AEBU23@@Z @ 0x1802AB19C (--$_Emplace_reallocate@AEBULayoutData@CContent@@@-$vector@ULayoutData@CContent@@V-$allocator@ULa.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGradientBrush::GetTextureMemoryLayoutData(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rcx
  __int128 v5; // xmm1
  __int64 v6; // rdx
  _BYTE v8[40]; // [rsp+20h] [rbp-38h] BYREF

  if ( *a3 != a3[1] )
    a3[1] = *a3;
  if ( *(_BYTE *)(a1 + 233) )
  {
    memset(v8, 0, 24);
    v4 = *(_QWORD *)(a1 + 216);
    *(_OWORD *)&v8[24] = _xmm;
    if ( v4 )
    {
      (*(void (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)v4 + 208LL))(v4, a2, v8);
      v5 = *(_OWORD *)v8;
    }
    else
    {
      v5 = _xmm;
      *(_QWORD *)&v8[16] = 0LL;
      *(_OWORD *)v8 = _xmm;
    }
    v6 = a3[1];
    if ( v6 == a3[2] )
    {
      std::vector<CContent::LayoutData>::_Emplace_reallocate<CContent::LayoutData const &>(a3, (_BYTE *)v6, (__int64)v8);
    }
    else
    {
      *(_OWORD *)v6 = v5;
      *(_OWORD *)(v6 + 16) = *(_OWORD *)&v8[16];
      *(_QWORD *)(v6 + 32) = *(_QWORD *)&v8[32];
      a3[1] += 40LL;
    }
  }
  return 0LL;
}
