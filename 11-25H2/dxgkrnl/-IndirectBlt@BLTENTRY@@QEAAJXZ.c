/*
 * XREFs of ?IndirectBlt@BLTENTRY@@QEAAJXZ @ 0x140305744
 * Callers:
 *     ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x140304A00 (-ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z.c)
 * Callees:
 *     ?SetVisibilityIfDeferred@BLTQUEUE@@QEAAXXZ @ 0x1403058DC (-SetVisibilityIfDeferred@BLTQUEUE@@QEAAXXZ.c)
 *     ?CompletePresentIndirectInternal@BLTQUEUE@@AEAAJPEAVBLTENTRY@@PEAT_LARGE_INTEGER@@H@Z @ 0x14030881C (-CompletePresentIndirectInternal@BLTQUEUE@@AEAAJPEAVBLTENTRY@@PEAT_LARGE_INTEGER@@H@Z.c)
 */

__int64 __fastcall BLTENTRY::IndirectBlt(LARGE_INTEGER *this)
{
  unsigned int v2; // edi
  int v3; // r9d
  BLTQUEUE **v4; // rsi
  LARGE_INTEGER v5; // rax
  BLTQUEUE *v6; // rcx
  union _LARGE_INTEGER PerformanceCounter; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v4 = (BLTQUEUE **)&this[3];
  this[68] = PerformanceCounter;
  if ( (this[8].LowPart & 8) == 0 && !*((_DWORD *)*v4 + 706) )
    v2 = BLTQUEUE::CompletePresentIndirectInternal(*v4, (struct BLTENTRY *)this, &PerformanceCounter, v3);
  v5 = KeQueryPerformanceCounter(0LL);
  v6 = *v4;
  this[69] = v5;
  BLTQUEUE::SetVisibilityIfDeferred(v6);
  return v2;
}
