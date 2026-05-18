/*
 * XREFs of sub_1800D0AB0 @ 0x1800D0AB0
 * Callers:
 *     sub_1800CDE88 @ 0x1800CDE88 (sub_1800CDE88.c)
 *     sub_1800CE11C @ 0x1800CE11C (sub_1800CE11C.c)
 *     sub_1800CE3F4 @ 0x1800CE3F4 (sub_1800CE3F4.c)
 *     sub_1800CE734 @ 0x1800CE734 (sub_1800CE734.c)
 * Callees:
 *     sub_180011B30 @ 0x180011B30 (sub_180011B30.c)
 *     sub_1800130AC @ 0x1800130AC (sub_1800130AC.c)
 *     sub_18001C2C0 @ 0x18001C2C0 (sub_18001C2C0.c)
 *     sub_18001C99C @ 0x18001C99C (sub_18001C99C.c)
 *     sub_1800CFC04 @ 0x1800CFC04 (sub_1800CFC04.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_1800D0AB0(__int64 a1, __int64 a2)
{
  struct _Mtx_internal_imp_t *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  __int64 v8; // [rsp+60h] [rbp+18h] BYREF
  __int64 *v9; // [rsp+68h] [rbp+20h] BYREF

  if ( _InterlockedExchange((volatile __int32 *)(a1 + 160), 1) )
  {
    sub_1800130AC(a2);
    sub_18001C99C(&stru_1801B8608, 4);
  }
  else
  {
    v8 = a1;
    v9 = &v8;
    v4 = (struct _Mtx_internal_imp_t *)(a1 + 112);
    sub_180011B30(a1 + 112);
    v5 = **(_QWORD **)(a1 + 144);
    v7 = v5;
    while ( !*(_BYTE *)(v5 + 25) )
    {
      v6 = *(_QWORD *)(v5 + 96);
      if ( !v6 )
      {
        std::_Xbad_function_call();
        break;
      }
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 16LL))(v6, a2);
      sub_18001C2C0(&v7);
      v5 = v7;
    }
    Mtx_unlock(v4);
    sub_1800CFC04((volatile __int32 **)&v9);
  }
}
