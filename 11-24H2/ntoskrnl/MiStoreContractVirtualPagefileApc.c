/*
 * XREFs of MiStoreContractVirtualPagefileApc @ 0x140476BB0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     RtlSetBits @ 0x14027C2D0 (RtlSetBits.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiRefPageFileSpaceBitmaps @ 0x1403C5EE8 (MiRefPageFileSpaceBitmaps.c)
 *     MiDerefPageFileSpaceBitmaps @ 0x140469F88 (MiDerefPageFileSpaceBitmaps.c)
 *     MiStoreCheckContractPageFile @ 0x1404771DC (MiStoreCheckContractPageFile.c)
 *     MiAttemptChangePagingFileMaximum @ 0x14067AF10 (MiAttemptChangePagingFileMaximum.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

LONG __fastcall MiStoreContractVirtualPagefileApc(__int64 a1, struct _KEVENT *a2)
{
  int v4; // eax
  unsigned int *v5; // rcx
  unsigned int v6; // esi
  unsigned int v7; // ebp
  unsigned int v8; // edi
  unsigned int v9; // ebx
  __int64 v10; // r8
  unsigned int v11; // r10d
  unsigned int v12; // r11d
  unsigned __int64 v13; // r9
  _DWORD *v14; // rdx
  int v15; // r15d
  _DWORD *v16; // r12
  bool j; // zf
  unsigned int v18; // eax
  bool v19; // al
  unsigned int *v20; // rdx
  int v21; // r9d
  unsigned int *v22; // r15
  bool i; // zf
  _DWORD *v24; // rax
  unsigned int v26; // eax
  bool v27; // zf
  ULONG v28; // esi
  KIRQL v29; // al
  unsigned __int8 v30; // bl
  __int128 v31; // [rsp+20h] [rbp-58h] BYREF
  __int128 v32; // [rsp+30h] [rbp-48h]
  __int64 v33; // [rsp+40h] [rbp-38h]

  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v4 = MiStoreCheckContractPageFile(a1);
  if ( !v4 )
    return KeSetEvent(a2, 0, 0);
  v6 = v5[1];
  v7 = *v5;
  v8 = (v6 - v4 + 0x3FFFF) & 0xFFFC0000;
  v9 = (v6 - 0x40000) & 0xFFFC0000;
  if ( v9 < v8 )
    return KeSetEvent(a2, 0, 0);
  MiRefPageFileSpaceBitmaps((__int64)v5, (__int64)&v31);
  v11 = 0;
  while ( 1 )
  {
    if ( v9 >= v7 )
      goto LABEL_25;
    v10 = v7 - v9;
    if ( v9 >= DWORD2(v31) )
      goto LABEL_26;
    if ( (unsigned int)v10 > 1 )
      break;
    if ( (_DWORD)v10 != 1 )
      goto LABEL_26;
    v12 = v7 - 1;
    v13 = 4 * ((unsigned __int64)v9 >> 5);
    v19 = !_bittest((const signed __int32 *)(v13 + v32), v9 & 0x1F);
LABEL_15:
    if ( !v19 || v9 >= DWORD2(v32) )
      goto LABEL_26;
    if ( (unsigned int)v10 <= 1 )
    {
      if ( !_bittest((const signed __int32 *)(v13 + v33), v9 & 0x1F) )
        goto LABEL_26;
    }
    else
    {
      if ( DWORD2(v32) - v9 < (unsigned int)v10 )
        goto LABEL_26;
      v20 = (unsigned int *)(v13 + v33);
      v21 = *(_DWORD *)(v13 + v33);
      v22 = (unsigned int *)(v33 + 4 * ((unsigned __int64)v12 >> 5));
      if ( v20 != v22 )
      {
        for ( i = ((-1 << v9) & v21) == -1 << v9; i; i = (_DWORD)v10 == -1 )
        {
          v10 = *++v20;
          if ( v20 == v22 )
          {
            v26 = 0xFFFFFFFF >> ~(_BYTE)v12;
            v10 = v26 & (unsigned int)v10;
            v27 = (_DWORD)v10 == v26;
            goto LABEL_31;
          }
        }
        goto LABEL_26;
      }
      v27 = ((0xFFFFFFFF >> (32 - (v7 - v9)) << v9) & v21) == 0xFFFFFFFF >> (32 - (v7 - v9)) << v9;
LABEL_31:
      if ( !v27 )
        goto LABEL_26;
    }
LABEL_25:
    v11 = v6 - v9;
    v9 -= 0x40000;
    if ( v9 < v8 )
      goto LABEL_26;
  }
  if ( DWORD2(v31) - v9 < (unsigned int)v10 )
    goto LABEL_26;
  v12 = v7 - 1;
  v13 = 4 * ((unsigned __int64)v9 >> 5);
  v14 = (_DWORD *)(v13 + v32);
  v15 = *(_DWORD *)(v13 + v32);
  v16 = (_DWORD *)(v32 + 4 * ((unsigned __int64)(v7 - 1) >> 5));
  if ( (_DWORD *)(v13 + v32) == v16 )
  {
    v18 = 0xFFFFFFFF >> (32 - (v7 - v9)) << v9;
LABEL_14:
    v19 = (v15 & v18) == 0;
    goto LABEL_15;
  }
  for ( j = (v15 & (-1 << v9)) == 0; j; j = v15 == 0 )
  {
    v15 = *++v14;
    if ( v14 == v16 )
    {
      v18 = 0xFFFFFFFF >> ~(_BYTE)v12;
      goto LABEL_14;
    }
  }
LABEL_26:
  if ( v11 )
  {
    v28 = v6 - v11;
    if ( v28 < v7 )
    {
      v29 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 200));
      *(_DWORD *)a1 = v28;
      v30 = v29;
      *(_DWORD *)(a1 + 12) = v28 + *(_DWORD *)(a1 + 12) - v7;
      *(_DWORD *)(a1 + 20) = v28 + *(_DWORD *)(a1 + 20) - v7;
      RtlSetBits((PRTL_BITMAP)(*(_QWORD *)(a1 + 80) + 8LL), v28, v7 - v28);
      MiReleaseSpinLockExclusive((_DWORD *)(a1 + 200), v30);
    }
    MiAttemptChangePagingFileMaximum(a1, v28, v10);
  }
  v24 = MiDerefPageFileSpaceBitmaps(a1, (_DWORD **)&v31, 0);
  if ( v24 )
    ExFreePoolWithTag(v24, 0);
  return KeSetEvent(a2, 0, 0);
}
