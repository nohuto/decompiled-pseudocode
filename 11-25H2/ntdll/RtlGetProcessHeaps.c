/*
 * XREFs of RtlGetProcessHeaps @ 0x180115910
 * Callers:
 *     <none>
 * Callees:
 *     RtlpEnumProcessHeaps @ 0x18009A690 (RtlpEnumProcessHeaps.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlGetProcessHeaps(unsigned int a1, __int64 a2)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 v6; // rax
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+28h] [rbp-20h]
  unsigned int v10; // [rsp+30h] [rbp-18h]
  int v11; // [rsp+34h] [rbp-14h]

  v11 = 0;
  v10 = 0;
  v9 = a2;
  v8 = a2 + 8LL * a1;
  RtlpEnumProcessHeaps((__int64 (__fastcall *)(__int64, __int64, __int64 *))RtlGetProcessHeapsCallback, (__int64)&v8, 2);
  v4 = v9 - a2;
  v5 = v10;
  v6 = v4 >> 3;
  if ( dword_1801CE578 )
    v5 += ((__int64 (__fastcall *)(_QWORD))qword_1801CE5C0)(a1 - (unsigned int)v6);
  return v5;
}
