/*
 * XREFs of ??8@YA_NAEAVCAudioSessionNotificationProcess@@0@Z @ 0x180062484
 * Callers:
 *     ??R_lambda_a5fcd431b6a5ef671993691a41929e10_@@QEBA@AEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@@Z @ 0x1800C5F74 (--R_lambda_a5fcd431b6a5ef671993691a41929e10_@@QEBA@AEAULockedListEntry@-$CLockedList_UniqueValue.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall operator==(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rdi
  int v3; // ebx

  v2 = *a1;
  v3 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 40LL))(*a2);
  return (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v2 + 40LL))(v2) == v3;
}
