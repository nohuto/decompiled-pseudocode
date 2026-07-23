/*
 * XREFs of KiDeduplicateTriageDumpDataArrays @ 0x1405B0630
 * Callers:
 *     KiInvokeBugCheckAddTriageDumpDataCallbacks @ 0x1405B0E70 (KiInvokeBugCheckAddTriageDumpDataCallbacks.c)
 * Callees:
 *     DbgPrintEx @ 0x140275B40 (DbgPrintEx.c)
 *     RtlULongSub @ 0x140491DA8 (RtlULongSub.c)
 *     KiCheckRangeOverlap @ 0x1405B0218 (KiCheckRangeOverlap.c)
 */

void __fastcall KiDeduplicateTriageDumpDataArrays(_DWORD *a1, __int64 a2)
{
  unsigned int v2; // r14d
  __int64 v3; // r8
  const void **v5; // rdi
  unsigned int j; // r15d
  char v7; // al
  const void *v8; // r12
  char v9; // r13
  const void *v10; // rdx
  const void *v11; // rbx
  int *v12; // r8
  __int64 v13; // rdx
  _DWORD *v14; // r9
  int v15; // eax
  int v16; // ecx
  unsigned int v17; // ecx
  ULONG v18; // ecx
  ULONG v19; // edx
  __int128 i; // [rsp+40h] [rbp-20h] BYREF
  const void *v21; // [rsp+50h] [rbp-10h] BYREF
  ULONG ulSubtrahend[2]; // [rsp+58h] [rbp-8h]
  ULONG pulResult; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v24; // [rsp+A8h] [rbp+48h]

  v24 = a2;
  pulResult = 0;
  v2 = 0;
  v3 = a2;
  for ( i = 0LL; v2 < a1[4]; ++v2 )
  {
    v5 = (const void **)&a1[4 * v2 + 12];
    v21 = *v5;
    *(_QWORD *)ulSubtrahend = v5[1];
    if ( *(_QWORD *)ulSubtrahend )
    {
      for ( j = 0; ; ++j )
      {
        if ( j >= *(_DWORD *)(v3 + 16) )
          goto LABEL_19;
        v7 = KiCheckRangeOverlap((unsigned __int64 *)&v21, (unsigned __int64 *)(v3 + 16 * (j + 3LL)), &i);
        v8 = *(const void **)ulSubtrahend;
        v9 = v7;
        v10 = v5[1];
        if ( !*(_QWORD *)ulSubtrahend )
          break;
        if ( *(const void **)ulSubtrahend != v10 )
        {
          if ( v7 && a1[4] == a1[5] )
          {
            DbgPrintEx(5u, 3u, "NTDUMP: No room for split block: Address %p Size %d\n", (const void *)i, DWORD2(i));
LABEL_18:
            v3 = v24;
            goto LABEL_19;
          }
          v11 = v21;
          DbgPrintEx(
            5u,
            3u,
            "NTDUMP: Updating block: Address %p Size %d to Address %p Size %d\n",
            *v5,
            (_DWORD)v10,
            v21,
            ulSubtrahend[0]);
          RtlULongSub(*((_DWORD *)v5 + 2), (ULONG)v8, &pulResult);
          RtlULongSub(a1[6], pulResult, a1 + 6);
          *v5 = v11;
          v5[1] = v8;
          if ( v9 )
          {
            v13 = *((_QWORD *)&i + 1);
            v14 = &a1[4 * a1[4] + 12];
            *(_QWORD *)v14 = i;
            v15 = -1;
            *((_QWORD *)v14 + 1) = v13;
            v16 = *v12;
            ++a1[4];
            v17 = v13 + v16;
            if ( v17 >= (unsigned int)v13 )
              v15 = v17;
            *v12 = v15;
            DbgPrintEx(
              5u,
              3u,
              "NTDUMP: New split block added: Address %p Size %d\n",
              *(const void **)v14,
              *((_QWORD *)v14 + 1));
          }
        }
        v3 = v24;
      }
      DbgPrintEx(5u, 3u, "NTDUMP: Removing block: Address %p Size %d\n", *v5, (_DWORD)v10);
      v18 = a1[6];
      v19 = -1;
      if ( (unsigned __int64)v5[1] <= 0xFFFFFFFF )
        v19 = (unsigned int)v5[1];
      pulResult = v19;
      RtlULongSub(v18, v19, a1 + 6);
      *v5 = 0LL;
      v5[1] = 0LL;
      goto LABEL_18;
    }
LABEL_19:
    ;
  }
}
