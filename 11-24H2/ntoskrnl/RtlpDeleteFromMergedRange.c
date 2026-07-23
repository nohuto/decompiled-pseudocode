/*
 * XREFs of RtlpDeleteFromMergedRange @ 0x14077D738
 * Callers:
 *     RtlDeleteRange @ 0x14077D1C0 (RtlDeleteRange.c)
 *     RtlDeleteOwnersRanges @ 0x140A65170 (RtlDeleteOwnersRanges.c)
 * Callees:
 *     RtlpAddRange @ 0x1406F9D60 (RtlpAddRange.c)
 *     RtlpAddToMergedRange @ 0x14077D60C (RtlpAddToMergedRange.c)
 *     RtlpFreeRangeListEntry @ 0x140A4A338 (RtlpFreeRangeListEntry.c)
 */

__int64 __fastcall RtlpDeleteFromMergedRange(char *Entry, _QWORD *a2)
{
  char *v2; // rax
  __int64 v4; // rcx
  int v5; // r14d
  char **v7; // rdx
  __int64 *v8; // rax
  __int64 v9; // rdi
  __int64 *v10; // rdx
  __int64 *v11; // rdi
  _QWORD *v12; // rax
  __int64 v13; // r8
  _QWORD *v14; // rcx
  unsigned __int64 *v15; // rdx
  unsigned __int64 *v16; // rax
  __int64 v17; // rdi
  __int64 v19; // rdx
  _QWORD *v20; // rcx
  unsigned __int64 **v21; // rcx
  unsigned __int64 *v22; // rdx
  unsigned __int64 *v23; // [rsp+20h] [rbp-10h] BYREF
  unsigned __int64 **v24; // [rsp+28h] [rbp-8h]

  v2 = Entry + 40;
  v4 = *((_QWORD *)Entry + 5);
  v5 = 0;
  if ( *(char **)(v4 + 8) != v2 )
    goto LABEL_19;
  v7 = (char **)*((_QWORD *)v2 + 1);
  if ( *v7 != v2 )
    goto LABEL_19;
  *v7 = (char *)v4;
  *(_QWORD *)(v4 + 8) = v7;
  v24 = &v23;
  v23 = (unsigned __int64 *)&v23;
  v8 = (__int64 *)a2[2];
  v9 = *v8;
  v10 = v8 - 5;
  while ( 1 )
  {
    v11 = (__int64 *)(v9 - 40);
    v12 = v10 + 5;
    if ( a2 + 2 == v10 + 5 )
    {
      if ( v23 != (unsigned __int64 *)&v23 )
      {
        v21 = (unsigned __int64 **)a2[6];
        v22 = (unsigned __int64 *)a2[5];
        *v21 = v23;
        v23[1] = (unsigned __int64)v21;
        v22[1] = (unsigned __int64)v24;
        *v24 = v22;
        goto LABEL_18;
      }
      v19 = a2[5];
      if ( *(_QWORD **)(v19 + 8) == a2 + 5 )
      {
        v20 = (_QWORD *)a2[6];
        if ( (_QWORD *)*v20 == a2 + 5 )
        {
          *v20 = v19;
          *(_QWORD *)(v19 + 8) = v20;
LABEL_18:
          RtlpFreeRangeListEntry(Entry);
          RtlpFreeRangeListEntry(a2);
          return (unsigned int)v5;
        }
      }
LABEL_19:
      __fastfail(3u);
    }
    v13 = *v12;
    if ( *(_QWORD **)(*v12 + 8LL) != v12 )
      goto LABEL_19;
    v14 = (_QWORD *)v10[6];
    if ( (_QWORD *)*v14 != v12 )
      goto LABEL_19;
    *v14 = v13;
    *(_QWORD *)(v13 + 8) = v14;
    *((_BYTE *)v10 + 33) &= ~2u;
    v5 = RtlpAddRange((unsigned __int64 *)&v23, v10, 1u);
    if ( v5 < 0 )
      break;
    v10 = v11;
    v9 = v11[5];
  }
  v15 = v23 - 5;
  v16 = v23;
  while ( 1 )
  {
    v17 = *v16 - 40;
    if ( &v23 == (unsigned __int64 **)v16 )
      break;
    RtlpAddToMergedRange((__int64)a2, v15, 1);
    v16 = (unsigned __int64 *)(v17 + 40);
    v15 = (unsigned __int64 *)v17;
  }
  return RtlpAddToMergedRange((__int64)a2, (unsigned __int64 *)Entry, 1);
}
