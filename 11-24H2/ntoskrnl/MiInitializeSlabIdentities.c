/*
 * XREFs of MiInitializeSlabIdentities @ 0x140689438
 * Callers:
 *     MiCreateSlabIdentity @ 0x140687B34 (MiCreateSlabIdentity.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x1402775A0 (ExAllocatePoolMm.c)
 *     MiInitializeSlabAllocator @ 0x1406890BC (MiInitializeSlabAllocator.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiInitializeSlabIdentities(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned int v3; // edi
  ULONG_PTR v4; // r9
  PVOID *PoolMm; // rax
  PVOID *v6; // rcx
  unsigned int v7; // edi
  volatile LONG *v8; // r14
  _QWORD *v9; // rdx
  __int64 v10; // rax
  PVOID v11; // rcx
  _QWORD *v12; // rax
  PVOID P; // [rsp+20h] [rbp-10h] BYREF
  PVOID *p_P; // [rsp+28h] [rbp-8h]

  v1 = 0;
  p_P = &P;
  v3 = 0;
  P = &P;
  while ( v3 < (unsigned __int16)KeNumberNodes )
  {
    v4 = v3;
    LODWORD(v4) = v3 | 0x80000000;
    PoolMm = (PVOID *)ExAllocatePoolMm(0x40uLL, 0x4D000uLL, 1850960205, v4);
    if ( !PoolMm )
    {
      v1 = -1073741670;
      goto LABEL_12;
    }
    v6 = p_P;
    if ( *p_P != &P )
LABEL_16:
      __fastfail(3u);
    PoolMm[1] = p_P;
    *PoolMm = &P;
    ++v3;
    *v6 = PoolMm;
    p_P = PoolMm;
  }
  v7 = 0;
  if ( !KeNumberNodes )
    goto LABEL_12;
  v8 = (volatile LONG *)(*(_QWORD *)(a1 + 16) + 17552LL);
  do
  {
    v9 = P;
    if ( *((PVOID **)P + 1) != &P )
      goto LABEL_16;
    v10 = *(_QWORD *)P;
    if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P )
      goto LABEL_16;
    P = *(PVOID *)P;
    *(_QWORD *)(v10 + 8) = &P;
    *(_QWORD *)(57216LL * v7 + *(_QWORD *)(a1 + 16) + 57008) = v9;
    v9[39259] = v9 + 39260;
    *((_DWORD *)v9 + 78516) = 65;
    v9[39263] = v9 + 39264;
    *((_DWORD *)v9 + 78524) = 65;
    MiInitializeSlabAllocator(v8, 8, v7++, a1);
    v8 += 14304;
  }
  while ( v7 < (unsigned __int16)KeNumberNodes );
LABEL_12:
  while ( 1 )
  {
    v11 = P;
    if ( P == &P )
      return v1;
    if ( *((PVOID **)P + 1) != &P )
      goto LABEL_16;
    v12 = *(_QWORD **)P;
    if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P )
      goto LABEL_16;
    P = *(PVOID *)P;
    v12[1] = &P;
    ExFreePoolWithTag(v11, 0);
  }
}
