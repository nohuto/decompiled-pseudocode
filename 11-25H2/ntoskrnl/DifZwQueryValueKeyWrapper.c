/*
 * XREFs of DifZwQueryValueKeyWrapper @ 0x14063AA80
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x14048A3D0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9840 (DifGetReturnAddressForWrappers.c)
 *     ZwQueryValueKey @ 0x14069B420 (ZwQueryValueKey.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall DifZwQueryValueKeyWrapper(
        void *a1,
        UNICODE_STRING *a2,
        KEY_VALUE_INFORMATION_CLASS a3,
        void *a4,
        ULONG Length,
        ULONG *ResultLength)
{
  __int64 *APIThunkContextById; // rax
  __int64 *v10; // r14
  int v11; // ecx
  BOOLEAN v12; // si
  __int64 *i; // rbx
  BOOLEAN v14; // di
  __int64 *j; // rbx
  _QWORD v17[2]; // [rsp+30h] [rbp-40h] BYREF
  ULONG v18; // [rsp+40h] [rbp-30h]
  void *v19; // [rsp+48h] [rbp-28h]
  KEY_VALUE_INFORMATION_CLASS v20; // [rsp+50h] [rbp-20h]
  UNICODE_STRING *v21; // [rsp+58h] [rbp-18h]
  void *v22; // [rsp+60h] [rbp-10h]
  unsigned int ValueKey; // [rsp+68h] [rbp-8h]
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+28h]

  memset_0(v17, 0, 0x40uLL);
  APIThunkContextById = DifGetAPIThunkContextById(34);
  v10 = APIThunkContextById;
  if ( APIThunkContextById )
  {
    v11 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v11 & 0x18) != 0 )
    {
      v17[0] = retaddr;
    }
    else if ( (v11 & 4) != 0 )
    {
      v17[0] = DifGetReturnAddressForWrappers();
    }
    v12 = 0;
    v22 = a1;
    v18 = Length;
    v17[1] = ResultLength;
    v21 = a2;
    v20 = a3;
    v19 = a4;
    if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
      || (v12 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int64 *)v10[4]; i != v10 + 4; i = (__int64 *)*i )
      {
        if ( i != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(v17);
      }
      if ( v12 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  ValueKey = ZwQueryValueKey(a1, a2, a3, a4, Length, ResultLength);
  if ( v10 )
  {
    if ( (v14 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v14 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int64 *)v10[6]; j != v10 + 6; j = (__int64 *)*j )
      {
        if ( j != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(v17);
      }
      if ( v14 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return ValueKey;
}
