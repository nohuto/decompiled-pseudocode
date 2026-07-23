/*
 * XREFs of PpmResetProfileSettings @ 0x1404B9120
 * Callers:
 *     PpmRegisterProfiles @ 0x1407635A0 (PpmRegisterProfiles.c)
 *     PpmDisableProfile @ 0x140AC8F20 (PpmDisableProfile.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmResetProfileSettings(__int64 a1)
{
  __int64 v1; // r8
  _OWORD *v2; // rdx
  _OWORD *v3; // rax
  __int64 v4; // r9
  __int128 v5; // xmm1
  _OWORD *v6; // rdx
  _OWORD *v7; // rcx
  _OWORD *v8; // rax
  __int128 v9; // xmm1
  __int64 result; // rax

  v1 = 3LL;
  v2 = (_OWORD *)(a1 + 40);
  v3 = &unk_140F06CC8;
  v4 = 3LL;
  do
  {
    *v2 = *v3;
    v2[1] = v3[1];
    v2[2] = v3[2];
    v2[3] = v3[3];
    v2[4] = v3[4];
    v2[5] = v3[5];
    v2[6] = v3[6];
    v2 += 8;
    v5 = v3[7];
    v3 += 8;
    *(v2 - 1) = v5;
    --v4;
  }
  while ( v4 );
  *v2 = *v3;
  v2[1] = v3[1];
  v2[2] = v3[2];
  v2[3] = v3[3];
  v2[4] = v3[4];
  v2[5] = v3[5];
  *((_QWORD *)v2 + 12) = *((_QWORD *)v3 + 12);
  v6 = (_OWORD *)(a1 + 528);
  v7 = (_OWORD *)(a1 + 528);
  v8 = &unk_140F06EB0;
  do
  {
    *v7 = *v8;
    v7[1] = v8[1];
    v7[2] = v8[2];
    v7[3] = v8[3];
    v7[4] = v8[4];
    v7[5] = v8[5];
    v7[6] = v8[6];
    v7 += 8;
    v9 = v8[7];
    v8 += 8;
    *(v7 - 1) = v9;
    --v1;
  }
  while ( v1 );
  *v7 = *v8;
  v7[1] = v8[1];
  v7[2] = v8[2];
  v7[3] = v8[3];
  v7[4] = v8[4];
  v7[5] = v8[5];
  *((_QWORD *)v7 + 12) = *((_QWORD *)v8 + 12);
  result = 2LL;
  do
  {
    *(_OWORD *)((char *)v6 - 488) = 0LL;
    *v6++ = 0LL;
    --result;
  }
  while ( result );
  return result;
}
