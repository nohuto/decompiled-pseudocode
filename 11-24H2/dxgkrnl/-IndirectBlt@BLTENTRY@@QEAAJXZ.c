/*
 * XREFs of ?IndirectBlt@BLTENTRY@@QEAAJXZ @ 0x1403A3170
 * Callers:
 *     ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x140430240 (-ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z.c)
 * Callees:
 *     ?CompletePresentIndirectInternal@BLTQUEUE@@AEAAJPEAVBLTENTRY@@PEAT_LARGE_INTEGER@@H@Z @ 0x14005DD8C (-CompletePresentIndirectInternal@BLTQUEUE@@AEAAJPEAVBLTENTRY@@PEAT_LARGE_INTEGER@@H@Z.c)
 *     ?SetVisibilityIfDeferred@BLTQUEUE@@QEAAXXZ @ 0x1403A31FC (-SetVisibilityIfDeferred@BLTQUEUE@@QEAAXXZ.c)
 */

__int64 __fastcall BLTENTRY::IndirectBlt(LARGE_INTEGER *this)
{
  unsigned int v2; // edi
  BLTQUEUE **v3; // rsi
  LARGE_INTEGER v4; // rax
  BLTQUEUE *v5; // rcx
  union _LARGE_INTEGER PerformanceCounter; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v3 = (BLTQUEUE **)&this[3];
  this[68] = PerformanceCounter;
  if ( (this[8].LowPart & 8) == 0 && !*((_DWORD *)*v3 + 724) )
    v2 = BLTQUEUE::CompletePresentIndirectInternal(*v3, (struct BLTENTRY *)this, &PerformanceCounter);
  v4 = KeQueryPerformanceCounter(0LL);
  v5 = *v3;
  this[69] = v4;
  BLTQUEUE::SetVisibilityIfDeferred(v5);
  return v2;
}
