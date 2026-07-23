/*
 * XREFs of PnpCheckDeviceIdsChanged @ 0x14088C928
 * Callers:
 *     PipProcessStartPhase3 @ 0x14097B0A4 (PipProcessStartPhase3.c)
 *     PiProcessNewDeviceNode @ 0x140A76864 (PiProcessNewDeviceNode.c)
 * Callees:
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     RtlCompareUnicodeStrings @ 0x14088C7D0 (RtlCompareUnicodeStrings.c)
 *     _CmGetDeviceRegProp @ 0x1408C35E0 (_CmGetDeviceRegProp.c)
 *     _CmOpenDeviceRegKey @ 0x1408C42B0 (_CmOpenDeviceRegKey.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpCheckDeviceIdsChanged(__int64 a1, __int64 a2, const WCHAR *a3, int a4, char a5, _BYTE *a6)
{
  _BYTE *v6; // r14
  _QWORD *v7; // rsi
  bool v9; // cf
  int v10; // r15d
  int v11; // r13d
  void *Pool2; // r12
  int DeviceRegProp; // ebx
  const WCHAR *i; // rsi
  __int64 v15; // rcx
  unsigned int v16; // ecx
  __int64 v17; // rax
  unsigned int v18; // eax
  __int64 v19; // r13
  __int64 v20; // r15
  bool v21; // zf
  int v23; // [rsp+40h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-8h] BYREF
  unsigned int v25; // [rsp+98h] [rbp+48h] BYREF
  int v26; // [rsp+A8h] [rbp+58h]

  v26 = a4;
  v6 = a6;
  v7 = (_QWORD *)(a1 + 48);
  v9 = a5 != 0;
  a5 = -a5;
  v10 = a2;
  v25 = 0;
  v11 = -v9;
  v23 = 0;
  Handle = 0LL;
  *a6 = 0;
  if ( !a2 )
  {
    DeviceRegProp = CmOpenDeviceRegKey(PiPnpRtlCtx, *v7, 16, 0, 983103, 0, (__int64)&Handle, 0LL);
    if ( DeviceRegProp < 0 )
      goto LABEL_26;
    v10 = (int)Handle;
  }
  v25 = 512;
  Pool2 = (void *)ExAllocatePool2(0x100uLL, 0x200uLL, 0x75737050u);
  if ( Pool2 )
  {
    DeviceRegProp = CmGetDeviceRegProp(PiPnpRtlCtx, *v7, v10, v11 + 3, (__int64)&v23, (__int64)Pool2, (__int64)&v25, 0);
    if ( DeviceRegProp != -1073741789 )
      goto LABEL_6;
    ExFreePoolWithTag(Pool2, 0);
    Pool2 = (void *)ExAllocatePool2(0x100uLL, v25, 0x75737050u);
    if ( Pool2 )
    {
      DeviceRegProp = CmGetDeviceRegProp(
                        PiPnpRtlCtx,
                        *v7,
                        v10,
                        v11 + 3,
                        (__int64)&v23,
                        (__int64)Pool2,
                        (__int64)&v25,
                        0);
LABEL_6:
      if ( DeviceRegProp < 0 )
      {
        if ( DeviceRegProp != -1073741275 )
          goto LABEL_25;
        DeviceRegProp = 0;
        v21 = a3 == 0LL;
      }
      else
      {
        if ( v23 != 7 )
        {
          DeviceRegProp = -1073741823;
          goto LABEL_25;
        }
        if ( !a3 || v26 != v25 )
          goto LABEL_29;
        for ( i = (const WCHAR *)Pool2; *a3 && *i; i += v20 )
        {
          v15 = -1LL;
          do
            ++v15;
          while ( a3[v15] );
          v16 = v15 + 1;
          v17 = -1LL;
          do
            ++v17;
          while ( i[v17] );
          v18 = v17 + 1;
          if ( v16 != v18 || (v19 = v16, v20 = v18, RtlCompareUnicodeStrings(a3, v16, i, v18, 1u)) )
          {
            *v6 = 1;
            break;
          }
          a3 += v19;
        }
        if ( *v6 )
          goto LABEL_25;
        if ( *a3 )
          goto LABEL_29;
        v21 = *i == 0;
      }
      if ( v21 )
      {
LABEL_25:
        ExFreePoolWithTag(Pool2, 0);
        goto LABEL_26;
      }
LABEL_29:
      *v6 = 1;
      goto LABEL_25;
    }
  }
  DeviceRegProp = -1073741670;
LABEL_26:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)DeviceRegProp;
}
