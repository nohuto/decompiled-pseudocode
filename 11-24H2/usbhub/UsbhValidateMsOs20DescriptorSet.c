/*
 * XREFs of UsbhValidateMsOs20DescriptorSet @ 0x14005B4BC
 * Callers:
 *     UsbhSetupDevice @ 0x1400280C8 (UsbhSetupDevice.c)
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     UsbhGetNextMsOs20Descriptor @ 0x140042640 (UsbhGetNextMsOs20Descriptor.c)
 *     UsbhValidateMsOs20CommonDescriptor @ 0x140042B10 (UsbhValidateMsOs20CommonDescriptor.c)
 *     UsbhValidateMsOs20DescriptorSetHeader @ 0x14005B670 (UsbhValidateMsOs20DescriptorSetHeader.c)
 *     _guard_dispatch_icall @ 0x140060F80 (_guard_dispatch_icall.c)
 */

char __fastcall UsbhValidateMsOs20DescriptorSet(__int64 a1, __int64 a2, unsigned int *a3)
{
  _DWORD *v5; // rax
  _DWORD *v6; // r14
  char v7; // bp
  __int64 v8; // r9
  unsigned __int16 *v9; // rdx
  char *v11; // r15
  unsigned __int16 *v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r10
  unsigned int v15; // ecx
  unsigned int v16; // esi
  unsigned __int16 *v17; // [rsp+60h] [rbp+18h] BYREF

  v5 = PdoExt(a2);
  v6 = v5;
  v7 = 1;
  v8 = *((unsigned __int16 *)v5 + 1414);
  v9 = (unsigned __int16 *)*((_QWORD *)v5 + 355);
  if ( (_WORD)v8 == *((_WORD *)a3 + 2) )
  {
    if ( (unsigned int)v8 >= 0xA )
    {
      v11 = (char *)v9 + v8;
      v17 = (unsigned __int16 *)*((_QWORD *)v5 + 355);
      if ( UsbhValidateMsOs20CommonDescriptor((unsigned __int64)v9 + v8, v9) )
      {
        if ( *v12 == 10 )
        {
          if ( (_WORD)v14 == v12[4] )
          {
            v15 = *((_DWORD *)v12 + 1);
            if ( v15 <= *a3 )
            {
              while ( 1 )
              {
                v16 = v12[1];
                if ( v16 < 9 )
                {
                  if ( !((unsigned __int8 (__fastcall *)(__int64, _DWORD *, unsigned __int16 *, char *))*(&MsOs20DispatchTable + 2 * v12[1]))(
                          a1,
                          v6 + 706,
                          v12,
                          v11) )
                    return 0;
                  if ( v16 != 1 && v16 != 2 && (v6[706] & 0x18) != 0 )
                    break;
                }
                if ( !UsbhGetNextMsOs20Descriptor(v11, &v17, v13) )
                {
                  Log(a1, 256, 1447907126, 0LL, 0LL);
                  v7 = 0;
                }
                v12 = v17;
                if ( !v17 )
                  return v7;
              }
              Log(a1, 256, 1447907125, 0LL, 0LL);
            }
            else
            {
              Log(a1, 256, 1447907124, v15, *a3);
            }
          }
          else
          {
            Log(a1, 256, 1447907123, v14, v12[4]);
          }
        }
        else
        {
          Log(a1, 256, 1447907122, *v12, 0LL);
        }
      }
      else
      {
        Log(a1, 256, 1447907127, 0LL, 0LL);
      }
    }
    else
    {
      Log(a1, 256, 1447907121, v8, 0LL);
    }
  }
  else
  {
    Log(a1, 256, 1447907120, v8, *((unsigned __int16 *)a3 + 2));
  }
  return 0;
}
