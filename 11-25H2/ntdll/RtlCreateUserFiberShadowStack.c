/*
 * XREFs of RtlCreateUserFiberShadowStack @ 0x180109A80
 * Callers:
 *     <none>
 * Callees:
 *     NtSetInformationProcess @ 0x1801635A0 (NtSetInformationProcess.c)
 */

__int64 __fastcall RtlCreateUserFiberShadowStack(_QWORD *a1, unsigned __int64 a2, _QWORD *a3)
{
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax
  __int64 result; // rax
  unsigned __int64 v10; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v11; // [rsp+28h] [rbp-20h]
  int v12; // [rsp+30h] [rbp-18h]
  _DWORD v13[3]; // [rsp+34h] [rbp-14h] BYREF

  if ( HIBYTE(a2) > 0x40u )
    return 3221225485LL;
  memset(v13, 0, sizeof(v13));
  v5 = a1[2];
  if ( v5 < a1[4] )
    return 3221225621LL;
  v6 = v5 - a1[4];
  if ( v5 < a1[3] )
    return 3221225621LL;
  v7 = v5 - a1[3];
  if ( v6 < 0x1000 || (v6 & 0xFFF) != 0 || v7 < 0x1000 || (v7 & 0xFFF) != 0 || v7 > v6 )
    return 3221225485LL;
  v12 = HIBYTE(a2);
  v11 = (v7 / 5 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v8 = v11 + 0x2000;
  if ( v6 >= v11 + 0x2000 )
    v8 = v6;
  v10 = v8;
  result = NtSetInformationProcess(-1LL, 98LL, &v10, 32LL);
  if ( (int)result >= 0 )
  {
    *a3 = *(_QWORD *)&v13[1];
    return (unsigned int)result;
  }
  return result;
}
