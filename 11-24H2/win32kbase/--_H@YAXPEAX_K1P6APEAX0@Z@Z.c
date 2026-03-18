/*
 * XREFs of ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1400CEF38
 * Callers:
 *     ??0IOCPDispatcher@@IEAA@XZ @ 0x1400CE954 (--0IOCPDispatcher@@IEAA@XZ.c)
 *     ??0CConnection@DirectComposition@@AEAA@XZ @ 0x1400CED90 (--0CConnection@DirectComposition@@AEAA@XZ.c)
 *     ??0CRIMBase@@IEAA@K@Z @ 0x1400CEE9C (--0CRIMBase@@IEAA@K@Z.c)
 *     ??0CMouseProcessor@@IEAA@XZ @ 0x140153418 (--0CMouseProcessor@@IEAA@XZ.c)
 *     ?xxxProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x14021F008 (-xxxProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall `vector constructor iterator'(char *a1, __int64 a2, __int64 a3, void (__fastcall *a4)(char *))
{
  do
  {
    a4(a1);
    a1 += a2;
    --a3;
  }
  while ( a3 );
}
