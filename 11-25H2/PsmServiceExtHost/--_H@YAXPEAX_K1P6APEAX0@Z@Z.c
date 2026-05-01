/*
 * XREFs of ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180057570
 * Callers:
 *     ??0ResourceManager@ExecutionModel@@QEAA@XZ @ 0x18008623C (--0ResourceManager@ExecutionModel@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A8010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall `vector constructor iterator'(char *a1, __int64 a2, __int64 a3, void (__fastcall *a4)(char *))
{
  __int64 v5; // rbx

  if ( a3 )
  {
    v5 = a3;
    do
    {
      a4(a1);
      a1 += a2;
      --v5;
    }
    while ( v5 );
  }
}
