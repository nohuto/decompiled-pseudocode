/*
 * XREFs of _CmGetInstallerClassRegPropWorker @ 0x14097F250
 * Callers:
 *     _CmGetInstallerClassRegProp @ 0x14097F09C (_CmGetInstallerClassRegProp.c)
 * Callees:
 *     _CmClassPropertyRead @ 0x14044F170 (_CmClassPropertyRead.c)
 *     _MapCmClassPropertyToRegValue @ 0x140462230 (_MapCmClassPropertyToRegValue.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     _PnpRegQueryValueIndirect @ 0x1408C3F80 (_PnpRegQueryValueIndirect.c)
 *     _CmOpenCommonClassRegKey @ 0x1408C5CDC (_CmOpenCommonClassRegKey.c)
 *     _PnpOpenPropertiesKey @ 0x14097E830 (_PnpOpenPropertiesKey.c)
 */

__int64 __fastcall CmGetInstallerClassRegPropWorker(
        _QWORD *a1,
        __int64 a2,
        HANDLE a3,
        int a4,
        _DWORD *a5,
        void *a6,
        int *a7,
        __int16 a8)
{
  int v8; // ebx
  int v12; // r12d
  void *v13; // r15
  WCHAR *v14; // rdx
  __int64 v15; // rcx
  const wchar_t *v16; // r8
  __int64 (__fastcall *v17)(__int64, void *, const WCHAR *, int *, void *, ULONG *, bool *); // rax
  int ValueIndirect; // eax
  int v19; // edx
  HANDLE v21; // rdx
  __int64 v22; // [rsp+28h] [rbp-38h]
  __int64 v23; // [rsp+40h] [rbp-20h] BYREF
  HANDLE v24; // [rsp+48h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-10h] BYREF

  v8 = 0;
  Handle = 0LL;
  v24 = 0LL;
  v23 = 0LL;
  if ( a8 )
    return (unsigned int)-1073741811;
  if ( !a7 || !a5 )
  {
    v8 = -1073741811;
    goto LABEL_26;
  }
  v12 = *a7;
  if ( !*a7 )
  {
    v13 = 0LL;
    goto LABEL_6;
  }
  v13 = a6;
  if ( !a6 )
    return (unsigned int)-1073741811;
LABEL_6:
  *a7 = 0;
  *a5 = 0;
  if ( (unsigned int)(a4 - 1) > 0x24 || !CmClassPropertyRead(a4) )
    return (unsigned int)-1073741264;
  if ( !a3 )
  {
    v8 = CmOpenCommonClassRegKey(a1, v14, 32, 0, 33554433, 0, (__int64)&v24, 0LL);
    if ( v8 < 0 )
      goto LABEL_26;
  }
  v15 = (unsigned int)(a4 - 8);
  if ( a4 == 8 || (v15 = (unsigned int)(a4 - 13), a4 == 13) || (v15 = (unsigned int)(a4 - 18), (unsigned int)v15 < 2) )
  {
    if ( !a3 )
      a3 = v24;
  }
  else
  {
    v21 = v24;
    if ( a3 )
      v21 = a3;
    v8 = PnpOpenPropertiesKey((__int64)a1, (__int64)v21, 0LL, 1u, 0, v22, &Handle);
    if ( v8 < 0 )
    {
LABEL_37:
      v8 = -1073741275;
      goto LABEL_26;
    }
    a3 = Handle;
  }
  v16 = MapCmClassPropertyToRegValue(v15, a4);
  if ( !v16 )
  {
    v8 = -1073741264;
    goto LABEL_26;
  }
  v17 = (__int64 (__fastcall *)(__int64, void *, const WCHAR *, int *, void *, ULONG *, bool *))a1[65];
  LODWORD(v23) = v12;
  if ( !v17 || v17 == PnpRegQueryValueIndirect )
    ValueIndirect = PnpRegQueryValueIndirect((__int64)a1, a3, v16, (int *)&v23 + 1, v13, (ULONG *)&v23, 0LL);
  else
    ValueIndirect = guard_dispatch_icall_no_overrides(a1, a3);
  if ( ValueIndirect == -1073741772 || ValueIndirect == -1073741444 )
    goto LABEL_37;
  if ( (int)(ValueIndirect + 0x80000000) < 0 || ValueIndirect == -1073741789 )
  {
    v19 = HIDWORD(v23);
    if ( ((unsigned int)v23 >= 2 || HIDWORD(v23) != 1)
      && (HIDWORD(v23) != 7 || (unsigned int)v23 >= 2)
      && (HIDWORD(v23) != 4 || (_DWORD)v23 == 4) )
    {
      if ( (unsigned int)v23 > 0x40 && a4 == 8 )
      {
        v8 = -1073741595;
      }
      else
      {
        *a7 = v23;
        *a5 = v19;
        if ( ValueIndirect || !v12 )
          v8 = -1073741789;
      }
      goto LABEL_26;
    }
    goto LABEL_37;
  }
  v8 = ValueIndirect;
LABEL_26:
  if ( Handle )
    ZwClose(Handle);
  if ( v24 )
    ZwClose(v24);
  return (unsigned int)v8;
}
