/*
 * XREFs of AccelpSiovDsaOperationHandler @ 0x14065A240
 * Callers:
 *     AccelpSiovInternalOperationHandler @ 0x14065ABC4 (AccelpSiovInternalOperationHandler.c)
 * Callees:
 *     AccelBuildDescriptorNop @ 0x140659390 (AccelBuildDescriptorNop.c)
 *     AccelpSiovGetOperationType @ 0x14065A630 (AccelpSiovGetOperationType.c)
 *     IaaBuildDescriptorCommon @ 0x14065AF38 (IaaBuildDescriptorCommon.c)
 */

__int64 __fastcall AccelpSiovDsaOperationHandler(int *a1, unsigned int *a2)
{
  __int64 v2; // r9
  int v4; // ecx
  __int64 v5; // r10
  unsigned int v6; // ebp
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  __int64 v13; // rcx
  __int64 result; // rax
  __int64 v15; // rdx
  __int64 v16; // r10
  int v17; // r11d
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // r10
  __int64 v21; // r11
  __int64 v22; // rdi
  __int64 v23; // rbx
  __int64 v24; // r10
  __int64 v25; // r11
  __int64 v26; // rdi
  __int64 v27; // rbx
  __int64 v28; // r10
  __int64 v29; // r11
  unsigned int v30; // eax
  _BYTE *v31; // r11
  __int64 v32; // rbx
  __int64 v33; // r10
  __int64 v34; // r11
  unsigned __int64 v35; // rax
  __int64 v36; // r8
  __int64 v37; // rdx
  int v38; // [rsp+50h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a1 + 1);
  v4 = *a1;
  v5 = *(_QWORD *)(v2 + 16);
  if ( !v4 )
  {
    *a2 = 64;
    a2[1] = 32;
    a2[2] = 32;
    if ( a2 != (unsigned int *)-12LL )
      a2[3] = 64;
    goto LABEL_41;
  }
  v6 = 3;
  v7 = v4 - 3;
  if ( !v7 )
  {
    v31 = (_BYTE *)*((_QWORD *)a1 + 4);
    if ( (*v31 & 0x3F) == 0 )
      return 259LL;
    if ( (*v31 & 0x3F) != 1 )
      return 3221225473LL;
    if ( *(_BYTE *)(*((_QWORD *)a1 + 3) + 7LL) == 5 )
      result = v31[1] != 0 ? 0xC0000001 : 0;
    else
      result = 0LL;
    if ( (int)result < 0 )
      return result;
    if ( (*(_DWORD *)(*(_QWORD *)(v5 + 16) + 152LL) & 1) == 0 )
      goto LABEL_41;
    v32 = *((_QWORD *)a1 + 3);
    if ( *(_DWORD *)(v5 + 188) != 1 )
      goto LABEL_41;
    v38 = 8;
    if ( (int)AccelpSiovGetOperationType(v2, v32, &v38) < 0 || v38 == 8 || !v34 )
      goto LABEL_41;
    if ( (*(_BYTE *)v34 & 0x3F) == 1 )
    {
      v35 = *(unsigned int *)(v32 + 32);
    }
    else
    {
      if ( (*(_BYTE *)v34 & 0x3Fu) - 3 > 1 )
      {
LABEL_41:
        v6 = 33;
LABEL_42:
        v36 = *((_QWORD *)a1 + 5);
        v37 = *((_QWORD *)a1 + 3);
        if ( v6 >= 2 && v6 != 3 && v6 != 4 && v6 != 5 )
          return 0LL;
        if ( (v36 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
          return 3221225485LL;
        if ( (v36 & 1) != 0 )
        {
          if ( v6 < 2 )
            return 3221225659LL;
          *(_BYTE *)(v37 + 4) &= ~2u;
        }
        if ( (v36 & 2) == 0 )
          goto LABEL_57;
        if ( (v6 & 0xFFFFFFFA) != 0 || v6 == 4 )
        {
          *(_BYTE *)(v37 + 5) &= ~1u;
LABEL_57:
          if ( (v36 & 8) != 0 )
            *(_BYTE *)(v37 + 4) &= ~8u;
          return 0LL;
        }
        return 3221225659LL;
      }
      v35 = *(unsigned int *)(v34 + 4);
    }
    _InterlockedAdd64((volatile signed __int64 *)(v33 + 24LL * v38 + 584), v35);
    goto LABEL_41;
  }
  v8 = v7 - 2;
  if ( !v8 )
  {
    if ( (*(_BYTE *)(v5 + 216) & 1) == 0 )
      return 3221225659LL;
    v30 = a1[12];
    if ( v30 > *(_DWORD *)(v5 + 224) )
      return 3221225659LL;
    *a2 = v30;
    if ( a1[12] == 1 )
      *a2 = 2;
    goto LABEL_41;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v26 = *((_QWORD *)a1 + 8);
    v27 = *((_QWORD *)a1 + 7);
    IaaBuildDescriptorCommon(
      4,
      *((_QWORD *)a1 + 3),
      *((_QWORD *)a1 + 4),
      (unsigned int)a1[4] >> 31,
      a1[4] & 0xFFFFF,
      (unsigned __int8)*(_QWORD *)(v5 + 192) >> 7,
      (*(_QWORD *)(v5 + 192) & 0x400LL) != 0);
    *(_QWORD *)(v29 + 24) = v28;
    v6 = 4;
    *(_DWORD *)(v29 + 32) = v27;
    *(_QWORD *)(v29 + 16) = v26;
    goto LABEL_42;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    v22 = *((_QWORD *)a1 + 8);
    v23 = *((_QWORD *)a1 + 7);
    IaaBuildDescriptorCommon(
      3,
      *((_QWORD *)a1 + 3),
      *((_QWORD *)a1 + 4),
      (unsigned int)a1[4] >> 31,
      a1[4] & 0xFFFFF,
      (unsigned __int8)*(_QWORD *)(v5 + 192) >> 7,
      (*(_QWORD *)(v5 + 192) & 0x400LL) != 0);
    *(_QWORD *)(v25 + 16) = v24;
    *(_QWORD *)(v25 + 24) = v23;
    *(_DWORD *)(v25 + 32) = v22;
    goto LABEL_42;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    v6 = 5;
    v18 = *((_QWORD *)a1 + 8);
    IaaBuildDescriptorCommon(
      5,
      *((_QWORD *)a1 + 3),
      *((_QWORD *)a1 + 4),
      (unsigned int)a1[4] >> 31,
      a1[4] & 0xFFFFF,
      (unsigned __int8)*(_QWORD *)(v5 + 192) >> 7,
      0);
    *(_QWORD *)(v19 + 16) = v20;
    *(_QWORD *)(v19 + 24) = v21;
    *(_DWORD *)(v19 + 32) = v18;
    *(_BYTE *)(v19 + 40) = 1;
    goto LABEL_42;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    IaaBuildDescriptorCommon(
      0,
      *((_QWORD *)a1 + 3),
      *((_QWORD *)a1 + 4),
      (unsigned int)a1[4] >> 31,
      a1[4] & 0xFFFFF,
      0,
      0);
    v6 = 0;
    goto LABEL_42;
  }
  if ( v12 != 1 )
    return 3221225659LL;
  v13 = *((_QWORD *)a1 + 6);
  if ( *(_DWORD *)(v13 + 32) < 2u )
    return 3221225473LL;
  if ( *((_QWORD *)a1 + 8) != 1LL
    || (*((_QWORD *)a1 + 8) = 2LL,
        result = AccelBuildDescriptorNop((__int64 *)(*(_QWORD *)(v13 + 40) + 40LL)),
        (int)result >= 0) )
  {
    IaaBuildDescriptorCommon(
      1,
      *((_QWORD *)a1 + 3),
      *((_QWORD *)a1 + 4),
      (unsigned int)a1[4] >> 31,
      a1[4] & 0xFFFFF,
      0,
      0);
    *(_QWORD *)(v15 + 16) = v16;
    v6 = 1;
    *(_DWORD *)(v15 + 32) = v17;
    goto LABEL_42;
  }
  return result;
}
