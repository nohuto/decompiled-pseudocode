/*
 * XREFs of CmInitSystem0 @ 0x140C4A528
 * Callers:
 *     InitBootProcessor @ 0x140C0CC88 (InitBootProcessor.c)
 * Callees:
 *     CmpGetSystemControlValues @ 0x140C4ABDC (CmpGetSystemControlValues.c)
 *     CmFcInitSystem1 @ 0x140C4C340 (CmFcInitSystem1.c)
 */

__int64 __fastcall CmInitSystem0(__int64 a1)
{
  __int64 ***v2; // rax
  __int64 **v3; // rbx

  CmpGetSystemControlValues(*(_QWORD *)(a1 + 168));
  v2 = (__int64 ***)(*(_QWORD *)(a1 + 240) + 312LL);
  v3 = *v2;
  while ( v3 != (__int64 **)v2 )
  {
    if ( ((_DWORD)v3[3] & 0x40) != 0 )
      CmpGetSystemControlValues((__int64)v3[4]);
    v3 = (__int64 **)*v3;
    v2 = (__int64 ***)(*(_QWORD *)(a1 + 240) + 312LL);
  }
  return CmFcInitSystem1();
}
