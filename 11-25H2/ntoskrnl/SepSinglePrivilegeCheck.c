/*
 * XREFs of SepSinglePrivilegeCheck @ 0x1403CF6BC
 * Callers:
 *     SeAccessCheckByType @ 0x140363B20 (SeAccessCheckByType.c)
 *     SepAccessCheckEx @ 0x1403CE444 (SepAccessCheckEx.c)
 *     SePrivilegePolicyCheck @ 0x1403CF4A0 (SePrivilegePolicyCheck.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall SepSinglePrivilegeCheck(unsigned int a1, __int64 a2, char a3)
{
  __int64 v3; // r8
  __int64 v5; // [rsp+0h] [rbp-18h] BYREF
  __int64 v6; // [rsp+8h] [rbp-10h] BYREF

  v6 = 0LL;
  v5 = 0LL;
  if ( !a3 )
    return 1;
  _InterlockedExchange64(&v6, *(_QWORD *)(a2 + 72));
  _InterlockedExchange64(&v5, *(_QWORD *)(a2 + 64));
  v3 = v6 & v5;
  _InterlockedOr((volatile signed __int32 *)&v5, 0);
  return _bittest64(&v3, a1);
}
