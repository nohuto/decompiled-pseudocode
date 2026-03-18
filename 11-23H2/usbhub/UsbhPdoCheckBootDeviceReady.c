/*
 * XREFs of UsbhPdoCheckBootDeviceReady @ 0x1C0054940
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     UsbhSyncSendCommand @ 0x1C0016EE0 (UsbhSyncSendCommand.c)
 *     __security_check_cookie @ 0x1C0022A90 (__security_check_cookie.c)
 */

char __fastcall UsbhPdoCheckBootDeviceReady(__int64 a1)
{
  char v1; // di
  _DWORD *v2; // rsi
  __int64 v3; // rbx
  int v4; // ecx
  int v5; // edx
  bool v6; // zf
  int v8; // [rsp+20h] [rbp-40h]
  int v9; // [rsp+30h] [rbp-30h] BYREF
  __int16 v10; // [rsp+34h] [rbp-2Ch]
  __int16 v11; // [rsp+36h] [rbp-2Ah]
  int v12; // [rsp+38h] [rbp-28h] BYREF
  int v13; // [rsp+40h] [rbp-20h] BYREF
  _WORD v14[2]; // [rsp+44h] [rbp-1Ch] BYREF
  char v15; // [rsp+48h] [rbp-18h]
  char v16; // [rsp+49h] [rbp-17h]

  v1 = 0;
  v16 = 0;
  v2 = PdoExt(a1);
  v3 = *((_QWORD *)v2 + 148);
  FdoExt(v3);
  v14[0] = 4;
  v14[1] = *((_WORD *)v2 + 714);
  v9 = 163;
  v15 = 0;
  v10 = *((_WORD *)v2 + 714);
  v11 = 4;
  v13 = 0;
  if ( (int)UsbhSyncSendCommand(v3, (__int64)&v9, (__int64)&v13, v14, v8, &v12) < 0 )
    goto LABEL_9;
  v4 = v2[686];
  if ( v4 == -1 || (v5 = v2[687], v5 == -1) )
  {
    if ( (BYTE2(v13) & 1) == v4 )
    {
LABEL_9:
      v1 = 1;
      KeSetEvent((PRKEVENT)v2 + 115, 0, 0);
      return v1;
    }
    v6 = (v13 & 1) == v2[687];
  }
  else
  {
    if ( (BYTE2(v13) & 1) != v4 )
      return v1;
    v6 = (v13 & 1) == v5;
  }
  if ( v6 )
    goto LABEL_9;
  return v1;
}
