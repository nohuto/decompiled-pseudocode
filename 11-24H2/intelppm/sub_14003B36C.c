/*
 * XREFs of sub_14003B36C @ 0x14003B36C
 * Callers:
 *     sub_140046638 @ 0x140046638 (sub_140046638.c)
 * Callees:
 *     __security_check_cookie @ 0x140010230 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_14003B36C(__int64 a1)
{
  __int64 v1; // rdx
  int *v3; // rdx
  unsigned int v4; // esi
  int v5; // ebx
  __int64 i; // r8
  int v7; // eax
  __int64 Pool2; // rax
  _QWORD *v9; // rdi
  int v11; // [rsp+40h] [rbp-38h] BYREF
  __int64 v12; // [rsp+48h] [rbp-30h] BYREF
  _DWORD v13[4]; // [rsp+50h] [rbp-28h] BYREF

  v1 = *(unsigned __int8 *)(a1 + 376);
  v12 = 0LL;
  v11 = 0;
  v3 = &dword_140019840[64 * v1];
  v4 = v3[10];
  if ( v4 )
  {
    if ( v4 > 4 )
      return (unsigned int)-1073741670;
    for ( i = 0LL; (unsigned int)i < v4; i = (unsigned int)(i + 1) )
    {
      v7 = v3[3 * i + 11];
      v13[i] = v7;
      if ( (unsigned int)(v7 - 2) > 0x15 )
        return (unsigned int)-1073741637;
    }
    Pool2 = ExAllocatePool2(64LL, 136LL, 1919119952LL);
    v9 = (_QWORD *)Pool2;
    if ( Pool2 )
    {
      *(_QWORD *)(a1 + 368) = Pool2;
      v11 = 1953719621;
      v5 = ((__int64 (__fastcall *)(_QWORD, _DWORD *, _QWORD, int *, __int64 *, _QWORD))HalPrivateDispatchTable[150])(
             *(unsigned int *)(a1 + 56),
             v13,
             v4,
             &v11,
             &v12,
             0LL);
      if ( v5 < 0 )
      {
        ExFreePoolWithTag(v9, 0x72637250u);
        *(_QWORD *)(a1 + 368) = 0LL;
      }
      else
      {
        v9[1] = v12;
        *(_DWORD *)v9 = v4;
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v5;
}
