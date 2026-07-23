/*
 * XREFs of HvpAdjustBitmap @ 0x140882E2C
 * Callers:
 *     HvpAdjustHiveFreeDisplay @ 0x140882DB0 (HvpAdjustHiveFreeDisplay.c)
 * Callees:
 *     RtlClearBits @ 0x1402EA360 (RtlClearBits.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     CmpAllocate @ 0x140882F70 (CmpAllocate.c)
 */

__int64 __fastcall HvpAdjustBitmap(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int *v3; // r14
  unsigned int v4; // ebx
  unsigned int v6; // esi
  unsigned int v7; // edi
  unsigned int v8; // edi
  __int64 v9; // rdx
  void *v10; // rax
  void *v11; // rbp
  const void *v12; // r15
  unsigned int v14; // eax

  v3 = (unsigned int *)(a3 + 8);
  v4 = a2 >> 12;
  v6 = 256;
  v7 = ((a2 >> 12) + 7) >> 3;
  if ( v7 )
    v8 = (v7 + 255) & 0xFFFFFF00;
  else
    v8 = 256;
  v9 = *v3;
  if ( (_DWORD)v9 )
  {
    v14 = (unsigned int)(v9 + 7) >> 3;
    if ( v14 )
      v6 = (v14 + 255) & 0xFFFFFF00;
  }
  else
  {
    v6 = 0;
  }
  if ( v8 <= *(_DWORD *)a3 )
  {
    *v3 = v4;
    if ( (unsigned int)v9 < v4 )
      RtlClearBits((PRTL_BITMAP)(a3 + 8), v9, v4 - v9);
    return 0LL;
  }
  LOBYTE(v9) = 1;
  if ( *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(a1 + 24) == CmpAllocate )
    v10 = (void *)CmpAllocate(v8, v9, 959663427LL);
  else
    v10 = (void *)guard_dispatch_icall_no_overrides(v8, v9);
  v11 = v10;
  if ( v10 )
  {
    *(_DWORD *)a3 = v8;
    v12 = (const void *)*((_QWORD *)v3 + 1);
    memset_0(v10, 0, v8);
    *v3 = v4;
    *((_QWORD *)v3 + 1) = v11;
    if ( v12 )
    {
      memmove(v11, v12, v6);
      guard_dispatch_icall_no_overrides(v12, v6);
    }
    return 0LL;
  }
  return 3221225626LL;
}
