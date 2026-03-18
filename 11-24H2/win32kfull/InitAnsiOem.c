/*
 * XREFs of InitAnsiOem @ 0x14028275C
 * Callers:
 *     NtUserInitAnsiOem @ 0x1402989B0 (NtUserInitAnsiOem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InitAnsiOem(_OWORD *a1, ULONG64 a2)
{
  __int64 UserSessionState; // rax
  _OWORD *v3; // rcx
  _OWORD *v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rax
  _OWORD *v8; // rcx
  _OWORD *v9; // rax
  _OWORD *v12; // [rsp+48h] [rbp+10h]

  v12 = (_OWORD *)a2;
  if ( a2 >= MmUserProbeAddress )
    a2 = MmUserProbeAddress;
  UserSessionState = W32GetUserSessionState(MmUserProbeAddress, a2);
  v3 = a1;
  v4 = (_OWORD *)(*(_QWORD *)(UserSessionState + 19928) + 1380LL);
  v5 = 2LL;
  v6 = 2LL;
  do
  {
    *v4 = *v3;
    v4[1] = v3[1];
    v4[2] = v3[2];
    v4[3] = v3[3];
    v4[4] = v3[4];
    v4[5] = v3[5];
    v4[6] = v3[6];
    v4 += 8;
    *(v4 - 1) = v3[7];
    v3 += 8;
    --v6;
  }
  while ( v6 );
  v7 = W32GetUserSessionState(v3, 0LL);
  v8 = v12;
  v9 = (_OWORD *)(*(_QWORD *)(v7 + 19928) + 1636LL);
  do
  {
    *v9 = *v8;
    v9[1] = v8[1];
    v9[2] = v8[2];
    v9[3] = v8[3];
    v9[4] = v8[4];
    v9[5] = v8[5];
    v9[6] = v8[6];
    v9 += 8;
    *(v9 - 1) = v8[7];
    v8 += 8;
    --v5;
  }
  while ( v5 );
  return 1LL;
}
