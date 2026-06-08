/*
 * XREFs of sub_140005640 @ 0x140005640
 * Callers:
 *     sub_14000EE00 @ 0x14000EE00 (sub_14000EE00.c)
 * Callees:
 *     sub_140003EE0 @ 0x140003EE0 (sub_140003EE0.c)
 *     __security_check_cookie @ 0x140010230 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 *     sub_14003A5F4 @ 0x14003A5F4 (sub_14003A5F4.c)
 *     sub_140047614 @ 0x140047614 (sub_140047614.c)
 */

__int64 sub_140005640()
{
  __int64 v0; // rdx
  __int64 v1; // rbx
  KIRQL v2; // al
  __int64 v3; // rcx
  PVOID v4; // rbx
  PVOID *v5; // rax
  __int64 v6; // rdi
  PVOID *v7; // r14
  unsigned int v8; // r15d
  char *v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned int v13; // [rsp+20h] [rbp-50h] BYREF
  __int128 v14; // [rsp+28h] [rbp-48h] BYREF
  __int64 v15; // [rsp+38h] [rbp-38h]
  _LARGE_INTEGER Interval; // [rsp+40h] [rbp-30h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+48h] [rbp-28h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+58h] [rbp-18h] BYREF

  Interval.QuadPart = -1000000LL;
  v13 = 0;
  v15 = 0LL;
  Affinity = 0LL;
  v14 = 0LL;
  PreviousAffinity = 0LL;
  KeDelayExecutionThread(0, 0, &Interval);
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(qword_140019120 + 2504))(qword_140019128, qword_140019170, 0LL);
  KeInitializeEnumerationContext(&v14, &unk_140019580);
  while ( !(unsigned int)KeEnumerateNextProcessor(&v13, &v14) )
  {
    v0 = *((_QWORD *)&DeviceObject.Queue.ListEntry.Flink->Flink + v13);
    v1 = *(_QWORD *)(v0 + 216);
    if ( v1 )
    {
      KeProcessorGroupAffinity(&Affinity, *(unsigned int *)(v0 + 56));
      KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
      v2 = KfRaiseIrql(2u);
      v13 = 0;
      v3 = 0LL;
      do
      {
        *(_QWORD *)(v1 + 8 * v3 + 24) = 0LL;
        v3 = v13 + 1;
        v13 = v3;
      }
      while ( (unsigned int)v3 < 2 );
      KeLowerIrql(v2);
      KeRevertToUserGroupAffinityThread(&PreviousAffinity);
    }
  }
  while ( (__int64 *)qword_140019188 != &qword_140019188 )
  {
    v4 = P;
    if ( *(__int64 **)P != &qword_140019188 || (v5 = (PVOID *)*((_QWORD *)P + 1), *v5 != P) )
      __fastfail(3u);
    P = (PVOID)*((_QWORD *)P + 1);
    *v5 = &qword_140019188;
    sub_140003EE0((__int64)v4, 1u);
    ExFreePoolWithTag(v4, 0x72637250u);
  }
  if ( byte_140019A80 )
  {
    v6 = 0LL;
    do
    {
      v7 = (PVOID *)qword_140019A88;
      v8 = 0;
      v9 = (char *)qword_140019A88 + 40 * v6;
      if ( v9[16] )
      {
        do
          ExFreePoolWithTag(*(PVOID *)(*((_QWORD *)v9 + 3) + 16LL * v8++), 0x72637250u);
        while ( v8 < LOBYTE(v7[5 * v6 + 2]) );
      }
      ExFreePoolWithTag(*((PVOID *)v9 + 3), 0x72637250u);
      ExFreePoolWithTag(v7[5 * v6], 0x72637250u);
      v6 = (unsigned int)(v6 + 1);
    }
    while ( (unsigned int)v6 < (unsigned __int8)byte_140019A80 );
    ExFreePoolWithTag(qword_140019A88, 0x72637250u);
    byte_140019A80 = 0;
  }
  sub_140047614(1LL);
  KeInitializeEnumerationContext(&v14, &unk_140019580);
  while ( !(unsigned int)KeEnumerateNextProcessor(&v13, &v14) )
  {
    v10 = *((_QWORD *)&DeviceObject.Queue.ListEntry.Flink->Flink + v13);
    v11 = *(_QWORD *)(v10 + 216);
    if ( v11 )
      sub_14003A5F4(v10, v11, 1LL);
  }
  return (*(__int64 (__fastcall **)(__int64, __int64))(qword_140019120 + 2512))(qword_140019128, qword_140019170);
}
