/*
 * XREFs of HalpEnumerateEnvironmentVariablesWithFilter @ 0x1404429E0
 * Callers:
 *     HalEnumerateEnvironmentVariablesEx @ 0x14053EC70 (HalEnumerateEnvironmentVariablesEx.c)
 * Callees:
 *     KeSetSystemGroupAffinityThread @ 0x1402783E0 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x140278FE0 (KeRevertToUserGroupAffinityThread.c)
 *     HalpEfiStartRuntimeCode @ 0x140442E24 (HalpEfiStartRuntimeCode.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExpIsBootEntry @ 0x140821000 (ExpIsBootEntry.c)
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
  unsigned __int64 v13; // rax
  unsigned int v14; // r13d
  bool v15; // cl
  unsigned int v16; // r12d
  __int64 v17; // r9
  __int64 v18; // r10
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned int v21; // ecx
  __int64 v22; // rax
  unsigned int v24; // esi
  char v25; // [rsp+30h] [rbp-D0h]
  __int64 v26; // [rsp+38h] [rbp-C8h] BYREF
  size_t Size; // [rsp+40h] [rbp-C0h] BYREF
  int v28; // [rsp+48h] [rbp-B8h]
  int v29; // [rsp+4Ch] [rbp-B4h]
  unsigned int v30; // [rsp+50h] [rbp-B0h]
  _GROUP_AFFINITY Affinity; // [rsp+58h] [rbp-A8h] BYREF
  __int64 (__fastcall *v32)(_QWORD, _QWORD, _QWORD); // [rsp+68h] [rbp-98h]
  unsigned __int64 v33; // [rsp+70h] [rbp-90h]
  _DWORD *v34; // [rsp+78h] [rbp-88h]
  __int128 v35; // [rsp+80h] [rbp-80h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+90h] [rbp-70h] BYREF
  _WORD Src[256]; // [rsp+A0h] [rbp-60h] BYREF

  v32 = a2;
  v34 = a4;
  v33 = a3;
  v29 = a1;
  Affinity = 0LL;
  v26 = 0LL;
  v35 = 0LL;
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
  v28 = v5;
  v8 = 0;
  v9 = v4 != 0;
  if ( KeGetCurrentIrql() >= 2u )
  {
    v25 = 0;
  }
  else
  {
    v25 = 1;
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
    v11 = ((__int64 (__fastcall *)(size_t *, _WORD *, __int128 *))HalEfiRuntimeServicesTable[4])(&Size, Src, &v35);
    _InterlockedAnd((volatile signed __int32 *)&KeGetPcr()->HalReserved[8], 0xFFFFFFEF);
    _InterlockedDecrement(&HalpEfiCalls);
    if ( v11 )
      break;
    if ( v32 )
    {
      if ( !(v32 == ExpIsBootEntry
           ? ExpIsBootEntry(&v35, Src, 0LL)
           : (unsigned __int8)guard_dispatch_icall_no_overrides(&v35, Src)) )
        continue;
    }
    v13 = (v6 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v13 != v6 )
    {
      v21 = v13 - v6;
      v6 = (v6 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v4 < v21 )
      {
        v9 = 0;
        v4 = 0;
        v8 = -1073741789;
      }
      else
      {
        v4 -= v21;
      }
    }
    v14 = Size + v5;
    if ( v29 != 1 )
      v14 = (v14 + 3) & 0xFFFFFFFC;
    v15 = 0;
    if ( v4 < v14 )
      v8 = -1073741789;
    v16 = 0;
    if ( v4 >= v14 )
    {
      v16 = v4 - v14;
      v15 = v9;
    }
    v30 = v16;
    v9 = v15;
    if ( v29 == 1 )
    {
      if ( v15 )
      {
        *(_OWORD *)(v6 + 4) = v35;
        memmove((void *)(v6 + 20), Src, Size);
        if ( v7 )
          *v7 = v6 - (_DWORD)v7;
        v7 = (_DWORD *)v6;
      }
      v22 = v14;
      v4 = v16;
      v5 = v28;
      v6 += v22;
    }
    else
    {
      if ( v15 )
      {
        *(_OWORD *)(v6 + 16) = v35;
        memmove((void *)(v6 + 32), Src, Size);
        v26 = v16;
        *(_DWORD *)(v6 + 4) = ((v6 + Size + 35) & 0xFFFFFFFC) - v6;
      }
      else
      {
        v26 = 0LL;
      }
      HalpEfiStartRuntimeCode(8LL);
      v19 = ((__int64 (__fastcall *)(_WORD *, __int128 *, __int64, __int64 *, __int64))HalEfiRuntimeServicesTable[3])(
              Src,
              &v35,
              v18,
              &v26,
              v17);
      _InterlockedAnd((volatile signed __int32 *)&KeGetPcr()->HalReserved[8], 0xFFFFFFF7);
      if ( v19 )
      {
        if ( v19 != 0x8000000000000005uLL )
        {
          v24 = -1073741823;
          goto LABEL_41;
        }
        v4 = 0;
        v8 = -1073741789;
        v9 = 0;
      }
      else
      {
        v4 = v30;
        if ( v9 )
        {
          *(_DWORD *)(v6 + 8) = v26;
          v4 -= v26;
          if ( v7 )
            *v7 = v6 - (_DWORD)v7;
          v7 = (_DWORD *)v6;
        }
        else
        {
          Size = (size_t)v7;
        }
      }
      v20 = v26 + v14;
      v5 = v28;
      v6 += v20;
    }
  }
  if ( v11 != 0x800000000000000EuLL )
    v8 = -1073741823;
  v24 = v8;
LABEL_41:
  if ( v25 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  if ( v7 )
    *v7 = 0;
  *v34 = v6 - v33;
  return v24;
}
