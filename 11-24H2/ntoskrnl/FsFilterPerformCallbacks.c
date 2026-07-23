/*
 * XREFs of FsFilterPerformCallbacks @ 0x14025D040
 * Callers:
 *     FsRtlReleaseFileForModWrite @ 0x14025A8C4 (FsRtlReleaseFileForModWrite.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x14025B37C (FsRtlAcquireFileForModWriteEx.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x14098C5C0 (FsRtlAcquireFileExclusiveCommon.c)
 *     FsRtlReleaseFile @ 0x14098D3F0 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1409C1C10 (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1409C1EC0 (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlQueryOpen @ 0x1409C4FF4 (FsRtlQueryOpen.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall FsFilterPerformCallbacks(__int64 a1, char a2, char a3, _DWORD *a4)
{
  __int64 v4; // rbx
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r14
  __int64 v12; // rdx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  __int64 v17; // rax
  __int64 result; // rax
  unsigned __int16 v19; // ax
  _QWORD *v20; // rdi
  int v21; // eax
  _QWORD *v22; // rdx
  __int64 v23; // rax

  v4 = *(_QWORD *)(a1 + 8);
  *a4 = 2;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !v4 )
        return 0LL;
      v9 = 0LL;
      v10 = 0LL;
      v11 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 48LL);
      *(_QWORD *)(a1 + 8) = v4;
      v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 48LL) + 48LL);
      if ( v12 )
        break;
LABEL_23:
      v4 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 48LL);
      if ( !v11 )
        *a4 &= ~2u;
    }
    v13 = *(unsigned __int8 *)(a1 + 4);
    if ( v13 == 254 )
    {
      if ( *(_DWORD *)v12 >= 0x20u && *(_QWORD *)(v12 + 24) )
        v9 = *(_QWORD *)(v12 + 24);
      if ( *(_DWORD *)v12 < 0x28u )
        goto LABEL_21;
      v17 = *(_QWORD *)(v12 + 32);
      goto LABEL_19;
    }
    if ( v13 == 255 )
    {
      if ( *(_DWORD *)v12 >= 0x10u && *(_QWORD *)(v12 + 8) )
        v9 = *(_QWORD *)(v12 + 8);
      if ( *(_DWORD *)v12 < 0x18u )
        goto LABEL_21;
      v17 = *(_QWORD *)(v12 + 16);
      goto LABEL_19;
    }
    v14 = v13 - 249;
    if ( !v14 )
    {
      if ( *(_DWORD *)v12 >= 0x70u && *(_QWORD *)(v12 + 104) )
        v9 = *(_QWORD *)(v12 + 104);
      if ( *(_DWORD *)v12 < 0x78u )
        goto LABEL_21;
      v17 = *(_QWORD *)(v12 + 112);
      goto LABEL_19;
    }
    v15 = v14 - 1;
    if ( !v15 )
    {
      if ( *(_DWORD *)v12 >= 0x40u && *(_QWORD *)(v12 + 56) )
        v9 = *(_QWORD *)(v12 + 56);
      if ( *(_DWORD *)v12 < 0x48u )
        goto LABEL_21;
      v17 = *(_QWORD *)(v12 + 64);
      goto LABEL_19;
    }
    v16 = v15 - 1;
    if ( v16 )
    {
      v21 = v16 - 1;
      if ( v21 )
      {
        if ( v21 != 1 )
          goto LABEL_23;
        if ( *(_DWORD *)v12 >= 0x50u && *(_QWORD *)(v12 + 72) )
          v9 = *(_QWORD *)(v12 + 72);
        if ( *(_DWORD *)v12 < 0x58u )
          goto LABEL_21;
        v17 = *(_QWORD *)(v12 + 80);
      }
      else
      {
        if ( *(_DWORD *)v12 >= 0x60u && *(_QWORD *)(v12 + 88) )
          v9 = *(_QWORD *)(v12 + 88);
        if ( *(_DWORD *)v12 < 0x68u )
          goto LABEL_21;
        v17 = *(_QWORD *)(v12 + 96);
      }
LABEL_19:
      if ( v17 )
        v10 = v17;
      goto LABEL_21;
    }
    if ( *(_DWORD *)v12 >= 0x30u && *(_QWORD *)(v12 + 40) )
      v9 = *(_QWORD *)(v12 + 40);
    if ( *(_DWORD *)v12 >= 0x38u )
    {
      v17 = *(_QWORD *)(v12 + 48);
      goto LABEL_19;
    }
LABEL_21:
    if ( v9 )
    {
      if ( !v10 )
      {
        v20 = 0LL;
        v22 = 0LL;
        goto LABEL_56;
      }
    }
    else if ( !v10 )
    {
      goto LABEL_23;
    }
    v19 = *(_WORD *)(a1 + 74);
    if ( v19 >= *(_WORD *)(a1 + 72)
      || (v20 = (_QWORD *)(*(_QWORD *)(a1 + 80) + 32LL * *(unsigned __int16 *)(a1 + 74)),
          *(_WORD *)(a1 + 74) = v19 + 1,
          !v20) )
    {
      if ( !a2 )
        KeBugCheckEx(0x22u, 0LL, 0LL, 0LL, 0LL);
      return 3221225626LL;
    }
    *v20 = v4;
    v20[1] = *(_QWORD *)(a1 + 16);
    v20[2] = 0LL;
    v20[3] = v10;
    if ( !v9 )
      goto LABEL_58;
    v22 = v20 + 2;
LABEL_56:
    result = guard_dispatch_icall_no_overrides(a1, v22, v10, v9);
    if ( (int)result >= 0 )
    {
      if ( (_DWORD)result )
        goto LABEL_70;
      goto LABEL_58;
    }
    if ( a2 )
      break;
    if ( !v11 )
      goto LABEL_68;
LABEL_58:
    v23 = *(_QWORD *)(a1 + 8);
    if ( v4 == v23 )
    {
      if ( !v11 && v20 )
        --*(_WORD *)(a1 + 74);
      v4 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 48LL);
    }
    else
    {
      *(_DWORD *)(a1 + 64) |= 4u;
      v4 = v23;
    }
  }
  if ( v11 )
    goto LABEL_70;
LABEL_68:
  if ( !a3 )
    KeBugCheckEx(0x22u, (int)result, 0LL, 0x3B8uLL, 0LL);
  *a4 |= 1u;
LABEL_70:
  if ( v20 )
    --*(_WORD *)(a1 + 74);
  return result;
}
