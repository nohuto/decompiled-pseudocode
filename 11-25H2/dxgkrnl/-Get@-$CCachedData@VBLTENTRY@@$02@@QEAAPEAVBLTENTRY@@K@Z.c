/*
 * XREFs of ?Get@?$CCachedData@VBLTENTRY@@$02@@QEAAPEAVBLTENTRY@@K@Z @ 0x140062BF8
 * Callers:
 *     ?SetQueuedPresentLimit@BLTQUEUE@@QEAAXI@Z @ 0x14027BECC (-SetQueuedPresentLimit@BLTQUEUE@@QEAAXI@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x140033640 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??_EBLTENTRY@@QEAAPEAXI@Z @ 0x140091DC8 (--_EBLTENTRY@@QEAAPEAXI@Z.c)
 */

BLTENTRY *__fastcall CCachedData<BLTENTRY,3>::Get(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rsi
  BLTENTRY *result; // rax
  BLTENTRY *v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rax
  bool v10; // cf
  unsigned __int64 v11; // rax
  __int64 v12; // rax

  v4 = a2;
  if ( a2 <= 3 )
    return (BLTENTRY *)a1;
  v7 = *(BLTENTRY **)(a1 + 1728);
  if ( a2 <= *(_DWORD *)(a1 + 1736) )
    return v7;
  v8 = 0LL;
  if ( v7 )
    BLTENTRY::`vector deleting destructor'(v7, a2);
  v9 = 576 * v4;
  if ( !is_mul_ok(v4, 0x240uLL) )
    v9 = -1LL;
  v10 = __CFADD__(v9, 8LL);
  v11 = v9 + 8;
  if ( v10 )
    v11 = -1LL;
  v12 = operator new[](v11, 0x4B677844u, 256LL, a4);
  if ( v12 )
  {
    v8 = v12 + 8;
    *(_QWORD *)v12 = v4;
    `vector constructor iterator'((char *)(v12 + 8), 576LL, v4, (void (__fastcall *)(char *))BLTENTRY::BLTENTRY);
  }
  *(_QWORD *)(a1 + 1728) = v8;
  result = (BLTENTRY *)v8;
  *(_DWORD *)(a1 + 1736) = v8 != 0 ? v4 : 0;
  return result;
}
