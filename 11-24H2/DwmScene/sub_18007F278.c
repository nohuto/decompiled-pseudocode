/*
 * XREFs of sub_18007F278 @ 0x18007F278
 * Callers:
 *     sub_18007F934 @ 0x18007F934 (sub_18007F934.c)
 * Callees:
 *     memset @ 0x18000C4E8 (memset.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     sub_1800100E4 @ 0x1800100E4 (sub_1800100E4.c)
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_18007F410 @ 0x18007F410 (sub_18007F410.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_18007F278(__int64 *a1, size_t a2, const void *a3, size_t a4)
{
  size_t v7; // r15
  __int64 v8; // r14
  __int64 v9; // rax
  void *v10; // rcx
  void **pExceptionObject; // [rsp+28h] [rbp-18h] BYREF
  char *v13; // [rsp+30h] [rbp-10h]
  char v14; // [rsp+38h] [rbp-8h]
  char v15; // [rsp+88h] [rbp+48h] BYREF

  v7 = a2;
  if ( a4 != -1LL )
    v7 = a4;
  v8 = o__aligned_malloc(a2, 16LL);
  *a1 = 0LL;
  a1[1] = 0LL;
  v15 = 0;
  pExceptionObject = (void **)v8;
  v13 = &v15;
  v9 = sub_18001B1F8(24LL);
  if ( v9 )
  {
    *(_DWORD *)(v9 + 8) = 1;
    *(_DWORD *)(v9 + 12) = 1;
    *(_QWORD *)v9 = &std::_Ref_count_resource<void *,_lambda_2bb65f39da56ce77b91824536c9c4563_>::`vftable';
    *(_QWORD *)(v9 + 16) = v8;
  }
  *a1 = v8;
  a1[1] = v9;
  v14 = 0;
  sub_18007F410(&pExceptionObject);
  v10 = (void *)*a1;
  if ( !*a1 )
  {
    v13 = "bad allocation";
    pExceptionObject = &stdext::bad_alloc::`vftable';
    throw (stdext::bad_alloc *)&pExceptionObject;
  }
  if ( a3 )
    sub_1800100E4(v10, a2, a3, v7);
  else
    memset(v10, 0, a2);
  return a1;
}
