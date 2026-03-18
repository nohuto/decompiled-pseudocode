/*
 * XREFs of GreClientRgnDone @ 0x1C0287734
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C00F88D0 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FB6CC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01409C0 (_guard_dispatch_icall_nop.c)
 *     ?vSpWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z @ 0x1C02829D0 (-vSpWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z.c)
 */

void __fastcall GreClientRgnDone(Gre::Base *a1)
{
  __int64 v1; // rcx
  __int64 i; // rbx
  int v3; // eax
  struct EWNDOBJ *j; // rdi
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = *((_QWORD *)Gre::Base::Globals(a1) + 7);
  GreAcquireSemaphore(v5);
  for ( i = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v1) + 32) + 23664LL); i; i = *(_QWORD *)(i + 8) )
  {
    v3 = *(_DWORD *)(i + 48);
    if ( (v3 & 0x4000000) != 0 )
    {
      *(_DWORD *)(i + 48) = v3 & 0xFBFFFFFF;
      (*(void (__fastcall **)(_QWORD, __int64))(i + 40))(0LL, 64LL);
    }
    for ( j = *(struct EWNDOBJ **)(i + 24); j; j = (struct EWNDOBJ *)*((_QWORD *)j + 20) )
      vSpWndobjChange(*(HDEV *)(*(_QWORD *)(i + 32) + 48LL), j);
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v5);
}
