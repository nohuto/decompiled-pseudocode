/*
 * XREFs of HalpEnumerateEnvironmentVariablesWithFilter @ 0x140443F60
 * Callers:
 *     HalEnumerateEnvironmentVariablesEx @ 0x1405414A0 (HalEnumerateEnvironmentVariablesEx.c)
 * Callees:
 *     KeSetSystemGroupAffinityThread @ 0x140339650 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14033A250 (KeRevertToUserGroupAffinityThread.c)
 *     HalpEfiStartRuntimeCode @ 0x1404443A4 (HalpEfiStartRuntimeCode.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     ExpIsBootEntry @ 0x1409658D0 (ExpIsBootEntry.c)
 */

__int64 __fastcall HalpEnumerateEnvironmentVariablesWithFilter(
        int a1,
        __int64 (__fastcall *a2)(_QWORD, _QWORD, _QWORD),
        unsigned __int64 a3,
        _DWORD *a4)
{
  unsigned int v4; // esi
  int v5; // r13d
  unsigned __int64 v6; // rbx
  _DWORD *v7; // rdi
  int v8; // r15d
  bool v9; // r14
  unsigned int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // r9
  unsigned __int64 v14; // rax
  unsigned int v15; // r13d
  bool v16; // cl
  unsigned int v17; // r12d
  __int64 v18; // r9
  __int64 v19; // r10
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned int v22; // ecx
  __int64 v23; // rax
  unsigned int v25; // esi
  char v26; // [rsp+30h] [rbp-D0h]
  __int64 v27; // [rsp+38h] [rbp-C8h] BYREF
  size_t Size; // [rsp+40h] [rbp-C0h] BYREF
  int v29; // [rsp+48h] [rbp-B8h]
  int v30; // [rsp+4Ch] [rbp-B4h]
  unsigned int v31; // [rsp+50h] [rbp-B0h]
  struct _GROUP_AFFINITY Affinity; // [rsp+58h] [rbp-A8h] BYREF
  __int64 (__fastcall *v33)(_QWORD, _QWORD, _QWORD); // [rsp+68h] [rbp-98h]
  unsigned __int64 v34; // [rsp+70h] [rbp-90h]
  _DWORD *v35; // [rsp+78h] [rbp-88h]
  __int128 v36; // [rsp+80h] [rbp-80h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+90h] [rbp-70h] BYREF
  _WORD Src[256]; // [rsp+A0h] [rbp-60h] BYREF

  v33 = a2;
  v35 = a4;
  v34 = a3;
  v30 = a1;
  Affinity = 0LL;
  v27 = 0LL;
  v36 = 0LL;
  PreviousAffinity = 0LL;
  if ( !HalFirmwareTypeEfi
    || !HalEfiRuntimeServicesTable
    || !HalEfiRuntimeServicesTable[4]
    || !HalEfiRuntimeServicesTable[3] )
  {
    return 3221225474LL;
  }
  if ( (unsigned int)(a1 - 1) > 1 || (a3 & 0xFFFFFFFFFFFFFFFCuLL) != a3 )
    return 3221225485LL;
  v4 = *a4;
  Src[0] = 0;
  v5 = 20;
  v6 = a3;
  if ( a1 != 1 )
    v5 = 32;
  v7 = 0LL;
  v29 = v5;
  v8 = 0;
  v9 = v4 != 0;
  if ( KeGetCurrentIrql() >= 2u )
  {
    v26 = 0;
  }
  else
  {
    v26 = 1;
    v10 = *((_DWORD *)KiGlobalState + KeGetPcr()->Prcb.Number);
    Affinity.Reserved[1] = 0;
    Affinity.Reserved[2] = 0;
    *(_DWORD *)&Affinity.Group = (unsigned __int16)(v10 >> 6);
    Affinity.Mask = 1LL << (v10 & 0x3F);
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  }
  while ( 1 )
  {
    Size = 512LL;
    _InterlockedIncrement(&HalpEfiCalls);
    HalpEfiStartRuntimeCode(16LL);
    v11 = ((__int64 (__fastcall *)(size_t *, _WORD *, __int128 *))HalEfiRuntimeServicesTable[4])(&Size, Src, &v36);
    _InterlockedAnd((volatile signed __int32 *)&KeGetPcr()->HalReserved[8], 0xFFFFFFEF);
    _InterlockedDecrement(&HalpEfiCalls);
    if ( v11 )
      break;
    if ( v33 )
    {
      if ( !(v33 == ExpIsBootEntry
           ? ExpIsBootEntry(&v36, Src, 0LL)
           : (unsigned __int8)guard_dispatch_icall_no_overrides(&v36, Src, 0LL, v12)) )
        continue;
    }
    v14 = (v6 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v14 != v6 )
    {
      v22 = v14 - v6;
      v6 = (v6 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v4 < v22 )
      {
        v9 = 0;
        v4 = 0;
        v8 = -1073741789;
      }
      else
      {
        v4 -= v22;
      }
    }
    v15 = Size + v5;
    if ( v30 != 1 )
      v15 = (v15 + 3) & 0xFFFFFFFC;
    v16 = 0;
    if ( v4 < v15 )
      v8 = -1073741789;
    v17 = 0;
    if ( v4 >= v15 )
    {
      v17 = v4 - v15;
      v16 = v9;
    }
    v31 = v17;
    v9 = v16;
    if ( v30 == 1 )
    {
      if ( v16 )
      {
        *(_OWORD *)(v6 + 4) = v36;
        memmove((void *)(v6 + 20), Src, Size);
        if ( v7 )
          *v7 = v6 - (_DWORD)v7;
        v7 = (_DWORD *)v6;
      }
      v23 = v15;
      v4 = v17;
      v5 = v29;
      v6 += v23;
    }
    else
    {
      if ( v16 )
      {
        *(_OWORD *)(v6 + 16) = v36;
        memmove((void *)(v6 + 32), Src, Size);
        v27 = v17;
        *(_DWORD *)(v6 + 4) = ((v6 + Size + 35) & 0xFFFFFFFC) - v6;
      }
      else
      {
        v27 = 0LL;
      }
      HalpEfiStartRuntimeCode(8LL);
      v20 = ((__int64 (__fastcall *)(_WORD *, __int128 *, __int64, __int64 *, __int64))HalEfiRuntimeServicesTable[3])(
              Src,
              &v36,
              v19,
              &v27,
              v18);
      _InterlockedAnd((volatile signed __int32 *)&KeGetPcr()->HalReserved[8], 0xFFFFFFF7);
      if ( v20 )
      {
        if ( v20 != 0x8000000000000005uLL )
        {
          v25 = -1073741823;
          goto LABEL_41;
        }
        v4 = 0;
        v8 = -1073741789;
        v9 = 0;
      }
      else
      {
        v4 = v31;
        if ( v9 )
        {
          *(_DWORD *)(v6 + 8) = v27;
          v4 -= v27;
          if ( v7 )
            *v7 = v6 - (_DWORD)v7;
          v7 = (_DWORD *)v6;
        }
        else
        {
          Size = (size_t)v7;
        }
      }
      v21 = v27 + v15;
      v5 = v29;
      v6 += v21;
    }
  }
  if ( v11 != 0x800000000000000EuLL )
    v8 = -1073741823;
  v25 = v8;
LABEL_41:
  if ( v26 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  if ( v7 )
    *v7 = 0;
  *v35 = v6 - v34;
  return v25;
}
