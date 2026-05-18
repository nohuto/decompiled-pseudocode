/*
 * XREFs of sub_1800D0C10 @ 0x1800D0C10
 * Callers:
 *     sub_1800CDFE8 @ 0x1800CDFE8 (sub_1800CDFE8.c)
 *     sub_1800CE27C @ 0x1800CE27C (sub_1800CE27C.c)
 *     sub_1800CE554 @ 0x1800CE554 (sub_1800CE554.c)
 *     sub_1800CE894 @ 0x1800CE894 (sub_1800CE894.c)
 * Callees:
 *     sub_180011C30 @ 0x180011C30 (sub_180011C30.c)
 *     sub_1800131AC @ 0x1800131AC (sub_1800131AC.c)
 *     sub_18001C420 @ 0x18001C420 (sub_18001C420.c)
 *     sub_18001CAFC @ 0x18001CAFC (sub_18001CAFC.c)
 *     sub_1800CFD64 @ 0x1800CFD64 (sub_1800CFD64.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_1800D0C10(__int64 a1, __int64 a2)
{
  struct _Mtx_internal_imp_t *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  __int64 v8; // [rsp+60h] [rbp+18h] BYREF
  __int64 *v9; // [rsp+68h] [rbp+20h] BYREF

  if ( _InterlockedExchange((volatile __int32 *)(a1 + 160), 1) )
  {
    sub_1800131AC(a2);
    sub_18001CAFC(&stru_1801B9608, 4);
  }
  else
  {
    v8 = a1;
    v9 = &v8;
    v4 = (struct _Mtx_internal_imp_t *)(a1 + 112);
    sub_180011C30(a1 + 112);
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
      sub_18001C420(&v7);
      v5 = v7;
    }
    Mtx_unlock(v4);
    sub_1800CFD64((volatile __int32 **)&v9);
  }
}
