/*
 * XREFs of UsbhInternalValidatePlatformCapabilityDescriptor @ 0x14005ACB8
 * Callers:
 *     UsbhInternalValidateDeviceCapabilityDescriptor @ 0x14005AA94 (UsbhInternalValidateDeviceCapabilityDescriptor.c)
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     Log @ 0x1400298B0 (Log.c)
 */

char __fastcall UsbhInternalValidatePlatformCapabilityDescriptor(__int64 a1, unsigned __int8 *a2, ULONG **a3)
{
  char v6; // bp
  __int64 v8; // r9
  int v9; // r8d
  ULONG v10; // r15d
  unsigned int v11; // r10d
  unsigned int v12; // r9d
  ULONG *v13; // r14
  _DWORD *v14; // r11
  unsigned int v15; // edx
  unsigned int v16; // ecx
  __int64 v17; // rbx
  __int64 v18; // rax

  *a3 = 0LL;
  v6 = 1;
  FdoExt(a1);
  if ( *a2 < 0x14u )
  {
    Log(a1, 256, 1448100913, *a2, 0LL);
    return 0;
  }
  if ( a2[3] )
    Log(a1, 256, 1448100914, a2[3], 0LL);
  if ( *(_QWORD *)(a2 + 4) == *(_QWORD *)&GUID_NULL.Data1 && *(_QWORD *)(a2 + 12) == *(_QWORD *)GUID_NULL.Data4 )
  {
    Log(a1, 256, 1448100915, 0LL, 0LL);
    v6 = 0;
  }
  if ( *(_QWORD *)(a2 + 4) == *(_QWORD *)&GUID_USB_MSOS20_PLATFORM_CAPABILITY_ID.Data1
    && *(_QWORD *)(a2 + 12) == *(_QWORD *)GUID_USB_MSOS20_PLATFORM_CAPABILITY_ID.Data4 )
  {
    v8 = *a2;
    if ( (unsigned __int8)v8 >= 0x1Cu )
    {
      if ( (((_BYTE)v8 - 4) & 7) == 0 )
      {
        v10 = 0;
        v11 = 0;
        v12 = ((unsigned __int64)(v8 - 28) >> 3) + 1;
        if ( v12 )
        {
          v13 = (ULONG *)(a2 + 20);
          v14 = a2 + 20;
          v15 = 1;
          do
          {
            v16 = v15;
            if ( v15 < v12 )
            {
              while ( *(_DWORD *)&a2[8 * v16 + 20] != *v14 )
              {
                if ( ++v16 >= v12 )
                  goto LABEL_19;
              }
              v8 = (unsigned int)*v14;
              v9 = 1146308913;
              goto LABEL_37;
            }
LABEL_19:
            ++v11;
            ++v15;
            v14 += 2;
          }
          while ( v11 < v12 );
          v17 = v12;
          do
          {
            if ( *v13 > v10 )
            {
              if ( RtlIsNtDdiVersionAvailable(*v13) )
              {
                v10 = *v13;
                *a3 = v13;
              }
            }
            v13 += 2;
            --v17;
          }
          while ( v17 );
          if ( v10 )
            return v6;
        }
        Log(a1, 256, 1146308915, 0LL, 0LL);
        return v6;
      }
      v9 = 1297105970;
    }
    else
    {
      v9 = 1297105969;
    }
    goto LABEL_37;
  }
  if ( *(_QWORD *)(a2 + 4) != *(_QWORD *)&GUID_USB_PLATFORM_FEATURES.Data1
    || *(_QWORD *)(a2 + 12) != *(_QWORD *)GUID_USB_PLATFORM_FEATURES.Data4 )
  {
    return v6;
  }
  v18 = *a2;
  if ( (unsigned __int8)v18 < 0x1Au )
  {
    Log(a1, 256, 1146242609, *a2, 0LL);
    return 0;
  }
  Log(a1, 256, 1146242608, a2[20], v18);
  if ( a2[20] == 1 )
  {
    if ( *a2 != 26 )
    {
      v8 = *a2;
      v9 = 1146242610;
LABEL_37:
      Log(a1, 256, v9, v8, 0LL);
      return 0;
    }
  }
  else if ( !a2[20] )
  {
    v8 = *a2;
    v9 = 1146242611;
    goto LABEL_37;
  }
  return v6;
}
