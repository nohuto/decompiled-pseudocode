/*
 * XREFs of sub_14003B304 @ 0x14003B304
 * Callers:
 *     sub_140046638 @ 0x140046638 (sub_140046638.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

void __fastcall sub_14003B304(__int64 a1)
{
  _QWORD *v1; // rbx

  v1 = *(_QWORD **)(a1 + 368);
  if ( v1 )
  {
    if ( v1[1] )
    {
      ((void (*)(void))HalPrivateDispatchTable[74])();
      v1[1] = 0LL;
    }
    ExFreePoolWithTag(v1, 0x72637250u);
    *(_QWORD *)(a1 + 368) = 0LL;
  }
}
