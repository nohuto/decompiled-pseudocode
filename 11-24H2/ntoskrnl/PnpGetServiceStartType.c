/*
 * XREFs of PnpGetServiceStartType @ 0x140983428
 * Callers:
 *     PipCallDriverAddDeviceQueryRoutine @ 0x140982F18 (PipCallDriverAddDeviceQueryRoutine.c)
 * Callees:
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     _PnpCtxRegQueryValue @ 0x1408BA0C4 (_PnpCtxRegQueryValue.c)
 *     _PnpCtxRegOpenKey @ 0x1408C552C (_PnpCtxRegOpenKey.c)
 */

__int64 __fastcall PnpGetServiceStartType(__int64 a1, void *a2, _DWORD *a3)
{
  int v6; // ebx
  __int64 v8; // rdx
  int v9; // eax
  void *v10; // rdx
  int v11; // eax
  HANDLE Handle[2]; // [rsp+30h] [rbp-10h] BYREF
  int v13; // [rsp+70h] [rbp+30h] BYREF
  unsigned int v14; // [rsp+78h] [rbp+38h] BYREF

  v13 = 0;
  Handle[0] = 0LL;
  *a3 = 4;
  if ( (ExpManufacturingInformation & 1) != 0 )
  {
    v8 = qword_140E66300;
    if ( qword_140E66300 )
    {
      if ( qword_140E66300 == -1 )
        goto LABEL_2;
    }
    else
    {
      v9 = PnpCtxRegOpenKey(
             *(__int64 *)&PiPnpRtlCtx,
             2147483650LL,
             (__int64)L"System\\CurrentControlSet\\Control\\ManufacturingMode\\Current\\Services\\",
             0,
             0x20019u,
             (__int64)&qword_140E66300);
      if ( v9 == -1073741772 )
      {
        qword_140E66300 = -1LL;
        goto LABEL_2;
      }
      if ( v9 < 0 )
        goto LABEL_2;
      v8 = qword_140E66300;
    }
    if ( (int)PnpCtxRegOpenKey(*(__int64 *)&PiPnpRtlCtx, v8, a1, 0, 0x20019u, (__int64)Handle) >= 0 )
    {
      v14 = 4;
      v6 = PnpCtxRegQueryValue(a1, Handle[0], L"Start", &v13, a3, &v14);
      if ( v6 >= 0 && v13 == 4 )
        goto LABEL_5;
    }
    v10 = (void *)qword_140E662F8;
    if ( qword_140E662F8 )
    {
      if ( qword_140E662F8 == -1 )
        goto LABEL_2;
    }
    else
    {
      v11 = PnpCtxRegOpenKey(
              *(__int64 *)&PiPnpRtlCtx,
              qword_140E66300,
              (__int64)L"*Driver",
              0,
              0x20019u,
              (__int64)&qword_140E662F8);
      if ( v11 == -1073741772 )
      {
        qword_140E662F8 = -1LL;
        goto LABEL_2;
      }
      if ( v11 < 0 )
        goto LABEL_2;
      v10 = (void *)qword_140E662F8;
    }
    v14 = 4;
    v6 = PnpCtxRegQueryValue(a1, v10, L"Start", &v13, a3, &v14);
    if ( v6 >= 0 && v13 == 4 )
      goto LABEL_5;
  }
LABEL_2:
  v14 = 4;
  v6 = PnpCtxRegQueryValue(a1, a2, L"Start", &v13, a3, &v14);
  if ( v6 >= 0 && v13 != 4 )
  {
    v6 = -1073741772;
    *a3 = 4;
  }
LABEL_5:
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return (unsigned int)v6;
}
