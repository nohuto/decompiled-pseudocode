/*
 * XREFs of SmDecompressBuffer @ 0x140481BC0
 * Callers:
 *     PfSnGetPrefetchInstructions @ 0x140970C24 (PfSnGetPrefetchInstructions.c)
 * Callees:
 *     RtlDecompressBufferEx @ 0x14039DAE0 (RtlDecompressBufferEx.c)
 *     crc32 @ 0x140460AF8 (crc32.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     RtlCompressWorkSpaceSizeLZNT1 @ 0x140B69790 (RtlCompressWorkSpaceSizeLZNT1.c)
 */

__int64 __fastcall SmDecompressBuffer(__int64 a1, unsigned int a2, _QWORD *a3, _DWORD *a4, _DWORD *a5)
{
  int v5; // ebx
  __int64 v8; // r15
  __int64 v10; // rdx
  int v11; // ecx
  unsigned int v12; // esi
  const void *v13; // r14
  size_t v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  void *v18; // r13
  __int64 v19; // r12
  int v20; // eax
  _DWORD *v22; // rbx
  unsigned int v23; // eax
  unsigned int v24; // eax
  int v25; // [rsp+40h] [rbp-18h] BYREF
  _DWORD v26[5]; // [rsp+44h] [rbp-14h] BYREF
  int v27; // [rsp+A0h] [rbp+48h] BYREF
  unsigned int v28; // [rsp+A8h] [rbp+50h] BYREF
  _QWORD *v29; // [rsp+B0h] [rbp+58h]
  _DWORD *v30; // [rsp+B8h] [rbp+60h]

  v30 = a4;
  v29 = a3;
  v5 = 0;
  v27 = 0;
  v28 = 0;
  v8 = 0LL;
  v25 = 0;
  v10 = 8LL;
  if ( a2 < 8 )
    return (unsigned int)-1073741246;
  v11 = *(_DWORD *)a1;
  v12 = a2 - 8;
  if ( (v11 & 0xFFFFFF) != 0x4D414D )
    return (unsigned int)-1073741672;
  if ( v11 < 0 )
  {
    if ( v12 >= 4 )
    {
      v22 = (_DWORD *)(a1 + 8);
      v26[0] = 0;
      v13 = (const void *)(a1 + 12);
      v12 -= 4;
      v23 = crc32(0LL, a1, 8u);
      v24 = crc32(v23, (__int64)v26, 4u);
      if ( (unsigned int)crc32(v24, (__int64)v13, v12) == *v22 )
      {
        v5 = 0;
        goto LABEL_5;
      }
    }
    return (unsigned int)-1073741246;
  }
  v13 = (const void *)(a1 + 8);
LABEL_5:
  v14 = *(unsigned int *)(a1 + 4);
  if ( a5 && (unsigned int)v14 > *a5 )
    return (unsigned int)-1073739516;
  v18 = (void *)guard_dispatch_icall_no_overrides((unsigned int)v14, v10, a3, a4);
  if ( !v18 )
    return (unsigned int)-1073741670;
  v19 = *(_BYTE *)(a1 + 3) & 0x7F;
  if ( !(_BYTE)v19 )
  {
    if ( v12 == (_DWORD)v14 )
    {
      memmove(v18, v13, v14);
      v27 = v14;
      goto LABEL_24;
    }
LABEL_34:
    v5 = -1073741246;
    goto LABEL_16;
  }
  if ( (_DWORD)v19 == 1 )
  {
    v5 = -1073741811;
    goto LABEL_16;
  }
  if ( (unsigned __int16)v19 > 8u )
  {
    v5 = -1073741217;
    goto LABEL_16;
  }
  if ( (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))RtlWorkSpaceProcs[v19] == RtlCompressWorkSpaceSizeLZNT1 )
    v20 = RtlCompressWorkSpaceSizeLZNT1(0LL, &v25, &v28);
  else
    v20 = guard_dispatch_icall_no_overrides(0LL, &v25, &v28, v17);
  v5 = v20;
  if ( v20 < 0 )
    goto LABEL_16;
  if ( v28 )
  {
    v8 = guard_dispatch_icall_no_overrides(v28, v15, v16, v17);
    if ( !v8 )
    {
      v5 = -1073741670;
      goto LABEL_16;
    }
  }
  v5 = RtlDecompressBufferEx(v19, (__int64)v18, v14, (__int64)v13, v12, (__int64)&v27);
  if ( v5 < 0 )
  {
LABEL_16:
    guard_dispatch_icall_no_overrides(v18, v15, v16, v17);
    goto LABEL_17;
  }
  if ( (_DWORD)v14 != v27 )
    goto LABEL_34;
  v5 = 0;
LABEL_24:
  *v29 = v18;
  *v30 = v14;
LABEL_17:
  if ( v8 )
    guard_dispatch_icall_no_overrides(v8, v15, v16, v17);
  return (unsigned int)v5;
}
