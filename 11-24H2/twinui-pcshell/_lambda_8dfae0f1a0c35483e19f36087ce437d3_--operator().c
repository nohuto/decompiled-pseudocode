/*
 * XREFs of _lambda_8dfae0f1a0c35483e19f36087ce437d3_::operator() @ 0x1801AB618
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5af8d5de97e6639990840c940ce8594c___::Run @ 0x1801AB590 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5af8d5de97e6639990840c940ce8594c___--Run.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_8dfae0f1a0c35483e19f36087ce437d3_::operator()(_QWORD *a1)
{
  __int64 result; // rax
  unsigned int v3; // [rsp+20h] [rbp-20h] BYREF
  unsigned int v4; // [rsp+24h] [rbp-1Ch] BYREF
  unsigned int v5; // [rsp+28h] [rbp-18h] BYREF
  unsigned int v6; // [rsp+2Ch] [rbp-14h] BYREF
  unsigned int v7; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v8; // [rsp+34h] [rbp-Ch] BYREF
  __int64 v9; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v10; // [rsp+60h] [rbp+20h] BYREF
  unsigned int v11; // [rsp+68h] [rbp+28h] BYREF
  unsigned int v12; // [rsp+70h] [rbp+30h] BYREF
  int v13; // [rsp+78h] [rbp+38h] BYREF

  v9 = 0LL;
  result = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1[1] + 120LL) + 144LL))(
             *(_QWORD *)(a1[1] + 120LL),
             &v9);
  if ( (int)result >= 0 )
  {
    v11 = 0;
    v10 = 0;
    if ( (*(int (__fastcall **)(_QWORD, unsigned int *, unsigned int *))(*(_QWORD *)*a1 + 48LL))(*a1, &v11, &v10) >= 0 )
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v9 + 48LL))(v9, v11, v10);
    v12 = 0;
    if ( (*(int (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)*a1 + 112LL))(*a1, &v12) >= 0 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 120LL))(v9, v12);
    v13 = 0;
    if ( (*(int (__fastcall **)(_QWORD, int *))(*(_QWORD *)*a1 + 32LL))(*a1, &v13) >= 0 )
      (*(void (__fastcall **)(__int64, bool))(*(_QWORD *)v9 + 32LL))(v9, v13 != 0);
    v4 = 0;
    v3 = 0;
    if ( (*(int (__fastcall **)(_QWORD, unsigned int *, unsigned int *))(*(_QWORD *)*a1 + 64LL))(*a1, &v4, &v3) >= 0 )
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v9 + 88LL))(v9, v4, v3);
    v5 = 0;
    if ( (*(int (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)*a1 + 80LL))(*a1, &v5) >= 0 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 56LL))(v9, v5);
    v6 = 0;
    if ( (*(int (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)*a1 + 96LL))(*a1, &v6) >= 0 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 104LL))(v9, v6);
    v8 = 0;
    v7 = 0;
    result = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, unsigned int *))(*(_QWORD *)*a1 + 128LL))(*a1, &v8, &v7);
    if ( (int)result >= 0 )
      result = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v9 + 136LL))(v9, v8, v7);
  }
  if ( v9 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  return result;
}
