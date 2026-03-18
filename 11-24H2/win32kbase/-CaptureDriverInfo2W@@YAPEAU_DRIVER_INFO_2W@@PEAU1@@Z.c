/*
 * XREFs of ?CaptureDriverInfo2W@@YAPEAU_DRIVER_INFO_2W@@PEAU1@@Z @ 0x1400AB790
 * Callers:
 *     NtGdiOpenDCW @ 0x1400675B0 (NtGdiOpenDCW.c)
 * Callees:
 *     FreeThreadBufferWithTag @ 0x14001BCC0 (FreeThreadBufferWithTag.c)
 *     AllocThreadBufferWithTag @ 0x1400ABB70 (AllocThreadBufferWithTag.c)
 *     memset @ 0x14023F500 (memset.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

struct _DRIVER_INFO_2W *__fastcall CaptureDriverInfo2W(struct _DRIVER_INFO_2W *a1)
{
  unsigned __int64 v2; // r15
  _QWORD *v3; // rbx
  unsigned __int64 v4; // r14
  unsigned __int64 v5; // r13
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r10
  size_t v10; // r11
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rdi
  _QWORD *v15; // rax
  _QWORD *v16; // rcx
  void *v17; // r9
  void *v18; // r9
  ULONG64 v19; // rcx
  __int64 Size; // [rsp+28h] [rbp-50h]
  unsigned __int64 v21; // [rsp+30h] [rbp-48h]
  __int64 v22; // [rsp+80h] [rbp+8h]

  v2 = *((_QWORD *)a1 + 1);
  v3 = 0LL;
  if ( !v2 )
    return 0LL;
  v4 = *((_QWORD *)a1 + 3);
  if ( !v4 )
    return 0LL;
  v5 = *((_QWORD *)a1 + 4);
  if ( !v5 )
    return 0LL;
  if ( (v2 & 1) != 0 )
    goto LABEL_5;
  v16 = (_QWORD *)MmUserProbeAddress;
  if ( v2 + 2 > MmUserProbeAddress || v2 + 2 < v2 )
    v16 = (_QWORD *)MmUserProbeAddress;
  if ( (v4 & 1) != 0 )
    goto LABEL_5;
  if ( v4 + 2 > *v16 || v4 + 2 < v4 )
    v16 = (_QWORD *)MmUserProbeAddress;
  v6 = -1LL;
  v7 = -1LL;
  do
    ++v7;
  while ( *(_WORD *)(v2 + 2 * v7) );
  v8 = -1LL;
  do
    ++v8;
  while ( *(_WORD *)(v4 + 2 * v8) );
  v21 = v8;
  if ( v7 + 1 < v7 )
    return 0LL;
  if ( v8 + 1 < v8 )
    return 0LL;
  if ( !is_mul_ok(v7 + 1, 2uLL) )
    return 0LL;
  if ( !is_mul_ok(v8 + 1, 2uLL) )
    return 0LL;
  v10 = 2 * v7;
  v22 = 2 * v7;
  v11 = 2 * v7 + 50;
  if ( v11 < 0x30 )
    return 0LL;
  v12 = 2 * v7 + 50;
  Size = 2 * v8;
  if ( v11 + 2 * v8 + 2 < v12 )
    return 0LL;
  v13 = v12 + 2 * v8 + 2;
  if ( (v5 & 1) != 0 )
LABEL_5:
    ExRaiseDatatypeMisalignment();
  if ( v5 + 2 > *v16 || v5 + 2 < v5 )
    v16 = (_QWORD *)MmUserProbeAddress;
  do
    ++v6;
  while ( *(_WORD *)(v5 + 2 * v6) );
  if ( v6 + 1 < v6 )
    return 0LL;
  if ( !is_mul_ok(v6 + 1, 2uLL) )
    return 0LL;
  v14 = v13 + 2 * (v6 + 1);
  if ( v14 < v13 || v14 - 48 > 0x270FFD0 )
    return 0LL;
  if ( (_DWORD)v14 )
  {
    v15 = (_QWORD *)AllocThreadBufferWithTag((unsigned int)v14, 1886221383LL, 0LL);
    v3 = v15;
    if ( v15 )
      memset(v15, 0, (unsigned int)v14);
    v10 = v22;
    v16 = (_QWORD *)MmUserProbeAddress;
  }
  if ( v3 )
  {
    *(_DWORD *)v3 = *(_DWORD *)a1;
    v3[5] = 0LL;
    v3[2] = 0LL;
    v3[1] = v3 + 6;
    v3[3] = (char *)v3 + v10 + 50;
    if ( v10 + v2 < v2 || v10 + v2 > *v16 )
      *(_BYTE *)*v16 = 0;
    memmove(v3 + 6, (const void *)v2, v10);
    v17 = (void *)v3[3];
    if ( Size + v4 < v4 || Size + v4 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v17, (const void *)v4, Size);
    v18 = (void *)(v3[3] + 2 * (v21 + 1));
    v3[4] = v18;
    v19 = 2 * v6 + v5;
    if ( v19 < v5 || v19 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v18, (const void *)v5, 2 * v6);
  }
  return (struct _DRIVER_INFO_2W *)v3;
}
