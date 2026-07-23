/*
 * XREFs of HalpIommuCreateIncreaseAliasTrack @ 0x1405511B0
 * Callers:
 *     HalpIommuUnblockDevice @ 0x1404B6140 (HalpIommuUnblockDevice.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x14027C378 (HalpMmAllocCtxAlloc.c)
 *     HalpMmAllocCtxFree @ 0x1402EA1C8 (HalpMmAllocCtxFree.c)
 *     HalpIommuCloneDeviceId @ 0x1404D36B0 (HalpIommuCloneDeviceId.c)
 *     IidAreIdsStrictlyEqual @ 0x14069CFDC (IidAreIdsStrictlyEqual.c)
 */

__int64 __fastcall HalpIommuCreateIncreaseAliasTrack(void *Src, _QWORD *a2)
{
  __int64 *i; // r11
  __int64 v5; // r11
  __int64 v7; // rax
  _QWORD *v8; // rbx
  __int64 v9; // rcx
  int v10; // esi
  _QWORD *v11; // rcx
  __int64 v12; // rdx

  for ( i = (__int64 *)HalpRidAliasList; i != &HalpRidAliasList; i = *(__int64 **)v5 )
  {
    if ( (unsigned __int8)IidAreIdsStrictlyEqual(i[2], Src) )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v5 + 24)) <= 1 )
        __fastfail(0xEu);
      *a2 = v5;
      return 0LL;
    }
  }
  v7 = HalpMmAllocCtxAlloc((__int64)Src, 32LL);
  v8 = (_QWORD *)v7;
  if ( !v7 )
    return 3221225626LL;
  *(_OWORD *)v7 = 0LL;
  *(_OWORD *)(v7 + 16) = 0LL;
  v10 = HalpIommuCloneDeviceId(Src, (__int64 *)(v7 + 16));
  if ( v10 < 0 )
  {
    v12 = v8[2];
    if ( v12 )
      HalpMmAllocCtxFree(v9, v12);
    HalpMmAllocCtxFree(v9, (__int64)v8);
  }
  else
  {
    v8[3] = 1LL;
    v11 = (_QWORD *)qword_140FC0E18;
    if ( *(__int64 **)qword_140FC0E18 != &HalpRidAliasList )
      __fastfail(3u);
    *v8 = &HalpRidAliasList;
    v8[1] = v11;
    *v11 = v8;
    qword_140FC0E18 = (__int64)v8;
    *a2 = v8;
  }
  return (unsigned int)v10;
}
