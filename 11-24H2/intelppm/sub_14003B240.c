/*
 * XREFs of sub_14003B240 @ 0x14003B240
 * Callers:
 *     sub_140046638 @ 0x140046638 (sub_140046638.c)
 * Callees:
 *     __security_check_cookie @ 0x140010230 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

void __fastcall sub_14003B240(__int64 a1)
{
  void *v1; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-38h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-28h] BYREF

  v1 = *(void **)(a1 + 368);
  Affinity = 0LL;
  PreviousAffinity = 0LL;
  if ( v1 )
  {
    if ( qword_1400193E8 )
    {
      KeProcessorGroupAffinity(&Affinity, *(unsigned int *)(a1 + 56));
      KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
      ((void (__fastcall *)(__int64, __int64, __int64, __int64))qword_1400193E8)(v4, v3, v5, v6);
      KeRevertToUserGroupAffinityThread(&PreviousAffinity);
    }
    ExFreePoolWithTag(v1, 0x72637250u);
    *(_QWORD *)(a1 + 368) = 0LL;
  }
}
