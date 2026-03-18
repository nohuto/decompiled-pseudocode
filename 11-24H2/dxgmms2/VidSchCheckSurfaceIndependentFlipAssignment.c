/*
 * XREFs of VidSchCheckSurfaceIndependentFlipAssignment @ 0x140035E10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__fastcall VidSchCheckSurfaceIndependentFlipAssignment(
        __int64 a1,
        _DWORD *a2,
        struct _LUID *a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        _DWORD *a7,
        _DWORD *a8,
        _QWORD *a9,
        _DWORD *a10,
        _DWORD *a11,
        _DWORD *a12,
        _OWORD *a13,
        _OWORD *a14)
{
  char v15; // si
  _DWORD *result; // rax
  __int64 v21; // r15
  __int128 v22; // xmm8
  __int128 v23; // xmm9
  __int128 v24; // xmm7
  __int128 v25; // xmm6
  __int64 v26; // rbp
  int v27; // r9d
  __int64 v28; // r8
  __int64 i; // rcx
  char v30; // di
  __int64 v31; // r14
  char v32; // bl
  __int64 v33; // rdx
  __int64 v34; // rcx
  unsigned int j; // eax
  __int64 v36; // rdx
  int v37; // r8d
  int v38; // ecx
  bool v39; // zf
  struct _LUID DestinationLuid; // [rsp+28h] [rbp-A0h] BYREF
  __int64 v41; // [rsp+30h] [rbp-98h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-90h] BYREF
  char v44; // [rsp+108h] [rbp+40h]
  char v45; // [rsp+118h] [rbp+50h]
  unsigned __int8 v46; // [rsp+120h] [rbp+58h]

  v15 = 0;
  *a6 = 0;
  *a7 = 0;
  *a8 = 0;
  *a9 = 0LL;
  result = a12;
  *a10 = 0;
  *a11 = 0;
  *a12 = 0;
  if ( *(_BYTE *)(a1 + 47) )
  {
    DestinationLuid = 0LL;
    RtlCopyLuid(&DestinationLuid, a3);
    v41 = 0LL;
    v44 = *(_BYTE *)(a1 + 156);
    v45 = 0;
    LODWORD(v21) = 0;
    v46 = 0;
    v22 = 0LL;
    v23 = 0LL;
    v24 = 0LL;
    v25 = 0LL;
    v26 = 0LL;
    memset(&LockHandle, 0, sizeof(LockHandle));
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1984), &LockHandle);
    v27 = 0;
    v28 = 0LL;
    for ( i = 0LL; ; i += 160LL )
    {
      if ( v28 > *(int *)(a1 + 3744) )
      {
        v30 = 0;
        v31 = 0LL;
        goto LABEL_5;
      }
      v33 = *(_QWORD *)(a1 + 3560);
      if ( *(_DWORD *)(i + v33) == DestinationLuid.LowPart && *(_DWORD *)(i + v33 + 4) == DestinationLuid.HighPart )
        break;
      ++v27;
      ++v28;
    }
    v15 = 1;
    v34 = v33 + 160LL * v27;
    for ( j = *(_DWORD *)(v34 + 16); (j & 1) == 0; j >>= 1 )
      v26 = (unsigned int)(v26 + 1);
    v36 = *(_QWORD *)(a1 + 8 * v26 + 3432);
    v37 = *(_DWORD *)(v34 + 112);
    v21 = *(unsigned int *)(v34 + 20);
    v30 = *(_BYTE *)(v36 + 3200);
    v24 = *(_OWORD *)(v36 + 3204);
    v25 = *(_OWORD *)(v36 + 3220);
    if ( (unsigned int)(v37 - 1) <= 1 )
    {
      if ( a4 != *(_QWORD *)(v34 + 8) && a4 != -1 )
      {
        *a10 = 1;
        *a8 = v21;
        goto LABEL_32;
      }
      if ( *(_BYTE *)(v34 + 96) )
      {
        v31 = *(_QWORD *)(v34 + 88);
        v32 = v44;
        v45 = 1;
        v46 = *(_BYTE *)(v34 + 108);
        if ( v46 || v44 )
        {
          v22 = *(_OWORD *)(304 * v21 + v36 + 152);
          v23 = *(_OWORD *)(304 * v21 + v36 + 168);
          LODWORD(v41) = *(_DWORD *)(304 * v21 + v36 + 184);
        }
        goto LABEL_6;
      }
      v45 = 0;
LABEL_32:
      v31 = 0LL;
LABEL_5:
      v32 = v44;
      goto LABEL_6;
    }
    if ( v37 != 3 || a4 == -1 )
      goto LABEL_32;
    v39 = a4 == *(_QWORD *)(v34 + 8);
    v32 = v44;
    v31 = 0LL;
    if ( v39 )
      *a11 = 1;
LABEL_6:
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( v45 )
    {
      *a6 = 1;
      *a8 = v21;
      *a7 = v46;
      *a9 = v31;
      if ( v46 || v32 )
      {
        v38 = v41;
        *(_OWORD *)a5 = v22;
        *(_OWORD *)(a5 + 16) = v23;
        *(_DWORD *)(a5 + 32) = v38;
      }
    }
    if ( v15 )
      *a2 = v26;
    *a12 = v30 != 0;
    if ( a13 )
      *a13 = v24;
    result = a14;
    if ( a14 )
      *a14 = v25;
  }
  return result;
}
