/*
 * XREFs of RtlpHpLfhOwnerMoveSubsegment @ 0x1403D9464
 * Callers:
 *     RtlpHpLfhBucketAddSubsegment @ 0x14035EA3C (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x14035EE00 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhBucketGetSubsegment @ 0x1403D81F0 (RtlpHpLfhBucketGetSubsegment.c)
 *     RtlpHpLfhOwnerRunMaintenance @ 0x1403D8700 (RtlpHpLfhOwnerRunMaintenance.c)
 *     RtlpHpLfhOwnerFreeListProcess @ 0x1403D8924 (RtlpHpLfhOwnerFreeListProcess.c)
 *     RtlpHpLfhPrivateSlotShutdown @ 0x140604374 (RtlpHpLfhPrivateSlotShutdown.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpHpLfhOwnerMoveSubsegment(__int64 a1, char *a2, __int64 *a3, int a4, char a5)
{
  __int64 v5; // rbx
  unsigned int v7; // r9d
  signed __int64 v8; // rax
  char v9; // r14
  __int64 **v10; // r10
  _BYTE *v11; // r11
  __int64 v12; // r12
  _BYTE *v13; // rdi
  char v14; // r14
  unsigned __int64 v15; // rdx
  bool v16; // zf
  __int64 *v17; // rcx
  __int64 **v18; // rax
  __int64 *v19; // rax
  __int64 **v21; // rax
  signed __int64 v22; // [rsp+0h] [rbp-60h]
  signed __int64 v23; // [rsp+8h] [rbp-58h]
  char *v24; // [rsp+10h] [rbp-50h]
  _QWORD v25[5]; // [rsp+18h] [rbp-48h]
  __int128 v26; // [rsp+40h] [rbp-20h]

  v5 = a4;
  v24 = a2 + 24;
  v25[0] = a2 + 1;
  v7 = 0;
  v25[2] = 0LL;
  v25[1] = a2 + 40;
  v25[3] = a2 + 40;
  v8 = a3[2];
  v9 = *a2;
  v25[4] = 0LL;
  v26 = 0LL;
  HIDWORD(v23) = HIDWORD(v8);
  v22 = v8;
  v10 = (__int64 **)v25[2 * v5 - 1];
  v11 = (_BYTE *)v25[2 * v5];
  v12 = v25[2 * BYTE6(v8) - 1];
  v13 = (_BYTE *)v25[2 * BYTE6(v8)];
  v14 = v9 & 1;
  if ( v14 )
  {
    v13 = 0LL;
    v11 = 0LL;
  }
  if ( !(_DWORD)v5 )
  {
    if ( !v14 && *v11 >= 8u )
      return v7;
    goto LABEL_6;
  }
  if ( (_DWORD)v5 == 1 )
  {
    LODWORD(v23) = 0;
    v8 = v23;
    goto LABEL_6;
  }
  if ( (_DWORD)v5 != 3 )
  {
LABEL_6:
    LOWORD(v15) = WORD2(v22);
    goto LABEL_7;
  }
  LOWORD(v15) = 0;
  WORD2(v22) = 0;
LABEL_7:
  if ( BYTE6(v23) == 3 )
  {
    v15 = (unsigned __int64)&a2[-a1] >> 6;
    WORD2(v22) = v15;
  }
  BYTE6(v22) = v5;
  if ( (_DWORD)v5 == 1 )
  {
    v23 = _InterlockedCompareExchange64(a3 + 2, v22, v8);
    v16 = (_DWORD)v23 == 0;
    goto LABEL_11;
  }
  if ( (a5 & 1) != 0 )
  {
    if ( BYTE6(v8) == 2 )
      return v7;
    v16 = HIDWORD(v8) == _InterlockedCompareExchange((volatile signed __int32 *)a3 + 5, SHIDWORD(v22), SHIDWORD(v8));
LABEL_11:
    if ( !v16 )
      return v7;
    goto LABEL_12;
  }
  if ( *((_WORD *)a3 + 16) == *((_WORD *)a3 + 17) )
    a3[2] = v22;
  else
    WORD2(v23) = _InterlockedExchange((volatile __int32 *)a3 + 5, SHIDWORD(v22));
LABEL_12:
  if ( WORD2(v23) != (_WORD)v15 )
  {
    if ( (_WORD)v15 )
    {
      if ( (*a2 & 1) == 0 )
        *((_WORD *)a3 + 23) = *((_WORD *)a2 + 2);
    }
    else
    {
      *((_WORD *)a3 + 23) = 0;
    }
  }
  if ( v12 )
  {
    v17 = (__int64 *)*a3;
    if ( *(__int64 **)(*a3 + 8) != a3 || (v18 = (__int64 **)a3[1], *v18 != a3) )
LABEL_16:
      __fastfail(3u);
    *v18 = v17;
    v17[1] = (__int64)v18;
    if ( v13 )
      --*v13;
  }
  if ( v10 )
  {
    if ( *((_WORD *)a3 + 16) == *((_WORD *)a3 + 17) )
    {
      v21 = (__int64 **)v10[1];
      if ( *v21 != (__int64 *)v10 )
        goto LABEL_16;
      *a3 = (__int64)v10;
      a3[1] = (__int64)v21;
      *v21 = a3;
      v10[1] = a3;
    }
    else
    {
      v19 = *v10;
      if ( (__int64 **)(*v10)[1] != v10 )
        goto LABEL_16;
      *a3 = (__int64)v19;
      a3[1] = (__int64)v10;
      v19[1] = (__int64)a3;
      *v10 = a3;
    }
    if ( v11 )
      ++*v11;
  }
  return 1;
}
