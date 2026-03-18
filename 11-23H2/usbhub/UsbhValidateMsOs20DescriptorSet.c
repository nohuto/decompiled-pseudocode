/*
 * XREFs of UsbhValidateMsOs20DescriptorSet @ 0x1C0052A24
 * Callers:
 *     UsbhSetupDevice @ 0x1C0039728 (UsbhSetupDevice.c)
 * Callees:
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     _guard_dispatch_icall_nop @ 0x1C0023500 (_guard_dispatch_icall_nop.c)
 *     UsbhGetNextMsOs20Descriptor @ 0x1C00336F0 (UsbhGetNextMsOs20Descriptor.c)
 */

char __fastcall UsbhValidateMsOs20DescriptorSet(__int64 a1, __int64 a2, unsigned int *a3)
{
  _DWORD *v5; // rax
  __int64 v6; // r9
  _DWORD *v7; // rdi
  char v8; // si
  __int64 v9; // rcx
  unsigned __int16 *v10; // rdx
  int v11; // r8d
  __int64 v13; // rax
  unsigned __int64 v14; // rbp
  unsigned int v15; // r14d
  __int64 v16; // [rsp+20h] [rbp-28h]
  unsigned __int16 *v17; // [rsp+60h] [rbp+18h] BYREF

  v5 = PdoExt(a2);
  v6 = *((unsigned __int16 *)a3 + 2);
  v7 = v5;
  v8 = 1;
  v9 = *((unsigned __int16 *)v5 + 1414);
  v10 = (unsigned __int16 *)*((_QWORD *)v5 + 355);
  if ( (_WORD)v9 != (_WORD)v6 )
  {
    v11 = 1447907120;
    v16 = *((unsigned __int16 *)a3 + 2);
LABEL_3:
    Log(a1, 256, v11, v9, v16);
    return 0;
  }
  if ( (unsigned int)v9 < 0xA )
  {
    v16 = 0LL;
    v11 = 1447907121;
    goto LABEL_3;
  }
  if ( *v10 != 10 )
  {
    Log(a1, 256, 1447907122, *v10, 0LL);
    return 0;
  }
  v13 = v10[4];
  if ( (_WORD)v6 != (_WORD)v13 )
  {
    Log(a1, 256, 1447907123, v6, v10[4]);
    return 0;
  }
  v9 = *((unsigned int *)v10 + 1);
  if ( (unsigned int)v9 > *a3 )
  {
    v16 = *a3;
    v11 = 1447907124;
    goto LABEL_3;
  }
  v17 = v10;
  v14 = (unsigned __int64)v10 + v13;
  do
  {
    v15 = v10[1];
    if ( v15 < 9 )
    {
      v8 = ((unsigned __int8 (__fastcall *)(__int64, _DWORD *, unsigned __int16 *, unsigned __int64))*(&MsOs20DispatchTable + 2 * v10[1]))(
             a1,
             v7 + 706,
             v10,
             v14) != 0
         ? v8
         : 0;
      if ( v15 != 1 && v15 != 2 && (v7[706] & 0x18) != 0 )
      {
        Log(a1, 256, 1447907125, 0LL, 0LL);
        v8 = 0;
      }
    }
    if ( !UsbhGetNextMsOs20Descriptor(v14, &v17) )
    {
      Log(a1, 256, 1447907126, 0LL, 0LL);
      v8 = 0;
    }
    v10 = v17;
  }
  while ( v17 );
  return v8;
}
