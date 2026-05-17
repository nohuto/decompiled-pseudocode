/*
 * XREFs of RtlpHpTagQueryHeapsRemote @ 0x1800E0D80
 * Callers:
 *     RtlpHpTagQueryTags @ 0x1800E0980 (RtlpHpTagQueryTags.c)
 * Callees:
 *     RtlpHeapPerformCrossProcessQuery @ 0x180098190 (RtlpHeapPerformCrossProcessQuery.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     ZwMapViewOfSection @ 0x180163720 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x180163760 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x180163B60 (NtCreateSection.c)
 *     memmove @ 0x180168980 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpHpTagQueryHeapsRemote(_OWORD *a1, size_t a2, size_t *a3)
{
  int v6; // edi
  _OWORD *v7; // rax
  __int64 v8; // rcx
  size_t v9; // r8
  bool v10; // cc
  void *v11; // rbx
  size_t v13; // [rsp+50h] [rbp-29h] BYREF
  unsigned __int64 v14; // [rsp+58h] [rbp-21h]
  _QWORD v15[3]; // [rsp+60h] [rbp-19h] BYREF
  int v16; // [rsp+78h] [rbp-1h]
  size_t Size; // [rsp+80h] [rbp+7h]
  void *Src; // [rsp+E8h] [rbp+6Fh] BYREF
  HANDLE Handle; // [rsp+F8h] [rbp+7Fh] BYREF

  v13 = 0LL;
  memset_thunk_772440563353939046(v15, 0, 0x60uLL);
  Handle = 0LL;
  Src = 0LL;
  v14 = (a2 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  v6 = NtCreateSection(&Handle, 983071LL, 0LL);
  if ( v6 < 0 )
    goto LABEL_7;
  v13 = a2;
  v6 = ZwMapViewOfSection(Handle, -1LL, &Src, 0LL, a2, 0LL, &v13, 2, 0, 4);
  if ( v6 < 0 )
    goto LABEL_7;
  v7 = Src;
  *(_OWORD *)Src = *a1;
  v7[1] = a1[1];
  v7[2] = a1[2];
  v8 = *((_QWORD *)a1 + 1);
  v15[0] = Handle;
  v15[1] = v14;
  v16 = 0x40000000;
  v6 = RtlpHeapPerformCrossProcessQuery(v8, (__int64)v15);
  if ( v6 < 0 )
  {
LABEL_7:
    v11 = Src;
  }
  else
  {
    v9 = Size;
    v10 = Size <= a2;
    *a3 = Size;
    v11 = Src;
    if ( v10 )
    {
      memmove(a1, Src, v9);
      v6 = 0;
    }
    else
    {
      v6 = -1073741789;
    }
  }
  if ( v11 )
    NtUnmapViewOfSection(-1LL);
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v6;
}
