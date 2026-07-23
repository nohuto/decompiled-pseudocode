/*
 * XREFs of PnpAssignResourcesToDevices @ 0x140978A68
 * Callers:
 *     PnpProcessAssignResources @ 0x140979798 (PnpProcessAssignResources.c)
 * Callees:
 *     _PnpGetObjectProperty @ 0x1408CB9C0 (_PnpGetObjectProperty.c)
 *     PnpAllocateResources @ 0x140978AE0 (PnpAllocateResources.c)
 */

__int64 __fastcall PnpAssignResourcesToDevices(unsigned int a1, _DWORD *a2, __int64 a3)
{
  _DWORD *v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rdx
  WCHAR *v10; // rdx
  _DWORD v11[4]; // [rsp+60h] [rbp-28h] BYREF
  wchar_t v12; // [rsp+90h] [rbp+8h] BYREF
  int v13; // [rsp+A8h] [rbp+20h] BYREF

  if ( a1 )
  {
    v6 = a2;
    v7 = a1;
    do
    {
      v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v6 + 312LL) + 40LL);
      if ( (*(_DWORD *)(v8 + 396) & 1) != 0 )
      {
        v10 = *(WCHAR **)(v8 + 48);
        v11[0] = 0;
        v13 = 0;
        LOBYTE(v12) = 0;
        if ( (int)PnpGetObjectProperty(
                    *(_QWORD **)&PiPnpRtlCtx,
                    v10,
                    1u,
                    0LL,
                    0LL,
                    (__int64)&DEVPKEY_Device_Reported,
                    &v13,
                    &v12,
                    1u,
                    (__int64)v11,
                    0) >= 0
          && v13 == 17
          && v11[0] == 1
          && (_BYTE)v12 == 0xFF )
        {
          v6[3] = 0;
        }
      }
      v6 += 16;
      --v7;
    }
    while ( v7 );
  }
  return PnpAllocateResources(a1, a2, 0LL, a3);
}
