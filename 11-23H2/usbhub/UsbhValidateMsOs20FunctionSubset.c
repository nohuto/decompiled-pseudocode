/*
 * XREFs of UsbhValidateMsOs20FunctionSubset @ 0x1C0052C20
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C000F210 (Log.c)
 *     _guard_dispatch_icall_nop @ 0x1C0023500 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0023880 (memset.c)
 *     UsbhGetNextMsOs20Descriptor @ 0x1C00336F0 (UsbhGetNextMsOs20Descriptor.c)
 */

char __fastcall UsbhValidateMsOs20FunctionSubset(__int64 a1, _DWORD *a2, unsigned __int16 *a3, unsigned __int64 a4)
{
  __int64 v8; // rax
  __int64 v9; // r9
  int v10; // r8d
  unsigned __int64 v11; // rbp
  unsigned __int16 *v12; // r10
  char v13; // si
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int8 (__fastcall *v16)(__int64, _BYTE *, unsigned __int16 *, unsigned __int64); // r11
  _BYTE v18[64]; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int16 *v19; // [rsp+A0h] [rbp+18h] BYREF

  memset(v18, 0, sizeof(v18));
  v8 = *a3;
  if ( (_DWORD)v8 != 8 )
  {
    v9 = *a3;
    v10 = 1447449392;
LABEL_18:
    Log(a1, 256, v10, v9, 0LL);
    return 0;
  }
  v9 = a3[3];
  if ( (unsigned int)v9 < 0xC )
  {
    v10 = 1447449393;
    goto LABEL_18;
  }
  v11 = (unsigned __int64)a3 + v9;
  if ( (unsigned __int64)a3 + v9 > a4 )
  {
    v10 = 1447449394;
    goto LABEL_18;
  }
  v12 = (unsigned __int16 *)((char *)a3 + v8);
  v13 = 1;
  v19 = (unsigned __int16 *)((char *)a3 + v8);
  do
  {
    v14 = v12[1];
    if ( (unsigned int)v14 < 9 )
    {
      v15 = 2 * v14;
      v16 = (unsigned __int8 (__fastcall *)(__int64, _BYTE *, unsigned __int16 *, unsigned __int64))*(&MsOs20DispatchTable + v15);
      if ( !*((_BYTE *)&MsOs20DispatchTable + 8 * v15 + 9) )
      {
        Log(a1, 256, 1447449395, v12[1], 0LL);
        v13 = 0;
      }
      v13 = v16(a1, v18, v12, v11) != 0 ? v13 : 0;
    }
    if ( !UsbhGetNextMsOs20Descriptor(v11, &v19) )
    {
      v9 = 0LL;
      v10 = 1447449396;
      goto LABEL_18;
    }
    v12 = v19;
  }
  while ( v19 );
  if ( v13 == 1 )
    *a2 |= 0x10u;
  return v13;
}
