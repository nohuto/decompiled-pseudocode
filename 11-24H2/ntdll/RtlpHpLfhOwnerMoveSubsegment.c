/*
 * XREFs of RtlpHpLfhOwnerMoveSubsegment @ 0x180064030
 * Callers:
 *     RtlpHpLfhPrivateSlotShutdown @ 0x180060ADC (RtlpHpLfhPrivateSlotShutdown.c)
 *     RtlpHpLfhBucketGetSubsegment @ 0x180061120 (RtlpHpLfhBucketGetSubsegment.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x180061270 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhOwnerRunMaintenance @ 0x180063450 (RtlpHpLfhOwnerRunMaintenance.c)
 *     RtlpHpLfhOwnerFreeListProcess @ 0x180063E90 (RtlpHpLfhOwnerFreeListProcess.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x1800642C0 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhOwnerCompact @ 0x180066280 (RtlpHpLfhOwnerCompact.c)
 * Callees:
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpHpLfhOwnerMoveSubsegment(__int64 a1, char *a2, __int64 *a3, int a4, char a5)
{
  __int64 v5; // rbx
  unsigned int v7; // r9d
  signed __int64 v8; // rax
  char v9; // bp
  __int64 v10; // rsi
  _BYTE *v11; // r11
  __int64 **v12; // rdi
  _BYTE *v13; // r10
  char v14; // bp
  unsigned __int64 v15; // rdx
  __int64 *v16; // rcx
  __int64 **v17; // rax
  __int64 *v19; // rax
  __int64 **v20; // rax
  signed __int64 v21; // [rsp+0h] [rbp-98h]
  signed __int64 v22; // [rsp+8h] [rbp-90h]
  char *v23; // [rsp+10h] [rbp-88h]
  _QWORD v24[5]; // [rsp+18h] [rbp-80h]
  __int128 v25; // [rsp+40h] [rbp-58h]

  v5 = a4;
  v23 = a2 + 24;
  v7 = 0;
  v24[2] = 0LL;
  v24[0] = a2 + 1;
  v24[4] = 0LL;
  v24[1] = a2 + 40;
  v24[3] = a2 + 40;
  v8 = a3[2];
  v9 = *a2;
  v25 = 0LL;
  HIDWORD(v22) = HIDWORD(v8);
  v21 = v8;
  v10 = v24[2 * BYTE6(v8) - 1];
  v11 = (_BYTE *)v24[2 * BYTE6(v8)];
  v12 = (__int64 **)v24[2 * v5 - 1];
  v13 = (_BYTE *)v24[2 * v5];
  v14 = v9 & 1;
  if ( v14 )
  {
    v11 = 0LL;
    v13 = 0LL;
  }
  if ( (_DWORD)v5 )
  {
    if ( (_DWORD)v5 == 1 )
    {
      LODWORD(v22) = 0;
      v8 = v22;
    }
    else if ( (_DWORD)v5 == 3 )
    {
      LOWORD(v15) = 0;
      WORD2(v21) = 0;
      goto LABEL_7;
    }
  }
  else if ( !v14 && *v13 >= 8u )
  {
    return v7;
  }
  LOWORD(v15) = WORD2(v21);
LABEL_7:
  if ( BYTE6(v22) == 3 )
  {
    v15 = (unsigned __int64)&a2[-a1] >> 6;
    WORD2(v21) = v15;
  }
  BYTE6(v21) = v5;
  if ( (_DWORD)v5 == 1 )
  {
    v22 = _InterlockedCompareExchange64(a3 + 2, v21, v8);
    if ( (_DWORD)v22 )
      return v7;
  }
  else if ( (a5 & 1) != 0 )
  {
    if ( BYTE6(v8) == 2
      || HIDWORD(v8) != _InterlockedCompareExchange((volatile signed __int32 *)a3 + 5, SHIDWORD(v21), SHIDWORD(v8)) )
    {
      return v7;
    }
  }
  else if ( *((_WORD *)a3 + 16) == *((_WORD *)a3 + 17) )
  {
    a3[2] = v21;
  }
  else
  {
    WORD2(v22) = _InterlockedExchange((volatile __int32 *)a3 + 5, SHIDWORD(v21));
  }
  if ( WORD2(v22) != (_WORD)v15 )
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
  if ( v10 )
  {
    v16 = (__int64 *)*a3;
    if ( *(__int64 **)(*a3 + 8) != a3 || (v17 = (__int64 **)a3[1], *v17 != a3) )
LABEL_20:
      __fastfail(3u);
    *v17 = v16;
    v16[1] = (__int64)v17;
    if ( v11 )
      --*v11;
  }
  if ( v12 )
  {
    if ( *((_WORD *)a3 + 16) == *((_WORD *)a3 + 17) )
    {
      v20 = (__int64 **)v12[1];
      if ( *v20 != (__int64 *)v12 )
        goto LABEL_20;
      *a3 = (__int64)v12;
      a3[1] = (__int64)v20;
      *v20 = a3;
      v12[1] = a3;
    }
    else
    {
      v19 = *v12;
      if ( (__int64 **)(*v12)[1] != v12 )
        goto LABEL_20;
      *a3 = (__int64)v19;
      a3[1] = (__int64)v12;
      v19[1] = (__int64)a3;
      *v12 = a3;
    }
    if ( v13 )
      ++*v13;
  }
  return 1;
}
