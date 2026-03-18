/*
 * XREFs of HvpAdjustBitmap @ 0x14087EF7C
 * Callers:
 *     HvpAdjustHiveFreeDisplay @ 0x14087EF00 (HvpAdjustHiveFreeDisplay.c)
 * Callees:
 *     RtlClearBits @ 0x14037CD40 (RtlClearBits.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     CmpAllocate @ 0x14087F0C0 (CmpAllocate.c)
 */

__int64 __fastcall HvpAdjustBitmap(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned int *v4; // r14
  unsigned int v5; // ebx
  unsigned int v7; // esi
  unsigned int v8; // edi
  unsigned int v9; // edi
  __int64 v10; // rdx
  void *v11; // rax
  void *v12; // rbp
  const void *v13; // r15
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v17; // eax

  v4 = (unsigned int *)(a3 + 8);
  v5 = a2 >> 12;
  v7 = 256;
  v8 = ((a2 >> 12) + 7) >> 3;
  if ( v8 )
    v9 = (v8 + 255) & 0xFFFFFF00;
  else
    v9 = 256;
  v10 = *v4;
  if ( (_DWORD)v10 )
  {
    v17 = (unsigned int)(v10 + 7) >> 3;
    if ( v17 )
      v7 = (v17 + 255) & 0xFFFFFF00;
  }
  else
  {
    v7 = 0;
  }
  if ( v9 <= *(_DWORD *)a3 )
  {
    *v4 = v5;
    if ( (unsigned int)v10 < v5 )
      RtlClearBits((PRTL_BITMAP)(a3 + 8), v10, v5 - v10);
    return 0LL;
  }
  LOBYTE(v10) = 1;
  if ( *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(a1 + 24) == CmpAllocate )
    v11 = (void *)CmpAllocate(v9, v10, 959663427LL);
  else
    v11 = (void *)guard_dispatch_icall_no_overrides(v9, v10, 959663427LL, a4);
  v12 = v11;
  if ( v11 )
  {
    *(_DWORD *)a3 = v9;
    v13 = (const void *)*((_QWORD *)v4 + 1);
    memset_0(v11, 0, v9);
    *v4 = v5;
    *((_QWORD *)v4 + 1) = v12;
    if ( v13 )
    {
      memmove(v12, v13, v7);
      guard_dispatch_icall_no_overrides(v13, v7, v14, v15);
    }
    return 0LL;
  }
  return 3221225626LL;
}
